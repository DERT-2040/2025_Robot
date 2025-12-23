#include "include/Limelight.h"
#include "networktables/NetworkTableInstance.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableEntry.h"
Limelight::Limelight()
{
    LimelightHelpers::setCameraPose_RobotSpace(
        LimelightNameSpace::CameraOneCreateInfo.LimelightName,
        LimelightNameSpace::CameraOneCreateInfo.ForwardOffset,
        LimelightNameSpace::CameraOneCreateInfo.SideOffset,
        LimelightNameSpace::CameraOneCreateInfo.HeightOffset,
        LimelightNameSpace::CameraOneCreateInfo.Roll,
        LimelightNameSpace::CameraOneCreateInfo.Pitch,
        LimelightNameSpace::CameraOneCreateInfo.Yaw
    );

    LimelightHelpers::setCameraPose_RobotSpace(
        LimelightNameSpace::CameraTwoCreateInfo.LimelightName,
        LimelightNameSpace::CameraTwoCreateInfo.ForwardOffset,
        LimelightNameSpace::CameraTwoCreateInfo.SideOffset,
        LimelightNameSpace::CameraTwoCreateInfo.HeightOffset,
        LimelightNameSpace::CameraTwoCreateInfo.Roll,
        LimelightNameSpace::CameraTwoCreateInfo.Pitch,
        LimelightNameSpace::CameraTwoCreateInfo.Yaw
    ); 
}

