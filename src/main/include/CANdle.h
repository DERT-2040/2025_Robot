#include "DertLib/include/Component.h"
#include "ctre/phoenix/led/CANdle.h"
#include "ctre/phoenix/led/SingleFadeAnimation.h"
#include "ctre/phoenix/led/RgbFadeAnimation.h"
#include "frc/AddressableLED.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "include/Constants.h"

#include <cstdint>

class CANdle : public dlib::Component
{
public:
    CANdle();
    void PreStepCallback() override;
    void PostStepCallback() override;
private:
    void TwoColorStrobe(frc::AddressableLED::LEDData colorOne,
                        frc::AddressableLED::LEDData colorTwo,
                        int LEDCount,
                        int LEDOffset,
                        int msPulseWidth);

    uint64_t time = 0; // ms
    const int msPerCycle = 20; //ms
    bool isColorOne = true;

    int CurrentAnimation = -999; // animation last played
    ctre::phoenix::led::CANdle candle {Constants::CANdle::CANdleID, Constants::CANdle::CANdleNetworkName};
    ctre::phoenix::led::RgbFadeAnimation AmbientAnimation {.5, .5,};
};