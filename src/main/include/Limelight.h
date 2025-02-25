#pragma once

// Limelight
#include "LimelightHelpers.h"

// Other
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "lib/include/Component.h"

// IMU
#include "include/Constants.h"
#include <ctre/phoenix6/Pigeon2.hpp>
#include "include/IMU.h"

class Limelight {
    public: 

    //Initilization Code
     Limelight();

    /**
      * @Override
      * Runs before the step function is called in the main loop
      */
     void PreStepCallback();

     /**
      * Runs after the step function is called in the main loop
      */
     void PostStepCallback();
    
     /**
      * Puts values to the SmartDashboard via the SD Callbacks function
      */
     void SmartDashboardCallback();
    
     /**
      * Callback that triggers when the game state of the robot changes
      */
     void GameStateChangeCallback();

    private:

    // IMU Object used to set Limelight Yaw Value
    ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};

    // IMU Offset Set from Simulink Output Value
    double IMU_Offset = 0;

    // Limelight Data Objects
    LimelightHelpers::PoseEstimate PortLLMeasurement;
    LimelightHelpers::PoseEstimate StarboardLLMeasurement;

};