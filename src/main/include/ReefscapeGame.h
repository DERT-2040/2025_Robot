#pragma once

//local
#include "include/Constants.h"
#include "DertLib/include/Component.h"
#include "DertLib/include/NeoSet.h"
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
#include "DertLib/include/Chooser.h"

namespace ReefscapeGameNameSpace = Constants::ReefscapeGame;

class ReefscapeGame : public dlib::Component
{
public:
  ReefscapeGame();
  void PreStepCallback() override;
  void PostStepCallback() override;

private:
  // NEO Spark Max motor controllers
  dlib::NeoSet ReefscapeGameNeoSet
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

  dlib::Chooser Auto_Path_Starting_Position_Chooser {
    "Auto Path Starting Position",
    {
        {"Left", 1},
        {"Center", 2},
        {"Right", 3}
    },
    &Auto_Starting_Position //Simulink parameter name
  };

  Chooser Gyro_Reset_Flag_Chooser {
    "Gyro Reset Flag",
    {
        {"0", 0},
        {"1", 1},
        {"2", 2},
        {"3", 3},
        {"4", 4},
        {"5", 5},
        {"6", 6},
        {"7", 7},
        {"8", 8},
        {"9", 9}
    },
    &Gyro_Calibration_Reset_Flag //Simulink parameter name
  };

};