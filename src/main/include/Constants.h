#pragma once
//std
#include <string>

//FRC
#include <frc/AddressableLED.h>

//local
#include "DertLib/include/NeoSpark.h"
#include "DertLib/include/KrakenTalon.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "LimelightHelpers.h"

using namespace dlib;

namespace Constants
{
    namespace SwerveInfo
    {
    //Steer Encoder Ports
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
            static const KrakenTalonCreateInfo frontLeft  = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 1, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
            static const KrakenTalonCreateInfo frontRight = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 2, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontRight_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.FrontRight_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
            static const KrakenTalonCreateInfo backLeft   = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 3, //CAN ID
                                                                                 &Code_Gen_Model_Y.BackLeft_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.BackLeft_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
            static const KrakenTalonCreateInfo backRight  = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
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
            };
            static const NeoSparkCreateInfo frontLeft  = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 1, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
            static const NeoSparkCreateInfo frontRight = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 2, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
            static const NeoSparkCreateInfo backLeft   = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 3, //CAN ID
                                                                                 &Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
            static const NeoSparkCreateInfo backRight  = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
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



    namespace Limelight
    {
        static const LimeLightCameraCreateInfo CameraOneCreateInfo
        {
            "limelight-one", // Limelight Name
            7.8/39.37008,    // Forward offset (meters)
            9.4/39.37008,    // Side offset (meters)
            12.5/39.37008,   // Height offset (meters)
            0.0,             // Roll (degrees)
            9.0,             // Pitch (degrees)
            22.2             // Yaw (degrees)
        };
        static const LimeLightCameraCreateInfo CameraTwoCreateInfo
        {
            "limelight-two", // Limelight Name
            0.5,             // Forward offset (meters)
            0.0,             // Side offset (meters)
            0.5,             // Height offset (meters)
            0.0,             // Roll (degrees)
            30.0,            // Pitch (degrees)
            0.0              // Yaw (degrees)
        };
    };

};