#pragma once
#include "LimelightHelpers.h"
#include "include/IMU.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include <ctre/phoenix6/Pigeon2.hpp>
#include "lib/include/Component.h"
#include "include/Constants.h"

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

    LimelightHelpers::PoseEstimate limelightMeasurement;

    ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};

};