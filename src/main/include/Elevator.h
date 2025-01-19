#pragma once

//local
#include "include/Constants.h"
#include "lib/include/Component.h"
#include "lib/include/NeoSet.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
//frc
#include <frc/DutyCycleEncoder.h>
#include <frc/Preferences.h>
#include <frc/smartdashboard/SmartDashboard.h> 
#include <frc/DigitalInput.h>
//rev
#include <rev/SparkMax.h>
#include <rev/SparkRelativeEncoder.h>
//etc
#include <frc/smartdashboard/SmartDashboard.h>

namespace ElevatorNameSpace = Constants::Elevator;

class Elevator : public Component
{
public:
  Elevator();
    
    /**
     * Runs before the step function is called in the main loop
     */
    void PreStepCallback();

    /**
     * Runs after the step function is called in the main loop
     */
    void PostStepCallback();
    
    /**
     * See PostStep documentation in Robot.h
     */
    void ChangeGameStatesCallback();

    /**
     * Puts values to the SmartDashboard via the SD Callbacks function
    */
    void SmartDashboardCallback();

    /*
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     * X X X X                 Class Specific Methods                  X X X X
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     */

private:
 
  NeoSet elevatorMotor
  {
    {
      ElevatorNameSpace::motor
    }
  };

  frc::DigitalInput bottomLimitSwitch {ElevatorNameSpace::bottomLimitSwitchID};
  frc::DigitalInput topLimitSwitch {ElevatorNameSpace::topLimitSwitchID};

};