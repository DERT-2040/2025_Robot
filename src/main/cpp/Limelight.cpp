#include "include/Limelight.h"

Limelight::Limelight() {
    LimelightHelpers::setCameraPose_RobotSpace("PortLimelight", 
        0.5,    // Forward offset (meters)
        0.0,    // Side offset (meters)
        0.5,    // Height offset (meters)
        0.0,    // Roll (degrees)
        30.0,   // Pitch (degrees)
        0.0     // Yaw (degrees)
    );
    LimelightHelpers::setCameraPose_RobotSpace("StarboardLimelight", 
        0.5,    // Forward offset (meters)
        0.0,    // Side offset (meters)
        0.5,    // Height offset (meters)
        0.0,    // Roll (degrees)
        30.0,   // Pitch (degrees)
        0.0     // Yaw (degrees)
    );
}

void Limelight::PreStepCallback() {

    //Sets Robot Oriention (MT2 Requirement)
    LimelightHelpers::SetRobotOrientation("PortLimelight", Code_Gen_Model_B.Gyro_Angle_Calibrated_deg, 0.0, 0.0, 0.0, 0.0, 0.0);
    LimelightHelpers::SetRobotOrientation("StarboardLimelight", Code_Gen_Model_B.Gyro_Angle_Calibrated_deg, 0.0, 0.0, 0.0, 0.0, 0.0);

    //Updates Pose
    PortLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("PortLimelight");
    StarboardLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("StarboardLimelight");
    int poseX = 0;
    int poseY = 0;
    int PortLLScore = 0;
    int StarboardLLScore;
    if (PortLLMeasurement.avgTagArea > StarboardLLMeasurement.avgTagArea) {
        PortLLScore++;
    } else {
        StarboardLLScore++;
    }
    if (PortLLMeasurement.avgTagDist > StarboardLLMeasurement.avgTagDist) {
        PortLLScore++;
    } else {
        StarboardLLScore++;
    }
    if (PortLLMeasurement.tagCount > 0 && PortLLMeasurement.tagCount > StarboardLLMeasurement.tagCount &&) {
        PortLLScore++;
    } else {
        StarboardLLScore++;
    }


    Code_Gen_Model_U.Photon_Est_Pose_X = limelightMeasurement.pose.X().value();
    Code_Gen_Model_U.Photon_Est_Pose_Y = limelightMeasurement.pose.Y().value();
}

void Limelight::PostStepCallback() 
{

}

void Limelight::SmartDashboardCallback() 
{

}

void Limelight::GameStateChangeCallback()
{
    
}