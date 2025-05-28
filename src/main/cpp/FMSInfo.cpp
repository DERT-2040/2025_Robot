// Local
#include "include/FMSInfo.h"

void FMSInfo::PreStepCallback()
{
	Code_Gen_Model_U.MatchTime = frc::DriverStation::GetMatchTime().value();
	if(hasIntChanged(static_cast<int>(Code_Gen_Model_U.GameState), previous))
	{
		if(frc::DriverStation::GetAlliance().has_value())
			Code_Gen_Model_U.IsBlueAlliance = frc::DriverStation::GetAlliance().value();
		else
			Code_Gen_Model_U.IsBlueAlliance = 1;
	}
}

void FMSInfo::PostStepCallback() {}

bool FMSInfo::hasIntChanged(int current, int& previous)
{
	if(current == previous) return false;
	previous = current;
	return true;
}