#pragma once
#include <iostream>
//crte
#include <ctre/phoenix/led/CANdle.h>
#include <ctre/phoenix/led/LarsonAnimation.h>
#include <ctre/phoenix/led/SingleFadeAnimation.h>
class CANdle
{
public:
    CANdle();
    void stepLEDs();
    void startLED(int animationNumber);
    void endLED(int animationNumber);
private:
    int CANdleID = 0;
    ctre::phoenix::led::CANdle candle {CANdleID, "rio"};
    ctre::phoenix::led::LarsonAnimation larson {211,32,39, 0, 1, 20, ctre::phoenix::led::LarsonAnimation::BounceMode::Front, 1};
    ctre::phoenix::led::SingleFadeAnimation fade {0,0,128, 0, 0.75, 20, 1};
    
    int r = 255, g = 255, b = 255;
};