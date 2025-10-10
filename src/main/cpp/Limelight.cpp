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
    // Check if Limelight One is Connected
    CameraOneDisconnectedAlert.Set(!nt::NetworkTableInstance::GetDefault().GetTable(LimelightNameSpace::CameraOneCreateInfo.LimelightName)->ContainsKey("cl"));
    //CameraTwoDisconnectedAlert.Set(!nt::NetworkTableInstance::GetDefault().GetTable(LimelightNameSpace::CameraTwoCreateInfo.LimelightName)->ContainsKey("cl"));

    auto adjustedGyro = m_Pigeon2.GetRotation2d().Degrees().value() + Gyro_Offset;

    //Sets Robot Oriention (MT2 Requirement)
    LimelightHelpers::SetRobotOrientation(LimelightNameSpace::CameraOneCreateInfo.LimelightName, adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);
    LimelightHelpers::SetRobotOrientation(LimelightNameSpace::CameraTwoCreateInfo.LimelightName, adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);

    //Updates Pose
    CameraOneLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue(LimelightNameSpace::CameraOneCreateInfo.LimelightName);
    CameraTwoLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue(LimelightNameSpace::CameraTwoCreateInfo.LimelightName);

    // Robot Pose Relative to Tag
    std::vector<double> CameraOneRobotPose = LimelightHelpers::getTargetPose_RobotSpace(LimelightNameSpace::CameraOneCreateInfo.LimelightName);
    size_t vectorLength = CameraOneRobotPose.size();
    

    if (vectorLength > 1) {
        double cameraOne_Tag_x = CameraOneRobotPose.at(2);
        double cameraOne_Tag_y = CameraOneRobotPose.at(0);
        double cameraOne_Tag_angle = CameraOneRobotPose.at(4);

        Code_Gen_Model_U.Limelight_Tag_X = cameraOne_Tag_x;
        Code_Gen_Model_U.Limelight_Tag_Y = cameraOne_Tag_y;
        Code_Gen_Model_U.Limelight_Tag_Angle = cameraOne_Tag_angle;
    } else {
        Code_Gen_Model_U.Limelight_Tag_X = 0;
        Code_Gen_Model_U.Limelight_Tag_Y = 0;
        Code_Gen_Model_U.Limelight_Tag_Angle = 0;
    }

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
    Code_Gen_Model_U.Num_Tags_Detected = CameraOneLLTagCount + CameraTwoLLTagCount;

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
            Code_Gen_Model_U.Limelight_Est_Pose_X = CameraOneLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Limelight_Est_Pose_Y = CameraOneLLMeasurement.pose.Y().value();
        } else if (CameraTwoLLScore > CameraOneLLScore) {
            Code_Gen_Model_U.Limelight_Est_Pose_X = CameraTwoLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Limelight_Est_Pose_Y = CameraTwoLLMeasurement.pose.Y().value();
        } else if (CameraTwoLLScore == CameraOneLLScore) {
            Code_Gen_Model_U.Limelight_Est_Pose_X = (CameraTwoLLMeasurement.pose.X().value() + CameraOneLLMeasurement.pose.X().value())/2;
            Code_Gen_Model_U.Limelight_Est_Pose_Y = (CameraTwoLLMeasurement.pose.Y().value() + CameraOneLLMeasurement.pose.Y().value())/2;
        }
    } else if (CameraOneLLTagCount > CameraTwoLLTagCount) {
            Code_Gen_Model_U.Limelight_Est_Pose_X = CameraOneLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Limelight_Est_Pose_Y = CameraOneLLMeasurement.pose.Y().value();
    } else if (CameraOneLLTagCount < CameraTwoLLTagCount) {
            Code_Gen_Model_U.Limelight_Est_Pose_X = CameraTwoLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Limelight_Est_Pose_Y = CameraTwoLLMeasurement.pose.Y().value();
    }

    SetPipeline(1);

}

void Limelight::PostStepCallback() 
{
    // Pulls Gyro Yaw Offset
    Gyro_Offset = Code_Gen_Model_Y.Gyro_Angle_Offset_Total;
}

void Limelight::SetPipeline(int pipelineIndex)
{
    // Get the default NetworkTable instance
    nt::NetworkTableInstance inst = nt::NetworkTableInstance::GetDefault();
    // Get the "limelight" table
    std::shared_ptr<nt::NetworkTable> table = inst.GetTable("limelight");
    // Get the "pipeline" entry
    nt::NetworkTableEntry pipelineEntry = table->GetEntry("pipeline");
    // Set the value of the "pipeline" entry to the desired pipeline index
    pipelineEntry.SetDouble(pipelineIndex); // Use SetDouble as pipeline index is a number
}

void Limelight::CoralDetection()
{
     SetPipeline(1); // Switch to pipeline 1
// Basic targeting data
//double tx = LimelightHelpers.getTX("");  // Horizontal offset from crosshair to target in degrees
//double ty = LimelightHelpers.getTY("");  // Vertical offset from crosshair to target in degrees
//double ta = LimelightHelpers.getTA("");  // Target area (0% to 100% of image)
//bool hasTarget= LimelightHelpers.getTV(""); // Do you have a valid target?

//double txnc = LimelightHelpers.getTXNC("");  // Horizontal offset from principal pixel/point to target in degrees
//double tync = LimelightHelpers.getTYNC("");  // Vertical  offset from principal pixel/point to target in degrees



}