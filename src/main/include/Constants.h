#pragma once
//std
#include <string>
//local
#include "lib/include/NeoSpark.h"
#include "lib/include/KrakenTalon.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

namespace Constants
{
    namespace SwerveInfo
    {
    //Steer Encoder Ports
    //TODO: Use CTR Tuning software to set the CAN ids.
        static constexpr int k_FrontLeft_Steer_Encoder_ID = 1;
        static constexpr int k_FrontRight_Steer_Encoder_ID = 2;
        static constexpr int k_BackLeft_Steer_Encoder_ID = 3;
        static constexpr int k_BackRight_Steer_Encoder_ID = 4;
    
    //Wheel Offset Keys
        static constexpr std::string_view k_FrontLeft_Wheel_Offset_Key = "FrontLeftWheelOffset";
        static constexpr std::string_view k_FrontRight_Wheel_Offset_Key = "FrontRightWheelOffset";
        static constexpr std::string_view k_BackLeft_Wheel_Offset_Key = "BackLeftWheelOffset";
        static constexpr std::string_view k_BackRight_Wheel_Offset_Key = "BackRightWheelOffset";
    };

    namespace SwerveMotorsCreateInfo
    {
        //CAN Networking
            static constexpr int kStatus1_ms = 60; //ms
            static constexpr int kStatus2_ms = 60; //ms
        namespace Drive
        {
            static constexpr KrakenTalonCreateInfo defaultDriveCreateInfo
            {
                -1,                           // CAN ID
                "uno",                        // CAN Bus
                true,                         // isReversed
                80,                           // supplyCurrentLimit
                0,                            // openLoopRampPeriod (seconds)
                true                          // Field Oriented Control
            };
            static KrakenTalonCreateInfo frontLeft  = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 1, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
            static KrakenTalonCreateInfo frontRight = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 2, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontRight_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.FrontRight_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
            static KrakenTalonCreateInfo backLeft   = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 3, //CAN ID
                                                                                 &Code_Gen_Model_Y.BackLeft_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.BackLeft_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
            static KrakenTalonCreateInfo backRight  = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 4, //CAN ID
                                                                                 &Code_Gen_Model_Y.BackRight_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.BackRight_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.BackRight_Drive_Motor_Rev);
        };
        
