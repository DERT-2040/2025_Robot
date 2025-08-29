#pragma once

// Local
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "LimelightHelpers.h"
#include "DertLib/include/Component.h"
#include "include/Constants.h"

//wpilib
#include <networktables/NetworkTable.h>
//#include <ctre/phoenix6/Pigeon2.hpp>
#include <frc/Alert.h>

namespace LimelightNameSpace = Constants::Limelight;
namespace kIMU = Constants::IMU;

class Limelight : public dlib::Component {
    public: 
     Limelight();
     void PreStepCallback() override;
     void PostStepCallback() override;
    private:

    // IMU Object used to set Limelight Yaw Value
    //ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};

    // Gyro angle Offset Set from Simulink Output Value
    double Gyro_Offset = 0;

    // Limelight Data Objects
    LimelightHelpers::PoseEstimate CameraOneLLMeasurement;
    LimelightHelpers::PoseEstimate CameraTwoLLMeasurement;

    // Limelight Alerts
    frc::Alert CameraOneDisconnectedAlert {"ALARM PANIC", "Limelight One Disconnecred", frc::Alert::AlertType::kError};
    //frc::Alert CameraTwoDisconnectedAlert {"Limelight Two Disconnecred", frc::Alert::AlertType::kError};
 
};