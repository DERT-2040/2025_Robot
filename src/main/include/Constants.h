#pragma once
//std
#include <string>

//FRC
#include <frc/AddressableLED.h>

//local
#include "DertLib/include/KrakenTalon.h"
#include "Robot_Control_ert_rtw/Robot_Control.h"
#include "Odometry_ert_rtw/Odometry.h"
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
                                                                                 &Robot_Control_Y.FrontLeft_Drive_DutyCycle,
                                                                                 &Robot_Control_U.FrontLeft_Drive_Motor_Speed,
                                                                                 &Odometry_U.FrontLeft_Drive_Motor_Rev);
            static const KrakenTalonCreateInfo frontRight = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 2, //CAN ID
                                                                                 &Robot_Control_Y.FrontRight_Drive_DutyCycle,
                                                                                 &Robot_Control_U.FrontRight_Drive_Motor_Speed,
                                                                                 &Odometry_U.FrontRight_Drive_Motor_Rev);
            static const KrakenTalonCreateInfo backLeft   = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 3, //CAN ID
                                                                                 &Robot_Control_Y.BackLeft_Drive_DutyCycle,
                                                                                 &Robot_Control_U.BackLeft_Drive_Motor_Speed,
                                                                                 &Odometry_U.BackLeft_Drive_Motor_Rev);
            static const KrakenTalonCreateInfo backRight  = KrakenTalonCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 4, //CAN ID
                                                                                 &Robot_Control_Y.BackRight_Drive_DutyCycle,
                                                                                 &Robot_Control_U.BackRight_Drive_Motor_Speed,
                                                                                 &Odometry_U.BackRight_Drive_Motor_Rev);
        };
        
        namespace Steer
        {
            static constexpr KrakenTalonCreateInfo defaultSteerCreateInfo
            {
                -1,                                    // canID
                "uno",                                 // can bus
                false,                                  // isReversed
                60,                                    // smartCurrentLimit
                0,                                     // openLoopRampRate (seconds)
                true                                   // Field Oriented Control
            };
            static const KrakenTalonCreateInfo frontLeft = KrakenTalonCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 5, //CAN ID
                                                                                 &Robot_Control_Y.FrontLeft_Steer_DutyCycle);
            static const KrakenTalonCreateInfo frontRight = KrakenTalonCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 6, //CAN ID
                                                                                 &Robot_Control_Y.FrontRight_Steer_DutyCycle);
            static const KrakenTalonCreateInfo backLeft   = KrakenTalonCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 7, //CAN ID
                                                                                 &Robot_Control_Y.BackLeft_Steer_DutyCycle);
            static const KrakenTalonCreateInfo backRight  = KrakenTalonCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                 8, //CAN ID
                                                                                 &Robot_Control_Y.BackRight_Steer_DutyCycle);
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
            10.0/39.37008,   // Forward offset (meters)
            0.0/39.37008,    // Side offset (meters)
            10.0/39.37008,   // Height offset (meters)
            0.0,             // Roll (degrees)
            0.0,             // Pitch (degrees)
            0.0              // Yaw (degrees)
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