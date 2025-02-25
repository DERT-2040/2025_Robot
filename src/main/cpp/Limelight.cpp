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

    auto adjustedGyro = m_Pigeon2.GetRotation2d().Degrees().value() + IMU_Offset;

    //Sets Robot Oriention (MT2 Requirement)
    LimelightHelpers::SetRobotOrientation("PortLimelight", adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);
    LimelightHelpers::SetRobotOrientation("StarboardLimelight", adjustedGyro, 0.0, 0.0, 0.0, 0.0, 0.0);

    //Updates Pose
    PortLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("PortLimelight");
    StarboardLLMeasurement = LimelightHelpers::getBotPoseEstimate_wpiBlue("StarboardLimelight");
   
    // Limelight Tag Scores
    int PortLLScore = 0;
    int StarboardLLScore = 0;
    
    // Limelight Values for Scoring & Selection
    double PortLLAvgTagArea = PortLLMeasurement.avgTagArea;
    double PortLLAvgTagDist = PortLLMeasurement.avgTagDist;
    double PortLLTagCount = PortLLMeasurement.tagCount;

    double StarboardLLAvgTagArea = StarboardLLMeasurement.avgTagArea;
    double StarboardLLAvgTagDist = StarboardLLMeasurement.avgTagDist;
    double StarboardLLTagCount = StarboardLLMeasurement.tagCount;

    // Pass Into Simulink
    // Code_Gen_Model_U.Num_Tags_Detected = PortLLTagCount + StarboardLLTagCount;

    // Logic to evaluate which Limelight has "better" tags currently, based on amount of Tag on screen and tag distance
    // Sets input values based on that
    if (PortLLAvgTagArea > StarboardLLAvgTagArea) {
        PortLLScore++;
    } else if (PortLLAvgTagArea < StarboardLLAvgTagArea) {
        StarboardLLScore++;
    }
    if (PortLLAvgTagDist < StarboardLLAvgTagDist) {
        PortLLScore++;
    } else if (PortLLAvgTagDist > StarboardLLAvgTagDist) {
        StarboardLLScore++;
    }
    if (PortLLTagCount == StarboardLLTagCount) {
        if (PortLLScore > StarboardLLScore) {
            Code_Gen_Model_U.Photon_Est_Pose_X = PortLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Photon_Est_Pose_Y = PortLLMeasurement.pose.Y().value();
        } else if (StarboardLLScore > PortLLScore) {
            Code_Gen_Model_U.Photon_Est_Pose_X = StarboardLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Photon_Est_Pose_Y = StarboardLLMeasurement.pose.Y().value();
        } else if (StarboardLLScore == PortLLScore) {
            Code_Gen_Model_U.Photon_Est_Pose_X = (StarboardLLMeasurement.pose.X().value() + PortLLMeasurement.pose.X().value())/2;
            Code_Gen_Model_U.Photon_Est_Pose_Y = (StarboardLLMeasurement.pose.Y().value() + PortLLMeasurement.pose.Y().value())/2;
        }
    } else if (PortLLTagCount > StarboardLLTagCount) {
            Code_Gen_Model_U.Photon_Est_Pose_X = PortLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Photon_Est_Pose_Y = PortLLMeasurement.pose.Y().value();
    } else if (PortLLTagCount < StarboardLLTagCount) {
            Code_Gen_Model_U.Photon_Est_Pose_X = StarboardLLMeasurement.pose.X().value();
            Code_Gen_Model_U.Photon_Est_Pose_Y = StarboardLLMeasurement.pose.Y().value();
    }
}

void Limelight::PostStepCallback() 
{
    // Pulls IMU Yaw Offset
    //IMU_Offset = Code_Gen_Model_Y.IMU_Offset;
}

void Limelight::SmartDashboardCallback() 
{

}

void Limelight::GameStateChangeCallback()
{
    
}