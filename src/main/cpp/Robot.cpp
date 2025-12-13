//local
#include "include/Robot.h"

void Robot::RobotInit()
{
  Code_Gen_Model_U.GameState = -1;
  Code_Gen_Model_initialize();

  AddPeriodic([&](){
    HighFrequencyPreStep();
    High_Frequency_Model_Step();
    HighFrequencyPostStep();
  },
  4_ms,
  2_ms);
}
void Robot::DisabledInit()   {Code_Gen_Model_U.GameState = 0;}
void Robot::AutonomousInit() {Code_Gen_Model_U.GameState = 1;}
void Robot::TeleopInit()     {Code_Gen_Model_U.GameState = 2;}
void Robot::TestInit()       {Code_Gen_Model_U.GameState = 3;}
void Robot::SimulationInit() {Code_Gen_Model_U.GameState = 4;}

void Robot::RobotPeriodic() 
{  
  m_Tracer.ClearEpochs();
  
  PreStep();
  m_Tracer.AddEpoch("After PreStep");
  
  Model_Step(); //Step the model
  m_Tracer.AddEpoch("After Step");

  PostStep();
  m_Tracer.AddEpoch("After PostStep");
}

void PreStep() {for(auto component : Component::AllCreatedComponents) component->PreStepCallback();}
  
  /** Takes outputs from simulink and pushes their commands to hardware */
  void PostStep() {for(auto component : Component::AllCreatedComponents) component->PostStepCallback();}
#ifndef RUNNING_FRC_TESTS
int main() 
{
  return frc::StartRobot<Robot>();
}
#endif