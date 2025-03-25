#include "lib/include/Component.h"

#ifndef __CANdle__
#define __CANdle__

#include "ctre/phoenix/led/CANdle.h"
#include "ctre/phoenix/led/SingleFadeAnimation.h"
#include "ctre/phoenix/led/RgbFadeAnimation.h"
#include "frc/AddressableLED.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "include/Constants.h"

class CANdle : public Component
{
public:
    CANdle();
    /**
     * Runs before the step function is called in the main loop
     */
    void PreStepCallback();

    /**
     * Runs after the step function is called in the main loop
     */
    void PostStepCallback();
    
private:
    void TwoColorStrobe(frc::AddressableLED::LEDData colorOne,
                        frc::AddressableLED::LEDData colorTwo,
                        int LEDCount,
                        int LEDOffset,
                        int msPulseWidth);

    u_int64_t time = 0; // ms
    const int msPerCycle = 20; //ms
    bool isColorOne = true;

    int CurrentAnimation = -999; // animation last played
    ctre::phoenix::led::CANdle candle {Constants::CANdle::CANdleID, Constants::CANdle::CANdleNetworkName};
    ctre::phoenix::led::RgbFadeAnimation AmbientAnimation {.5, .5,};
};
#endif