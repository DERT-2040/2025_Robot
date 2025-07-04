#pragma once

//local
#include "lib/include/Component.h"
#include "include/Constants.h"

//crte
#include <ctre/phoenix6/Pigeon2.hpp>
//Simulink
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

namespace kIMU = Constants::IMU;

class IMU : public Component
{
public:
    IMU();

    /**
     * Runs before the step function is called in the main loop
     */
    void PreStepCallback() override;

    /**
     * Runs after the step function is called in the main loop
     */
    void PostStepCallback() override;
    
    /*
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     * X X X X                 Class Specific Methods                  X X X X
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     */
    private:
    /**
     * Pigeon 2 IMU from CRTE
    */
    ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};

};