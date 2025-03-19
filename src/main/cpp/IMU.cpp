//local
#include "include/IMU.h"

void IMU::PreStepCallback()
{
    Code_Gen_Model_U.Gyro_Angle = m_Pigeon2.GetRotation2d().Degrees().value();
    
    m_Chooser.UpdateSelectedKeyPointer();
}

void IMU::PostStepCallback()
{

}

void IMU::SmartDashboardCallback()
{

}

void IMU::GameStateChangeCallback()
{

}

IMU::IMU() 
{
    m_Pigeon2.Reset();
}