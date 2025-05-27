#pragma once

//local
#include "Code_Gen_Model_ert_rtw\Code_Gen_Model.h"
#include "lib/include/Component.h"
#include "include/HIDs.h"
#include "include/IMU.h"
#include "include/SwerveDrive.h"
#include "include/SimulinkSmartDashboardInterface.h"
#include "include/Limelight.h"
#include "include/ReefscapeGame.h"
#include "include/CANdle.h"
// For each component also add content in this file at the bottom of the private area

//frc
#include <frc/TimedRobot.h>
#include <frc/DriverStation.h>
//std
#include <iostream>

class Robot : public frc::TimedRobot {
 public:
  /** Runs once when robot turns on */
  void RobotInit() override;
  /** The following code runs once when its mode is enabledd */
  void AutonomousInit() override;
  void TeleopInit() override;
  void DisabledInit() override;
  void TestInit() override;
  void SimulationInit() override;

  /** Runs every 20ms regardless of what mode the robot is in */
  void RobotPeriodic() override;

  //void AutonomousPeriodic() override;
  //void TeleopPeriodic() override;
  //void DisabledPeriodic() override;
  //void TestPeriodic() override;
  //void SimulationPeriodic() override;

private:
  /** Puts all inputs from sensors and HIDs into Simulink */
  void PreStep();
  
  /** Takes outputs from simulink and pushes their commands to hardware */
  void PostStep();
  
  /** Resets variables when the game state changes (teleop, auto, test, etc.) */
  void GameInitValues();

   /** Runs of the change of the game state */
  void GameStateChange();

  /*
   * Below are the instances of the components used by the robot
   * Everything here should be direct hardware control, only
   * functions that manipulate global variables declared by Simulink
   * are exceptions to this rule.
   */

  /** Component Object for Human Input Devices */
  HIDs m_HIDs;
  
  /** Component Object for the IMU pigeon2 */
  IMU m_IMU;
  
  /** Component Object for Limelight Vision */
  Limelight m_Limelight;

  /** Component Object for all Swerve Drive objects such as sensors and motors*/
  SwerveDrive m_SwerveDrive;
    
  /** Monitor code execution time */
  frc::Tracer m_Tracer{};
  
  /** Component for all Tunable Parameters created by simulink */
  SimulinkSmartDashboardInterface m_SimulinkSmartDashboardInterface;  
  
  /** Component that supports the ReefscapeGame inputs and outputs */
  ReefscapeGame m_ReefscapeGame;

  /** Candle Object */
  CANdle m_CANdle;
};
