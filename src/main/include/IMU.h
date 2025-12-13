#pragma once

//local
#include "DertLib/include/HighFrequencyComponent.h"
#include "include/Constants.h"

//crte
#include <ctre/phoenix6/Pigeon2.hpp>
//Simulink
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

namespace kIMU = Constants::IMU;

class IMU : public dlib::HighFrequencyComponent
{
public:
    IMU();
    void PreStepCallback() override;
    void PostStepCallback() override;
    void HighFrequencyPreStepCallback() override;
    void HighFrequencyPostStepCallback() override;
private:
    /**
     * Pigeon 2 IMU from CRTE
    */
    ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};

};