#include "include/ReefscapeGame.h"

ReefscapeGame::ReefscapeGame()
{
    coralArmAngle.SetInverted(true);
    coralTimeOfFlightSensor.SetRangeOfInterest(9,9,11,11);
}

void ReefscapeGame::PreStepCallback()
{
    // NEO Spark Max sensor feedback
    ReefscapeGameNeoSet.pushData();

    // Limit Switches
    Code_Gen_Model_U.Elevator_Limit_Switch_Bottom = bottomLimitSwitch.Get();
         //Code_Gen_Model_U.Elevator_Limit_Switch_Top = topLimitSwitch.Get();
    Code_Gen_Model_U.Coral_Limit_Switch = coralLimitSwitch.Get();
    Code_Gen_Model_U.Algae_Limit_Switch = algaeLimitSwitch.Get();    

    // REV Through Bore Encoder
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw = coralArmAngle.Get();

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