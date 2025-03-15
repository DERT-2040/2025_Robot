#include "include/CANdle.h"

void CANdle::PostStepCallback()
{
    if(Code_Gen_Model_Y.CANdle_LED_ID == 0)
    {
        if(CurrentAnimation != 0)
            candle.Animate(AmbientAnimation, 0);
    }
    else if(Code_Gen_Model_Y.CANdle_LED_ID == 1)
    {
        if(CurrentAnimation == 0)
            candle.ClearAnimation(0);
        TwoColorStrobe(
            Constants::CANdle::StrobeColorOne,
            Constants::CANdle::StrobeColorTwo,
            Constants::CANdle::LEDCount,
            Constants::CANdle::LEDoffset,
            125 //ms
        );
    }
    CurrentAnimation = Code_Gen_Model_Y.CANdle_LED_ID;
}

void CANdle::TwoColorStrobe(
    frc::AddressableLED::LEDData colorOne,
    frc::AddressableLED::LEDData colorTwo,
    int LEDCount,
    int LEDOffset,
    int msPulseWidth)
{
    time += msPerCycle; //increment time 
    if( (time % msPulseWidth) < (time-msPerCycle) % msPulseWidth)
    {
        isColorOne = !isColorOne;
        frc::AddressableLED::LEDData currentColor = (isColorOne)? colorOne : colorTwo;
        candle.SetLEDs(currentColor.r, currentColor.g, currentColor.b, 0, LEDOffset, LEDCount);
    }
}

    void CANdle::PreStepCallback() {}
    
    void CANdle::SmartDashboardCallback() {}
    
    void CANdle::GameStateChangeCallback() {}
