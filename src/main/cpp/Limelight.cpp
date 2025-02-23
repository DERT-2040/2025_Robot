#include "include/Limelight.h"

Limelight::Limelight() {
    LimelightHelpers::setCameraPose_RobotSpace("", 
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
    LimelightHelpers::SetRobotOrientation("", m_Pigeon2.GetRotation2d().Degrees().value(), 0.0, 0.0, 0.0, 0.0, 0.0);
    
    //Updates Pose
    limelightMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("");

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