        namespace Steer
        {
            static constexpr NeoSparkCreateInfo defaultSteerCreateInfo
            {
                -1,                                    // canID
                true,                                  // isReversed
                60,                                    // smartCurrentLimit
                60,                                    // secondaryCurrentLimit
                0.01,                                  // openLoopRampRate (seconds)
                false                                  // includeSensor
            };
            static NeoSparkCreateInfo frontLeft  = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 1, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
            static NeoSparkCreateInfo frontRight = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 2, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
            static NeoSparkCreateInfo backLeft   = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 3, //CAN ID
                                                                                 &Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
            static NeoSparkCreateInfo backRight  = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 4, //CAN ID
                                                                                 &Code_Gen_Model_Y.BackRight_Steer_DutyCycle);
        };
    };
    
    namespace HID
    {
        static constexpr int k_Gamepad_Port = 0;
        static constexpr int k_Left_Joystick_Port = 1;
        static constexpr int k_Right_Joystick_Port = 2;
    };

    namespace IMU
    {
        static constexpr int k_Pigeon2_Device_ID = 5;
        static constexpr std::string_view k_Pigeon2_Device_Name = "uno";
    };

    namespace ReefscapeGame
    {
        // Elevator motor controller configuration
        static constexpr NeoSparkCreateInfo elevatorMotorCreateInfo{
            -1,   // canID
            true, // isReversed
            80,   // smartCurrentLimit
            80,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            true  // includeSensor
        };      
        static NeoSparkCreateInfo motorElevator = NeoSparkCreateInfo::modifyInfo(elevatorMotorCreateInfo,
                                                                             10, // CAN ID
                                                                             &Code_Gen_Model_Y.Elevator_DutyCycle,
                                                                             nullptr,
                                                                             &Code_Gen_Model_U.Elevator_Motor_Rev);

        // Coral Arm motor controller configuration
        static constexpr NeoSparkCreateInfo coralArmMotorCreateInfo{
            -1,   // canID
            true, // isReversed
            80,   // smartCurrentLimit
            80,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            false // includeSensor
        };
        static NeoSparkCreateInfo motorCoralArm = NeoSparkCreateInfo::modifyInfo(coralArmMotorCreateInfo,
                                                                             11, // CAN ID
                                                                             &Code_Gen_Model_Y.Coral_Arm_DutyCycle);

        // Coral Wheel motor controller configuration
        static constexpr NeoSparkCreateInfo coralWheelMotorCreateInfo{
            -1,   // canID
            false,// isReversed
            40,   // smartCurrentLimit
            40,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            false // includeSensor
        };
        static NeoSparkCreateInfo motorCoralWheel = NeoSparkCreateInfo::modifyInfo(coralWheelMotorCreateInfo,
                                                                             12, // CAN ID
                                                                             &Code_Gen_Model_Y.Coral_Wheel_DutyCycle);

        // Algae Outside Wheel motor controller configuration
        static constexpr NeoSparkCreateInfo algaeOutsideWheelMotorCreateInfo{
            -1,   // canID
            true, // isReversed
            40,   // smartCurrentLimit
            40,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            false // includeSensor
        };
        static NeoSparkCreateInfo motorAlgaeWheelOutside = NeoSparkCreateInfo::modifyInfo(algaeOutsideWheelMotorCreateInfo,
                                                                             13, // CAN ID
                                                                             &Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle);

        // Algae Inside Wheel motor controller configuration
        static constexpr NeoSparkCreateInfo algaeInsideWheelMotorCreateInfo{
            -1,   // canID
            false,// isReversed
            40,   // smartCurrentLimit
            40,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            false // includeSensor
        };
        static NeoSparkCreateInfo motorAlgaeWheelInside = NeoSparkCreateInfo::modifyInfo(algaeInsideWheelMotorCreateInfo,
                                                                             14, // CAN ID
                                                                             &Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle);                                                                             

        // Winch motor controller configuration
        static constexpr NeoSparkCreateInfo winchMotorCreateInfo{
            -1,   // canID
            false,// isReversed
            20,   // smartCurrentLimit
            20,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            true  // includeSensor
        };      
        static NeoSparkCreateInfo motorWinch = NeoSparkCreateInfo::modifyInfo(winchMotorCreateInfo,
                                                                             15, // CAN ID
                                                                             &Code_Gen_Model_Y.Winch_DutyCycle,
                                                                             nullptr,
                                                                             &Code_Gen_Model_U.Winch_Revs);

        // Actuator motor controller configuration
        static constexpr NeoSparkCreateInfo actuatorMotorCreateInfo{
            -1,   // canID
            false,// isReversed
            80,   // smartCurrentLimit
            80,   // secondaryCurrentLimit
            0.01, // openLoopRampRate (seconds)
            true  // includeSensor
        };      
        static NeoSparkCreateInfo motorActuator = NeoSparkCreateInfo::modifyInfo(actuatorMotorCreateInfo,
                                                                             16, // CAN ID
                                                                             &Code_Gen_Model_Y.Actuator_DutyCycle,
                                                                             nullptr,
                                                                             &Code_Gen_Model_U.Actuator_Revs);

        // These values correspond to the RoboRIO Digital Input/Output (DIO) ports
        static constexpr int bottomLimitSwitchID = 0;
        static constexpr int topLimitSwitchID = 1;
        static constexpr int coralLimitSwitchID = 2;
        static constexpr int algaeLimitSwitchID = 3;
        static constexpr int coralThroughBoreEncoderID = 4;
        static constexpr int coralThroughBoreEncoderOffset = 80.8; // degrees

        // The Playing with Fusion configuration interface tool may be accessed by typing in the
        // IP address of the roboRIO into a web browser followed by :5812
        static constexpr uint8_t Coral_TOF_ID = 0;
        
    };
};