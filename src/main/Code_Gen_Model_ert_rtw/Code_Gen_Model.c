/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.297
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Mar  3 17:39:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include "Code_Gen_Model_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <float.h>
#include "rt_defines.h"

/* Named constants for Chart: '<S18>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S368>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)8U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)6U)
#define Code_Gen_IN_Elevator_Height_Top ((uint8_T)9U)
#define Code_Gen_M_IN_Algae_Pickup_High ((uint8_T)1U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)5U)
#define Code_Gen_Mo_IN_Algae_Pickup_Low ((uint8_T)2U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Algae_Score  ((uint8_T)3U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)4U)
#define Code_Gen_Model_IN_Coral_Pickup ((uint8_T)5U)
#define Code_Gen_Model_IN_Eject        ((uint8_T)1U)
#define Code_Gen_Model_IN_L1           ((uint8_T)1U)
#define Code_Gen_Model_IN_L2           ((uint8_T)2U)
#define Code_Gen_Model_IN_L3           ((uint8_T)3U)
#define Code_Gen_Model_IN_L4           ((uint8_T)4U)
#define Code_Gen_Model_IN_Level_1      ((uint8_T)1U)
#define Code_Gen_Model_IN_Level_2      ((uint8_T)2U)
#define Code_Gen_Model_IN_Level_3      ((uint8_T)3U)
#define Code_Gen_Model_IN_Level_4      ((uint8_T)4U)
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)7U)

/* Exported block parameters */
real_T AT_Reef_Target_Center_Y = -2.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by: '<S366>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 26.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by: '<S366>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 26.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by: '<S366>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 27.25;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by: '<S366>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 5.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by: '<S366>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -7.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S366>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain = 0.05;/* Variable: AT_Steering_Error_Angle_Gain
                                            * Referenced by: '<S377>/Constant4'
                                            */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by: '<S377>/Constant10'
                                        */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S365>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S365>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S365>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S365>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S365>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S365>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S365>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S365>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S365>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S365>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S365>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S365>/Constant23'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S365>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S365>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S365>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S365>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S365>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S365>/Constant27'
                                        */
real_T AT_Translation_Control_Gain = 0.2;/* Variable: AT_Translation_Control_Gain
                                          * Referenced by:
                                          *   '<S378>/Gain1'
                                          *   '<S378>/Gain2'
                                          */
real_T AT_Translation_Speed_Max = 0.5; /* Variable: AT_Translation_Speed_Max
                                        * Referenced by:
                                        *   '<S378>/Constant5'
                                        *   '<S378>/Constant8'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S392>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S388>/Constant'
                                        *   '<S388>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S392>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S388>/Constant1'
                                        */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S368>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 50.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Neg_Threshold = -88.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S25>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by: '<S368>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S26>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S27>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S27>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S27>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 0.4;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T Coral_Detect_Distance = 60.0;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.65;   /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S221>/Constant3'
                                        *   '<S242>/Constant3'
                                        *   '<S263>/Constant3'
                                        *   '<S284>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S221>/Constant2'
                                   *   '<S242>/Constant2'
                                   *   '<S263>/Constant2'
                                   *   '<S284>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S221>/Saturation'
                                        *   '<S242>/Saturation'
                                        *   '<S263>/Saturation'
                                        *   '<S284>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S221>/Saturation'
                                        *   '<S242>/Saturation'
                                        *   '<S263>/Saturation'
                                        *   '<S284>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S221>/Gain'
                                            *   '<S242>/Gain'
                                            *   '<S263>/Gain'
                                            *   '<S284>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S221>/Gain2'
                                        *   '<S242>/Gain2'
                                        *   '<S263>/Gain2'
                                        *   '<S284>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S221>/Saturation1'
                                        *   '<S242>/Saturation1'
                                        *   '<S263>/Saturation1'
                                        *   '<S284>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S221>/Saturation1'
                                        *   '<S242>/Saturation1'
                                        *   '<S263>/Saturation1'
                                        *   '<S284>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S221>/Gain1'
                                        *   '<S242>/Gain1'
                                        *   '<S263>/Gain1'
                                        *   '<S284>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S226>/Constant'
                            *   '<S247>/Constant'
                            *   '<S268>/Constant'
                            *   '<S289>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S42>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S39>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S43>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S43>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 19.0;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S368>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 11.0;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S368>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 2.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by: '<S368>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S24>/Constant'
                                */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S40>/Constant'
                                     *   '<S368>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 28.0;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 6.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by: '<S368>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 6.8;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 12.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top = 28.0;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 28.125;/* Variable: Elevator_Height_Top_Reset
                                           * Referenced by:
                                           *   '<S10>/Constant1'
                                           *   '<S10>/Constant3'
                                           */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S9>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S43>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S43>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S43>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.25;      /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S43>/Constant1'
                                        *   '<S43>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S43>/Constant'
                                        *   '<S43>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S11>/Constant2'
                                       *   '<S11>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S11>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S14>/Constant1'
                                        *   '<S14>/Constant2'
                                        */
real_T Limelight_Tag_Angle_Offset = -0.2;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S15>/Constant2'
                                          */
real_T Limelight_Tag_X_Offset = -0.65; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S15>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = 0.21;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S15>/Constant1'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S17>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S147>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S206>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S206>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S153>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S166>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S206>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S317>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S317>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S317>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S317>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S317>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S317>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S334>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S334>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S334>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S334>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S333>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S334>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S334>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S334>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S334>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S334>/Constant1'
                                   *   '<S334>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S334>/Constant'
                                   *   '<S334>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S224>/Constant3'
                                        *   '<S245>/Constant3'
                                        *   '<S266>/Constant3'
                                        *   '<S287>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S224>/Constant2'
                                *   '<S245>/Constant2'
                                *   '<S266>/Constant2'
                                *   '<S287>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S224>/Saturation'
                                           *   '<S245>/Saturation'
                                           *   '<S266>/Saturation'
                                           *   '<S287>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S224>/Saturation'
                                          *   '<S245>/Saturation'
                                          *   '<S266>/Saturation'
                                          *   '<S287>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S224>/Gain2'
                                         *   '<S245>/Gain2'
                                         *   '<S266>/Gain2'
                                         *   '<S287>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S224>/Saturation1'
                                             *   '<S245>/Saturation1'
                                             *   '<S266>/Saturation1'
                                             *   '<S287>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S224>/Saturation1'
                                            *   '<S245>/Saturation1'
                                            *   '<S266>/Saturation1'
                                            *   '<S287>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S224>/Gain1'
                                        *   '<S245>/Gain1'
                                        *   '<S266>/Gain1'
                                        *   '<S287>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S316>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S316>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S316>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S316>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S316>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S316>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S377>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S377>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S369>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S369>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S369>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S304>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S304>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S304>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S304>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S304>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S304>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S378>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S377>/Dead Zone'
                                        *   '<S378>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S377>/Dead Zone'
                                        *   '<S378>/Dead Zone'
                                        */

/* Block signals (default storage) */
B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Code_Gen_Model_T Code_Gen_Model_Y;

/* Real-time model */
static RT_MODEL_Code_Gen_Model_T Code_Gen_Model_M_;
RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M = &Code_Gen_Model_M_;

