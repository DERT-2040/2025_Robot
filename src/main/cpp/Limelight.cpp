#include "include/Limelight.h"

Limelight::Limelight() {
    LimelightHelpers::setCameraPose_RobotSpace("limelight-one", 
        8.0/39.37008,   // Forward offset (meters)
        9.75/39.37008,  // Side offset (meters)
        12.5/39.37008,  // Height offset (meters)
        0.0,            // Roll (degrees)
        9.0,            // Pitch (degrees)
        24.0            // Yaw (degrees)
    );
    LimelightHelpers::setCameraPose_RobotSpace("limelight-two", 
        0.5,    // Forward offset (meters)
        0.0,    // Side offset (meters)
        0.5,    // Height offset (meters)
        0.0,    // Roll (degrees)
        30.0,   // Pitch (degrees)
        0.0     // Yaw (degrees)
    );
}

void Limelight::PreStepCallback() {

    auto adjustedGyro = m_Pigeon2.GetRotation2d().Degrees().value() + Gyro_Offset;

    //Sets Robot Oriention (MT2 Requirement)
    LimelightHelpers::SetRobotOrientation("limelight-one", adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);
    LimelightHelpers::SetRobotOrientation("limelight-two", adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);

    //Updates Pose
    CameraOneLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("limelight-one");
    CameraTwoLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("limelight-two");

    // Robot Pose Relative to Tag
    std::vector<double> CameraOneRobotPose = LimelightHelpers::getTargetPose_RobotSpace("limelight-one");
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
}

void Limelight::PostStepCallback() 
{
    // Pulls Gyro Yaw Offset
    Gyro_Offset = Code_Gen_Model_Y.Gyro_Angle_Offset_Total;
}

void Limelight::SmartDashboardCallback() 
{

}

void Limelight::GameStateChangeCallback()
{
    
}