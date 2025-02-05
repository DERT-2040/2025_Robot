#include "include/ReefscapeGame.h"

ReefscapeGame::ReefscapeGame(){}

void ReefscapeGame::PreStepCallback()
{
    ReefscapeGameNeoSet.pushData();
    Code_Gen_Model_U.Elevator_Limit_Switch_Bottom = bottomLimitSwitch.Get(); 
    Code_Gen_Model_U.Elevator_Limit_Switch_Top = topLimitSwitch.Get();   
}

void ReefscapeGame::PostStepCallback()
{
    ReefscapeGameNeoSet.pullCommands();
}

void ReefscapeGame::SmartDashboardCallback(){}
void ReefscapeGame::ChangeGameStatesCallback(){} 