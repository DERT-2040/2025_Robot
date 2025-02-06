#include "include/ReefscapeGame.h"

ReefscapeGame::ReefscapeGame(){}

void ReefscapeGame::PreStepCallback()
{
    // NEO Spark Max sensor feedback
    ReefscapeGameNeoSet.pushData();

    // Limit Switches
    Code_Gen_Model_U.Elevator_Limit_Switch_Bottom = bottomLimitSwitch.Get(); 
    Code_Gen_Model_U.Elevator_Limit_Switch_Top = topLimitSwitch.Get();   
    Code_Gen_Model_U.Coral_Limit_Switch = coralLimitSwitch.Get();

    // Time of Flight sensors
    Code_Gen_Model_U.Coral_TOF_Distance = coralTimeOfFlightSensor.GetRange();
}

void ReefscapeGame::PostStepCallback()
{
    // NEO Spark Max motor commands
    ReefscapeGameNeoSet.pullCommands();
}

void ReefscapeGame::SmartDashboardCallback(){}
void ReefscapeGame::ChangeGameStatesCallback(){} 