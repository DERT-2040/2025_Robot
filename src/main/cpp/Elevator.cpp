#include "include/Elevator.h"

Elevator::Elevator(){}

void Elevator::PreStepCallback()
{
    elevatorMotor.pushData();
    Code_Gen_Model_U.Elevator_Limit_Switch_Bottom = bottomLimitSwitch.Get(); 
    Code_Gen_Model_U.Elevator_Limit_Switch_Top = topLimitSwitch.Get();   
}

void Elevator::PostStepCallback()
{
    elevatorMotor.pullCommands();
}

void Elevator::SmartDashboardCallback(){}
void Elevator::ChangeGameStatesCallback(){} 