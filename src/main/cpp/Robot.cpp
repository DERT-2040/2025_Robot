//local
#include "include/Robot.h"
//  Components are included in Robot.hh
//  For each component there is a .cpp file in the 'cpp' folder.
//  For each component there is a .hh file in the 'include' folder

void Robot::RobotInit()      {Code_Gen_Model_U.GameState = -1; Code_Gen_Model_initialize();}
void Robot::DisabledInit()   {Code_Gen_Model_U.GameState = 0; GameStateChange();}
void Robot::AutonomousInit() {Code_Gen_Model_U.GameState = 1; GameStateChange();}
void Robot::TeleopInit()     {Code_Gen_Model_U.GameState = 2; GameStateChange();}
void Robot::TestInit()       {Code_Gen_Model_U.GameState = 3; GameStateChange();}
void Robot::SimulationInit() {Code_Gen_Model_U.GameState = 4; GameStateChange();}

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

void Robot::GameStateChange()
{
    std::optional<frc::DriverStation::Alliance> CurrentAlliance = frc::DriverStation::GetAlliance();
    if(!CurrentAlliance.has_value())
        Code_Gen_Model_U.IsBlueAlliance = 1;
    else
        Code_Gen_Model_U.IsBlueAlliance = CurrentAlliance.value();
}

#ifndef RUNNING_FRC_TESTS
int main() 
{
  return frc::StartRobot<Robot>();
}
#endif