/* Forward declaration for local functions */
static void enter_internal_Coral_Score_Posi(void);
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Code_exit_internal_Coral_Pickup(void);
static void Code_Gen_Model_Set_Level(void);
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_i);
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_l);
static void Code_Gen_Elevator_Height_Bottom(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Co_Elevator_CoralArm_CoralWheel(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_l, const boolean_T *FixPtRelationalOperator_i);

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = (maxIndex >> 1U);
    iLeft = 0U;
    iRght = maxIndex;
    while ((iRght - iLeft) > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (((rtIsNaN(u0)) || (rtIsNaN(u1))) || (rtIsInf(u0))) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > (DBL_EPSILON * q));
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(void)
{
  if ((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_B.FixPtRelationalOperator))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.Set_Level_Out = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.Set_Level_Out = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.Set_Level_Out = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.Set_Level_Out = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_M_IN_Manual_Adjustment;
    Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_DW.is_Coral_Eject == Code_Gen_Model_IN_Eject) {
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
    if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
  } else {
    /* case IN_Stop: */
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_exit_internal_Coral_Pickup(void)
{
  Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_k) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1 = true;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = true;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = true;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Actions) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      if (*Compare) {
        Code_Gen_Model_DW.is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = true;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
      if ((Code_Gen_Model_DW.timer >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_DW.Set_L2)) ||
            (Code_Gen_Model_DW.Set_L3)) || (Code_Gen_Model_DW.Set_L4))) {
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = true;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired_o -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1) ||
             (Code_Gen_Model_DW.Set_L2)) || (Code_Gen_Model_DW.Set_L3)) ||
           (Code_Gen_Model_DW.Set_L4))) {
        Code_exit_internal_Coral_Pickup();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Start;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level();
    }
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_l)
{
  if ((((Code_Gen_Model_B.FixPtRelationalOperator) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
       (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
    Code_Gen_Model_B.Set_Level_Out = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if (*FixPtRelationalOperator_l) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Level_Out = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Eject;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position) {
     case Code_Gen_Model_IN_Level_1:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Manual_Adjustment: */
      if (!(*Compare)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_B.Set_Level_Out = 0U;
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Coral_Eject;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_Gen_Elevator_Height_Bottom(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T guard1;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired_m -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else {
    boolean_T tmp;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        guard1 = true;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S368>/Reefscape_Chart' */
static void Co_Elevator_CoralArm_CoralWheel(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_l, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel) {
   case Code_Gen_M_IN_Algae_Pickup_High:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
    break;

   case Code_Gen_Mo_IN_Algae_Pickup_Low:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
    break;

   case Code_Gen_Model_IN_Algae_Score:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
    break;

   case Code_Gen_Model_IN_Coral_Eject:
    Code_Gen_Model_Coral_Eject(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Gen_Model_IN_Coral_Pickup:
    Code_Gen_Model_Coral_Pickup(Compare, Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Ge_IN_Coral_Score_Position:
    Code_Gen_M_Coral_Score_Position(Compare, FixPtRelationalOperator_l);
    break;

   case Code__IN_Elevator_Height_Bottom:
    Code_Gen_Elevator_Height_Bottom(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case C_IN_Elevator_Height_Bottom_pre:
    Code_Elevator_Height_Bottom_pre(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Gen_IN_Elevator_Height_Top:
    Code_Gen_Elevator_Height_Bottom(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   default:
    /* case IN_Start_Angle: */
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured > Coral_Arm_Angle_Start_Thresh)
    {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi();
    }
    break;
  }
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt((a * a) + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt((b * b) + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else if ((rtIsInf(u0)) && (rtIsInf(u1))) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model step function */
void Code_Gen_Model_step(void)
{
  /* local block i/o variables */
  real_T rtb_LookupTableDynamic1;
  real_T rtb_LookupTableDynamic;
  real_T rtb_LookupTableDynamic1_g;
  real_T rtb_LookupTableDynamic_p;
  real_T rtb_LookupTableDynamic1_i;
  real_T rtb_LookupTableDynamic_j;
  real_T rtb_LookupTableDynamic1_b;
  real_T rtb_LookupTableDynamic_jw;
  real_T rtb_LookupTableDynamic1_a;
  real_T rtb_LookupTableDynamic_n;
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_at;
  real_T rtb_Add_cc;
  real_T rtb_Add_ia;
  real_T rtb_Add_jk;
  real_T rtb_Add_l;
  real_T rtb_Add_os;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle;
  real_T rtb_Disable_Wheels;
  real_T rtb_Enable_Wheels;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_ei;
  real_T rtb_Integral_h;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Product_lf;
  real_T rtb_Reset_Wheel_Offsets;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Subtract1_ak;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_l2j;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_jj;
  real_T rtb_Subtract_pa;
  real_T rtb_Sum1_p;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_m;
  real_T rtb_Switch1;
  real_T rtb_Switch2_cd;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_n;
  real_T rtb_Switch4;
  real_T rtb_Switch5_a;
  real_T rtb_Switch_b5;
  real_T rtb_Switch_l;
  real_T rtb_UnitDelay3;
  real_T rtb_uDLookupTable_d;
  real_T rtb_uDLookupTable_f;
  int32_T i;
  int32_T i_0;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T FixPtRelationalOperator_i;
  boolean_T rtb_AT_CS_Right_Red_Active;
  boolean_T rtb_AT_Processor_Red_Active;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S211>/Add1' incorporates:
   *  Constant: '<S211>/Constant3'
   *  Constant: '<S211>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S211>/Math Function'
   *  Sum: '<S20>/Add'
   *  Sum: '<S211>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S139>/Diff'
   *  UnitDelay: '<S139>/UD'
   *
   * Block description for '<S139>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049599071116336282;

  /* Sum: '<S212>/Add1' incorporates:
   *  Constant: '<S212>/Constant3'
   *  Constant: '<S212>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S212>/Math Function'
   *  Sum: '<S20>/Add1'
   *  Sum: '<S212>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product1' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S140>/Diff'
   *  UnitDelay: '<S140>/UD'
   *
   * Block description for '<S140>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S140>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_d = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Sum: '<S213>/Add1' incorporates:
   *  Constant: '<S213>/Constant3'
   *  Constant: '<S213>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S213>/Math Function'
   *  Sum: '<S20>/Add2'
   *  Sum: '<S213>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product2' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S141>/Diff'
   *  UnitDelay: '<S141>/UD'
   *
   * Block description for '<S141>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049599071116336282;

  /* Sum: '<S214>/Add1' incorporates:
   *  Constant: '<S214>/Constant3'
   *  Constant: '<S214>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S214>/Math Function'
   *  Sum: '<S20>/Add3'
   *  Sum: '<S214>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product3' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S142>/Diff'
   *  UnitDelay: '<S142>/UD'
   *
   * Block description for '<S142>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Subtract1_ak = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                      Code_Gen_Model_DW.UD_DSTATE_c) * 0.049599071116336282;

  /* SignalConversion generated from: '<S17>/Product7' incorporates:
   *  Fcn: '<S143>/r->x'
   *  Fcn: '<S143>/theta->y'
   *  Fcn: '<S144>/r->x'
   *  Fcn: '<S144>/theta->y'
   *  Fcn: '<S145>/r->x'
   *  Fcn: '<S145>/theta->y'
   *  Fcn: '<S146>/r->x'
   *  Fcn: '<S146>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_Switch2_ji * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Switch2_ji * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_uDLookupTable_d * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_uDLookupTable_d * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_Init * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_Init * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Subtract1_ak * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Subtract1_ak * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S84>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
   *  Sum: '<S14>/Add'
   *  Sum: '<S14>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Delay: '<S84>/MemoryX' incorporates:
   *  Constant: '<S84>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S58>/FixPt Relational Operator'
   *  Sum: '<S11>/Sum'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Sum: '<S11>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S57>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch_l = 0.0;
  } else {
    rtb_Switch_l = 3.1415926535897931;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S11>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch_l;

  /* Trigonometry: '<S17>/Trigonometric Function1' */
  rtb_Switch2_cd = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S17>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S17>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Switch2_ji = rtb_Switch2_cd;

  /* SignalConversion generated from: '<S17>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S17>/Unary Minus'
   */
  rtb_uDLookupTable_d = -rtb_Switch2_cd;

  /* Sum: '<S138>/Diff' incorporates:
   *  UnitDelay: '<S138>/UD'
   *
   * Block description for '<S138>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S138>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Subtract1_ak = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S17>/Subtract2' incorporates:
   *  Constant: '<S17>/Constant3'
   *  Gain: '<S17>/Gain7'
   *  Math: '<S17>/Square'
   */
  rtb_Switch2_cd = 1.0 - ((rtb_Subtract1_ak * rtb_Subtract1_ak) *
    0.16666666666666666);

  /* Gain: '<S17>/Gain6' */
  rtb_Subtract1_ak *= 0.5;

  /* Product: '<S17>/Product7' incorporates:
   *  Constant: '<S17>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    tmp_0 = 0;
    for (i_0 = 0; i_0 < 8; i_0++) {
      rtb_Minus_k_idx_0 += Code_Gen_Model_ConstP.Constant4_Value[tmp_0 + i] *
        rtb_TmpSignalConversionAtProduc[i_0];
      tmp_0 += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S17>/Product7' */

  /* Product: '<S17>/Product6' incorporates:
   *  SignalConversion generated from: '<S17>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S17>/Unary Minus2'
   */
  rtb_Switch_b5 = (rtb_Switch2_cd * tmp[0]) + ((-rtb_Subtract1_ak) * tmp[1]);
  rtb_Subtract1_ak = (rtb_Subtract1_ak * tmp[0]) + (rtb_Switch2_cd * tmp[1]);

  /* Product: '<S17>/Product6' incorporates:
   *  Concatenate: '<S17>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch_b5) + (rtb_uDLookupTable_d * rtb_Subtract1_ak);
  Code_Gen_Model_B.Product6[1] = (rtb_Switch2_ji * rtb_Switch_b5) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Subtract1_ak);

  /* Outputs for Enabled SubSystem: '<S111>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S104>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S135>/Enable'
   */
  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S135>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S84>/C'
     *  Delay: '<S84>/MemoryX'
     *  Product: '<S137>/Product'
     */
    rtb_Switch2_cd = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_cd;

    /* Sum: '<S135>/Sum' incorporates:
     *  Constant: '<S84>/D'
     *  Product: '<S135>/C[k]*xhat[k|k-1]'
     *  Product: '<S135>/D[k]*u[k]'
     *  Sum: '<S135>/Add1'
     */
    rtb_Switch2_ji = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Subtract1_ak = rtb_Reshapey[0] - (rtb_Switch2_ji + rtb_Switch2_cd);

    /* Product: '<S135>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S84>/C'
     *  Delay: '<S84>/MemoryX'
     *  Product: '<S137>/Product'
     */
    rtb_Switch2_cd = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_cd;

    /* Sum: '<S135>/Sum' incorporates:
     *  Constant: '<S84>/D'
     *  Product: '<S135>/C[k]*xhat[k|k-1]'
     *  Product: '<S135>/D[k]*u[k]'
     *  Sum: '<S135>/Add1'
     */
    rtb_Switch2_cd = rtb_Reshapey[1] - (rtb_Switch2_ji + rtb_Switch2_cd);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S135>/Product3' incorporates:
     *  Constant: '<S85>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Subtract1_ak) +
      (-2.0601714451538746E-17 * rtb_Switch2_cd);

    /* Sum: '<S137>/Add1' incorporates:
     *  Product: '<S137>/Product'
     */
    rtb_Switch2_ji = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S135>/Product3' incorporates:
     *  Constant: '<S85>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Subtract1_ak) +
      (0.095124921972504 * rtb_Switch2_cd);

    /* Sum: '<S137>/Add1' incorporates:
     *  Product: '<S137>/Product'
     */
    rtb_Switch2_cd = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S137>/Product2' incorporates:
     *  Constant: '<S85>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_ji) +
      (5.9896845167210271E-17 * rtb_Switch2_cd);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_ji) +
      (0.095124921972503981 * rtb_Switch2_cd);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S135>/Product3' incorporates:
       *  Outport: '<S135>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S137>/Product2' incorporates:
       *  Outport: '<S137>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S14>/AND' */
  /* End of Outputs for SubSystem: '<S104>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S111>/Enabled Subsystem' */

  /* Sum: '<S111>/Add' incorporates:
   *  Delay: '<S84>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S17>/Accumulator2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S17>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S14>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S14>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S14>/Switch' */

  /* DiscreteIntegrator: '<S17>/Accumulator' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S17>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S14>/Switch1' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* RelationalOperator: '<S81>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S82>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S83>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

  /* SignalConversion: '<S12>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S12>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S12>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S12>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S12>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Sum: '<S15>/Add' incorporates:
   *  Constant: '<S15>/Constant'
   *  Gain: '<S15>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S15>/Add1' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Gain: '<S15>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S15>/Add2' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_Angle'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Angle =
    Code_Gen_Model_U.Limelight_Tag_Angle + Limelight_Tag_Angle_Offset;

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Coral_Station_Left = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S71>/Compare' incorporates:
   *  Constant: '<S71>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Coral_Station_Right = (Code_Gen_Model_U.Joystick_Right_B3 !=
    0.0);

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Processor = (Code_Gen_Model_U.Joystick_Right_B4 != 0.0);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Right = (Code_Gen_Model_U.Gamepad_POV == 90.0);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Compare_pd = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Gain: '<S10>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S10>/Switch1' incorporates:
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  RelationalOperator: '<S56>/FixPt Relational Operator'
   *  Switch: '<S10>/Switch2'
   *  Switch: '<S10>/Switch3'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S54>/Delay Input1'
   *  UnitDelay: '<S55>/Delay Input1'
   *  UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare) < ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_b))
  {
    /* Switch: '<S10>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)rtb_Compare_pd) < ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Sum: '<S10>/Subtract1'
     *  Switch: '<S10>/Switch2'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_mph) > ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Sum: '<S10>/Subtract2'
     *  Switch: '<S10>/Switch2'
     *  Switch: '<S10>/Switch3'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Switch: '<S10>/Switch' incorporates:
   *  Logic: '<S10>/Logical Operator'
   */
  if (rtb_Compare || rtb_Compare_pd) {
    /* Switch: '<S10>/Switch4' */
    if (rtb_Compare) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S10>/Switch4' */
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Sum: '<S10>/Subtract'
     */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S10>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* RelationalOperator: '<S5>/Compare' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Coral_Limit_Switch'
   */
  Compare = (Code_Gen_Model_U.Coral_Limit_Switch != 0.0);

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Algae_Limit_Switch'
   */
  Compare_f = (Code_Gen_Model_U.Algae_Limit_Switch != 0.0);

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  rtb_Minus_k_idx_0 = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 4.294967296E+9);
  }

  switch ((rtb_Minus_k_idx_0 < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Minus_k_idx_0))))
          : ((int32_T)((uint32_T)rtb_Minus_k_idx_0))) {
   case 0:
    rtAction = 0;
    break;

   case 1:
    rtAction = 1;
    break;

   case 2:
    rtAction = 2;
    break;

   default:
    rtAction = 3;
    break;
  }

  Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = rtAction;
  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  SignalConversion generated from: '<S8>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S16>/Merge2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  SignalConversion generated from: '<S8>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S16>/Merge3' incorporates:
     *  Constant: '<S8>/Constant3'
     *  SignalConversion generated from: '<S8>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
     *  Constant: '<S8>/Constant4'
     *  SignalConversion generated from: '<S8>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S8>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Compare_f = true;

    /* SignalConversion generated from: '<S8>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S8>/Constant7'
     *  SignalConversion generated from: '<S8>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S8>/Constant9'
     *  SignalConversion generated from: '<S8>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
     *  Constant: '<S8>/Constant10'
     *  SignalConversion generated from: '<S8>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S8>/Enable_Wheels' incorporates:
     *  Constant: '<S8>/Constant18'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S8>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S8>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S8>/Disable_Wheels' incorporates:
     *  Constant: '<S8>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S8>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S8>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S8>/Constant15'
     *  SignalConversion generated from: '<S8>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S16>/Merge11' incorporates:
     *  Constant: '<S8>/Constant11'
     *  SignalConversion generated from: '<S8>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S16>/Merge13' incorporates:
     *  Constant: '<S8>/Constant16'
     *  SignalConversion generated from: '<S8>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S8>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant17'
     */
    rtb_Coral_Wheel_DutyCycle = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S16>/Merge21' incorporates:
     *  Constant: '<S8>/Constant21'
     *  SignalConversion generated from: '<S8>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S8>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S8>/Constant22'
     */
    Compare = false;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S16>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S16>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
     *  Constant: '<S2>/Constant9'
     *  SignalConversion generated from: '<S2>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S2>/Constant8'
     */
    Compare_f = true;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S2>/Constant5'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S2>/Constant12'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S16>/Merge11' incorporates:
     *  Constant: '<S2>/Constant11'
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S16>/Merge13' incorporates:
     *  Constant: '<S2>/Constant17'
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant18'
     */
    rtb_Coral_Wheel_DutyCycle = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S16>/Merge21' incorporates:
     *  Constant: '<S2>/Constant21'
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S2>/Constant22'
     */
    Compare = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S365>/Unit Delay1'
       *  UnitDelay: '<S366>/Unit Delay'
       *  UnitDelay: '<S366>/Unit Delay1'
       *  UnitDelay: '<S377>/Unit Delay1'
       *  UnitDelay: '<S377>/Unit Delay2'
       *  UnitDelay: '<S377>/Unit Delay3'
       *  UnitDelay: '<S377>/Unit Delay4'
       *  UnitDelay: '<S380>/Delay Input1'
       *  UnitDelay: '<S381>/Delay Input1'
       *  UnitDelay: '<S382>/Delay Input1'
       *  UnitDelay: '<S383>/Delay Input1'
       *  UnitDelay: '<S384>/Delay Input1'
       *  UnitDelay: '<S385>/Delay Input1'
       *  UnitDelay: '<S391>/Unit Delay'
       *  UnitDelay: '<S391>/Unit Delay1'
       *  UnitDelay: '<S395>/FixPt Unit Delay1'
       *  UnitDelay: '<S395>/FixPt Unit Delay2'
       *  UnitDelay: '<S398>/Delay Input1'
       *  UnitDelay: '<S399>/Delay Input1'
       *  UnitDelay: '<S400>/Delay Input1'
       *  UnitDelay: '<S401>/Delay Input1'
       *  UnitDelay: '<S402>/Delay Input1'
       *  UnitDelay: '<S403>/Delay Input1'
       *  UnitDelay: '<S404>/Delay Input1'
       *  UnitDelay: '<S405>/Delay Input1'
       *  UnitDelay: '<S406>/Delay Input1'
       *  UnitDelay: '<S407>/Delay Input1'
       *  UnitDelay: '<S408>/Delay Input1'
       *  UnitDelay: '<S409>/Delay Input1'
       *  UnitDelay: '<S410>/Delay Input1'
       *
       * Block description for '<S380>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S381>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S382>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S383>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S384>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S385>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S398>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S399>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S400>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S401>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S402>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S403>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S404>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S405>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S406>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S407>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S408>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S409>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S410>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_e = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_p = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_kq = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S368>/Reefscape_Chart'
       */
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Elevator_Height_Desired_m = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
      Code_Gen_Model_B.Set_Level_Out = 0U;

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* Logic: '<S365>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S365>/Logical Operator4' */
    rtb_AT_CS_Right_Red_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      rtb_Swerve_Motors_Disabled);

    /* Logic: '<S365>/Logical Operator6' */
    rtb_AT_Processor_Red_Active = ((Code_Gen_Model_B.Processor) &&
      rtb_Swerve_Motors_Disabled);

    /* Logic: '<S365>/Logical Operator3' */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Coral_Station_Left) &&
      rtb_Swerve_Motors_Disabled);

    /* Switch: '<S365>/Switch2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S365>/Logical Operator1'
     *  Logic: '<S365>/Logical Operator2'
     *  Logic: '<S365>/Logical Operator5'
     *  Switch: '<S365>/Switch1'
     *  Switch: '<S365>/Switch12'
     *  Switch: '<S365>/Switch13'
     *  Switch: '<S365>/Switch14'
     *  Switch: '<S365>/Switch15'
     *  Switch: '<S365>/Switch16'
     *  Switch: '<S365>/Switch19'
     *  Switch: '<S365>/Switch20'
     *  Switch: '<S365>/Switch21'
     *  Switch: '<S365>/Switch22'
     *  Switch: '<S365>/Switch24'
     *  Switch: '<S365>/Switch4'
     *  Switch: '<S365>/Switch5'
     *  Switch: '<S365>/Switch6'
     *  Switch: '<S365>/Switch7'
     *  Switch: '<S365>/Switch8'
     *  Switch: '<S365>/Switch9'
     */
    if ((Code_Gen_Model_B.Coral_Station_Left) &&
        (Code_Gen_Model_U.IsBlueAlliance != 0.0)) {
      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S365>/Constant9'
       *  Sum: '<S365>/Add17'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S365>/Switch15' incorporates:
       *  Constant: '<S365>/Constant14'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Target_Tag_5_Field_Angle;

      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant28'
       *  Sum: '<S365>/Add23'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S365>/Constant5'
       *  Sum: '<S365>/Add16'
       *  Switch: '<S365>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S365>/Switch15' incorporates:
       *  Constant: '<S365>/Constant13'
       *  Switch: '<S365>/Switch5'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Target_Tag_6_Field_Angle;

      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant27'
       *  Sum: '<S365>/Add22'
       *  Switch: '<S365>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if ((Code_Gen_Model_B.Coral_Station_Right) &&
               (Code_Gen_Model_U.IsBlueAlliance != 0.0)) {
      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S365>/Constant4'
       *  Sum: '<S365>/Add10'
       *  Switch: '<S365>/Switch1'
       *  Switch: '<S365>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S365>/Switch15' incorporates:
       *  Constant: '<S365>/Constant12'
       *  Switch: '<S365>/Switch5'
       *  Switch: '<S365>/Switch6'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Target_Tag_11_Field_Angle;

      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant26'
       *  Sum: '<S365>/Add12'
       *  Switch: '<S365>/Switch19'
       *  Switch: '<S365>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S365>/Constant17'
       *  Sum: '<S365>/Add11'
       *  Switch: '<S365>/Switch1'
       *  Switch: '<S365>/Switch12'
       *  Switch: '<S365>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S365>/Switch15' incorporates:
       *  Constant: '<S365>/Constant11'
       *  Switch: '<S365>/Switch5'
       *  Switch: '<S365>/Switch6'
       *  Switch: '<S365>/Switch7'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Target_Tag_12_Field_Angle;

      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant3'
       *  Sum: '<S365>/Add13'
       *  Switch: '<S365>/Switch19'
       *  Switch: '<S365>/Switch20'
       *  Switch: '<S365>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if ((Code_Gen_Model_B.Processor) && (Code_Gen_Model_U.IsBlueAlliance
                != 0.0)) {
      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S365>/Constant18'
       *  Sum: '<S365>/Add14'
       *  Switch: '<S365>/Switch1'
       *  Switch: '<S365>/Switch12'
       *  Switch: '<S365>/Switch13'
       *  Switch: '<S365>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S365>/Switch15' incorporates:
       *  Constant: '<S365>/Constant10'
       *  Switch: '<S365>/Switch5'
       *  Switch: '<S365>/Switch6'
       *  Switch: '<S365>/Switch7'
       *  Switch: '<S365>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Target_Tag_13_Field_Angle;

      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant21'
       *  Sum: '<S365>/Add20'
       *  Switch: '<S365>/Switch19'
       *  Switch: '<S365>/Switch20'
       *  Switch: '<S365>/Switch21'
       *  Switch: '<S365>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S365>/Switch14' incorporates:
       *  Constant: '<S365>/Constant19'
       *  Sum: '<S365>/Add15'
       *  Switch: '<S365>/Switch1'
       *  Switch: '<S365>/Switch12'
       *  Switch: '<S365>/Switch13'
       *  Switch: '<S365>/Switch16'
       *  Switch: '<S365>/Switch2'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S365>/Switch9' incorporates:
       *  Constant: '<S365>/Constant8'
       *  Switch: '<S365>/Switch15'
       *  Switch: '<S365>/Switch5'
       *  Switch: '<S365>/Switch6'
       *  Switch: '<S365>/Switch7'
       *  Switch: '<S365>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Target_Tag_14_Field_Angle;

      /* Switch: '<S365>/Switch22' incorporates:
       *  Constant: '<S365>/Constant23'
       *  Sum: '<S365>/Add21'
       *  Switch: '<S365>/Switch19'
       *  Switch: '<S365>/Switch20'
       *  Switch: '<S365>/Switch21'
       *  Switch: '<S365>/Switch24'
       *  Switch: '<S365>/Switch4'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S365>/Constant1'
       *  Switch: '<S365>/Switch1'
       *  Switch: '<S365>/Switch12'
       *  Switch: '<S365>/Switch13'
       *  Switch: '<S365>/Switch14'
       *  Switch: '<S365>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = 0.0;

      /* Switch: '<S365>/Switch15' incorporates:
       *  Switch: '<S365>/Switch5'
       *  Switch: '<S365>/Switch6'
       *  Switch: '<S365>/Switch7'
       *  Switch: '<S365>/Switch8'
       *  UnitDelay: '<S365>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle =
        Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant2'
       *  Switch: '<S365>/Switch19'
       *  Switch: '<S365>/Switch20'
       *  Switch: '<S365>/Switch21'
       *  Switch: '<S365>/Switch22'
       *  Switch: '<S365>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = 0.0;
    }

    /* End of Switch: '<S365>/Switch2' */

    /* RelationalOperator: '<S398>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S398>/Delay Input1'
     *
     * Block description for '<S398>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S399>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S399>/Delay Input1'
     *
     * Block description for '<S399>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S403>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S403>/Delay Input1'
     *
     * Block description for '<S403>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S404>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S404>/Delay Input1'
     *
     * Block description for '<S404>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S405>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S405>/Delay Input1'
     *
     * Block description for '<S405>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Swerve_Motors_Disabled = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S400>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S400>/Delay Input1'
     *
     * Block description for '<S400>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_CS_Right_Red_Active = (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S406>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S406>/Delay Input1'
     *
     * Block description for '<S406>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_Processor_Red_Active = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_p);

    /* RelationalOperator: '<S410>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S410>/Delay Input1'
     *
     * Block description for '<S410>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Steering = (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S407>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S407>/Delay Input1'
     *
     * Block description for '<S407>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_i = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Up) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S408>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S408>/Delay Input1'
     *
     * Block description for '<S408>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_m = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx));

    /* RelationalOperator: '<S401>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S401>/Delay Input1'
     *
     * Block description for '<S401>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ji = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S402>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S402>/Delay Input1'
     *
     * Block description for '<S402>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

    /* DeadZone: '<S368>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S368>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S368>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S368>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S368>/Dead Zone' */

    /* DeadZone: '<S368>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S368>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S368>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S368>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S368>/Dead Zone1' */

    /* Chart: '<S368>/Reefscape_Chart' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S409>/FixPt Relational Operator'
     *  UnitDelay: '<S409>/Delay Input1'
     *
     * Block description for '<S409>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

      /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
      rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

      /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
    } else {
      Co_Elevator_CoralArm_CoralWheel(&Compare, &Compare_f,
        &rtb_Swerve_Motors_Disabled, &rtb_AT_CS_Right_Red_Active,
        &rtb_AT_Processor_Red_Active, &FixPtRelationalOperator_i);
      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        } else if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        }
        break;
      }
    }

    /* End of Chart: '<S368>/Reefscape_Chart' */

    /* Switch: '<S366>/Switch2' incorporates:
     *  Constant: '<S366>/Constant4'
     */
    if (Code_Gen_Model_B.Align_Center) {
      rtb_Rotationmatrixfromlocalto_0 = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S366>/OR' */
      rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Left) ||
        (Code_Gen_Model_B.Align_Right));

      /* Switch: '<S366>/Switch3' incorporates:
       *  Constant: '<S366>/Constant'
       *  Constant: '<S370>/Constant'
       *  Constant: '<S371>/Constant'
       *  Constant: '<S372>/Constant'
       *  Logic: '<S366>/Logical Operator5'
       *  Logic: '<S366>/Logical Operator6'
       *  Logic: '<S366>/OR1'
       *  RelationalOperator: '<S370>/Compare'
       *  RelationalOperator: '<S371>/Compare'
       *  RelationalOperator: '<S372>/Compare'
       *  Switch: '<S366>/Switch5'
       *  UnitDelay: '<S366>/Unit Delay'
       */
      if (rtb_Swerve_Motors_Disabled && ((Code_Gen_Model_B.Set_Level_Out == 2) ||
           (Code_Gen_Model_B.Set_Level_Out == 3))) {
        rtb_Rotationmatrixfromlocalto_0 = AT_Reef_Target_L2_L3_X;
      } else if (rtb_Swerve_Motors_Disabled && (Code_Gen_Model_B.Set_Level_Out ==
                  4)) {
        /* Switch: '<S366>/Switch5' incorporates:
         *  Constant: '<S366>/Constant5'
         */
        rtb_Rotationmatrixfromlocalto_0 = AT_Reef_Target_L4_X;
      } else {
        rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
      }

      /* End of Switch: '<S366>/Switch3' */
    }

    /* End of Switch: '<S366>/Switch2' */

    /* UnaryMinus: '<S366>/Unary Minus1' incorporates:
     *  Sum: '<S366>/Subtract'
     */
    rtb_Enable_Wheels = -(rtb_Rotationmatrixfromlocalto_0 -
                          Code_Gen_Model_B.Limelight_Tag_Corrected_X);

    /* Switch: '<S366>/Switch' incorporates:
     *  Constant: '<S366>/Constant1'
     *  Switch: '<S366>/Switch1'
     *  Switch: '<S366>/Switch4'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch_b5 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S366>/Switch1' incorporates:
       *  Constant: '<S366>/Constant2'
       */
      rtb_Switch_b5 = AT_Reef_Target_Right_Y;
    } else if (Code_Gen_Model_B.Align_Center) {
      /* Switch: '<S366>/Switch4' incorporates:
       *  Constant: '<S366>/Constant3'
       *  Switch: '<S366>/Switch1'
       */
      rtb_Switch_b5 = AT_Reef_Target_Center_Y;
    } else {
      /* Switch: '<S366>/Switch1' incorporates:
       *  UnitDelay: '<S366>/Unit Delay1'
       */
      rtb_Switch_b5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S366>/Switch' */

    /* Sum: '<S366>/Subtract1' */
    Code_Gen_Model_B.AT_Relative_Error_Y = rtb_Switch_b5 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* Logic: '<S366>/Logical Operator1' incorporates:
     *  Constant: '<S373>/Constant'
     *  Constant: '<S374>/Constant'
     *  Constant: '<S375>/Constant'
     *  Constant: '<S376>/Constant'
     *  Logic: '<S366>/Logical Operator2'
     *  Logic: '<S366>/Logical Operator3'
     *  Logic: '<S366>/NOT'
     *  RelationalOperator: '<S373>/Compare'
     *  RelationalOperator: '<S374>/Compare'
     *  RelationalOperator: '<S375>/Compare'
     *  RelationalOperator: '<S376>/Compare'
     */
    Code_Gen_Model_B.AT_Relative_Enable =
      (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
          (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
         (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
        (Code_Gen_Model_B.Set_Level_Out != 0)) && (((Code_Gen_Model_B.Align_Left)
         || (Code_Gen_Model_B.Align_Right)) || (Code_Gen_Model_B.Align_Center)));

    /* Lookup_n-D: '<S378>/Modulation_Drv' incorporates:
     *  Math: '<S378>/Magnitude'
     */
    rtb_Disable_Wheels = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S389>/Compare' incorporates:
     *  Constant: '<S389>/Constant'
     */
    Compare = (rtb_Disable_Wheels == 0.0);

    /* DeadZone: '<S378>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Reset_Wheel_Offsets = 0.0;
    } else {
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S378>/Dead Zone' */

    /* Logic: '<S378>/Logical Operator' incorporates:
     *  Constant: '<S390>/Constant'
     *  RelationalOperator: '<S390>/Compare'
     */
    Compare_f = ((rtb_Reset_Wheel_Offsets != 0.0) && Compare);

    /* Logic: '<S378>/Logical Operator1' */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.AT_Relative_Enable) ||
      Compare_f);

    /* Switch: '<S391>/Switch1' incorporates:
     *  Constant: '<S396>/Constant'
     *  Constant: '<S397>/Constant'
     *  Logic: '<S391>/AND'
     *  RelationalOperator: '<S396>/Compare'
     *  RelationalOperator: '<S397>/Compare'
     *  Switch: '<S391>/Switch2'
     *  UnitDelay: '<S391>/Unit Delay'
     *  UnitDelay: '<S391>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_uDLookupTable_d = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch2_ji = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_uDLookupTable_d = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S391>/Switch1' */

    /* Switch: '<S378>/Switch9' incorporates:
     *  Switch: '<S378>/Switch1'
     *  Switch: '<S378>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S16>/Merge3' incorporates:
       *  Trigonometry: '<S378>/Atan3'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Relative_Error_Y, rtb_Enable_Wheels);
    } else if (Compare_f) {
      /* Switch: '<S378>/Switch5' incorporates:
       *  Switch: '<S378>/Switch1'
       */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S16>/Merge3' incorporates:
         *  Constant: '<S378>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S16>/Merge3' incorporates:
         *  Constant: '<S378>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S378>/Switch5' */
    } else if (Compare) {
      /* Switch: '<S378>/Switch6' incorporates:
       *  Constant: '<S378>/Constant'
       *  Constant: '<S378>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S378>/Switch1'
       *  Switch: '<S378>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_0 = 0.0;
      } else {
        rtb_Minus_k_idx_0 = 3.1415926535897931;
      }

      /* Merge: '<S16>/Merge3' incorporates:
       *  Sum: '<S378>/Add1'
       *  Switch: '<S378>/Switch1'
       *  Switch: '<S378>/Switch4'
       *  Switch: '<S378>/Switch6'
       */
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_ConstB.Atan1 +
        rtb_Minus_k_idx_0;
    } else {
      /* Merge: '<S16>/Merge3' incorporates:
       *  Switch: '<S378>/Switch1'
       *  Switch: '<S378>/Switch4'
       *  Trigonometry: '<S378>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch2_ji,
        rtb_uDLookupTable_d);
    }

    /* End of Switch: '<S378>/Switch9' */

    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant'
     *  Constant: '<S388>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_UnitDelay3 = Boost_Trigger_High_Speed;
    } else {
      rtb_UnitDelay3 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S388>/Switch1' */

    /* Switch: '<S395>/Init' incorporates:
     *  UnitDelay: '<S395>/FixPt Unit Delay1'
     *  UnitDelay: '<S395>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Coral_Wheel_DutyCycle = rtb_UnitDelay3;
    } else {
      rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S395>/Init' */

    /* Sum: '<S393>/Sum1' */
    rtb_UnitDelay3 -= rtb_Coral_Wheel_DutyCycle;

    /* Switch: '<S394>/Switch2' incorporates:
     *  Constant: '<S392>/Constant1'
     *  Constant: '<S392>/Constant3'
     *  RelationalOperator: '<S394>/LowerRelop1'
     *  RelationalOperator: '<S394>/UpperRelop'
     *  Switch: '<S394>/Switch'
     */
    if (rtb_UnitDelay3 > Boost_Trigger_Increasing_Limit) {
      rtb_UnitDelay3 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_UnitDelay3 < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S394>/Switch' incorporates:
       *  Constant: '<S392>/Constant1'
       */
      rtb_UnitDelay3 = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S394>/Switch2' */

    /* Sum: '<S393>/Sum' */
    rtb_UnitDelay3 += rtb_Coral_Wheel_DutyCycle;

    /* Switch: '<S378>/Switch8' incorporates:
     *  Switch: '<S378>/Switch'
     *  Switch: '<S378>/Switch2'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S16>/Merge4' incorporates:
       *  Constant: '<S378>/Constant8'
       *  Gain: '<S378>/Gain1'
       *  Math: '<S378>/Magnitude2'
       *  MinMax: '<S378>/Min1'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max,
        AT_Translation_Control_Gain * rt_hypotd_snf(rtb_Enable_Wheels,
        Code_Gen_Model_B.AT_Relative_Error_Y));
    } else if (Compare_f) {
      /* Merge: '<S16>/Merge4' incorporates:
       *  Gain: '<S378>/Gain'
       *  Switch: '<S378>/Switch'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        rtb_Reset_Wheel_Offsets;
    } else if (Compare) {
      /* Merge: '<S16>/Merge4' incorporates:
       *  Constant: '<S378>/Constant5'
       *  Gain: '<S378>/Gain2'
       *  MinMax: '<S378>/Min'
       *  Switch: '<S378>/Switch'
       *  Switch: '<S378>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max,
        AT_Translation_Control_Gain * Code_Gen_Model_ConstB.Magnitude1);
    } else {
      /* Product: '<S388>/Product' incorporates:
       *  Switch: '<S378>/Switch'
       *  Switch: '<S378>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Disable_Wheels * rtb_UnitDelay3;

      /* Saturate: '<S388>/Saturation' incorporates:
       *  Switch: '<S378>/Switch'
       *  Switch: '<S378>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S16>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S16>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S16>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S388>/Saturation' */
    }

    /* End of Switch: '<S378>/Switch8' */

    /* Switch: '<S369>/Switch' incorporates:
     *  Constant: '<S369>/Constant5'
     *  Constant: '<S369>/Constant7'
     *  DataTypeConversion: '<S369>/Data Type Conversion'
     *  Switch: '<S378>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      Compare_f = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      Compare_f = !rtb_Is_Absolute_Steering;
    }

    /* End of Switch: '<S369>/Switch' */

    /* UnaryMinus: '<S366>/Unary Minus' */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S377>/Switch' incorporates:
     *  Constant: '<S377>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Enable) {
      /* Product: '<S377>/Product2' incorporates:
       *  Constant: '<S377>/Constant4'
       */
      rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain;

      /* Switch: '<S387>/Switch2' incorporates:
       *  Constant: '<S377>/Constant10'
       *  RelationalOperator: '<S387>/LowerRelop1'
       *  RelationalOperator: '<S387>/UpperRelop'
       *  Switch: '<S387>/Switch'
       *  UnaryMinus: '<S377>/Unary Minus'
       */
      if (rtb_Coral_Wheel_DutyCycle > AT_Steering_Speed_Max) {
        rtb_Coral_Wheel_DutyCycle = AT_Steering_Speed_Max;
      } else if (rtb_Coral_Wheel_DutyCycle < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S387>/Switch' incorporates:
         *  UnaryMinus: '<S377>/Unary Minus'
         */
        rtb_Coral_Wheel_DutyCycle = -AT_Steering_Speed_Max;
      }

      /* End of Switch: '<S387>/Switch2' */
    } else {
      rtb_Coral_Wheel_DutyCycle = 0.0;
    }

    /* End of Switch: '<S377>/Switch' */

    /* DeadZone: '<S377>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S377>/Add' incorporates:
     *  Constant: '<S377>/Constant'
     *  Constant: '<S377>/Constant1'
     *  DeadZone: '<S377>/Dead Zone'
     *  Lookup_n-D: '<S377>/Modulation_Str_Y_Rel'
     *  Product: '<S377>/Product'
     *  Product: '<S377>/Product1'
     *  SignalConversion: '<S12>/Signal Copy5'
     */
    rtb_Coral_Wheel_DutyCycle += (look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (rtb_Minus_k_idx_0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S379>/Compare' incorporates:
     *  Constant: '<S379>/Constant'
     */
    rtb_AT_CS_Right_Red_Active = (rtb_Coral_Wheel_DutyCycle == 0.0);

    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S369>/Constant5'
     *  Constant: '<S369>/Constant8'
     *  DataTypeConversion: '<S369>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_AT_CS_Right_Red_Active;
    }

    /* End of Switch: '<S369>/Switch1' */

    /* RelationalOperator: '<S384>/FixPt Relational Operator' incorporates:
     *  Constant: '<S377>/AT_Target_Enable Placeholder for an abolute steering angle command'
     *  UnitDelay: '<S384>/Delay Input1'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Swerve_Motors_Disabled = (Code_Gen_Model_DW.DelayInput1_DSTATE_f < 0.0);

    /* Logic: '<S377>/AND2' incorporates:
     *  RelationalOperator: '<S380>/FixPt Relational Operator'
     *  RelationalOperator: '<S381>/FixPt Relational Operator'
     *  RelationalOperator: '<S382>/FixPt Relational Operator'
     *  RelationalOperator: '<S383>/FixPt Relational Operator'
     *  UnitDelay: '<S380>/Delay Input1'
     *  UnitDelay: '<S381>/Delay Input1'
     *  UnitDelay: '<S382>/Delay Input1'
     *  UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Compare = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S377>/AND1' incorporates:
     *  Logic: '<S377>/AND3'
     *  Logic: '<S377>/AND7'
     *  UnitDelay: '<S377>/Unit Delay2'
     */
    FixPtRelationalOperator_i = ((rtb_AT_CS_Right_Red_Active &&
      (!rtb_Swerve_Motors_Disabled)) && (Compare ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S377>/AND4' incorporates:
     *  Logic: '<S377>/AND5'
     *  Logic: '<S377>/AND8'
     *  UnitDelay: '<S377>/Unit Delay4'
     */
    rtb_AT_Processor_Red_Active = ((rtb_AT_CS_Right_Red_Active && (!Compare)) &&
      (rtb_Swerve_Motors_Disabled || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S377>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (FixPtRelationalOperator_i ||
      rtb_AT_Processor_Red_Active);

    /* Switch: '<S377>/Switch8' incorporates:
     *  Constant: '<S386>/Constant'
     *  Logic: '<S377>/AND9'
     *  RelationalOperator: '<S385>/FixPt Relational Operator'
     *  RelationalOperator: '<S386>/Compare'
     *  UnitDelay: '<S18>/Unit Delay'
     *  UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_AT_CS_Right_Red_Active) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S377>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S377>/Switch8' incorporates:
       *  UnitDelay: '<S377>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S377>/Switch8' */

    /* Switch: '<S377>/Switch4' incorporates:
     *  Constant: '<S377>/Constant5'
     *  Switch: '<S377>/Switch5'
     *  Switch: '<S377>/Switch6'
     *  Switch: '<S377>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S377>/Switch5' incorporates:
       *  Constant: '<S377>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S377>/Switch6' incorporates:
       *  Constant: '<S377>/Constant7'
       *  Switch: '<S377>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S377>/Switch7' incorporates:
       *  Constant: '<S377>/Constant8'
       *  Switch: '<S377>/Switch5'
       *  Switch: '<S377>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else {
      /* Switch: '<S377>/Switch6' incorporates:
       *  Switch: '<S377>/Switch5'
       *  UnitDelay: '<S377>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S377>/Switch4' */

    /* Switch: '<S377>/Switch2' incorporates:
     *  Switch: '<S377>/Switch3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S377>/Switch2' incorporates:
       *  Constant: '<S377>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;

      /* Switch: '<S377>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S377>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

      /* Switch: '<S377>/Switch3' incorporates:
       *  Constant: '<S377>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S377>/Switch2' */

    /* Merge: '<S16>/Merge1' incorporates:
     *  Sum: '<S377>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S16>/Merge2' incorporates:
     *  SignalConversion: '<S377>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Coral_Wheel_DutyCycle;

    /* Merge: '<S16>/Merge13' incorporates:
     *  SignalConversion generated from: '<S22>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S22>/Coral_Pickup_Lower_Wait_State' */
    Compare = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S22>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S16>/Merge11' incorporates:
     *  SignalConversion generated from: '<S22>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Merge: '<S16>/Merge21' incorporates:
     *  SignalConversion generated from: '<S22>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S368>/Constant5'
     *  SignalConversion generated from: '<S22>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S22>/Constant3'
     *  SignalConversion generated from: '<S22>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S22>/Constant9'
     *  SignalConversion generated from: '<S22>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
     *  Constant: '<S22>/Constant1'
     *  SignalConversion generated from: '<S22>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S22>/Enable_Wheels' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S22>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S22>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S22>/Disable_Wheels' incorporates:
     *  Constant: '<S22>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S22>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S365>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e =
      Code_Gen_Model_B.AT_Field_Target_Angle;

    /* Update for UnitDelay: '<S398>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S398>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S399>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S399>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S403>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S403>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S404>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S404>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S405>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S405>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S400>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S400>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S406>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S406>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S409>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S409>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S410>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S410>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S407>/Delay Input1'
     *
     * Block description for '<S407>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S408>/Delay Input1'
     *
     * Block description for '<S408>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_fx = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S401>/Delay Input1'
     *
     * Block description for '<S401>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S402>/Delay Input1'
     *
     * Block description for '<S402>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S366>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S366>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch_b5;

    /* Update for UnitDelay: '<S391>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S391>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_uDLookupTable_d;

    /* Update for UnitDelay: '<S395>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S395>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S395>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_UnitDelay3;

    /* Update for UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_AT_CS_Right_Red_Active;

    /* Update for UnitDelay: '<S384>/Delay Input1' incorporates:
     *  Constant: '<S377>/AT_Target_Enable Placeholder for an abolute steering angle command'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = 0.0;

    /* Update for UnitDelay: '<S380>/Delay Input1'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S381>/Delay Input1'
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S382>/Delay Input1'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S377>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = FixPtRelationalOperator_i;

    /* Update for UnitDelay: '<S377>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AT_Processor_Red_Active;

    /* Update for UnitDelay: '<S377>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S377>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S23>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S23>/Constant1'
     *  SignalConversion generated from: '<S23>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S16>/Merge2' incorporates:
     *  Constant: '<S23>/Constant2'
     *  SignalConversion generated from: '<S23>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S16>/Merge3' incorporates:
     *  Constant: '<S23>/Constant3'
     *  SignalConversion generated from: '<S23>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
     *  Constant: '<S23>/Constant4'
     *  SignalConversion generated from: '<S23>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S23>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S23>/Constant5'
     */
    Compare_f = false;

    /* SignalConversion generated from: '<S23>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S23>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S23>/Constant7'
     *  SignalConversion generated from: '<S23>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S23>/Constant9'
     *  SignalConversion generated from: '<S23>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
     *  Constant: '<S23>/Constant12'
     *  SignalConversion generated from: '<S23>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Constant14'
     *  Switch: '<S23>/Switch1'
     *  UnitDelay: '<S23>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (Code_Gen_Model_B.Button_Enable_Wheels) {
      /* Switch: '<S23>/Switch1' incorporates:
       *  Constant: '<S23>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S23>/Switch' */

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S23>/Constant11'
     *  SignalConversion generated from: '<S23>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S16>/Merge11' incorporates:
     *  Constant: '<S23>/Constant10'
     *  SignalConversion generated from: '<S23>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S16>/Merge13' incorporates:
     *  Constant: '<S23>/Constant15'
     *  SignalConversion generated from: '<S23>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S23>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S23>/Constant16'
     */
    rtb_Coral_Wheel_DutyCycle = 0.0;

    /* SignalConversion generated from: '<S23>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S23>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S23>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S16>/Merge21' incorporates:
     *  Constant: '<S23>/Constant19'
     *  SignalConversion generated from: '<S23>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S23>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S23>/Constant20'
     */
    Compare = false;

    /* DataTypeConversion: '<S23>/Cast To Boolean1' */
    rtb_Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* DataTypeConversion: '<S23>/Cast To Boolean3' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* DataTypeConversion: '<S23>/Cast To Boolean2' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S19>/If' incorporates:
   *  Constant: '<S150>/Constant'
   *  Merge: '<S19>/Merge'
   *  Merge: '<S19>/Merge1'
   *  Merge: '<S19>/Merge2'
   *  Merge: '<S19>/Merge3'
   *  Merge: '<S19>/Merge4'
   *  Merge: '<S19>/Merge5'
   *  Merge: '<S19>/Merge7'
   *  Merge: '<S19>/Merge8'
   *  SignalConversion generated from: '<S150>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S156>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S159>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S161>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S159>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S156>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S19>/Pass Through' incorporates:
   *  ActionPort: '<S150>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = Compare_f;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S19>/If' */
  /* End of Outputs for SubSystem: '<S19>/Pass Through' */

  /* Signum: '<S304>/Sign2' incorporates:
   *  UnitDelay: '<S304>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S304>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_n = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S304>/Product1' incorporates:
   *  Signum: '<S304>/Sign1'
   *  Signum: '<S304>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_n;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S304>/Switch' incorporates:
   *  Constant: '<S304>/Constant'
   *  Constant: '<S309>/Constant'
   *  Constant: '<S310>/Constant'
   *  Logic: '<S304>/or'
   *  Product: '<S304>/Product1'
   *  RelationalOperator: '<S309>/Compare'
   *  RelationalOperator: '<S310>/Compare'
   *  UnitDelay: '<S304>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_cd = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_cd = 0.0;
  }

  /* End of Switch: '<S304>/Switch' */

  /* Switch: '<S315>/Init' incorporates:
   *  UnitDelay: '<S315>/FixPt Unit Delay1'
   *  UnitDelay: '<S315>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_cd;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S315>/Init' */

  /* RelationalOperator: '<S311>/Compare' incorporates:
   *  Constant: '<S311>/Constant'
   */
  Compare_f = (rtb_Switch2_cd == 0.0);

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_cd > 0.0);

  /* Abs: '<S304>/Abs' incorporates:
   *  Sum: '<S304>/Subtract'
   *  UnitDelay: '<S304>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S304>/Switch5' incorporates:
   *  Constant: '<S304>/Constant1'
   *  Switch: '<S304>/Switch1'
   *  UnaryMinus: '<S304>/Unary Minus'
   */
  if (Compare_f) {
    /* SignalConversion generated from: '<S304>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S304>/Constant4'
     *  Constant: '<S304>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S304>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S304>/Constant2'
     *  Constant: '<S304>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S304>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S304>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic_j;
    rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S304>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S304>/Constant10'
     *  Constant: '<S304>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S304>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S304>/Constant7'
     *  Constant: '<S304>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S304>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S304>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S304>/Switch3' incorporates:
     *  Constant: '<S304>/Constant1'
     *  Constant: '<S304>/Constant3'
     *  UnaryMinus: '<S304>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S304>/Switch3' */
  }

  /* End of Switch: '<S304>/Switch5' */

  /* Product: '<S304>/Product' incorporates:
   *  Switch: '<S304>/Switch1'
   */
  rtb_uDLookupTable_f = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S313>/Sum1' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_cd - rtb_Init;

  /* Switch: '<S314>/Switch2' incorporates:
   *  RelationalOperator: '<S314>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > rtb_uDLookupTable_f)) {
    /* Switch: '<S304>/Switch2' incorporates:
     *  Constant: '<S304>/Constant1'
     *  Constant: '<S304>/Constant3'
     *  Switch: '<S304>/Switch4'
     *  UnaryMinus: '<S304>/Unary Minus1'
     */
    if (Compare_f) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S304>/Switch4' incorporates:
       *  Constant: '<S304>/Constant1'
       */
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S304>/Product2' incorporates:
     *  Switch: '<S304>/Switch2'
     */
    rtb_Switch_b5 = rtb_Minus_k_idx_0 * rtb_Merge1;

    /* Switch: '<S314>/Switch' incorporates:
     *  RelationalOperator: '<S314>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < rtb_Switch_b5) {
      rtb_uDLookupTable_f = rtb_Switch_b5;
    } else {
      rtb_uDLookupTable_f = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S314>/Switch' */
  }

  /* End of Switch: '<S314>/Switch2' */

  /* Sum: '<S313>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_f + rtb_Init;

  /* Switch: '<S307>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S307>/Switch' incorporates:
     *  Constant: '<S339>/Constant3'
     *  Constant: '<S339>/Constant4'
     *  Math: '<S339>/Math Function'
     *  Sum: '<S307>/Subtract'
     *  Sum: '<S339>/Add1'
     *  Sum: '<S339>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S307>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S307>/Switch' */

  /* Sum: '<S335>/Add1' incorporates:
   *  Constant: '<S335>/Constant3'
   *  Constant: '<S335>/Constant4'
   *  Math: '<S335>/Math Function'
   *  Sum: '<S334>/Sum'
   *  Sum: '<S335>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S337>/Sum1' incorporates:
   *  Constant: '<S334>/Constant2'
   *  Product: '<S337>/Product'
   *  Sum: '<S337>/Sum'
   *  UnitDelay: '<S337>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S334>/Product' incorporates:
   *  Constant: '<S334>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S336>/Diff' incorporates:
   *  UnitDelay: '<S336>/UD'
   *
   * Block description for '<S336>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S336>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_0 -
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S334>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S334>/Add' incorporates:
   *  Gain: '<S334>/Gain1'
   *  Saturate: '<S334>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S334>/Subtract' incorporates:
   *  Constant: '<S334>/Constant'
   */
  rtb_uDLookupTable_f = Steering_Heading_Control_Total_UL - rtb_Switch2_ji;

  /* Sum: '<S334>/Sum2' incorporates:
   *  Gain: '<S334>/Gain2'
   *  UnitDelay: '<S334>/Unit Delay'
   */
  rtb_Switch_b5 = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S338>/Switch2' incorporates:
   *  RelationalOperator: '<S338>/LowerRelop1'
   */
  if (!(rtb_Switch_b5 > rtb_uDLookupTable_f)) {
    /* Sum: '<S334>/Subtract1' incorporates:
     *  Constant: '<S334>/Constant1'
     */
    rtb_uDLookupTable_d = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S338>/Switch' incorporates:
     *  RelationalOperator: '<S338>/UpperRelop'
     */
    if (rtb_Switch_b5 < rtb_uDLookupTable_d) {
      rtb_uDLookupTable_f = rtb_uDLookupTable_d;
    } else {
      rtb_uDLookupTable_f = rtb_Switch_b5;
    }

    /* End of Switch: '<S338>/Switch' */
  }

  /* End of Switch: '<S338>/Switch2' */

  /* Saturate: '<S334>/Saturation1' */
  if (rtb_uDLookupTable_f > Steering_Heading_Control_I_UL) {
    rtb_Switch_b5 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_f < Steering_Heading_Control_I_LL) {
    rtb_Switch_b5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch_b5 = rtb_uDLookupTable_f;
  }

  /* End of Saturate: '<S334>/Saturation1' */

  /* Sum: '<S334>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Switch_b5;

  /* Saturate: '<S334>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S334>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S334>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S334>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S334>/Saturation2' */

  /* Switch: '<S318>/Switch' incorporates:
   *  Abs: '<S318>/Abs'
   *  Constant: '<S318>/Constant'
   *  Constant: '<S333>/Constant'
   *  RelationalOperator: '<S333>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S318>/Switch' */

  /* Signum: '<S317>/Sign2' incorporates:
   *  UnitDelay: '<S317>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S317>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_n = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (rtb_Init > 0.0);
  }

  /* Product: '<S317>/Product1' incorporates:
   *  Signum: '<S317>/Sign1'
   *  Signum: '<S317>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_n;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S317>/Switch' incorporates:
   *  Constant: '<S317>/Constant'
   *  Constant: '<S326>/Constant'
   *  Constant: '<S327>/Constant'
   *  Logic: '<S317>/or'
   *  Product: '<S317>/Product1'
   *  RelationalOperator: '<S326>/Compare'
   *  RelationalOperator: '<S327>/Compare'
   *  UnitDelay: '<S317>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_d = rtb_Init;
  } else {
    rtb_uDLookupTable_d = 0.0;
  }

  /* End of Switch: '<S317>/Switch' */

  /* Switch: '<S332>/Init' incorporates:
   *  UnitDelay: '<S332>/FixPt Unit Delay1'
   *  UnitDelay: '<S332>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_UnitDelay3 = rtb_uDLookupTable_d;
  } else {
    rtb_UnitDelay3 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S332>/Init' */

  /* RelationalOperator: '<S328>/Compare' incorporates:
   *  Constant: '<S328>/Constant'
   */
  Compare_f = (rtb_uDLookupTable_d == 0.0);

  /* RelationalOperator: '<S329>/Compare' incorporates:
   *  Constant: '<S329>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_d > 0.0);

  /* Abs: '<S317>/Abs' incorporates:
   *  Sum: '<S317>/Subtract'
   *  UnitDelay: '<S317>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Init);

  /* Switch: '<S317>/Switch5' incorporates:
   *  Constant: '<S317>/Constant1'
   *  Switch: '<S317>/Switch1'
   *  UnaryMinus: '<S317>/Unary Minus'
   */
  if (Compare_f) {
    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S317>/Constant4'
     *  Constant: '<S317>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S317>/Constant2'
     *  Constant: '<S317>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S317>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S317>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic;
    rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S317>/Constant10'
     *  Constant: '<S317>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S317>/Constant7'
     *  Constant: '<S317>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S317>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S317>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic1;

    /* Switch: '<S317>/Switch3' incorporates:
     *  Constant: '<S317>/Constant1'
     *  Constant: '<S317>/Constant3'
     *  UnaryMinus: '<S317>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S317>/Switch3' */
  }

  /* End of Switch: '<S317>/Switch5' */

  /* Product: '<S317>/Product' incorporates:
   *  Switch: '<S317>/Switch1'
   */
  rtb_Switch2_ji = rtb_Minus_k_idx_0 * rtb_Switch4;

  /* Sum: '<S330>/Sum1' */
  rtb_uDLookupTable_d -= rtb_UnitDelay3;

  /* Switch: '<S331>/Switch2' incorporates:
   *  RelationalOperator: '<S331>/LowerRelop1'
   */
  if (!(rtb_uDLookupTable_d > rtb_Switch2_ji)) {
    /* Switch: '<S317>/Switch2' incorporates:
     *  Constant: '<S317>/Constant1'
     *  Constant: '<S317>/Constant3'
     *  Switch: '<S317>/Switch4'
     *  UnaryMinus: '<S317>/Unary Minus1'
     */
    if (Compare_f) {
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S317>/Switch4' incorporates:
       *  Constant: '<S317>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S317>/Product2' incorporates:
     *  Switch: '<S317>/Switch2'
     */
    rtb_Switch2_ji = rtb_Minus_k_idx_0 * rtb_Switch4;

    /* Switch: '<S331>/Switch' incorporates:
     *  RelationalOperator: '<S331>/UpperRelop'
     */
    if (!(rtb_uDLookupTable_d < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_uDLookupTable_d;
    }

    /* End of Switch: '<S331>/Switch' */
  }

  /* End of Switch: '<S331>/Switch2' */

  /* Sum: '<S330>/Sum' */
  rtb_Switch2_ji += rtb_UnitDelay3;

  /* Signum: '<S316>/Sign2' incorporates:
   *  UnitDelay: '<S316>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S316>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_n = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S316>/Product1' incorporates:
   *  Signum: '<S316>/Sign1'
   *  Signum: '<S316>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_n;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S316>/Switch' incorporates:
   *  Constant: '<S316>/Constant'
   *  Constant: '<S319>/Constant'
   *  Constant: '<S320>/Constant'
   *  Logic: '<S316>/or'
   *  Product: '<S316>/Product1'
   *  RelationalOperator: '<S319>/Compare'
   *  RelationalOperator: '<S320>/Compare'
   *  UnitDelay: '<S316>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_f = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_uDLookupTable_f = 0.0;
  }

  /* End of Switch: '<S316>/Switch' */

  /* Switch: '<S325>/Init' incorporates:
   *  UnitDelay: '<S325>/FixPt Unit Delay1'
   *  UnitDelay: '<S325>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_d = rtb_uDLookupTable_f;
  } else {
    rtb_uDLookupTable_d = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S325>/Init' */

  /* RelationalOperator: '<S321>/Compare' incorporates:
   *  Constant: '<S321>/Constant'
   */
  Compare_f = (rtb_uDLookupTable_f == 0.0);

  /* RelationalOperator: '<S322>/Compare' incorporates:
   *  Constant: '<S322>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_f > 0.0);

  /* Abs: '<S316>/Abs' incorporates:
   *  Sum: '<S316>/Subtract'
   *  UnitDelay: '<S316>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                     Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S316>/Switch5' incorporates:
   *  Constant: '<S316>/Constant1'
   *  Switch: '<S316>/Switch1'
   *  UnaryMinus: '<S316>/Unary Minus'
   */
  if (Compare_f) {
    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S316>/Constant4'
     *  Constant: '<S316>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S316>/Constant2'
     *  Constant: '<S316>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S316>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S316>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S316>/Constant10'
     *  Constant: '<S316>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S316>/Constant7'
     *  Constant: '<S316>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S316>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S316>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S316>/Switch3' incorporates:
     *  Constant: '<S316>/Constant1'
     *  Constant: '<S316>/Constant3'
     *  UnaryMinus: '<S316>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S316>/Switch3' */
  }

  /* End of Switch: '<S316>/Switch5' */

  /* Product: '<S316>/Product' incorporates:
   *  Switch: '<S316>/Switch1'
   */
  rtb_UnitDelay3 = rtb_Minus_k_idx_0 * rtb_Switch4;

  /* Sum: '<S323>/Sum1' */
  rtb_Sum1_p = rtb_uDLookupTable_f - rtb_uDLookupTable_d;

  /* Switch: '<S324>/Switch2' incorporates:
   *  RelationalOperator: '<S324>/LowerRelop1'
   */
  if (!(rtb_Sum1_p > rtb_UnitDelay3)) {
    /* Switch: '<S316>/Switch2' incorporates:
     *  Constant: '<S316>/Constant1'
     *  Constant: '<S316>/Constant3'
     *  Switch: '<S316>/Switch4'
     *  UnaryMinus: '<S316>/Unary Minus1'
     */
    if (Compare_f) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S316>/Switch4' incorporates:
       *  Constant: '<S316>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S316>/Product2' incorporates:
     *  Switch: '<S316>/Switch2'
     */
    rtb_UnitDelay3 = rtb_Minus_k_idx_0 * rtb_Switch4;

    /* Switch: '<S324>/Switch' incorporates:
     *  RelationalOperator: '<S324>/UpperRelop'
     */
    if (!(rtb_Sum1_p < rtb_UnitDelay3)) {
      rtb_UnitDelay3 = rtb_Sum1_p;
    }

    /* End of Switch: '<S324>/Switch' */
  }

  /* End of Switch: '<S324>/Switch2' */

  /* Sum: '<S323>/Sum' */
  rtb_uDLookupTable_d += rtb_UnitDelay3;

  /* Switch: '<S306>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S306>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S306>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_uDLookupTable_d;
  }

  /* End of Switch: '<S306>/Switch' */

  /* Fcn: '<S347>/r->x' incorporates:
   *  Fcn: '<S352>/r->x'
   *  Fcn: '<S357>/r->x'
   *  Fcn: '<S362>/r->x'
   */
  rtb_Switch2_cd = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S341>/Add' incorporates:
   *  Fcn: '<S347>/r->x'
   *  Fcn: '<S348>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Switch2_cd;

  /* Fcn: '<S347>/theta->y' incorporates:
   *  Fcn: '<S352>/theta->y'
   *  Fcn: '<S357>/theta->y'
   *  Fcn: '<S362>/theta->y'
   */
  rtb_Subtract1_ak = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S341>/Add' incorporates:
   *  Fcn: '<S347>/theta->y'
   *  Fcn: '<S348>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Subtract1_ak;

  /* Sum: '<S342>/Add' incorporates:
   *  Fcn: '<S353>/r->x'
   *  Fcn: '<S353>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_cd;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Subtract1_ak;

  /* Sum: '<S343>/Add' incorporates:
   *  Fcn: '<S358>/r->x'
   *  Fcn: '<S358>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_cd;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Subtract1_ak;

  /* Sum: '<S344>/Add' incorporates:
   *  Fcn: '<S363>/r->x'
   *  Fcn: '<S363>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Switch2_cd;
  rtb_UnitDelay3 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Subtract1_ak;

  /* Fcn: '<S361>/x->r' */
  rtb_Subtract1_ak = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_UnitDelay3);

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  Compare_f = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S360>/Switch1' */
  if (Compare_f) {
    /* Switch: '<S360>/Switch1' incorporates:
     *  Constant: '<S360>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S360>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Subtract1_ak;
  }

  /* End of Switch: '<S360>/Switch1' */

  /* Fcn: '<S346>/x->r' */
  rtb_Subtract1_ak = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S345>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S345>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S345>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Subtract1_ak;
  }

  /* End of Switch: '<S345>/Switch1' */

  /* Fcn: '<S351>/x->r' */
  rtb_Switch2_cd = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  rtb_AT_CS_Right_Red_Active = (rtb_Switch2_cd == 0.0);

  /* Switch: '<S350>/Switch1' */
  if (rtb_AT_CS_Right_Red_Active) {
    /* Switch: '<S350>/Switch1' incorporates:
     *  Constant: '<S350>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S350>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_cd;
  }

  /* End of Switch: '<S350>/Switch1' */

  /* Fcn: '<S356>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  FixPtRelationalOperator_i = (rtb_Init == 0.0);

  /* Switch: '<S355>/Switch1' */
  if (FixPtRelationalOperator_i) {
    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S355>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S355>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S355>/Switch1' */

  /* Product: '<S340>/Divide' incorporates:
   *  Abs: '<S340>/Abs'
   *  Abs: '<S340>/Abs1'
   *  Abs: '<S340>/Abs2'
   *  Abs: '<S340>/Abs3'
   *  Constant: '<S340>/Constant'
   *  MinMax: '<S340>/Max'
   */
  rtb_Subtract1_ak = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S340>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S360>/Switch' */
  if (!Compare_f) {
    /* Switch: '<S360>/Switch' incorporates:
     *  Fcn: '<S361>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_UnitDelay3,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S360>/Switch' */

  /* Trigonometry: '<S296>/Cos4' incorporates:
   *  Switch: '<S285>/Angle_Switch'
   *  Trigonometry: '<S295>/Cos4'
   */
  rtb_Add_cc = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S296>/Sin5' incorporates:
   *  UnaryMinus: '<S294>/Unary Minus'
   */
  rtb_uDLookupTable_f = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S296>/Sin4' incorporates:
   *  Switch: '<S285>/Angle_Switch'
   *  Trigonometry: '<S295>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S296>/Cos5' incorporates:
   *  UnaryMinus: '<S294>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S296>/Subtract1' incorporates:
   *  Product: '<S296>/Product2'
   *  Product: '<S296>/Product3'
   *  Trigonometry: '<S296>/Cos4'
   *  Trigonometry: '<S296>/Sin4'
   */
  rtb_UnitDelay3 = (rtb_Add_cc * rtb_uDLookupTable_f) + (rtb_Subtract_jj *
    rtb_Init);

  /* Sum: '<S296>/Subtract' incorporates:
   *  Product: '<S296>/Product'
   *  Product: '<S296>/Product1'
   *  Trigonometry: '<S296>/Cos4'
   *  Trigonometry: '<S296>/Sin4'
   */
  rtb_Switch4 = (rtb_Add_cc * rtb_Init) - (rtb_Subtract_jj * rtb_uDLookupTable_f);

  /* Math: '<S296>/Hypot' */
  rtb_Sum1_p = rt_hypotd_snf(rtb_Switch4, rtb_UnitDelay3);

  /* Switch: '<S296>/Switch' incorporates:
   *  Constant: '<S296>/Constant'
   *  Constant: '<S296>/Constant1'
   *  Constant: '<S297>/Constant'
   *  Product: '<S296>/Divide'
   *  Product: '<S296>/Divide1'
   *  RelationalOperator: '<S297>/Compare'
   *  Switch: '<S296>/Switch1'
   */
  if (rtb_Sum1_p > 1.0E-6) {
    rtb_Switch2_cd = rtb_UnitDelay3 / rtb_Sum1_p;
    rtb_Init = rtb_Switch4 / rtb_Sum1_p;
  } else {
    rtb_Switch2_cd = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S296>/Switch' */

  /* Switch: '<S285>/Speed_Switch' incorporates:
   *  Abs: '<S285>/Abs'
   *  Constant: '<S293>/Constant'
   *  RelationalOperator: '<S293>/Compare'
   *  Switch: '<S285>/Angle_Switch'
   *  Trigonometry: '<S295>/Atan1'
   *  Trigonometry: '<S296>/Atan1'
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_cd, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S295>/Subtract1' incorporates:
     *  Product: '<S295>/Product2'
     *  Product: '<S295>/Product3'
     *  UnaryMinus: '<S285>/Unary Minus'
     */
    rtb_UnitDelay3 = (rtb_Add_cc * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S295>/Subtract' incorporates:
     *  Product: '<S295>/Product'
     *  Product: '<S295>/Product1'
     */
    rtb_Sum1_p = (rtb_Add_cc * Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S295>/Hypot' */
    rtb_Switch4 = rt_hypotd_snf(rtb_Sum1_p, rtb_UnitDelay3);

    /* Switch: '<S295>/Switch1' incorporates:
     *  Constant: '<S295>/Constant'
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S298>/Constant'
     *  Product: '<S295>/Divide'
     *  Product: '<S295>/Divide1'
     *  RelationalOperator: '<S298>/Compare'
     *  Switch: '<S295>/Switch'
     */
    if (rtb_Switch4 > 1.0E-6) {
      rtb_Sum1_p /= rtb_Switch4;
      rtb_UnitDelay3 /= rtb_Switch4;
    } else {
      rtb_Sum1_p = 1.0;
      rtb_UnitDelay3 = 0.0;
    }

    /* End of Switch: '<S295>/Switch1' */
    rtb_uDLookupTable_f = rt_atan2d_snf(rtb_UnitDelay3, rtb_Sum1_p);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_f = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S288>/Product2' incorporates:
   *  Constant: '<S288>/Constant'
   *  Switch: '<S285>/Speed_Switch'
   */
  rtb_Switch2_cd = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S283>/Sign' */
  if (rtIsNaN(rtb_Switch2_cd)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_cd < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_cd > 0.0);
  }

  /* Signum: '<S283>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_n = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S286>/Add' incorporates:
   *  Sum: '<S287>/Sum'
   */
  rtb_uDLookupTable_f -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S218>/Product' incorporates:
   *  Abs: '<S283>/Abs'
   *  Abs: '<S286>/Abs'
   *  Constant: '<S289>/Constant'
   *  Constant: '<S299>/Constant3'
   *  Constant: '<S299>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S283>/OR'
   *  Lookup_n-D: '<S286>/1-D Lookup Table'
   *  Math: '<S299>/Math Function'
   *  RelationalOperator: '<S283>/Equal1'
   *  RelationalOperator: '<S289>/Compare'
   *  Signum: '<S283>/Sign'
   *  Signum: '<S283>/Sign1'
   *  Sum: '<S286>/Add'
   *  Sum: '<S299>/Add1'
   *  Sum: '<S299>/Add2'
   */
  rtb_Switch2_cd = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_n) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_cd) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_f + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
                  Code_Gen_Model_ConstP.pooled32, 1U);

  /* Gain: '<S284>/Gain' */
  rtb_Sum1_p = Drive_Motor_Control_FF * rtb_Switch2_cd;

  /* Sum: '<S284>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_cd -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S291>/Sum1' incorporates:
   *  Constant: '<S284>/Constant2'
   *  Product: '<S291>/Product'
   *  Sum: '<S291>/Sum'
   *  UnitDelay: '<S291>/Unit Delay1'
   */
  rtb_UnitDelay3 = ((rtb_Switch2_cd - Code_Gen_Model_DW.UnitDelay1_DSTATE_kw) *
                    Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kw;

  /* Product: '<S284>/Product' incorporates:
   *  Constant: '<S284>/Constant3'
   */
  rtb_Switch4 = rtb_UnitDelay3 * Drive_Motor_Control_D;

  /* Sum: '<S290>/Diff' incorporates:
   *  UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch4 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S284>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S284>/Add' incorporates:
   *  Gain: '<S284>/Gain1'
   *  Saturate: '<S284>/Saturation'
   */
  rtb_Add_jk = ((Drive_Motor_Control_P * rtb_Switch2_cd) + rtb_Sum1_p) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S284>/Subtract' incorporates:
   *  Constant: '<S284>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_jk;

  /* Sum: '<S284>/Sum2' incorporates:
   *  Gain: '<S284>/Gain2'
   *  UnitDelay: '<S284>/Unit Delay'
   */
  rtb_Sum1_p = (Drive_Motor_Control_I * rtb_Switch2_cd) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S292>/Switch2' incorporates:
   *  RelationalOperator: '<S292>/LowerRelop1'
   */
  if (!(rtb_Sum1_p > rtb_Init)) {
    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S284>/Constant1'
     *  RelationalOperator: '<S292>/UpperRelop'
     *  Sum: '<S284>/Subtract1'
     */
    if (rtb_Sum1_p < (-1.0 - rtb_Add_jk)) {
      rtb_Init = -1.0 - rtb_Add_jk;
    } else {
      rtb_Init = rtb_Sum1_p;
    }

    /* End of Switch: '<S292>/Switch' */
  }

  /* End of Switch: '<S292>/Switch2' */

  /* Saturate: '<S284>/Saturation1' */
  if (rtb_Init > Drive_Motor_Control_I_UL) {
    rtb_Sum1_p = Drive_Motor_Control_I_UL;
  } else if (rtb_Init < Drive_Motor_Control_I_LL) {
    rtb_Sum1_p = Drive_Motor_Control_I_LL;
  } else {
    rtb_Sum1_p = rtb_Init;
  }

  /* End of Saturate: '<S284>/Saturation1' */

  /* Sum: '<S284>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_jk + rtb_Sum1_p;

  /* Saturate: '<S284>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S284>/Saturation2' */

  /* Sum: '<S300>/Add1' incorporates:
   *  Constant: '<S300>/Constant3'
   *  Constant: '<S300>/Constant4'
   *  Math: '<S300>/Math Function'
   *  Sum: '<S300>/Add2'
   */
  rtb_Switch2_cd = rt_modd_snf(rtb_uDLookupTable_f + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S302>/Sum1' incorporates:
   *  Constant: '<S287>/Constant2'
   *  Product: '<S302>/Product'
   *  Sum: '<S302>/Sum'
   *  UnitDelay: '<S302>/Unit Delay1'
   */
  rtb_Add_jk = ((rtb_Switch2_cd - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S287>/Product' incorporates:
   *  Constant: '<S287>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Add_jk * Steering_Motor_Control_D;

  /* Sum: '<S301>/Diff' incorporates:
   *  UnitDelay: '<S301>/UD'
   *
   * Block description for '<S301>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S301>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S287>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S287>/Add' incorporates:
   *  Gain: '<S287>/Gain1'
   *  Saturate: '<S287>/Saturation'
   */
  rtb_Add_os = (Steering_Motor_Control_P * rtb_Switch2_cd) + rtb_Minus_k_idx_0;

  /* Sum: '<S287>/Subtract' incorporates:
   *  Constant: '<S287>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_os;

  /* Sum: '<S287>/Sum2' incorporates:
   *  Gain: '<S287>/Gain2'
   *  UnitDelay: '<S287>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_cd) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S303>/Switch2' incorporates:
   *  RelationalOperator: '<S303>/LowerRelop1'
   */
  if (!(rtb_Sum2_fc > rtb_Init)) {
    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S287>/Constant1'
     *  RelationalOperator: '<S303>/UpperRelop'
     *  Sum: '<S287>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_os)) {
      rtb_Init = -1.0 - rtb_Add_os;
    } else {
      rtb_Init = rtb_Sum2_fc;
    }

    /* End of Switch: '<S303>/Switch' */
  }

  /* End of Switch: '<S303>/Switch2' */

  /* Saturate: '<S287>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_Init;
  }

  /* End of Saturate: '<S287>/Saturation1' */

  /* Sum: '<S287>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_os + rtb_Sum2_fc;

  /* Saturate: '<S287>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S287>/Saturation2' */

  /* Product: '<S340>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S345>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S345>/Switch' incorporates:
     *  Fcn: '<S346>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S345>/Switch' */

  /* Trigonometry: '<S233>/Cos4' incorporates:
   *  Switch: '<S222>/Angle_Switch'
   *  Trigonometry: '<S232>/Cos4'
   */
  rtb_Add_cc = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S233>/Sin5' incorporates:
   *  UnaryMinus: '<S231>/Unary Minus'
   */
  rtb_uDLookupTable_f = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S233>/Sin4' incorporates:
   *  Switch: '<S222>/Angle_Switch'
   *  Trigonometry: '<S232>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S233>/Cos5' incorporates:
   *  UnaryMinus: '<S231>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S233>/Subtract1' incorporates:
   *  Product: '<S233>/Product2'
   *  Product: '<S233>/Product3'
   *  Trigonometry: '<S233>/Cos4'
   *  Trigonometry: '<S233>/Sin4'
   */
  rtb_Add_os = (rtb_Add_cc * rtb_uDLookupTable_f) + (rtb_Subtract_jj * rtb_Init);

  /* Sum: '<S233>/Subtract' incorporates:
   *  Product: '<S233>/Product'
   *  Product: '<S233>/Product1'
   *  Trigonometry: '<S233>/Cos4'
   *  Trigonometry: '<S233>/Sin4'
   */
  rtb_Subtract1_b = (rtb_Add_cc * rtb_Init) - (rtb_Subtract_jj *
    rtb_uDLookupTable_f);

  /* Math: '<S233>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_b, rtb_Add_os);

  /* Switch: '<S233>/Switch' incorporates:
   *  Constant: '<S233>/Constant'
   *  Constant: '<S233>/Constant1'
   *  Constant: '<S234>/Constant'
   *  Product: '<S233>/Divide'
   *  Product: '<S233>/Divide1'
   *  RelationalOperator: '<S234>/Compare'
   *  Switch: '<S233>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_cd = rtb_Add_os / rtb_Hypot_g5;
    rtb_Init = rtb_Subtract1_b / rtb_Hypot_g5;
  } else {
    rtb_Switch2_cd = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S233>/Switch' */

  /* Switch: '<S222>/Speed_Switch' incorporates:
   *  Abs: '<S222>/Abs'
   *  Constant: '<S230>/Constant'
   *  RelationalOperator: '<S230>/Compare'
   *  Switch: '<S222>/Angle_Switch'
   *  Trigonometry: '<S232>/Atan1'
   *  Trigonometry: '<S233>/Atan1'
   *  UnaryMinus: '<S222>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_cd, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S232>/Subtract1' incorporates:
     *  Product: '<S232>/Product2'
     *  Product: '<S232>/Product3'
     *  UnaryMinus: '<S222>/Unary Minus'
     */
    rtb_Add_os = (rtb_Add_cc * Code_Gen_Model_ConstB.Sin5) + (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S232>/Subtract' incorporates:
     *  Product: '<S232>/Product'
     *  Product: '<S232>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_cc * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S232>/Hypot' */
    rtb_Subtract1_b = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_os);

    /* Switch: '<S232>/Switch1' incorporates:
     *  Constant: '<S232>/Constant'
     *  Constant: '<S232>/Constant1'
     *  Constant: '<S235>/Constant'
     *  Product: '<S232>/Divide'
     *  Product: '<S232>/Divide1'
     *  RelationalOperator: '<S235>/Compare'
     *  Switch: '<S232>/Switch'
     */
    if (rtb_Subtract1_b > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_b;
      rtb_Add_os /= rtb_Subtract1_b;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_os = 0.0;
    }

    /* End of Switch: '<S232>/Switch1' */
    rtb_uDLookupTable_f = rt_atan2d_snf(rtb_Add_os, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_f = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S225>/Product2' incorporates:
   *  Constant: '<S225>/Constant'
   *  Switch: '<S222>/Speed_Switch'
   */
  rtb_Switch2_cd = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S220>/Sign' */
  if (rtIsNaN(rtb_Switch2_cd)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_cd < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_cd > 0.0);
  }

  /* Signum: '<S220>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_n = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S223>/Add' incorporates:
   *  Sum: '<S224>/Sum'
   */
  rtb_uDLookupTable_f -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S215>/Product' incorporates:
   *  Abs: '<S220>/Abs'
   *  Abs: '<S223>/Abs'
   *  Constant: '<S226>/Constant'
   *  Constant: '<S236>/Constant3'
   *  Constant: '<S236>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S220>/OR'
   *  Lookup_n-D: '<S223>/1-D Lookup Table'
   *  Math: '<S236>/Math Function'
   *  RelationalOperator: '<S220>/Equal1'
   *  RelationalOperator: '<S226>/Compare'
   *  Signum: '<S220>/Sign'
   *  Signum: '<S220>/Sign1'
   *  Sum: '<S223>/Add'
   *  Sum: '<S236>/Add1'
   *  Sum: '<S236>/Add2'
   */
  rtb_Switch2_cd = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_n) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_cd) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_f + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
                  Code_Gen_Model_ConstP.pooled32, 1U);

  /* Gain: '<S221>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_cd;

  /* Sum: '<S221>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_cd -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S228>/Sum1' incorporates:
   *  Constant: '<S221>/Constant2'
   *  Product: '<S228>/Product'
   *  Sum: '<S228>/Sum'
   *  UnitDelay: '<S228>/Unit Delay1'
   */
  rtb_Add_os = ((rtb_Switch2_cd - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S221>/Product' incorporates:
   *  Constant: '<S221>/Constant3'
   */
  rtb_Subtract1_b = rtb_Add_os * Drive_Motor_Control_D;

  /* Sum: '<S227>/Diff' incorporates:
   *  UnitDelay: '<S227>/UD'
   *
   * Block description for '<S227>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S227>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_b - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S221>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S221>/Add' incorporates:
   *  Gain: '<S221>/Gain1'
   *  Saturate: '<S221>/Saturation'
   */
  rtb_Add_ia = ((Drive_Motor_Control_P * rtb_Switch2_cd) + rtb_Hypot_g5) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S221>/Subtract' incorporates:
   *  Constant: '<S221>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_ia;

  /* Sum: '<S221>/Sum2' incorporates:
   *  Gain: '<S221>/Gain2'
   *  UnitDelay: '<S221>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_cd) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S229>/Switch2' incorporates:
   *  RelationalOperator: '<S229>/LowerRelop1'
   */
  if (!(rtb_Hypot_g5 > rtb_Init)) {
    /* Switch: '<S229>/Switch' incorporates:
     *  Constant: '<S221>/Constant1'
     *  RelationalOperator: '<S229>/UpperRelop'
     *  Sum: '<S221>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_ia)) {
      rtb_Init = -1.0 - rtb_Add_ia;
    } else {
      rtb_Init = rtb_Hypot_g5;
    }

    /* End of Switch: '<S229>/Switch' */
  }

  /* End of Switch: '<S229>/Switch2' */

  /* Saturate: '<S221>/Saturation1' */
  if (rtb_Init > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_Init < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_Init;
  }

  /* End of Saturate: '<S221>/Saturation1' */

  /* Sum: '<S221>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ia + rtb_Hypot_g5;

  /* Saturate: '<S221>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S221>/Saturation2' */

  /* Sum: '<S237>/Add1' incorporates:
   *  Constant: '<S237>/Constant3'
   *  Constant: '<S237>/Constant4'
   *  Math: '<S237>/Math Function'
   *  Sum: '<S237>/Add2'
   */
  rtb_Switch2_cd = rt_modd_snf(rtb_uDLookupTable_f + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S239>/Sum1' incorporates:
   *  Constant: '<S224>/Constant2'
   *  Product: '<S239>/Product'
   *  Sum: '<S239>/Sum'
   *  UnitDelay: '<S239>/Unit Delay1'
   */
  rtb_Add_ia = ((rtb_Switch2_cd - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S224>/Product' incorporates:
   *  Constant: '<S224>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_ia * Steering_Motor_Control_D;

  /* Sum: '<S238>/Diff' incorporates:
   *  UnitDelay: '<S238>/UD'
   *
   * Block description for '<S238>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S238>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S224>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S224>/Add' incorporates:
   *  Gain: '<S224>/Gain1'
   *  Saturate: '<S224>/Saturation'
   */
  rtb_Add_cc = (Steering_Motor_Control_P * rtb_Switch2_cd) + rtb_Minus_k_idx_0;

  /* Sum: '<S224>/Subtract' incorporates:
   *  Constant: '<S224>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_cc;

  /* Sum: '<S224>/Sum2' incorporates:
   *  Gain: '<S224>/Gain2'
   *  UnitDelay: '<S224>/Unit Delay'
   */
  rtb_Sum2_m = (Steering_Motor_Control_I * rtb_Switch2_cd) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S240>/Switch2' incorporates:
   *  RelationalOperator: '<S240>/LowerRelop1'
   */
  if (!(rtb_Sum2_m > rtb_Init)) {
    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S224>/Constant1'
     *  RelationalOperator: '<S240>/UpperRelop'
     *  Sum: '<S224>/Subtract1'
     */
    if (rtb_Sum2_m < (-1.0 - rtb_Add_cc)) {
      rtb_Init = -1.0 - rtb_Add_cc;
    } else {
      rtb_Init = rtb_Sum2_m;
    }

    /* End of Switch: '<S240>/Switch' */
  }

  /* End of Switch: '<S240>/Switch2' */

  /* Saturate: '<S224>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_m = rtb_Init;
  }

  /* End of Saturate: '<S224>/Saturation1' */

  /* Sum: '<S224>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_cc + rtb_Sum2_m;

  /* Saturate: '<S224>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S224>/Saturation2' */

  /* Product: '<S340>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S350>/Switch' */
  if (!rtb_AT_CS_Right_Red_Active) {
    /* Switch: '<S350>/Switch' incorporates:
     *  Fcn: '<S351>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S350>/Switch' */

  /* Trigonometry: '<S254>/Cos4' incorporates:
   *  Switch: '<S243>/Angle_Switch'
   *  Trigonometry: '<S253>/Cos4'
   */
  rtb_Add_cc = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S254>/Sin5' incorporates:
   *  UnaryMinus: '<S252>/Unary Minus'
   */
  rtb_uDLookupTable_f = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S254>/Sin4' incorporates:
   *  Switch: '<S243>/Angle_Switch'
   *  Trigonometry: '<S253>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S254>/Cos5' incorporates:
   *  UnaryMinus: '<S252>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S254>/Subtract1' incorporates:
   *  Product: '<S254>/Product2'
   *  Product: '<S254>/Product3'
   *  Trigonometry: '<S254>/Cos4'
   *  Trigonometry: '<S254>/Sin4'
   */
  rtb_Switch2_cd = (rtb_Add_cc * rtb_uDLookupTable_f) + (rtb_Subtract_jj *
    rtb_Init);

  /* Sum: '<S254>/Subtract' incorporates:
   *  Product: '<S254>/Product'
   *  Product: '<S254>/Product1'
   *  Trigonometry: '<S254>/Cos4'
   *  Trigonometry: '<S254>/Sin4'
   */
  rtb_Subtract_pa = (rtb_Add_cc * rtb_Init) - (rtb_Subtract_jj *
    rtb_uDLookupTable_f);

  /* Math: '<S254>/Hypot' */
  rtb_uDLookupTable_f = rt_hypotd_snf(rtb_Subtract_pa, rtb_Switch2_cd);

  /* Switch: '<S254>/Switch' incorporates:
   *  Constant: '<S254>/Constant'
   *  Constant: '<S254>/Constant1'
   *  Constant: '<S255>/Constant'
   *  Product: '<S254>/Divide'
   *  Product: '<S254>/Divide1'
   *  RelationalOperator: '<S255>/Compare'
   *  Switch: '<S254>/Switch1'
   */
  if (rtb_uDLookupTable_f > 1.0E-6) {
    rtb_Switch2_cd /= rtb_uDLookupTable_f;
    rtb_Init = rtb_Subtract_pa / rtb_uDLookupTable_f;
  } else {
    rtb_Switch2_cd = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S254>/Switch' */

  /* Switch: '<S243>/Speed_Switch' incorporates:
   *  Abs: '<S243>/Abs'
   *  Constant: '<S251>/Constant'
   *  RelationalOperator: '<S251>/Compare'
   *  Switch: '<S243>/Angle_Switch'
   *  Trigonometry: '<S253>/Atan1'
   *  Trigonometry: '<S254>/Atan1'
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_cd, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S253>/Subtract1' incorporates:
     *  Product: '<S253>/Product2'
     *  Product: '<S253>/Product3'
     *  UnaryMinus: '<S243>/Unary Minus'
     */
    rtb_Subtract_pa = (rtb_Add_cc * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S253>/Subtract' incorporates:
     *  Product: '<S253>/Product'
     *  Product: '<S253>/Product1'
     */
    rtb_Subtract_jj = (rtb_Add_cc * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S253>/Hypot' */
    rtb_Add_cc = rt_hypotd_snf(rtb_Subtract_jj, rtb_Subtract_pa);

    /* Switch: '<S253>/Switch1' incorporates:
     *  Constant: '<S253>/Constant'
     *  Constant: '<S253>/Constant1'
     *  Constant: '<S256>/Constant'
     *  Product: '<S253>/Divide'
     *  Product: '<S253>/Divide1'
     *  RelationalOperator: '<S256>/Compare'
     *  Switch: '<S253>/Switch'
     */
    if (rtb_Add_cc > 1.0E-6) {
      rtb_Subtract_jj /= rtb_Add_cc;
      rtb_Add_cc = rtb_Subtract_pa / rtb_Add_cc;
    } else {
      rtb_Subtract_jj = 1.0;
      rtb_Add_cc = 0.0;
    }

    /* End of Switch: '<S253>/Switch1' */
    rtb_uDLookupTable_f = rt_atan2d_snf(rtb_Add_cc, rtb_Subtract_jj);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_f = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S246>/Product2' incorporates:
   *  Constant: '<S246>/Constant'
   *  Switch: '<S243>/Speed_Switch'
   */
  rtb_Switch2_cd = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S241>/Sign' */
  if (rtIsNaN(rtb_Switch2_cd)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_cd < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_cd > 0.0);
  }

  /* Signum: '<S241>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_n = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S244>/Add' incorporates:
   *  Sum: '<S245>/Sum'
   */
  rtb_uDLookupTable_f -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S216>/Product' incorporates:
   *  Abs: '<S241>/Abs'
   *  Abs: '<S244>/Abs'
   *  Constant: '<S247>/Constant'
   *  Constant: '<S257>/Constant3'
   *  Constant: '<S257>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S241>/OR'
   *  Lookup_n-D: '<S244>/1-D Lookup Table'
   *  Math: '<S257>/Math Function'
   *  RelationalOperator: '<S241>/Equal1'
   *  RelationalOperator: '<S247>/Compare'
   *  Signum: '<S241>/Sign'
   *  Signum: '<S241>/Sign1'
   *  Sum: '<S244>/Add'
   *  Sum: '<S257>/Add1'
   *  Sum: '<S257>/Add2'
   */
  rtb_Switch2_cd = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_n) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_cd) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_f + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
                  Code_Gen_Model_ConstP.pooled32, 1U);

  /* Gain: '<S242>/Gain' */
  rtb_Subtract_pa = Drive_Motor_Control_FF * rtb_Switch2_cd;

  /* Sum: '<S242>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_cd -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S249>/Sum1' incorporates:
   *  Constant: '<S242>/Constant2'
   *  Product: '<S249>/Product'
   *  Sum: '<S249>/Sum'
   *  UnitDelay: '<S249>/Unit Delay1'
   */
  rtb_Add_cc = ((rtb_Switch2_cd - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S242>/Product' incorporates:
   *  Constant: '<S242>/Constant3'
   */
  rtb_Subtract_jj = rtb_Add_cc * Drive_Motor_Control_D;

  /* Sum: '<S248>/Diff' incorporates:
   *  UnitDelay: '<S248>/UD'
   *
   * Block description for '<S248>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S248>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_jj - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S242>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S242>/Add' incorporates:
   *  Gain: '<S242>/Gain1'
   *  Saturate: '<S242>/Saturation'
   */
  rtb_Add_l = ((Drive_Motor_Control_P * rtb_Switch2_cd) + rtb_Subtract_pa) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S242>/Subtract' incorporates:
   *  Constant: '<S242>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_l;

  /* Sum: '<S242>/Sum2' incorporates:
   *  Gain: '<S242>/Gain2'
   *  UnitDelay: '<S242>/Unit Delay'
   */
  rtb_Switch2_cd = (Drive_Motor_Control_I * rtb_Switch2_cd) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S250>/Switch2' incorporates:
   *  RelationalOperator: '<S250>/LowerRelop1'
   */
  if (!(rtb_Switch2_cd > rtb_Init)) {
    /* Switch: '<S250>/Switch' incorporates:
     *  Constant: '<S242>/Constant1'
     *  RelationalOperator: '<S250>/UpperRelop'
     *  Sum: '<S242>/Subtract1'
     */
    if (rtb_Switch2_cd < (-1.0 - rtb_Add_l)) {
      rtb_Init = -1.0 - rtb_Add_l;
    } else {
      rtb_Init = rtb_Switch2_cd;
    }

    /* End of Switch: '<S250>/Switch' */
  }

  /* End of Switch: '<S250>/Switch2' */

  /* Saturate: '<S242>/Saturation1' */
  if (rtb_Init > Drive_Motor_Control_I_UL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_UL;
  } else if (rtb_Init < Drive_Motor_Control_I_LL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_pa = rtb_Init;
  }

  /* End of Saturate: '<S242>/Saturation1' */

  /* Sum: '<S242>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_l + rtb_Subtract_pa;

  /* Saturate: '<S242>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S242>/Saturation2' */

  /* Sum: '<S258>/Add1' incorporates:
   *  Constant: '<S258>/Constant3'
   *  Constant: '<S258>/Constant4'
   *  Math: '<S258>/Math Function'
   *  Sum: '<S258>/Add2'
   */
  rtb_Switch2_cd = rt_modd_snf(rtb_uDLookupTable_f + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S260>/Sum1' incorporates:
   *  Constant: '<S245>/Constant2'
   *  Product: '<S260>/Product'
   *  Sum: '<S260>/Sum'
   *  UnitDelay: '<S260>/Unit Delay1'
   */
  rtb_uDLookupTable_f = ((rtb_Switch2_cd - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S245>/Product' incorporates:
   *  Constant: '<S245>/Constant3'
   */
  rtb_Add_l = rtb_uDLookupTable_f * Steering_Motor_Control_D;

  /* Sum: '<S259>/Diff' incorporates:
   *  UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Add_l - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S245>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S245>/Add' incorporates:
   *  Gain: '<S245>/Gain1'
   *  Saturate: '<S245>/Saturation'
   */
  rtb_Add_at = (Steering_Motor_Control_P * rtb_Switch2_cd) + rtb_Minus_k_idx_0;

  /* Sum: '<S245>/Subtract' incorporates:
   *  Constant: '<S245>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_at;

  /* Sum: '<S245>/Sum2' incorporates:
   *  Gain: '<S245>/Gain2'
   *  UnitDelay: '<S245>/Unit Delay'
   */
  rtb_Switch2_cd = (Steering_Motor_Control_I * rtb_Switch2_cd) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S261>/Switch2' incorporates:
   *  RelationalOperator: '<S261>/LowerRelop1'
   */
  if (!(rtb_Switch2_cd > rtb_Init)) {
    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S245>/Constant1'
     *  RelationalOperator: '<S261>/UpperRelop'
     *  Sum: '<S245>/Subtract1'
     */
    if (rtb_Switch2_cd < (-1.0 - rtb_Add_at)) {
      rtb_Init = -1.0 - rtb_Add_at;
    } else {
      rtb_Init = rtb_Switch2_cd;
    }

    /* End of Switch: '<S261>/Switch' */
  }

  /* End of Switch: '<S261>/Switch2' */

  /* Saturate: '<S245>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_l2j = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_l2j = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_l2j = rtb_Init;
  }

  /* End of Saturate: '<S245>/Saturation1' */

  /* Sum: '<S245>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_at + rtb_Subtract1_l2j;

  /* Saturate: '<S245>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S245>/Saturation2' */

  /* Product: '<S340>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S355>/Switch' */
  if (!FixPtRelationalOperator_i) {
    /* Switch: '<S355>/Switch' incorporates:
     *  Fcn: '<S356>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S355>/Switch' */

  /* Trigonometry: '<S275>/Cos4' incorporates:
   *  Switch: '<S264>/Angle_Switch'
   *  Trigonometry: '<S274>/Cos4'
   */
  rtb_Add_at = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S275>/Sin5' incorporates:
   *  UnaryMinus: '<S273>/Unary Minus'
   */
  rtb_Init = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S275>/Sin4' incorporates:
   *  Switch: '<S264>/Angle_Switch'
   *  Trigonometry: '<S274>/Sin4'
   */
  rtb_Add2_k_idx_0 = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S275>/Cos5' incorporates:
   *  UnaryMinus: '<S273>/Unary Minus'
   */
  rtb_Switch2_cd = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S275>/Subtract1' incorporates:
   *  Product: '<S275>/Product2'
   *  Product: '<S275>/Product3'
   *  Trigonometry: '<S275>/Cos4'
   *  Trigonometry: '<S275>/Sin4'
   */
  rtb_Subtract1_ak = (rtb_Add_at * rtb_Init) + (rtb_Add2_k_idx_0 *
    rtb_Switch2_cd);

  /* Sum: '<S275>/Subtract' incorporates:
   *  Product: '<S275>/Product'
   *  Product: '<S275>/Product1'
   *  Trigonometry: '<S275>/Cos4'
   *  Trigonometry: '<S275>/Sin4'
   */
  rtb_Switch2_cd = (rtb_Add_at * rtb_Switch2_cd) - (rtb_Add2_k_idx_0 * rtb_Init);

  /* Math: '<S275>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_Switch2_cd, rtb_Subtract1_ak);

  /* Switch: '<S275>/Switch' incorporates:
   *  Constant: '<S275>/Constant'
   *  Constant: '<S275>/Constant1'
   *  Constant: '<S276>/Constant'
   *  Product: '<S275>/Divide'
   *  Product: '<S275>/Divide1'
   *  RelationalOperator: '<S276>/Compare'
   *  Switch: '<S275>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Subtract1_ak /= rtb_Init;
    rtb_Switch2_cd /= rtb_Init;
  } else {
    rtb_Subtract1_ak = 0.0;
    rtb_Switch2_cd = 1.0;
  }

  /* End of Switch: '<S275>/Switch' */

  /* Switch: '<S264>/Speed_Switch' incorporates:
   *  Abs: '<S264>/Abs'
   *  Constant: '<S272>/Constant'
   *  RelationalOperator: '<S272>/Compare'
   *  Switch: '<S264>/Angle_Switch'
   *  Trigonometry: '<S274>/Atan1'
   *  Trigonometry: '<S275>/Atan1'
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Subtract1_ak, rtb_Switch2_cd)) > 1.5707963267948966)
  {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S274>/Subtract1' incorporates:
     *  Product: '<S274>/Product2'
     *  Product: '<S274>/Product3'
     *  UnaryMinus: '<S264>/Unary Minus'
     */
    rtb_Switch2_cd = (rtb_Add_at * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Add2_k_idx_0 * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S274>/Subtract' incorporates:
     *  Product: '<S274>/Product'
     *  Product: '<S274>/Product1'
     */
    rtb_Add_at = (rtb_Add_at * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Add2_k_idx_0
      * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S274>/Hypot' */
    rtb_Init = rt_hypotd_snf(rtb_Add_at, rtb_Switch2_cd);

    /* Switch: '<S274>/Switch1' incorporates:
     *  Constant: '<S274>/Constant'
     *  Constant: '<S274>/Constant1'
     *  Constant: '<S277>/Constant'
     *  Product: '<S274>/Divide'
     *  Product: '<S274>/Divide1'
     *  RelationalOperator: '<S277>/Compare'
     *  Switch: '<S274>/Switch'
     */
    if (rtb_Init > 1.0E-6) {
      rtb_Add_at /= rtb_Init;
      rtb_Switch2_cd /= rtb_Init;
    } else {
      rtb_Add_at = 1.0;
      rtb_Switch2_cd = 0.0;
    }

    /* End of Switch: '<S274>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_cd, rtb_Add_at);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S267>/Product2' incorporates:
   *  Constant: '<S267>/Constant'
   *  Switch: '<S264>/Speed_Switch'
   */
  rtb_Subtract1_ak = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S262>/Sign' */
  if (rtIsNaN(rtb_Subtract1_ak)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Subtract1_ak < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Subtract1_ak > 0.0);
  }

  /* Signum: '<S262>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_n = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S265>/Add' incorporates:
   *  Sum: '<S266>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S217>/Product' incorporates:
   *  Abs: '<S262>/Abs'
   *  Abs: '<S265>/Abs'
   *  Constant: '<S268>/Constant'
   *  Constant: '<S278>/Constant3'
   *  Constant: '<S278>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S262>/OR'
   *  Lookup_n-D: '<S265>/1-D Lookup Table'
   *  Math: '<S278>/Math Function'
   *  RelationalOperator: '<S262>/Equal1'
   *  RelationalOperator: '<S268>/Compare'
   *  Signum: '<S262>/Sign'
   *  Signum: '<S262>/Sign1'
   *  Sum: '<S265>/Add'
   *  Sum: '<S278>/Add1'
   *  Sum: '<S278>/Add2'
   */
  rtb_Subtract1_ak = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_n) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Subtract1_ak) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_Init + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
                  Code_Gen_Model_ConstP.pooled32, 1U);

  /* Gain: '<S263>/Gain' */
  rtb_Switch2_cd = Drive_Motor_Control_FF * rtb_Subtract1_ak;

  /* Sum: '<S263>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Subtract1_ak -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S270>/Sum1' incorporates:
   *  Constant: '<S263>/Constant2'
   *  Product: '<S270>/Product'
   *  Sum: '<S270>/Sum'
   *  UnitDelay: '<S270>/Unit Delay1'
   */
  rtb_Add_at = ((rtb_Subtract1_ak - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S263>/Product' incorporates:
   *  Constant: '<S263>/Constant3'
   */
  rtb_Add2_k_idx_0 = rtb_Add_at * Drive_Motor_Control_D;

  /* Sum: '<S269>/Diff' incorporates:
   *  UnitDelay: '<S269>/UD'
   *
   * Block description for '<S269>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S269>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Add2_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S263>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S263>/Add' incorporates:
   *  Gain: '<S263>/Gain1'
   *  Saturate: '<S263>/Saturation'
   */
  rtb_Add2_k_idx_1 = ((Drive_Motor_Control_P * rtb_Subtract1_ak) +
                      rtb_Switch2_cd) + rtb_Minus_k_idx_0;

  /* Sum: '<S263>/Subtract' incorporates:
   *  Constant: '<S263>/Constant'
   */
  rtb_Switch2_cd = 1.0 - rtb_Add2_k_idx_1;

  /* Sum: '<S263>/Sum2' incorporates:
   *  Gain: '<S263>/Gain2'
   *  UnitDelay: '<S263>/Unit Delay'
   */
  rtb_Subtract1_ak = (Drive_Motor_Control_I * rtb_Subtract1_ak) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S271>/Switch2' incorporates:
   *  Constant: '<S263>/Constant'
   *  RelationalOperator: '<S271>/LowerRelop1'
   *  Sum: '<S263>/Subtract'
   */
  if (!(rtb_Subtract1_ak > (1.0 - rtb_Add2_k_idx_1))) {
    /* Sum: '<S263>/Subtract1' incorporates:
     *  Constant: '<S263>/Constant1'
     */
    rtb_Switch2_cd = -1.0 - rtb_Add2_k_idx_1;

    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S263>/Constant1'
     *  RelationalOperator: '<S271>/UpperRelop'
     *  Sum: '<S263>/Subtract1'
     */
    if (!(rtb_Subtract1_ak < (-1.0 - rtb_Add2_k_idx_1))) {
      rtb_Switch2_cd = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S271>/Switch' */
  }

  /* End of Switch: '<S271>/Switch2' */

  /* Saturate: '<S263>/Saturation1' */
  if (rtb_Switch2_cd > Drive_Motor_Control_I_UL) {
    rtb_Integral_h = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_cd < Drive_Motor_Control_I_LL) {
    rtb_Integral_h = Drive_Motor_Control_I_LL;
  } else {
    rtb_Integral_h = rtb_Switch2_cd;
  }

  /* End of Saturate: '<S263>/Saturation1' */

  /* Sum: '<S263>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add2_k_idx_1 + rtb_Integral_h;

  /* Saturate: '<S263>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S263>/Saturation2' */

  /* Sum: '<S279>/Add1' incorporates:
   *  Constant: '<S279>/Constant3'
   *  Constant: '<S279>/Constant4'
   *  Math: '<S279>/Math Function'
   *  Sum: '<S279>/Add2'
   */
  rtb_Subtract1_ak = rt_modd_snf(rtb_Init + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S281>/Sum1' incorporates:
   *  Constant: '<S266>/Constant2'
   *  Product: '<S281>/Product'
   *  Sum: '<S281>/Sum'
   *  UnitDelay: '<S281>/Unit Delay1'
   */
  rtb_Add2_k_idx_1 = ((rtb_Subtract1_ak - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw)
                      * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S266>/Product' incorporates:
   *  Constant: '<S266>/Constant3'
   */
  rtb_Product_lf = rtb_Add2_k_idx_1 * Steering_Motor_Control_D;

  /* Sum: '<S280>/Diff' incorporates:
   *  UnitDelay: '<S280>/UD'
   *
   * Block description for '<S280>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S280>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S266>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S266>/Add' incorporates:
   *  Gain: '<S266>/Gain1'
   *  Saturate: '<S266>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Subtract1_ak) + rtb_Minus_k_idx_0;

  /* Sum: '<S266>/Subtract' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_Switch2_cd = 1.0 - rtb_Init;

  /* Sum: '<S266>/Sum2' incorporates:
   *  Gain: '<S266>/Gain2'
   *  UnitDelay: '<S266>/Unit Delay'
   */
  rtb_Subtract1_ak = (Steering_Motor_Control_I * rtb_Subtract1_ak) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S282>/Switch2' incorporates:
   *  Constant: '<S266>/Constant'
   *  RelationalOperator: '<S282>/LowerRelop1'
   *  Sum: '<S266>/Subtract'
   */
  if (!(rtb_Subtract1_ak > (1.0 - rtb_Init))) {
    /* Sum: '<S266>/Subtract1' incorporates:
     *  Constant: '<S266>/Constant1'
     */
    rtb_Switch2_cd = -1.0 - rtb_Init;

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S266>/Constant1'
     *  RelationalOperator: '<S282>/UpperRelop'
     *  Sum: '<S266>/Subtract1'
     */
    if (!(rtb_Subtract1_ak < (-1.0 - rtb_Init))) {
      rtb_Switch2_cd = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S282>/Switch' */
  }

  /* End of Switch: '<S282>/Switch2' */

  /* Saturate: '<S266>/Saturation1' */
  if (rtb_Switch2_cd > Steering_Motor_Control_I_UL) {
    rtb_Integral_ei = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_cd < Steering_Motor_Control_I_LL) {
    rtb_Integral_ei = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_ei = rtb_Switch2_cd;
  }

  /* End of Saturate: '<S266>/Saturation1' */

  /* Sum: '<S266>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_ei;

  /* Saturate: '<S266>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S266>/Saturation2' */

  /* MinMax: '<S9>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit1'
   *  Merge: '<S16>/Merge13'
   */
  rtb_Subtract1_ak = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired,
    look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Desired,
                  Code_Gen_Model_ConstP.pooled35, Code_Gen_Model_ConstP.pooled34,
                  95U)), look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.pooled35, Code_Gen_Model_ConstP.pooled34, 95U));

  /* Switch: '<S9>/Switch3' incorporates:
   *  Abs: '<S9>/Abs1'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant6'
   *  Logic: '<S9>/AND'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired < rtb_Subtract1_ak) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S9>/Add' incorporates:
   *  Sum: '<S9>/Subtract'
   *  Switch: '<S9>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Subtract1_ak -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S9>/Logical Operator3' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S41>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   */
  Compare = (Compare || ((Code_Gen_Model_B.Elevator_Height_Desired == 0.0) &&
              (fabs(Code_Gen_Model_B.Elevator_Error) <=
               Elevator_Error_Bottom_Disable)));

  /* Gain: '<S43>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator2'
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/NOT2'
   *  Logic: '<S9>/OR'
   */
  Compare_f = (((!Compare) && (Code_Gen_Model_B.Reefscape_Motors_Enable)) &&
               ((!rtb_Compare_pd) && (!rtb_Compare)));

  /* Switch: '<S43>/Switch' */
  if (Compare_f) {
    /* Switch: '<S43>/Switch1' incorporates:
     *  UnitDelay: '<S52>/Delay Input1'
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S43>/Switch' incorporates:
       *  Constant: '<S43>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S43>/Sum2' incorporates:
       *  Gain: '<S43>/Gain2'
       *  UnitDelay: '<S43>/Unit Delay'
       */
      rtb_Subtract1_ak = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S43>/Subtract' incorporates:
       *  Constant: '<S43>/Constant'
       */
      rtb_Switch2_cd = Elevator_Total_UL -
        Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S53>/Switch2' incorporates:
       *  RelationalOperator: '<S53>/LowerRelop1'
       */
      if (!(rtb_Subtract1_ak > rtb_Switch2_cd)) {
        /* Sum: '<S43>/Subtract1' incorporates:
         *  Constant: '<S43>/Constant1'
         */
        rtb_Switch2_cd = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S53>/Switch' incorporates:
         *  RelationalOperator: '<S53>/UpperRelop'
         */
        if (!(rtb_Subtract1_ak < rtb_Switch2_cd)) {
          rtb_Switch2_cd = rtb_Subtract1_ak;
        }

        /* End of Switch: '<S53>/Switch' */
      }

      /* End of Switch: '<S53>/Switch2' */

      /* Saturate: '<S43>/Saturation1' */
      if (rtb_Switch2_cd > Elevator_Int_UL) {
        /* Switch: '<S43>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_cd < Elevator_Int_LL) {
        /* Switch: '<S43>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S43>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_cd;
      }

      /* End of Saturate: '<S43>/Saturation1' */
    }

    /* End of Switch: '<S43>/Switch1' */
  } else {
    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S43>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S43>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     */
    if (Compare) {
      rtb_Subtract1_ak = Elevator_Bottom_DC;
    } else {
      /* Sum: '<S43>/Add1' */
      rtb_Switch2_cd = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S43>/Saturation2' */
      if (rtb_Switch2_cd > Elevator_Total_UL) {
        rtb_Switch2_cd = Elevator_Total_UL;
      } else if (rtb_Switch2_cd < Elevator_Total_LL) {
        rtb_Switch2_cd = Elevator_Total_LL;
      }

      /* End of Saturate: '<S43>/Saturation2' */

      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/Constant1'
       *  Constant: '<S9>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Subtract1_ak = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Subtract1_ak = 1.0;
      }

      /* End of Switch: '<S9>/Switch1' */

      /* Switch: '<S44>/Switch2' incorporates:
       *  RelationalOperator: '<S44>/LowerRelop1'
       */
      if (!(rtb_Switch2_cd > rtb_Subtract1_ak)) {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant3'
         *  Constant: '<S9>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Subtract1_ak = 0.0;
        } else {
          rtb_Subtract1_ak = -1.0;
        }

        /* End of Switch: '<S9>/Switch' */

        /* Switch: '<S44>/Switch' incorporates:
         *  RelationalOperator: '<S44>/UpperRelop'
         */
        if (!(rtb_Switch2_cd < rtb_Subtract1_ak)) {
          rtb_Subtract1_ak = rtb_Switch2_cd;
        }

        /* End of Switch: '<S44>/Switch' */
      }

      /* End of Switch: '<S44>/Switch2' */
    }

    /* End of Switch: '<S9>/Switch4' */
  } else {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* UnitDelay: '<S42>/Unit Delay' */
  rtb_Switch2_cd = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S42>/Abs' incorporates:
   *  Sum: '<S42>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_cd - rtb_Subtract1_ak);

  /* Signum: '<S42>/Sign2' */
  if (rtIsNaN(rtb_Switch2_cd)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_cd < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_cd > 0.0);
  }

  /* Signum: '<S42>/Sign1' */
  if (rtIsNaN(rtb_Subtract1_ak)) {
    rtb_Switch2_n = (rtNaN);
  } else if (rtb_Subtract1_ak < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (rtb_Subtract1_ak > 0.0);
  }

  /* Product: '<S42>/Product1' incorporates:
   *  Signum: '<S42>/Sign1'
   *  Signum: '<S42>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_n;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  Logic: '<S42>/or'
   *  Product: '<S42>/Product1'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   */
  if ((!(rtb_Switch2_cd == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  Compare = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S42>/Switch5' */
  if (Compare) {
    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S42>/Constant4'
     *  Constant: '<S42>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S42>/Constant2'
     *  Constant: '<S42>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S42>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S42>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_jw), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch5_a = rtb_LookupTableDynamic_jw;
  } else {
    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S42>/Constant10'
     *  Constant: '<S42>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S42>/Constant7'
     *  Constant: '<S42>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S42>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S42>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_b), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch5_a = rtb_LookupTableDynamic1_b;
  }

  /* End of Switch: '<S42>/Switch5' */

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Subtract1_ak > 0.0);

  /* Switch: '<S42>/Switch1' incorporates:
   *  Switch: '<S42>/Switch3'
   */
  if (Compare) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S42>/Switch3' incorporates:
     *  Constant: '<S42>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S42>/Product' incorporates:
   *  Switch: '<S42>/Switch1'
   */
  rtb_Switch2_cd = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S51>/Init' incorporates:
   *  UnitDelay: '<S51>/FixPt Unit Delay1'
   *  UnitDelay: '<S51>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Subtract1_ak;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S51>/Init' */

  /* Sum: '<S49>/Sum1' */
  rtb_Subtract1_ak -= rtb_Init;

  /* Switch: '<S50>/Switch2' incorporates:
   *  RelationalOperator: '<S50>/LowerRelop1'
   */
  if (!(rtb_Subtract1_ak > rtb_Switch2_cd)) {
    /* Switch: '<S42>/Switch2' incorporates:
     *  Constant: '<S42>/Constant1'
     *  Constant: '<S42>/Constant3'
     *  Switch: '<S42>/Switch4'
     *  UnaryMinus: '<S42>/Unary Minus1'
     */
    if (Compare) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S42>/Switch4' incorporates:
       *  Constant: '<S42>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S42>/Product2' incorporates:
     *  Switch: '<S42>/Switch2'
     */
    rtb_Switch2_cd = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S50>/Switch' incorporates:
     *  RelationalOperator: '<S50>/UpperRelop'
     */
    if (!(rtb_Subtract1_ak < rtb_Switch2_cd)) {
      rtb_Switch2_cd = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S50>/Switch' */
  }

  /* End of Switch: '<S50>/Switch2' */

  /* Sum: '<S49>/Sum' */
  rtb_Switch5_a = rtb_Switch2_cd + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   */
  Compare = ((Code_Gen_Model_B.Elevator_Height_Measured <
              Elevator_Height_Coral_Arm_Low_Thresh) &&
             (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
              Coral_Arm_Angle_Neg_Threshold));

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_cd = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 2U);

  /* Switch: '<S28>/Switch2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S28>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired > 90.0) {
    rtb_Subtract1_ak = 90.0;
  } else {
    /* Lookup_n-D: '<S7>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S10>/Switch'
     */
    rtb_Subtract1_ak = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S28>/Switch' incorporates:
     *  RelationalOperator: '<S28>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired < rtb_Subtract1_ak)) {
      rtb_Subtract1_ak = Code_Gen_Model_B.Coral_Arm_Angle_Desired;
    }

    /* End of Switch: '<S28>/Switch' */
  }

  /* End of Switch: '<S28>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Subtract1_ak -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S27>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   */
  rtb_Is_Absolute_Steering = ((!Compare) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Lookup_n-D: '<S7>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Subtract1_ak = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S27>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S27>/Switch1' incorporates:
     *  UnitDelay: '<S36>/Delay Input1'
     *
     * Block description for '<S36>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S27>/Switch' incorporates:
       *  Constant: '<S27>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S27>/Sum2' incorporates:
       *  Gain: '<S27>/Gain2'
       *  UnitDelay: '<S27>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S27>/Subtract' */
      rtb_Switch2_n = rtb_Switch2_cd - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S37>/Switch2' incorporates:
       *  RelationalOperator: '<S37>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_n)) {
        /* Sum: '<S27>/Subtract1' */
        rtb_Switch2_n = rtb_Subtract1_ak -
          Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S37>/Switch' incorporates:
         *  RelationalOperator: '<S37>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_n)) {
          rtb_Switch2_n = rtb_Init;
        }

        /* End of Switch: '<S37>/Switch' */
      }

      /* End of Switch: '<S37>/Switch2' */

      /* Saturate: '<S27>/Saturation1' */
      if (rtb_Switch2_n > Coral_Arm_Int_UL) {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_n < Coral_Arm_Int_LL) {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_n;
      }

      /* End of Saturate: '<S27>/Saturation1' */
    }

    /* End of Switch: '<S27>/Switch1' */
  } else {
    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    if (Compare) {
      rtb_Subtract1_ak = Coral_Arm_Neg90_DC;
    } else {
      /* Sum: '<S27>/Add1' */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S38>/Switch2' incorporates:
       *  RelationalOperator: '<S38>/LowerRelop1'
       *  RelationalOperator: '<S38>/UpperRelop'
       *  Switch: '<S38>/Switch'
       */
      if (rtb_Init > rtb_Switch2_cd) {
        rtb_Subtract1_ak = rtb_Switch2_cd;
      } else if (!(rtb_Init < rtb_Subtract1_ak)) {
        rtb_Subtract1_ak = rtb_Init;
      }

      /* End of Switch: '<S38>/Switch2' */
    }

    /* End of Switch: '<S7>/Switch1' */
  } else {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* UnitDelay: '<S26>/Unit Delay' */
  rtb_Switch2_cd = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S26>/Abs' incorporates:
   *  Sum: '<S26>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_cd - rtb_Subtract1_ak);

  /* Signum: '<S26>/Sign2' */
  if (rtIsNaN(rtb_Switch2_cd)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_cd < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_cd > 0.0);
  }

  /* Signum: '<S26>/Sign1' */
  if (rtIsNaN(rtb_Subtract1_ak)) {
    rtb_Switch2_n = (rtNaN);
  } else if (rtb_Subtract1_ak < 0.0) {
    rtb_Switch2_n = -1.0;
  } else {
    rtb_Switch2_n = (rtb_Subtract1_ak > 0.0);
  }

  /* Product: '<S26>/Product1' incorporates:
   *  Signum: '<S26>/Sign1'
   *  Signum: '<S26>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_n;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S26>/Switch' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  Logic: '<S26>/or'
   *  Product: '<S26>/Product1'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   */
  if ((!(rtb_Switch2_cd == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S26>/Switch' */

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  Compare = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S26>/Switch5' */
  if (Compare) {
    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S26>/Constant4'
     *  Constant: '<S26>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S26>/Constant2'
     *  Constant: '<S26>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S26>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S26>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_n = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S26>/Constant10'
     *  Constant: '<S26>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S26>/Constant7'
     *  Constant: '<S26>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S26>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S26>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_n = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S26>/Switch5' */

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  rtb_AT_CS_Right_Red_Active = (rtb_Subtract1_ak > 0.0);

  /* Switch: '<S26>/Switch1' incorporates:
   *  Switch: '<S26>/Switch3'
   */
  if (Compare) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_AT_CS_Right_Red_Active) {
    /* Switch: '<S26>/Switch3' incorporates:
     *  Constant: '<S26>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S26>/Product' incorporates:
   *  Switch: '<S26>/Switch1'
   */
  rtb_Switch2_cd = rtb_Minus_k_idx_0 * rtb_Switch2_n;

  /* Switch: '<S35>/Init' incorporates:
   *  UnitDelay: '<S35>/FixPt Unit Delay1'
   *  UnitDelay: '<S35>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Subtract1_ak;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S35>/Init' */

  /* Sum: '<S33>/Sum1' */
  rtb_Subtract1_ak -= rtb_Init;

  /* Switch: '<S34>/Switch2' incorporates:
   *  RelationalOperator: '<S34>/LowerRelop1'
   */
  if (!(rtb_Subtract1_ak > rtb_Switch2_cd)) {
    /* Switch: '<S26>/Switch2' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S26>/Constant3'
     *  Switch: '<S26>/Switch4'
     *  UnaryMinus: '<S26>/Unary Minus1'
     */
    if (Compare) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S26>/Switch4' incorporates:
       *  Constant: '<S26>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S26>/Product2' incorporates:
     *  Switch: '<S26>/Switch2'
     */
    rtb_Switch2_cd = rtb_Minus_k_idx_0 * rtb_Switch2_n;

    /* Switch: '<S34>/Switch' incorporates:
     *  RelationalOperator: '<S34>/UpperRelop'
     */
    if (!(rtb_Subtract1_ak < rtb_Switch2_cd)) {
      rtb_Switch2_cd = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S34>/Switch' */
  }

  /* End of Switch: '<S34>/Switch2' */

  /* Sum: '<S33>/Sum' */
  rtb_Subtract1_ak = rtb_Switch2_cd + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Subtract1_ak;

  /* Gain: '<S147>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S148>/Compare' incorporates:
   *  Constant: '<S147>/Constant'
   *  Constant: '<S148>/Constant'
   */
  Compare = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S147>/Switch1' incorporates:
   *  UnitDelay: '<S147>/Unit Delay1'
   */
  if (Compare) {
    rtb_Switch2_cd = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_cd = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S147>/Switch1' */

  /* Sum: '<S147>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_cd;

  /* Gain: '<S147>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S147>/Switch' incorporates:
   *  UnitDelay: '<S147>/Unit Delay'
   */
  if (Compare) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Sum: '<S147>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S11>/Gain'
   *  Sum: '<S11>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_Switch_l + rtb_Switch1) *
    57.295779513082323;

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_Enable_Wheels;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_Coral_Wheel_DutyCycle;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle =
    rtb_Algae_Wheel_Outside_DutyCyc;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle =
    rtb_Algae_Wheel_Inside_DutyCycl;

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/Joystick_Right_B7'
   */
  Code_Gen_Model_B.Cage_Left_Start = (Code_Gen_Model_U.Joystick_Right_B7 != 0.0);

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   *  Inport: '<Root>/Joystick_Right_B6'
   */
  Code_Gen_Model_B.Cage_Middle_Start = (Code_Gen_Model_U.Joystick_Right_B6 !=
    0.0);

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   *  Inport: '<Root>/Joystick_Right_B5'
   */
  Code_Gen_Model_B.Cage_Right_Start = (Code_Gen_Model_U.Joystick_Right_B5 != 0.0);

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Cage_Left_Finish = (Code_Gen_Model_U.Joystick_Right_B8 != 0.0);

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   *  Inport: '<Root>/Joystick_Right_B9'
   */
  Code_Gen_Model_B.Cage_Middle_Finish = (Code_Gen_Model_U.Joystick_Right_B9 !=
    0.0);

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   *  Inport: '<Root>/Joystick_Right_B10'
   */
  Code_Gen_Model_B.Cage_Right_Finish = (Code_Gen_Model_U.Joystick_Right_B10 !=
    0.0);

  /* SignalConversion: '<S12>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Minus_k_idx_0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_Minus_k_idx_0 < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Minus_k_idx_0)))))) : ((int32_T)((uint8_T)
    rtb_Minus_k_idx_0)));

  /* End of DataTypeConversion: '<S18>/Data Type Conversion' */

  /* Chart: '<S18>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Active_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (rtb_GameState != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Active_GameState = rtb_GameState;
    }

    /* case IN_Not_Disabled: */
  } else if (rtb_GameState == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Active_GameState = rtb_GameState;
  }

  /* End of Chart: '<S18>/Chart' */

  /* Update for UnitDelay: '<S139>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S140>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S140>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S141>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S142>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S84>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S104>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S84>/A'
   *  Delay: '<S84>/MemoryX'
   */
  rtb_Switch_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S84>/MemoryX' incorporates:
   *  Constant: '<S84>/B'
   *  Product: '<S104>/A[k]*xhat[k|k-1]'
   *  Product: '<S104>/B[k]*u[k]'
   *  Sum: '<S104>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch_l) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S58>/Delay Input1' incorporates:
   *  Constant: '<S11>/Constant3'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S138>/UD'
   *
   * Block description for '<S138>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for DiscreteIntegrator: '<S17>/Accumulator2' incorporates:
   *  Constant: '<S17>/Constant'
   *  DiscreteIntegrator: '<S17>/Accumulator'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE += Code_Gen_Model_B.Product6[0];
  if (Odometry_Reset_IC > 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 1;
  } else {
    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;
    }

    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S17>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S17>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S81>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S82>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S83>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S315>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S315>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S337>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S336>/UD'
   *
   * Block description for '<S336>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S334>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch_b5;

  /* Update for UnitDelay: '<S317>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S332>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S332>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S332>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S316>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_uDLookupTable_d;

  /* Update for UnitDelay: '<S325>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S325>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S325>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_uDLookupTable_d;

  /* Update for UnitDelay: '<S291>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kw = rtb_UnitDelay3;

  /* Update for UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch4;

  /* Update for UnitDelay: '<S284>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Sum1_p;

  /* Update for UnitDelay: '<S302>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Add_jk;

  /* Update for UnitDelay: '<S301>/UD'
   *
   * Block description for '<S301>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S287>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S228>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_os;

  /* Update for UnitDelay: '<S227>/UD'
   *
   * Block description for '<S227>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S221>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S239>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ia;

  /* Update for UnitDelay: '<S238>/UD'
   *
   * Block description for '<S238>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S224>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_m;

  /* Update for UnitDelay: '<S249>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_cc;

  /* Update for UnitDelay: '<S248>/UD'
   *
   * Block description for '<S248>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract_jj;

  /* Update for UnitDelay: '<S242>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract_pa;

  /* Update for UnitDelay: '<S260>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_f;

  /* Update for UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Add_l;

  /* Update for UnitDelay: '<S245>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_l2j;

  /* Update for UnitDelay: '<S270>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_at;

  /* Update for UnitDelay: '<S269>/UD'
   *
   * Block description for '<S269>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S263>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Integral_h;

  /* Update for UnitDelay: '<S281>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add2_k_idx_1;

  /* Update for UnitDelay: '<S280>/UD'
   *
   * Block description for '<S280>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_ei;

  /* Update for UnitDelay: '<S52>/Delay Input1'
   *
   * Block description for '<S52>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = Compare_f;

  /* Update for UnitDelay: '<S42>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S51>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S51>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S51>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S26>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Subtract1_ak;

  /* Update for UnitDelay: '<S35>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S35>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S35>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Subtract1_ak;

  /* Update for UnitDelay: '<S147>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_cd;

  /* Update for UnitDelay: '<S147>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Init;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    real_T Constant;
    real_T Constant1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S19>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S84>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S315>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S332>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S325>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S51>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S35>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S395>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S19>/Spline Path Following Enabled' */
    /* Start for If: '<S156>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S156>/Robot_Index_Is_Valid' */
    /* Start for If: '<S159>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S159>/Circle_Check_Valid' */
    /* Start for If: '<S161>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S159>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S156>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S19>/Spline Path Following Enabled' */
  }
}

/* Model terminate function */
void Code_Gen_Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
