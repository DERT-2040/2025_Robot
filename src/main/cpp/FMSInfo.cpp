#include "Include/FMSInfo.h"

void FMSInfo::PreStepCallback()
{
    Code_Gen_Model_U.MatchTime = frc::DriverStation::GetMatchTime().value();
}

void FMSInfo::PostStepCallback()
{

}

void FMSInfo::SmartDashboardCallback()
{

}

void FMSInfo::GameStateChangeCallback()
{
    std::optional<frc::DriverStation::Alliance> CurrentAlliance = frc::DriverStation::GetAlliance();
    if(!CurrentAlliance.has_value())
        Code_Gen_Model_U.IsBlueAlliance = 1;
    else
        Code_Gen_Model_U.IsBlueAlliance = CurrentAlliance.value();
}