void Limelight::PreStepCallback() {
    /////////////////////////////////
    // SET ALERT IF NOT CONNECTED
    /////////////////////////////////
    CameraOneDisconnectedAlert.Set(!nt::NetworkTableInstance::GetDefault().GetTable(LimelightNameSpace::CameraOneCreateInfo.LimelightName)->ContainsKey("cl"));
    //CameraTwoDisconnectedAlert.Set(!nt::NetworkTableInstance::GetDefault().GetTable(LimelightNameSpace::CameraTwoCreateInfo.LimelightName)->ContainsKey("cl"));

    /////////////////////////////////
    // GET THE CURRENT PIPELINE AND SET THE PIPELINE IF NEEDED
    /////////////////////////////////
    // Get the current pipeline
    double Current_Pipeline = LimelightHelpers::getLimelightNTDouble(LimelightNameSpace::CameraOneCreateInfo.LimelightName, "pipeline");

    // Set the pipeline if it is different than desired pipeline
    if(Current_Pipeline != Robot_Control_Y.Vision_Desired_Pipeline)      
        LimelightHelpers::setPipelineIndex(LimelightNameSpace::CameraOneCreateInfo.LimelightName, int(Robot_Control_Y.Vision_Desired_Pipeline));

    // Get the current pipeline (double check after setting it above)
    Current_Pipeline = LimelightHelpers::getLimelightNTDouble(LimelightNameSpace::CameraOneCreateInfo.LimelightName, "pipeline");

    /////////////////////////////////
    // APRIL TAG PIPELINE
    /////////////////////////////////
    if(Current_Pipeline == 0)
    {
        // Gyro angle that has been adjusted to the field coordinate system (convert from radians to degrees)
        auto adjustedGyro = Odometry_Y.Gyro_Angle_Field_rad*180/3.14159265358979323846;

        //Sets Robot Oriention (MT2 Requirement)
        LimelightHelpers::SetRobotOrientation(LimelightNameSpace::CameraOneCreateInfo.LimelightName, adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);
        LimelightHelpers::SetRobotOrientation(LimelightNameSpace::CameraTwoCreateInfo.LimelightName, adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);

        //Updates Pose
        CameraOneLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue(LimelightNameSpace::CameraOneCreateInfo.LimelightName);
        CameraTwoLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue(LimelightNameSpace::CameraTwoCreateInfo.LimelightName);

        // Limelight Values for Scoring & Selection
        double CameraOneLLAvgTagArea = CameraOneLLMeasurement.avgTagArea;
        double CameraOneLLAvgTagDist = CameraOneLLMeasurement.avgTagDist;
        double CameraOneLLTagCount = CameraOneLLMeasurement.tagCount;

        double CameraTwoLLAvgTagArea = CameraTwoLLMeasurement.avgTagArea;
        double CameraTwoLLAvgTagDist = CameraTwoLLMeasurement.avgTagDist;
        double CameraTwoLLTagCount = CameraTwoLLMeasurement.tagCount;

        // Limelight Tag Scores
        int CameraOneLLScore = 0;
        int CameraTwoLLScore = 0;

        // Pass Into Simulink
        Robot_Control_U.Vision_Num_Tags_Detected = CameraOneLLTagCount + CameraTwoLLTagCount;

        // Logic to evaluate which Limelight has "better" tags currently, based on amount of Tag on screen and tag distance
        // Sets input values based on that
        if (CameraOneLLAvgTagArea > CameraTwoLLAvgTagArea) {
            CameraOneLLScore++;
        } else if (CameraOneLLAvgTagArea < CameraTwoLLAvgTagArea) {
            CameraTwoLLScore++;
        }
        if (CameraOneLLAvgTagDist < CameraTwoLLAvgTagDist) {
            CameraOneLLScore++;
        } else if (CameraOneLLAvgTagDist > CameraTwoLLAvgTagDist) {
            CameraTwoLLScore++;
        }
        if (CameraOneLLTagCount == CameraTwoLLTagCount) {
            if (CameraOneLLScore > CameraTwoLLScore) {
                Robot_Control_U.Vision_Est_Pose_X = CameraOneLLMeasurement.pose.X().value();
                Robot_Control_U.Vision_Est_Pose_Y = CameraOneLLMeasurement.pose.Y().value();
            } else if (CameraTwoLLScore > CameraOneLLScore) {
                Robot_Control_U.Vision_Est_Pose_X = CameraTwoLLMeasurement.pose.X().value();
                Robot_Control_U.Vision_Est_Pose_Y = CameraTwoLLMeasurement.pose.Y().value();
            } else if (CameraTwoLLScore == CameraOneLLScore) {
                Robot_Control_U.Vision_Est_Pose_X = (CameraTwoLLMeasurement.pose.X().value() + CameraOneLLMeasurement.pose.X().value())/2;
                Robot_Control_U.Vision_Est_Pose_Y = (CameraTwoLLMeasurement.pose.Y().value() + CameraOneLLMeasurement.pose.Y().value())/2;
            }
        } else if (CameraOneLLTagCount > CameraTwoLLTagCount) {
                Robot_Control_U.Vision_Est_Pose_X = CameraOneLLMeasurement.pose.X().value();
                Robot_Control_U.Vision_Est_Pose_Y = CameraOneLLMeasurement.pose.Y().value();
        } else if (CameraOneLLTagCount < CameraTwoLLTagCount) {
                Robot_Control_U.Vision_Est_Pose_X = CameraTwoLLMeasurement.pose.X().value();
                Robot_Control_U.Vision_Est_Pose_Y = CameraTwoLLMeasurement.pose.Y().value();
        }

        // Robot Pose Relative to Tag
        CameraOneRobotPose = LimelightHelpers::getTargetPose_RobotSpace(LimelightNameSpace::CameraOneCreateInfo.LimelightName);
        vectorLength = CameraOneRobotPose.size();
        
        if (vectorLength > 1) {
            Robot_Control_U.Vision_Tag_X = CameraOneRobotPose.at(2);
            Robot_Control_U.Vision_Tag_Y = CameraOneRobotPose.at(0);
            Robot_Control_U.Vision_Tag_Angle = CameraOneRobotPose.at(4);
        } else {
            Robot_Control_U.Vision_Tag_X = 0;
            Robot_Control_U.Vision_Tag_Y = 0;
            Robot_Control_U.Vision_Tag_Angle = 0;
        }

    } else {
        Robot_Control_U.Vision_Est_Pose_X = 0;
        Robot_Control_U.Vision_Est_Pose_Y = 0;
        Robot_Control_U.Vision_Tag_X = 0;
        Robot_Control_U.Vision_Tag_Y = 0;
        Robot_Control_U.Vision_Tag_Angle = 0;
    }

    /////////////////////////////////
    // OBJECT DETECTION PIPELINE
    /////////////////////////////////
    if(Current_Pipeline == 1)
    {
        // Robot Pose Relative to Object
        CameraOneRobotPose = LimelightHelpers::getTargetPose_RobotSpace(LimelightNameSpace::CameraOneCreateInfo.LimelightName);
        vectorLength = CameraOneRobotPose.size();
        
        if (vectorLength > 1) {
            Robot_Control_U.Vision_Object_X = CameraOneRobotPose.at(2);
            Robot_Control_U.Vision_Object_Y = CameraOneRobotPose.at(0);
            Robot_Control_U.Vision_Object_Angle = CameraOneRobotPose.at(4);
        } else {
            Robot_Control_U.Vision_Object_X        = 0;
            Robot_Control_U.Vision_Object_Y        = 0;
            Robot_Control_U.Vision_Object_Angle    = 0;
        }
    } else {
        Robot_Control_U.Vision_Object_X        = 0;
        Robot_Control_U.Vision_Object_Y        = 0;
        Robot_Control_U.Vision_Object_Angle    = 0;
    }
}

void Limelight::PostStepCallback() {}