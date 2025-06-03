#include "lib/include/Component.h"

// Local
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

// Limelight
#include "LimelightHelpers.h"


// IMU
#include "include/Constants.h"
#include <ctre/phoenix6/Pigeon2.hpp>
#include "include/IMU.h"

//wpilib
#include <networktables/NetworkTable.h>
#include <frc/Alert.h>

class Limelight : public Component {
    public: 

    //Initilization Code
     Limelight();

    /**
      * @Override
      * Runs before the step function is called in the main loop
      */
     void PreStepCallback() override;

     /**
      * Runs after the step function is called in the main loop
      */
     void PostStepCallback() override;
    
    private:

    // IMU Object used to set Limelight Yaw Value
    ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};

    // Gyro angle Offset Set from Simulink Output Value
    double Gyro_Offset = 0;

    // Limelight Data Objects
    LimelightHelpers::PoseEstimate CameraOneLLMeasurement;
    LimelightHelpers::PoseEstimate CameraTwoLLMeasurement;

    // Limelight Alerts
    frc::Alert CameraOneDisconnectedAlert {"ALARM PANIC", "Limelight One Disconnecred", frc::Alert::AlertType::kError};
    //frc::Alert CameraTwoDisconnectedAlert {"Limelight Two Disconnecred", frc::Alert::AlertType::kError};
 
};