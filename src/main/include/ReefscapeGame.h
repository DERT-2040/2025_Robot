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
//playing with fusion
#include <TimeOfFlight.h>
//etc
#include <frc/smartdashboard/SmartDashboard.h>
#include "lib/include/Chooser.h"

namespace ReefscapeGameNameSpace = Constants::ReefscapeGame;

class ReefscapeGame : public Component
{
public:
  ReefscapeGame();
    
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
 
  // NEO Spark Max motor controllers
  NeoSet ReefscapeGameNeoSet
  {
    {
      ReefscapeGameNameSpace::motorElevator,
      ReefscapeGameNameSpace::motorCoralArm,
      ReefscapeGameNameSpace::motorCoralWheel,
      ReefscapeGameNameSpace::motorAlgaeWheelOutside,
      ReefscapeGameNameSpace::motorAlgaeWheelInside,
      ReefscapeGameNameSpace::motorWinch,
      ReefscapeGameNameSpace::motorActuator
    }
  };

  // Limit Switches
  frc::DigitalInput bottomLimitSwitch {ReefscapeGameNameSpace::bottomLimitSwitchID};
             //frc::DigitalInput topLimitSwitch {ReefscapeGameNameSpace::topLimitSwitchID};
  frc::DigitalInput coralLimitSwitch {ReefscapeGameNameSpace::coralLimitSwitchID};
  frc::DigitalInput algaeLimitSwitch {ReefscapeGameNameSpace::algaeLimitSwitchID};

  // Playing with Fusion - Time of Flight sensor
  pwf::TimeOfFlight coralTimeOfFlightSensor{ReefscapeGameNameSpace::Coral_TOF_ID};

  // REV Through Bore Encoder
  // Initializes a duty cycle encoder on a DIO pin to return a value of 360 degrees for a full rotation with an offset angle
  frc::DutyCycleEncoder coralArmAngle{ReefscapeGameNameSpace::coralThroughBoreEncoderID, 360, ReefscapeGameNameSpace::coralThroughBoreEncoderOffset};

  Chooser Auto_Path_Starting_Position_Chooser {
    "Auto Path Starting Position",
    {
        {"Left", 1},
        {"Center", 2},
        {"Right", 3}
    },
    &Auto_Starting_Position //Simulink parameter name
  };

};