//local
#include "CANdle.h"
#include <iostream>
CANdle::CANdle()
{
    r = 0;
    g = 0;
    b = 255;

    ctre::phoenix::led::CANdleConfiguration config;
    config.stripType = ctre::phoenix::led::LEDStripType::RGB; // set the strip type to RGB
    config.brightnessScalar = 0.5; // dim the LEDs to half brightness
    candle.ConfigAllSettings(config);
}

void CANdle::stepLEDs()
{
    r = r+1;
    r %= 256;
    //candle.SetLEDs(r, g, b); // set the CANdle LEDs to white
}

void CANdle::startLED(int animationNumber)
{
    std::cout << candle.GetMaxSimultaneousAnimationCount();
   switch (animationNumber){
        case 0:
        std::cout << animationNumber;
       candle.Animate(larson, 0);
        case 1 :
        candle.Animate(fade, 1);
        break;
        
    }
    
    
}

void CANdle::endLED(int animationNumber)
{
    candle.ClearAnimation(animationNumber);
}