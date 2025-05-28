//local
#include "include/Robot.h"
//  Components are included in Robot.hh
//  For each component there is a .cpp file in the 'cpp' folder.
//  For each component there is a .hh file in the 'include' folder

void Robot::RobotInit()      {Code_Gen_Model_U.GameState = -1; Code_Gen_Model_initialize();}
void Robot::DisabledInit()   {Code_Gen_Model_U.GameState = 0;}
void Robot::AutonomousInit() {Code_Gen_Model_U.GameState = 1;}
void Robot::TeleopInit()     {Code_Gen_Model_U.GameState = 2;}
void Robot::TestInit()       {Code_Gen_Model_U.GameState = 3;}
void Robot::SimulationInit() {Code_Gen_Model_U.GameState = 4;}

void Robot::RobotPeriodic() 
{  
  m_Tracer.ClearEpochs();
  
  // Pre Step
  for(auto component : Component::AllCreatedComponents)
    component->PreStepCallback();
  m_Tracer.AddEpoch("After PreStep");
  
  // Step
  Code_Gen_Model_step(); //Step the model
  m_Tracer.AddEpoch("After Step");

  //  Post step
  for(auto component : Component::AllCreatedComponents)
    component->PostStepCallback();
  m_Tracer.AddEpoch("After PostStep");
}

#ifndef RUNNING_FRC_TESTS
int main() 
{
  return frc::StartRobot<Robot>();
}
#endif
