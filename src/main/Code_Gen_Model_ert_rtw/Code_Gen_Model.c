/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.285
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Feb 25 21:07:39 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "Code_Gen_Model_private.h"
#include "rt_defines.h"
#include <float.h>

/* Named constants for Chart: '<S17>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S357>/Reefscape_Chart' */
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
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S355>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S355>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S355>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S355>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S355>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S355>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S355>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S355>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S355>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S355>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S355>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S355>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S355>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S355>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S355>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S355>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S355>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S355>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S355>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S355>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S355>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S355>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S355>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S355>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S359>/Gain2'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S372>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S368>/Constant'
                                        *   '<S368>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S372>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S368>/Constant1'
                                        */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S357>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 50.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Neg_Threshold = -88.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S24>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by: '<S357>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S25>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S26>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S26>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S26>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S26>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S26>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 0.4;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T Coral_Detect_Distance = 60.0;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.65;   /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S295>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S211>/Constant3'
                                        *   '<S232>/Constant3'
                                        *   '<S253>/Constant3'
                                        *   '<S274>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S211>/Constant2'
                                   *   '<S232>/Constant2'
                                   *   '<S253>/Constant2'
                                   *   '<S274>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S211>/Saturation'
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S211>/Saturation'
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S211>/Gain'
                                            *   '<S232>/Gain'
                                            *   '<S253>/Gain'
                                            *   '<S274>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S211>/Gain2'
                                        *   '<S232>/Gain2'
                                        *   '<S253>/Gain2'
                                        *   '<S274>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S211>/Saturation1'
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S211>/Saturation1'
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S211>/Gain1'
                                        *   '<S232>/Gain1'
                                        *   '<S253>/Gain1'
                                        *   '<S274>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S216>/Constant'
                            *   '<S237>/Constant'
                            *   '<S258>/Constant'
                            *   '<S279>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S41>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S38>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S42>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S42>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 19.0;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S357>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 11.0;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S357>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 2.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by: '<S357>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S23>/Constant'
                                */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S39>/Constant'
                                     *   '<S357>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 26.125;    /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 6.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by: '<S357>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 6.8;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 12.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top = 28.0;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S357>/Reefscape_Chart'
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
                                        * Referenced by: '<S42>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S42>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S42>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.25;      /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S42>/Constant1'
                                        *   '<S42>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S42>/Constant'
                                        *   '<S42>/Saturation2'
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
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S16>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S137>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S196>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S196>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S143>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S156>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S196>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S307>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S307>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S307>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S307>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S307>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S307>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S324>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S324>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S324>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S324>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S323>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S324>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S324>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S324>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S324>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S324>/Constant1'
                                   *   '<S324>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S324>/Constant'
                                   *   '<S324>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S214>/Constant3'
                                        *   '<S235>/Constant3'
                                        *   '<S256>/Constant3'
                                        *   '<S277>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S214>/Constant2'
                                *   '<S235>/Constant2'
                                *   '<S256>/Constant2'
                                *   '<S277>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S214>/Saturation'
                                           *   '<S235>/Saturation'
                                           *   '<S256>/Saturation'
                                           *   '<S277>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S214>/Saturation'
                                          *   '<S235>/Saturation'
                                          *   '<S256>/Saturation'
                                          *   '<S277>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S214>/Gain2'
                                         *   '<S235>/Gain2'
                                         *   '<S256>/Gain2'
                                         *   '<S277>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S214>/Saturation1'
                                             *   '<S235>/Saturation1'
                                             *   '<S256>/Saturation1'
                                             *   '<S277>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S214>/Saturation1'
                                            *   '<S235>/Saturation1'
                                            *   '<S256>/Saturation1'
                                            *   '<S277>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S214>/Gain1'
                                        *   '<S235>/Gain1'
                                        *   '<S256>/Gain1'
                                        *   '<S277>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S306>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S306>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S306>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S306>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S306>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S306>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S358>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S358>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S21>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S21>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S21>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S294>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S294>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S294>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S294>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S294>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S294>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S359>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S358>/Dead Zone'
                                        *   '<S359>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S358>/Dead Zone'
                                        *   '<S359>/Dead Zone'
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(void)
{
  if ((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_B.FixPtRelationalOperator))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if (*FixPtRelationalOperator_l) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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

/* Function for Chart: '<S357>/Reefscape_Chart' */
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
  real_T rtb_thetay_n_0[8];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_gd;
  real_T rtb_Add_gj;
  real_T rtb_Add_i;
  real_T rtb_Add_o2;
  real_T rtb_Add_oh;
  real_T rtb_Add_ov;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_a;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_Product2_e2;
  real_T rtb_Product2_i;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Sin4;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract_e;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch2;
  real_T rtb_Switch2_k;
  real_T rtb_Switch2_n;
  real_T rtb_Switch4;
  real_T rtb_Switch_jh;
  real_T rtb_Uk1_iw;
  real_T rtb_rx;
  real_T rtb_rx_c;
  real_T rtb_rx_g;
  real_T rtb_rx_kh;
  real_T rtb_thetay;
  real_T rtb_thetay_a;
  real_T rtb_thetay_i;
  real_T rtb_thetay_n;
  real_T tmp;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T FixPtRelationalOperator_i;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_AT_Target_Enable;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_at;
  boolean_T rtb_Compare_cu;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_FixPtRelationalOperator_m;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* RelationalOperator: '<S71>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S72>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S72>/Delay Input1'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S73>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

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

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
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

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S74>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
   *  Sum: '<S14>/Add'
   *  Sum: '<S14>/Add1'
   */
  rtb_Reshapey_idx_0 = (((((Code_Gen_Model_U.Photon_Est_Pose_X +
    Code_Gen_Model_DW.TappedDelay_X[0]) + Code_Gen_Model_DW.TappedDelay_X[1]) +
    Code_Gen_Model_DW.TappedDelay_X[2]) + Code_Gen_Model_DW.TappedDelay_X[3]) +
                        Code_Gen_Model_DW.TappedDelay_X[4]) +
    Code_Gen_Model_DW.TappedDelay_X[5];
  rtb_Reshapey_idx_1 = (((((Code_Gen_Model_U.Photon_Est_Pose_Y +
    Code_Gen_Model_DW.TappedDelay1_X[0]) + Code_Gen_Model_DW.TappedDelay1_X[1])
    + Code_Gen_Model_DW.TappedDelay1_X[2]) + Code_Gen_Model_DW.TappedDelay1_X[3])
                        + Code_Gen_Model_DW.TappedDelay1_X[4]) +
    Code_Gen_Model_DW.TappedDelay1_X[5];

  /* Delay: '<S74>/MemoryX' incorporates:
   *  Constant: '<S74>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S101>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S127>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S127>/Add1' incorporates:
     *  Constant: '<S74>/C'
     *  Delay: '<S74>/MemoryX'
     *  Product: '<S127>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Uk1_iw = rtb_Reshapey_idx_1 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
      + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S127>/Product2' incorporates:
     *  Constant: '<S75>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Uk1_iw);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Uk1_iw);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S127>/Product2' incorporates:
     *  Outport: '<S127>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S101>/Enabled Subsystem' */

  /* Sum: '<S101>/Add' incorporates:
   *  Delay: '<S74>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S16>/Accumulator2' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S16>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S14>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S14>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S14>/Switch' */

  /* DiscreteIntegrator: '<S16>/Accumulator' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S16>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S14>/Switch1' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  Sum: '<S11>/Sum'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
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

  /* Gain: '<S56>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* RelationalOperator: '<S58>/Compare' incorporates:
   *  Constant: '<S58>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
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
   *  RelationalOperator: '<S53>/FixPt Relational Operator'
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  Switch: '<S10>/Switch2'
   *  Switch: '<S10>/Switch3'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S53>/Delay Input1'
   *  UnitDelay: '<S54>/Delay Input1'
   *  UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S55>/Delay Input1':
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
  tmp = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(tmp)) || (rtIsInf(tmp))) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  switch ((tmp < 0.0) ? (-((int32_T)((uint32_T)(-tmp)))) : ((int32_T)((uint32_T)
            tmp))) {
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
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  SignalConversion generated from: '<S8>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  SignalConversion generated from: '<S8>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S8>/Constant3'
     *  SignalConversion generated from: '<S8>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S8>/Constant4'
     *  SignalConversion generated from: '<S8>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S8>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S8>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S8>/Constant7'
     *  SignalConversion generated from: '<S8>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S8>/Constant9'
     *  SignalConversion generated from: '<S8>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S8>/Constant10'
     *  SignalConversion generated from: '<S8>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S8>/Enable_Wheels' incorporates:
     *  Constant: '<S8>/Constant18'
     */
    rtb_rx_g = 0.0;

    /* SignalConversion generated from: '<S8>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S8>/Constant13'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S8>/Disable_Wheels' incorporates:
     *  Constant: '<S8>/Constant14'
     */
    rtb_Uk1_iw = 0.0;

    /* SignalConversion generated from: '<S8>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S8>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S8>/Constant15'
     *  SignalConversion generated from: '<S8>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S8>/Constant11'
     *  SignalConversion generated from: '<S8>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S8>/Constant16'
     *  SignalConversion generated from: '<S8>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S8>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant17'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant19'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_thetay_n = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
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
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S2>/Constant9'
     *  SignalConversion generated from: '<S2>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S2>/Constant8'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S2>/Constant5'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    rtb_rx_g = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Uk1_iw = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S2>/Constant12'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S2>/Constant11'
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S2>/Constant17'
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant18'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant19'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant20'
     */
    rtb_thetay_n = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
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
       *  ActionPort: '<S21>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S355>/Unit Delay'
       *  UnitDelay: '<S355>/Unit Delay1'
       *  UnitDelay: '<S358>/Unit Delay1'
       *  UnitDelay: '<S358>/Unit Delay2'
       *  UnitDelay: '<S358>/Unit Delay3'
       *  UnitDelay: '<S358>/Unit Delay4'
       *  UnitDelay: '<S361>/Delay Input1'
       *  UnitDelay: '<S362>/Delay Input1'
       *  UnitDelay: '<S363>/Delay Input1'
       *  UnitDelay: '<S364>/Delay Input1'
       *  UnitDelay: '<S365>/Delay Input1'
       *  UnitDelay: '<S366>/Delay Input1'
       *  UnitDelay: '<S371>/Unit Delay'
       *  UnitDelay: '<S371>/Unit Delay1'
       *  UnitDelay: '<S375>/FixPt Unit Delay1'
       *  UnitDelay: '<S375>/FixPt Unit Delay2'
       *  UnitDelay: '<S378>/Delay Input1'
       *  UnitDelay: '<S379>/Delay Input1'
       *  UnitDelay: '<S380>/Delay Input1'
       *  UnitDelay: '<S381>/Delay Input1'
       *  UnitDelay: '<S382>/Delay Input1'
       *  UnitDelay: '<S383>/Delay Input1'
       *  UnitDelay: '<S384>/Delay Input1'
       *  UnitDelay: '<S385>/Delay Input1'
       *  UnitDelay: '<S386>/Delay Input1'
       *  UnitDelay: '<S387>/Delay Input1'
       *  UnitDelay: '<S388>/Delay Input1'
       *  UnitDelay: '<S389>/Delay Input1'
       *  UnitDelay: '<S390>/Delay Input1'
       *
       * Block description for '<S361>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S362>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S363>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S364>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S365>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S366>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S378>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S379>/Delay Input1':
       *
       *  Store in Global RAM
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
       * Block description for '<S386>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S387>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S388>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S389>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S390>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ho = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_e = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S357>/Reefscape_Chart'
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

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* Logic: '<S355>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S355>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S355>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S355>/Switch15' incorporates:
     *  Switch: '<S355>/Switch16'
     *  Switch: '<S355>/Switch23'
     *  Switch: '<S355>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S355>/Switch15' incorporates:
       *  Constant: '<S355>/Constant9'
       *  Sum: '<S355>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S355>/Switch23' incorporates:
       *  Constant: '<S355>/Constant28'
       *  Sum: '<S355>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S355>/Switch15' incorporates:
       *  Constant: '<S355>/Constant5'
       *  Sum: '<S355>/Add16'
       *  Switch: '<S355>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S355>/Switch23' incorporates:
       *  Constant: '<S355>/Constant27'
       *  Sum: '<S355>/Add22'
       *  Switch: '<S355>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S355>/Switch15' incorporates:
       *  Constant: '<S355>/Constant1'
       *  Switch: '<S355>/Switch1'
       *  Switch: '<S355>/Switch12'
       *  Switch: '<S355>/Switch13'
       *  Switch: '<S355>/Switch14'
       *  Switch: '<S355>/Switch16'
       *  Switch: '<S355>/Switch17'
       *  Switch: '<S355>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S355>/Switch23' incorporates:
       *  Constant: '<S355>/Constant2'
       *  Switch: '<S355>/Switch19'
       *  Switch: '<S355>/Switch20'
       *  Switch: '<S355>/Switch21'
       *  Switch: '<S355>/Switch22'
       *  Switch: '<S355>/Switch24'
       *  Switch: '<S355>/Switch25'
       *  Switch: '<S355>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S355>/Switch15' */

    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S376>/Constant'
     *  Constant: '<S377>/Constant'
     *  Logic: '<S371>/AND'
     *  RelationalOperator: '<S376>/Compare'
     *  RelationalOperator: '<S377>/Compare'
     *  Switch: '<S371>/Switch2'
     *  UnitDelay: '<S371>/Unit Delay'
     *  UnitDelay: '<S371>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S371>/Switch1' */

    /* Lookup_n-D: '<S359>/Modulation_Drv' incorporates:
     *  Math: '<S359>/Magnitude'
     */
    rtb_thetay = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S369>/Compare' incorporates:
     *  Constant: '<S369>/Constant'
     */
    rtb_Compare_at = (rtb_thetay == 0.0);

    /* DeadZone: '<S359>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_rx = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_rx = 0.0;
    } else {
      rtb_rx = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S359>/Dead Zone' */

    /* Logic: '<S359>/Logical Operator' incorporates:
     *  Constant: '<S370>/Constant'
     *  RelationalOperator: '<S370>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_rx != 0.0) && rtb_Compare_at);

    /* Switch: '<S359>/Switch1' incorporates:
     *  Switch: '<S359>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S359>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S359>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S359>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S359>/Switch5' */
    } else if (rtb_Compare_at) {
      /* Switch: '<S359>/Switch6' incorporates:
       *  Constant: '<S359>/Constant'
       *  Constant: '<S359>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S359>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        tmp = 0.0;
      } else {
        tmp = 3.1415926535897931;
      }

      /* Merge: '<S15>/Merge3' incorporates:
       *  Sum: '<S359>/Add1'
       *  Switch: '<S359>/Switch4'
       *  Switch: '<S359>/Switch6'
       *  Trigonometry: '<S359>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + tmp;
    } else {
      /* Merge: '<S15>/Merge3' incorporates:
       *  Switch: '<S359>/Switch4'
       *  Trigonometry: '<S359>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S359>/Switch1' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant5'
     *  Constant: '<S21>/Constant7'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Switch: '<S359>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S21>/Switch' */

    /* DeadZone: '<S358>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      tmp = 0.0;
    } else {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S358>/Add' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S358>/Constant1'
     *  DeadZone: '<S358>/Dead Zone'
     *  Lookup_n-D: '<S358>/Modulation_Str_Y_Rel'
     *  Product: '<S358>/Product'
     *  Product: '<S358>/Product1'
     *  SignalConversion: '<S12>/Signal Copy5'
     */
    rtb_thetay_n = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                    Steering_Relative_Gain) + (tmp * Steering_Twist_Gain);

    /* RelationalOperator: '<S360>/Compare' incorporates:
     *  Constant: '<S360>/Constant'
     */
    rtb_Compare_cu = (rtb_thetay_n == 0.0);

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S21>/Constant5'
     *  Constant: '<S21>/Constant8'
     *  DataTypeConversion: '<S21>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_Compare_cu;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Logic: '<S355>/Logical Operator11' */
    rtb_AT_Target_Enable = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S365>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S365>/Delay Input1'
     *
     * Block description for '<S365>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (((int32_T)rtb_AT_Target_Enable) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S358>/AND2' incorporates:
     *  RelationalOperator: '<S361>/FixPt Relational Operator'
     *  RelationalOperator: '<S362>/FixPt Relational Operator'
     *  RelationalOperator: '<S363>/FixPt Relational Operator'
     *  RelationalOperator: '<S364>/FixPt Relational Operator'
     *  UnitDelay: '<S361>/Delay Input1'
     *  UnitDelay: '<S362>/Delay Input1'
     *  UnitDelay: '<S363>/Delay Input1'
     *  UnitDelay: '<S364>/Delay Input1'
     *
     * Block description for '<S361>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S362>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S363>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S364>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S358>/AND1' incorporates:
     *  Logic: '<S358>/AND3'
     *  Logic: '<S358>/AND7'
     *  UnitDelay: '<S358>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_Compare_cu && (!rtb_FixPtRelationalOperator_m)) &&
                (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S358>/AND4' incorporates:
     *  Logic: '<S358>/AND5'
     *  Logic: '<S358>/AND8'
     *  UnitDelay: '<S358>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_m = ((rtb_Compare_cu && (!rtb_AND2)) &&
      (rtb_FixPtRelationalOperator_m || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S358>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_m);

    /* Switch: '<S358>/Switch8' incorporates:
     *  Constant: '<S367>/Constant'
     *  Logic: '<S358>/AND9'
     *  RelationalOperator: '<S366>/FixPt Relational Operator'
     *  RelationalOperator: '<S367>/Compare'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S366>/Delay Input1'
     *
     * Block description for '<S366>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_Compare_cu) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp)))
        || (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S358>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S358>/Switch8' incorporates:
       *  UnitDelay: '<S358>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S358>/Switch8' */

    /* Switch: '<S358>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S358>/Switch2' incorporates:
       *  Constant: '<S358>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S358>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S358>/Switch2' */

    /* Logic: '<S355>/Logical Operator' incorporates:
     *  Logic: '<S355>/Logical Operator1'
     *  Logic: '<S355>/Logical Operator13'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_DW.UnitDelay_DSTATE_ho)));

    /* Switch: '<S355>/Switch2' incorporates:
     *  Switch: '<S355>/Switch4'
     *  Switch: '<S355>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S355>/Switch2' incorporates:
       *  Constant: '<S21>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S355>/Switch4' incorporates:
       *  Constant: '<S355>/Constant14'
       *  Switch: '<S355>/Switch2'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S355>/Switch5' incorporates:
       *  Constant: '<S355>/Constant13'
       *  Switch: '<S355>/Switch2'
       *  Switch: '<S355>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    } else {
      /* Switch: '<S355>/Switch2' incorporates:
       *  Switch: '<S355>/Switch10'
       *  Switch: '<S355>/Switch4'
       *  Switch: '<S355>/Switch5'
       *  Switch: '<S355>/Switch6'
       *  Switch: '<S355>/Switch7'
       *  Switch: '<S355>/Switch8'
       *  Switch: '<S355>/Switch9'
       *  UnitDelay: '<S355>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Target_Angle = Code_Gen_Model_DW.UnitDelay1_DSTATE_e;
    }

    /* End of Switch: '<S355>/Switch2' */

    /* Switch: '<S358>/Switch4' incorporates:
     *  Constant: '<S358>/Constant5'
     *  Switch: '<S358>/Switch1'
     *  Switch: '<S358>/Switch5'
     *  Switch: '<S358>/Switch6'
     *  Switch: '<S358>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S358>/Switch5' incorporates:
       *  Constant: '<S358>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S358>/Switch6' incorporates:
       *  Constant: '<S358>/Constant7'
       *  Switch: '<S358>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S358>/Switch7' incorporates:
       *  Constant: '<S358>/Constant8'
       *  Switch: '<S358>/Switch5'
       *  Switch: '<S358>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_m) {
      /* Switch: '<S358>/Switch1' incorporates:
       *  Switch: '<S358>/Switch5'
       *  Switch: '<S358>/Switch6'
       *  Switch: '<S358>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S358>/Switch6' incorporates:
       *  Switch: '<S358>/Switch5'
       *  Switch: '<S358>/Switch7'
       *  UnitDelay: '<S358>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S358>/Switch4' */

    /* Switch: '<S358>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S358>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S358>/Switch3' incorporates:
       *  Constant: '<S358>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S358>/Switch3' */

    /* Merge: '<S15>/Merge1' incorporates:
     *  Sum: '<S358>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion: '<S358>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_thetay_n;

    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S368>/Constant'
     *  Constant: '<S368>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Uk1_iw = Boost_Trigger_High_Speed;
    } else {
      rtb_Uk1_iw = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Switch: '<S375>/Init' incorporates:
     *  UnitDelay: '<S375>/FixPt Unit Delay1'
     *  UnitDelay: '<S375>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay_n = rtb_Uk1_iw;
    } else {
      rtb_thetay_n = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S375>/Init' */

    /* Sum: '<S373>/Sum1' */
    rtb_Uk1_iw -= rtb_thetay_n;

    /* Switch: '<S374>/Switch2' incorporates:
     *  Constant: '<S372>/Constant1'
     *  Constant: '<S372>/Constant3'
     *  RelationalOperator: '<S374>/LowerRelop1'
     *  RelationalOperator: '<S374>/UpperRelop'
     *  Switch: '<S374>/Switch'
     */
    if (rtb_Uk1_iw > Boost_Trigger_Increasing_Limit) {
      rtb_Uk1_iw = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Uk1_iw < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S374>/Switch' incorporates:
       *  Constant: '<S372>/Constant1'
       */
      rtb_Uk1_iw = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S374>/Switch2' */

    /* Sum: '<S373>/Sum' */
    rtb_Sum_jt = rtb_Uk1_iw + rtb_thetay_n;

    /* Switch: '<S359>/Switch' incorporates:
     *  Switch: '<S359>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S359>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_rx;
    } else if (rtb_Compare_at) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S359>/Gain2'
       *  Math: '<S359>/Magnitude1'
       *  Switch: '<S359>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S368>/Product' incorporates:
       *  Switch: '<S359>/Switch2'
       */
      rtb_Add_ov = rtb_thetay * rtb_Sum_jt;

      /* Saturate: '<S368>/Saturation' incorporates:
       *  Switch: '<S359>/Switch2'
       */
      if (rtb_Add_ov > Boost_Trigger_High_Speed) {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Add_ov < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Add_ov;
      }

      /* End of Saturate: '<S368>/Saturation' */
    }

    /* End of Switch: '<S359>/Switch' */

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S21>/Constant3'
     *  SignalConversion generated from: '<S21>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S21>/Constant9'
     *  SignalConversion generated from: '<S21>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S21>/Constant1'
     *  SignalConversion generated from: '<S21>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S21>/Enable_Wheels' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    rtb_rx_g = 0.0;

    /* SignalConversion generated from: '<S21>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S21>/Constant13'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S21>/Disable_Wheels' incorporates:
     *  Constant: '<S21>/Constant14'
     */
    rtb_Uk1_iw = 0.0;

    /* SignalConversion generated from: '<S21>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S357>/Constant5'
     *  SignalConversion generated from: '<S21>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* RelationalOperator: '<S378>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S378>/Delay Input1'
     *
     * Block description for '<S378>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S379>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S379>/Delay Input1'
     *
     * Block description for '<S379>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S383>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S384>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S384>/Delay Input1'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S385>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_Tag_5_Active = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S380>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S380>/Delay Input1'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Compare_at = (Code_Gen_Model_U.Gamepad_Back >
                      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S386>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S386>/Delay Input1'
     *
     * Block description for '<S386>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Relative_Translation_Flag = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd);

    /* RelationalOperator: '<S390>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S390>/Delay Input1'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = (Code_Gen_Model_U.Gamepad_RT >
                Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S387>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S387>/Delay Input1'
     *
     * Block description for '<S387>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_i = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Up) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S388>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S388>/Delay Input1'
     *
     * Block description for '<S388>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_m = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx));

    /* RelationalOperator: '<S381>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S381>/Delay Input1'
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ji = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S382>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S382>/Delay Input1'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

    /* DeadZone: '<S357>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S357>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S357>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S357>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S357>/Dead Zone' */

    /* DeadZone: '<S357>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S357>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S357>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S357>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S357>/Dead Zone1' */

    /* Chart: '<S357>/Reefscape_Chart' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S389>/FixPt Relational Operator'
     *  UnitDelay: '<S389>/Delay Input1'
     *
     * Block description for '<S389>/Delay Input1':
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

      /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
      rtb_rx = 0.0;

      /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
      rtb_thetay_n = 0.0;
    } else {
      Co_Elevator_CoralArm_CoralWheel(&Compare, &Compare_f, &rtb_AT_Tag_5_Active,
        &rtb_Compare_at, &rtb_Relative_Translation_Flag,
        &FixPtRelationalOperator_i);
      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx = Algae_Hold_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = Algae_Hold_DC;
        if (rtb_AND2) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = Algae_Hold_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = Algae_Hold_DC;
        } else if (rtb_AND2) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = 0.0;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = 0.0;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_rx = 0.0;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = Algae_Pull_In_DC;
        }
        break;
      }
    }

    /* End of Chart: '<S357>/Reefscape_Chart' */

    /* Merge: '<S15>/Merge13' incorporates:
     *  SignalConversion generated from: '<S21>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S21>/Coral_Pickup_Lower_Wait_State' */
    Compare = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S21>/Coral_Wheel_DutyCycle' */
    rtb_thetay = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S15>/Merge11' incorporates:
     *  SignalConversion generated from: '<S21>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Merge: '<S15>/Merge21' incorporates:
     *  SignalConversion generated from: '<S21>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Update for UnitDelay: '<S371>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S371>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S366>/Delay Input1'
     *
     * Block description for '<S366>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_Compare_cu;

    /* Update for UnitDelay: '<S365>/Delay Input1'
     *
     * Block description for '<S365>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_AT_Target_Enable;

    /* Update for UnitDelay: '<S361>/Delay Input1'
     *
     * Block description for '<S361>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S362>/Delay Input1'
     *
     * Block description for '<S362>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S363>/Delay Input1'
     *
     * Block description for '<S363>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S364>/Delay Input1'
     *
     * Block description for '<S364>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S358>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S358>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_m;

    /* Update for UnitDelay: '<S358>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ho =
      Code_Gen_Model_B.previous_call_was_for_speaker;

    /* Update for UnitDelay: '<S355>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e = Code_Gen_Model_B.AT_Target_Angle;

    /* Update for UnitDelay: '<S358>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* Update for UnitDelay: '<S375>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S375>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S375>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum_jt;

    /* Update for UnitDelay: '<S378>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S378>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S379>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S379>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S383>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S384>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S385>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S380>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S386>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S386>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S389>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S389>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S390>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S387>/Delay Input1'
     *
     * Block description for '<S387>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S388>/Delay Input1'
     *
     * Block description for '<S388>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_fx = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S381>/Delay Input1'
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S382>/Delay Input1'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S22>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S22>/Constant1'
     *  SignalConversion generated from: '<S22>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S22>/Constant2'
     *  SignalConversion generated from: '<S22>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S22>/Constant3'
     *  SignalConversion generated from: '<S22>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S22>/Constant4'
     *  SignalConversion generated from: '<S22>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S22>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S22>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S22>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S22>/Constant7'
     *  SignalConversion generated from: '<S22>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S22>/Constant9'
     *  SignalConversion generated from: '<S22>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S22>/Constant12'
     *  SignalConversion generated from: '<S22>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S22>/Constant14'
     *  Switch: '<S22>/Switch1'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (Code_Gen_Model_B.Button_Enable_Wheels) {
      /* Switch: '<S22>/Switch1' incorporates:
       *  Constant: '<S22>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S22>/Switch' */

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S22>/Constant11'
     *  SignalConversion generated from: '<S22>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S22>/Constant10'
     *  SignalConversion generated from: '<S22>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S22>/Constant15'
     *  SignalConversion generated from: '<S22>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S22>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant16'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant17'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant18'
     */
    rtb_thetay_n = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S22>/Constant19'
     *  SignalConversion generated from: '<S22>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S22>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S22>/Constant20'
     */
    Compare = false;

    /* DataTypeConversion: '<S22>/Cast To Boolean1' */
    rtb_rx_g = Code_Gen_Model_B.Button_Enable_Wheels;

    /* DataTypeConversion: '<S22>/Cast To Boolean3' */
    rtb_Uk1_iw = Code_Gen_Model_B.Button_Disable_Wheels;

    /* DataTypeConversion: '<S22>/Cast To Boolean2' */
    rtb_thetay_a = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S22>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch1_p2 = 0.0;
  } else {
    rtb_Switch1_p2 = 3.1415926535897931;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S11>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch1_p2;

  /* If: '<S18>/If' incorporates:
   *  Constant: '<S140>/Constant'
   *  Merge: '<S18>/Merge'
   *  Merge: '<S18>/Merge1'
   *  Merge: '<S18>/Merge2'
   *  Merge: '<S18>/Merge3'
   *  Merge: '<S18>/Merge4'
   *  Merge: '<S18>/Merge5'
   *  Merge: '<S18>/Merge7'
   *  Merge: '<S18>/Merge8'
   *  SignalConversion generated from: '<S140>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S146>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S149>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S151>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S149>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S146>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S18>/Pass Through' incorporates:
   *  ActionPort: '<S140>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S18>/If' */
  /* End of Outputs for SubSystem: '<S18>/Pass Through' */

  /* Signum: '<S294>/Sign2' incorporates:
   *  UnitDelay: '<S294>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S294>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Translation_Speed_SPF >
      0.0);
  }

  /* Product: '<S294>/Product1' incorporates:
   *  Signum: '<S294>/Sign1'
   *  Signum: '<S294>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S294>/Switch' incorporates:
   *  Constant: '<S294>/Constant'
   *  Constant: '<S299>/Constant'
   *  Constant: '<S300>/Constant'
   *  Logic: '<S294>/or'
   *  Product: '<S294>/Product1'
   *  RelationalOperator: '<S299>/Compare'
   *  RelationalOperator: '<S300>/Compare'
   *  UnitDelay: '<S294>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((rtb_Num_Segments < 0)
        ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_c = 0.0;
  }

  /* End of Switch: '<S294>/Switch' */

  /* RelationalOperator: '<S301>/Compare' incorporates:
   *  Constant: '<S301>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_c == 0.0);

  /* RelationalOperator: '<S302>/Compare' incorporates:
   *  Constant: '<S302>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_c > 0.0);

  /* Abs: '<S294>/Abs' incorporates:
   *  Sum: '<S294>/Subtract'
   *  UnitDelay: '<S294>/Unit Delay'
   */
  rtb_Switch2 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                     Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S294>/Switch5' incorporates:
   *  Constant: '<S294>/Constant1'
   *  Switch: '<S294>/Switch1'
   *  UnaryMinus: '<S294>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S294>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S294>/Constant4'
     *  Constant: '<S294>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S294>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S294>/Constant2'
     *  Constant: '<S294>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S294>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S294>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Switch2, &rtb_Minus_n[0], 1U);
    rtb_Switch2 = rtb_LookupTableDynamic_j;
    tmp = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S294>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S294>/Constant10'
     *  Constant: '<S294>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S294>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S294>/Constant7'
     *  Constant: '<S294>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S294>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S294>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Switch2, &rtb_Minus_n[0], 1U);
    rtb_Switch2 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S294>/Switch3' incorporates:
     *  Constant: '<S294>/Constant1'
     *  Constant: '<S294>/Constant3'
     *  UnaryMinus: '<S294>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Translation_Speed_Rate_Limit_Inc;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S294>/Switch3' */
  }

  /* End of Switch: '<S294>/Switch5' */

  /* Product: '<S294>/Product' incorporates:
   *  Switch: '<S294>/Switch1'
   */
  rtb_Merge1 = tmp * rtb_Switch2;

  /* Switch: '<S305>/Init' incorporates:
   *  UnitDelay: '<S305>/FixPt Unit Delay1'
   *  UnitDelay: '<S305>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Switch4 = rtb_rx_c;
  } else {
    rtb_Switch4 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S305>/Init' */

  /* Sum: '<S303>/Sum1' */
  rtb_Sum_jt = rtb_rx_c - rtb_Switch4;

  /* Switch: '<S304>/Switch2' incorporates:
   *  RelationalOperator: '<S304>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_Merge1)) {
    /* Switch: '<S294>/Switch2' incorporates:
     *  Constant: '<S294>/Constant1'
     *  Constant: '<S294>/Constant3'
     *  Switch: '<S294>/Switch4'
     *  UnaryMinus: '<S294>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S294>/Switch4' incorporates:
       *  Constant: '<S294>/Constant1'
       */
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S294>/Product2' incorporates:
     *  Switch: '<S294>/Switch2'
     */
    rtb_Merge1 = tmp * rtb_Switch2;

    /* Switch: '<S304>/Switch' incorporates:
     *  RelationalOperator: '<S304>/UpperRelop'
     */
    if (!(rtb_Sum_jt < rtb_Merge1)) {
      rtb_Merge1 = rtb_Sum_jt;
    }

    /* End of Switch: '<S304>/Switch' */
  }

  /* End of Switch: '<S304>/Switch2' */

  /* Sum: '<S303>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Merge1 + rtb_Switch4;

  /* Switch: '<S297>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S329>/Constant3'
     *  Constant: '<S329>/Constant4'
     *  Math: '<S329>/Math Function'
     *  Sum: '<S297>/Subtract'
     *  Sum: '<S329>/Add1'
     *  Sum: '<S329>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S297>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Sum: '<S325>/Add1' incorporates:
   *  Constant: '<S325>/Constant3'
   *  Constant: '<S325>/Constant4'
   *  Math: '<S325>/Math Function'
   *  Sum: '<S324>/Sum'
   *  Sum: '<S325>/Add2'
   */
  rtb_Switch4 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S327>/Sum1' incorporates:
   *  Constant: '<S324>/Constant2'
   *  Product: '<S327>/Product'
   *  Sum: '<S327>/Sum'
   *  UnitDelay: '<S327>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S324>/Product' incorporates:
   *  Constant: '<S324>/Constant3'
   */
  rtb_Switch2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S326>/Diff' incorporates:
   *  UnitDelay: '<S326>/UD'
   *
   * Block description for '<S326>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S326>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Switch2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S324>/Saturation' */
  if (rtb_Add_ov > Steering_Heading_Control_D_UL) {
    rtb_Add_ov = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Heading_Control_D_LL) {
    rtb_Add_ov = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S324>/Add' incorporates:
   *  Gain: '<S324>/Gain1'
   *  Saturate: '<S324>/Saturation'
   */
  rtb_Sum_jt = (Steering_Heading_Control_P * rtb_Switch4) + rtb_Add_ov;

  /* Sum: '<S324>/Subtract' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_Sin4 = Steering_Heading_Control_Total_UL - rtb_Sum_jt;

  /* Sum: '<S324>/Sum2' incorporates:
   *  Gain: '<S324>/Gain2'
   *  UnitDelay: '<S324>/Unit Delay'
   */
  rtb_Switch4 = (Steering_Heading_Control_I * rtb_Switch4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S328>/Switch2' incorporates:
   *  RelationalOperator: '<S328>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Sin4)) {
    /* Sum: '<S324>/Subtract1' incorporates:
     *  Constant: '<S324>/Constant1'
     */
    rtb_Switch2_n = Steering_Heading_Control_Total_LL - rtb_Sum_jt;

    /* Switch: '<S328>/Switch' incorporates:
     *  RelationalOperator: '<S328>/UpperRelop'
     */
    if (rtb_Switch4 < rtb_Switch2_n) {
      rtb_Sin4 = rtb_Switch2_n;
    } else {
      rtb_Sin4 = rtb_Switch4;
    }

    /* End of Switch: '<S328>/Switch' */
  }

  /* End of Switch: '<S328>/Switch2' */

  /* Saturate: '<S324>/Saturation1' */
  if (rtb_Sin4 > Steering_Heading_Control_I_UL) {
    rtb_Switch4 = Steering_Heading_Control_I_UL;
  } else if (rtb_Sin4 < Steering_Heading_Control_I_LL) {
    rtb_Switch4 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch4 = rtb_Sin4;
  }

  /* End of Saturate: '<S324>/Saturation1' */

  /* Sum: '<S324>/Add1' */
  rtb_Add_ov = rtb_Sum_jt + rtb_Switch4;

  /* Saturate: '<S324>/Saturation2' */
  if (rtb_Add_ov > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S324>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ov < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S324>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S324>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ov;
  }

  /* End of Saturate: '<S324>/Saturation2' */

  /* Switch: '<S308>/Switch' incorporates:
   *  Abs: '<S308>/Abs'
   *  Constant: '<S308>/Constant'
   *  Constant: '<S323>/Constant'
   *  RelationalOperator: '<S323>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Sin4 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Sin4 = 0.0;
  }

  /* End of Switch: '<S308>/Switch' */

  /* Signum: '<S307>/Sign2' incorporates:
   *  UnitDelay: '<S307>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S307>/Sign1' */
  if (rtIsNaN(rtb_Sin4)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (rtb_Sin4 < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Sin4 > 0.0);
  }

  /* Product: '<S307>/Product1' incorporates:
   *  Signum: '<S307>/Sign1'
   *  Signum: '<S307>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S307>/Switch' incorporates:
   *  Constant: '<S307>/Constant'
   *  Constant: '<S316>/Constant'
   *  Constant: '<S317>/Constant'
   *  Logic: '<S307>/or'
   *  Product: '<S307>/Product1'
   *  RelationalOperator: '<S316>/Compare'
   *  RelationalOperator: '<S317>/Compare'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Switch_jh = rtb_Sin4;
  } else {
    rtb_Switch_jh = 0.0;
  }

  /* End of Switch: '<S307>/Switch' */

  /* RelationalOperator: '<S318>/Compare' incorporates:
   *  Constant: '<S318>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch_jh == 0.0);

  /* RelationalOperator: '<S319>/Compare' incorporates:
   *  Constant: '<S319>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch_jh > 0.0);

  /* Abs: '<S307>/Abs' incorporates:
   *  Sum: '<S307>/Subtract'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Sin4);

  /* Switch: '<S307>/Switch5' incorporates:
   *  Constant: '<S307>/Constant1'
   *  Switch: '<S307>/Switch1'
   *  UnaryMinus: '<S307>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S307>/Constant4'
     *  Constant: '<S307>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S307>/Constant2'
     *  Constant: '<S307>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S307>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S307>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic;
    tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S307>/Constant10'
     *  Constant: '<S307>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S307>/Constant7'
     *  Constant: '<S307>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S307>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S307>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic1;

    /* Switch: '<S307>/Switch3' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant3'
     *  UnaryMinus: '<S307>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S307>/Switch3' */
  }

  /* End of Switch: '<S307>/Switch5' */

  /* Product: '<S307>/Product' incorporates:
   *  Switch: '<S307>/Switch1'
   */
  rtb_Switch2_k = tmp * rtb_Sum_jt;

  /* Switch: '<S322>/Init' incorporates:
   *  UnitDelay: '<S322>/FixPt Unit Delay1'
   *  UnitDelay: '<S322>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Sin4 = rtb_Switch_jh;
  } else {
    rtb_Sin4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S322>/Init' */

  /* Sum: '<S320>/Sum1' */
  rtb_Switch2_n = rtb_Switch_jh - rtb_Sin4;

  /* Switch: '<S321>/Switch2' incorporates:
   *  RelationalOperator: '<S321>/LowerRelop1'
   */
  if (!(rtb_Switch2_n > rtb_Switch2_k)) {
    /* Switch: '<S307>/Switch2' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant3'
     *  Switch: '<S307>/Switch4'
     *  UnaryMinus: '<S307>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S307>/Switch4' incorporates:
       *  Constant: '<S307>/Constant1'
       */
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S307>/Product2' incorporates:
     *  Switch: '<S307>/Switch2'
     */
    rtb_Product2_e2 = tmp * rtb_Sum_jt;

    /* Switch: '<S321>/Switch' incorporates:
     *  RelationalOperator: '<S321>/UpperRelop'
     */
    if (rtb_Switch2_n < rtb_Product2_e2) {
      rtb_Switch2_k = rtb_Product2_e2;
    } else {
      rtb_Switch2_k = rtb_Switch2_n;
    }

    /* End of Switch: '<S321>/Switch' */
  }

  /* End of Switch: '<S321>/Switch2' */

  /* Sum: '<S320>/Sum' */
  rtb_Sum_jt = rtb_Switch2_k + rtb_Sin4;

  /* Signum: '<S306>/Sign2' incorporates:
   *  UnitDelay: '<S306>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S306>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF >
      0.0);
  }

  /* Product: '<S306>/Product1' incorporates:
   *  Signum: '<S306>/Sign1'
   *  Signum: '<S306>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S306>/Switch' incorporates:
   *  Constant: '<S306>/Constant'
   *  Constant: '<S309>/Constant'
   *  Constant: '<S310>/Constant'
   *  Logic: '<S306>/or'
   *  Product: '<S306>/Product1'
   *  RelationalOperator: '<S309>/Compare'
   *  RelationalOperator: '<S310>/Compare'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Switch2_k = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Switch2_k = 0.0;
  }

  /* End of Switch: '<S306>/Switch' */

  /* RelationalOperator: '<S311>/Compare' incorporates:
   *  Constant: '<S311>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_k == 0.0);

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_k > 0.0);

  /* Abs: '<S306>/Abs' incorporates:
   *  Sum: '<S306>/Subtract'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  rtb_Switch2_n = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                       Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S306>/Switch5' incorporates:
   *  Constant: '<S306>/Constant1'
   *  Switch: '<S306>/Switch1'
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S306>/Constant4'
     *  Constant: '<S306>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S306>/Constant2'
     *  Constant: '<S306>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S306>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S306>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Akxhatkk1[0],
                         rtb_Switch2_n, &rtb_Minus_n[0], 1U);
    rtb_Switch2_n = rtb_LookupTableDynamic_p;
    tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S306>/Constant10'
     *  Constant: '<S306>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S306>/Constant7'
     *  Constant: '<S306>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S306>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S306>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Akxhatkk1[0],
                         rtb_Switch2_n, &rtb_Minus_n[0], 1U);
    rtb_Switch2_n = rtb_LookupTableDynamic1_g;

    /* Switch: '<S306>/Switch3' incorporates:
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S306>/Constant3'
     *  UnaryMinus: '<S306>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S306>/Switch3' */
  }

  /* End of Switch: '<S306>/Switch5' */

  /* Product: '<S306>/Product' incorporates:
   *  Switch: '<S306>/Switch1'
   */
  rtb_Sin4 = tmp * rtb_Switch2_n;

  /* Switch: '<S315>/Init' incorporates:
   *  UnitDelay: '<S315>/FixPt Unit Delay1'
   *  UnitDelay: '<S315>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Switch_jh = rtb_Switch2_k;
  } else {
    rtb_Switch_jh = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S315>/Init' */

  /* Sum: '<S313>/Sum1' */
  rtb_Product2_e2 = rtb_Switch2_k - rtb_Switch_jh;

  /* Switch: '<S314>/Switch2' incorporates:
   *  RelationalOperator: '<S314>/LowerRelop1'
   */
  if (!(rtb_Product2_e2 > rtb_Sin4)) {
    /* Switch: '<S306>/Switch2' incorporates:
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S306>/Constant3'
     *  Switch: '<S306>/Switch4'
     *  UnaryMinus: '<S306>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S306>/Switch4' incorporates:
       *  Constant: '<S306>/Constant1'
       */
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S306>/Product2' incorporates:
     *  Switch: '<S306>/Switch2'
     */
    rtb_Product2_i = tmp * rtb_Switch2_n;

    /* Switch: '<S314>/Switch' incorporates:
     *  RelationalOperator: '<S314>/UpperRelop'
     */
    if (rtb_Product2_e2 < rtb_Product2_i) {
      rtb_Sin4 = rtb_Product2_i;
    } else {
      rtb_Sin4 = rtb_Product2_e2;
    }

    /* End of Switch: '<S314>/Switch' */
  }

  /* End of Switch: '<S314>/Switch2' */

  /* Sum: '<S313>/Sum' */
  rtb_Switch2_n = rtb_Sin4 + rtb_Switch_jh;

  /* Switch: '<S296>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S296>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  } else {
    /* Switch: '<S296>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_n;
  }

  /* End of Switch: '<S296>/Switch' */

  /* Outputs for Atomic SubSystem: '<S209>/Initialize Function' */
  /* Sum: '<S295>/Add' incorporates:
   *  Constant: '<S295>/Constant'
   *  Constant: '<S295>/Constant4'
   *  Constant: '<S295>/Constant5'
   *  Trigonometry: '<S295>/Atan2'
   */
  rtb_Product2_e2 = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S209>/Initialize Function' */

  /* Fcn: '<S337>/r->x' incorporates:
   *  Fcn: '<S342>/r->x'
   *  Fcn: '<S347>/r->x'
   *  Fcn: '<S352>/r->x'
   */
  rtb_FeedForward = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S331>/Add' incorporates:
   *  Fcn: '<S337>/r->x'
   *  Fcn: '<S338>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Product2_e2)) + rtb_FeedForward;

  /* Fcn: '<S337>/theta->y' incorporates:
   *  Fcn: '<S342>/theta->y'
   *  Fcn: '<S347>/theta->y'
   *  Fcn: '<S352>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S331>/Add' incorporates:
   *  Fcn: '<S337>/theta->y'
   *  Fcn: '<S338>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Product2_e2)) + rtb_Add_oh;

  /* Fcn: '<S336>/x->r' */
  rtb_Switch_jh = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S339>/Compare' incorporates:
   *  Constant: '<S339>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch_jh == 0.0);

  /* Switch: '<S335>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S335>/Switch' incorporates:
     *  Fcn: '<S336>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S335>/Switch' */

  /* Trigonometry: '<S223>/Cos4' incorporates:
   *  Switch: '<S212>/Angle_Switch'
   *  Trigonometry: '<S222>/Cos4'
   */
  rtb_Product2_e2 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S201>/Add1' incorporates:
   *  Constant: '<S201>/Constant3'
   *  Constant: '<S201>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S201>/Math Function'
   *  Sum: '<S19>/Add'
   *  Sum: '<S201>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S223>/Sin5' incorporates:
   *  UnaryMinus: '<S221>/Unary Minus'
   */
  rtb_rx_c = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S223>/Sin4' incorporates:
   *  Switch: '<S212>/Angle_Switch'
   *  Trigonometry: '<S222>/Sin4'
   */
  rtb_Product2_i = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S223>/Cos5' incorporates:
   *  UnaryMinus: '<S221>/Unary Minus'
   */
  rtb_Sin4 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S223>/Subtract1' incorporates:
   *  Product: '<S223>/Product2'
   *  Product: '<S223>/Product3'
   *  Trigonometry: '<S223>/Cos4'
   *  Trigonometry: '<S223>/Sin4'
   */
  rtb_Subtract1 = (rtb_Product2_e2 * rtb_rx_c) + (rtb_Product2_i * rtb_Sin4);

  /* Sum: '<S223>/Subtract' incorporates:
   *  Product: '<S223>/Product'
   *  Product: '<S223>/Product1'
   *  Trigonometry: '<S223>/Cos4'
   *  Trigonometry: '<S223>/Sin4'
   */
  rtb_rx_c = (rtb_Product2_e2 * rtb_Sin4) - (rtb_Product2_i * rtb_rx_c);

  /* Math: '<S223>/Hypot' */
  rtb_Sin4 = rt_hypotd_snf(rtb_rx_c, rtb_Subtract1);

  /* Switch: '<S223>/Switch' incorporates:
   *  Constant: '<S223>/Constant'
   *  Constant: '<S223>/Constant1'
   *  Constant: '<S224>/Constant'
   *  Product: '<S223>/Divide'
   *  Product: '<S223>/Divide1'
   *  RelationalOperator: '<S224>/Compare'
   *  Switch: '<S223>/Switch1'
   */
  if (rtb_Sin4 > 1.0E-6) {
    rtb_Switch2_k = rtb_Subtract1 / rtb_Sin4;
    rtb_Sin4 = rtb_rx_c / rtb_Sin4;
  } else {
    rtb_Switch2_k = 0.0;
    rtb_Sin4 = 1.0;
  }

  /* End of Switch: '<S223>/Switch' */

  /* RelationalOperator: '<S220>/Compare' incorporates:
   *  Abs: '<S212>/Abs'
   *  Constant: '<S220>/Constant'
   *  Trigonometry: '<S223>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_Switch2_k, rtb_Sin4)) >
    1.5707963267948966);

  /* Switch: '<S212>/Angle_Switch' incorporates:
   *  Trigonometry: '<S222>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S222>/Subtract1' incorporates:
     *  Product: '<S222>/Product2'
     *  Product: '<S222>/Product3'
     */
    rtb_rx_c = (rtb_Product2_e2 * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_i *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S222>/Subtract' incorporates:
     *  Product: '<S222>/Product'
     *  Product: '<S222>/Product1'
     */
    rtb_Product2_i = (rtb_Product2_e2 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Product2_i * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S222>/Hypot' */
    rtb_Product2_e2 = rt_hypotd_snf(rtb_Product2_i, rtb_rx_c);

    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Constant'
     *  Constant: '<S222>/Constant1'
     *  Constant: '<S225>/Constant'
     *  Product: '<S222>/Divide'
     *  Product: '<S222>/Divide1'
     *  RelationalOperator: '<S225>/Compare'
     *  Switch: '<S222>/Switch'
     */
    if (rtb_Product2_e2 > 1.0E-6) {
      rtb_Product2_i /= rtb_Product2_e2;
      rtb_Product2_e2 = rtb_rx_c / rtb_Product2_e2;
    } else {
      rtb_Product2_i = 1.0;
      rtb_Product2_e2 = 0.0;
    }

    /* End of Switch: '<S222>/Switch1' */
    rtb_Switch2_k = rt_atan2d_snf(rtb_Product2_e2, rtb_Product2_i);
  } else {
    rtb_Switch2_k = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S214>/Sum' incorporates:
   *  Sum: '<S213>/Add'
   */
  rtb_Switch2_k -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S227>/Add1' incorporates:
   *  Constant: '<S227>/Constant3'
   *  Constant: '<S227>/Constant4'
   *  Math: '<S227>/Math Function'
   *  Sum: '<S214>/Sum'
   *  Sum: '<S227>/Add2'
   */
  rtb_Sin4 = rt_modd_snf(rtb_Switch2_k + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S229>/Sum1' incorporates:
   *  Constant: '<S214>/Constant2'
   *  Product: '<S229>/Product'
   *  Sum: '<S229>/Sum'
   *  UnitDelay: '<S229>/Unit Delay1'
   */
  rtb_Product2_e2 = ((rtb_Sin4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                     Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S214>/Product' incorporates:
   *  Constant: '<S214>/Constant3'
   */
  rtb_Product2_i = rtb_Product2_e2 * Steering_Motor_Control_D;

  /* Sum: '<S228>/Diff' incorporates:
   *  UnitDelay: '<S228>/UD'
   *
   * Block description for '<S228>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S228>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Product2_i - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S214>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S214>/Add' incorporates:
   *  Gain: '<S214>/Gain1'
   *  Saturate: '<S214>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_Sin4) + rtb_Add_ov;

  /* Sum: '<S214>/Subtract' incorporates:
   *  Constant: '<S214>/Constant'
   */
  rtb_rx_c = 1.0 - rtb_Subtract1;

  /* Sum: '<S214>/Sum2' incorporates:
   *  Gain: '<S214>/Gain2'
   *  UnitDelay: '<S214>/Unit Delay'
   */
  rtb_Sin4 = (Steering_Motor_Control_I * rtb_Sin4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S230>/Switch2' incorporates:
   *  Constant: '<S214>/Constant'
   *  RelationalOperator: '<S230>/LowerRelop1'
   *  Sum: '<S214>/Subtract'
   */
  if (!(rtb_Sin4 > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S214>/Subtract1' incorporates:
     *  Constant: '<S214>/Constant1'
     */
    rtb_rx_c = -1.0 - rtb_Subtract1;

    /* Switch: '<S230>/Switch' incorporates:
     *  Constant: '<S214>/Constant1'
     *  RelationalOperator: '<S230>/UpperRelop'
     *  Sum: '<S214>/Subtract1'
     */
    if (!(rtb_Sin4 < (-1.0 - rtb_Subtract1))) {
      rtb_rx_c = rtb_Sin4;
    }

    /* End of Switch: '<S230>/Switch' */
  }

  /* End of Switch: '<S230>/Switch2' */

  /* Saturate: '<S214>/Saturation1' */
  if (rtb_rx_c > Steering_Motor_Control_I_UL) {
    rtb_rx_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_c < Steering_Motor_Control_I_LL) {
    rtb_rx_c = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S214>/Saturation1' */

  /* Sum: '<S214>/Add1' */
  rtb_Add_ov = rtb_Subtract1 + rtb_rx_c;

  /* Saturate: '<S214>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S214>/Saturation2' */

  /* Switch: '<S335>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S335>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch_jh;
  }

  /* End of Switch: '<S335>/Switch1' */

  /* Sum: '<S332>/Add' incorporates:
   *  Fcn: '<S343>/r->x'
   *  Fcn: '<S343>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S341>/x->r' */
  rtb_Sin4 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S344>/Compare' incorporates:
   *  Constant: '<S344>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Sin4 == 0.0);

  /* Switch: '<S340>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S340>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S340>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Sin4;
  }

  /* End of Switch: '<S340>/Switch1' */

  /* Sum: '<S333>/Add' incorporates:
   *  Fcn: '<S348>/r->x'
   *  Fcn: '<S348>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_FeedForward;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S346>/x->r' */
  rtb_rx_kh = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  rtb_Compare_cu = (rtb_rx_kh == 0.0);

  /* Switch: '<S345>/Switch1' */
  if (rtb_Compare_cu) {
    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S345>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S345>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_kh;
  }

  /* End of Switch: '<S345>/Switch1' */

  /* Sum: '<S334>/Add' incorporates:
   *  Fcn: '<S353>/r->x'
   *  Fcn: '<S353>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S351>/x->r' */
  rtb_thetay_i = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  rtb_AT_Target_Enable = (rtb_thetay_i == 0.0);

  /* Switch: '<S350>/Switch1' */
  if (rtb_AT_Target_Enable) {
    /* Switch: '<S350>/Switch1' incorporates:
     *  Constant: '<S350>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S350>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_i;
  }

  /* End of Switch: '<S350>/Switch1' */

  /* Product: '<S330>/Divide' incorporates:
   *  Abs: '<S330>/Abs'
   *  Abs: '<S330>/Abs1'
   *  Abs: '<S330>/Abs2'
   *  Abs: '<S330>/Abs3'
   *  Constant: '<S330>/Constant'
   *  MinMax: '<S330>/Max'
   */
  rtb_Switch_jh = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S330>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S212>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S212>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S215>/Product2' incorporates:
   *  Constant: '<S215>/Constant'
   *  Switch: '<S212>/Speed_Switch'
   */
  rtb_thetay_i = tmp * 1150.4247703785388;

  /* Signum: '<S210>/Sign' */
  if (rtIsNaN(rtb_thetay_i)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_i < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_i > 0.0);
  }

  /* Signum: '<S210>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S205>/Product' incorporates:
   *  Abs: '<S210>/Abs'
   *  Abs: '<S213>/Abs'
   *  Constant: '<S216>/Constant'
   *  Constant: '<S226>/Constant3'
   *  Constant: '<S226>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S210>/OR'
   *  Lookup_n-D: '<S213>/1-D Lookup Table'
   *  Math: '<S226>/Math Function'
   *  RelationalOperator: '<S210>/Equal1'
   *  RelationalOperator: '<S216>/Compare'
   *  Signum: '<S210>/Sign'
   *  Signum: '<S210>/Sign1'
   *  Sum: '<S226>/Add1'
   *  Sum: '<S226>/Add2'
   */
  rtb_thetay_i = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_i) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Switch2_k + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled28,
     Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S211>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_thetay_i;

  /* Sum: '<S211>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_i -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S218>/Sum1' incorporates:
   *  Constant: '<S211>/Constant2'
   *  Product: '<S218>/Product'
   *  Sum: '<S218>/Sum'
   *  UnitDelay: '<S218>/Unit Delay1'
   */
  rtb_Sin4 = ((rtb_thetay_i - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S211>/Product' incorporates:
   *  Constant: '<S211>/Constant3'
   */
  rtb_Subtract1 = rtb_Sin4 * Drive_Motor_Control_D;

  /* Sum: '<S217>/Diff' incorporates:
   *  UnitDelay: '<S217>/UD'
   *
   * Block description for '<S217>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S217>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S211>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S211>/Add' incorporates:
   *  Gain: '<S211>/Gain1'
   *  Saturate: '<S211>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_thetay_i) + rtb_FeedForward) +
    rtb_Add_ov;

  /* Sum: '<S211>/Subtract' incorporates:
   *  Constant: '<S211>/Constant'
   */
  rtb_rx_kh = 1.0 - rtb_Add_oh;

  /* Sum: '<S211>/Sum2' incorporates:
   *  Gain: '<S211>/Gain2'
   *  UnitDelay: '<S211>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_thetay_i) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S219>/Switch2' incorporates:
   *  Constant: '<S211>/Constant'
   *  RelationalOperator: '<S219>/LowerRelop1'
   *  Sum: '<S211>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S219>/Switch' incorporates:
     *  Constant: '<S211>/Constant1'
     *  RelationalOperator: '<S219>/UpperRelop'
     *  Sum: '<S211>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_rx_kh = -1.0 - rtb_Add_oh;
    } else {
      rtb_rx_kh = rtb_FeedForward;
    }

    /* End of Switch: '<S219>/Switch' */
  }

  /* End of Switch: '<S219>/Switch2' */

  /* Saturate: '<S211>/Saturation1' */
  if (rtb_rx_kh > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_kh < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_rx_kh;
  }

  /* End of Saturate: '<S211>/Saturation1' */

  /* Sum: '<S211>/Add1' */
  rtb_Add_ov = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S211>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S211>/Saturation2' */

  /* Switch: '<S340>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S340>/Switch' incorporates:
     *  Fcn: '<S341>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S340>/Switch' */

  /* Trigonometry: '<S244>/Cos4' incorporates:
   *  Switch: '<S233>/Angle_Switch'
   *  Trigonometry: '<S243>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S202>/Add1' incorporates:
   *  Constant: '<S202>/Constant3'
   *  Constant: '<S202>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S202>/Math Function'
   *  Sum: '<S19>/Add1'
   *  Sum: '<S202>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S244>/Sin5' incorporates:
   *  UnaryMinus: '<S242>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S244>/Sin4' incorporates:
   *  Switch: '<S233>/Angle_Switch'
   *  Trigonometry: '<S243>/Sin4'
   */
  rtb_Subtract_e = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S244>/Cos5' incorporates:
   *  UnaryMinus: '<S242>/Unary Minus'
   */
  rtb_rx_kh = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S244>/Subtract1' incorporates:
   *  Product: '<S244>/Product2'
   *  Product: '<S244>/Product3'
   *  Trigonometry: '<S244>/Cos4'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Add_oh = (rtb_Add_gd * rtb_Switch2_k) + (rtb_Subtract_e * rtb_rx_kh);

  /* Sum: '<S244>/Subtract' incorporates:
   *  Product: '<S244>/Product'
   *  Product: '<S244>/Product1'
   *  Trigonometry: '<S244>/Cos4'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Add_gd * rtb_rx_kh) - (rtb_Subtract_e * rtb_Switch2_k);

  /* Math: '<S244>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S244>/Switch' incorporates:
   *  Constant: '<S244>/Constant'
   *  Constant: '<S244>/Constant1'
   *  Constant: '<S245>/Constant'
   *  Product: '<S244>/Divide'
   *  Product: '<S244>/Divide1'
   *  RelationalOperator: '<S245>/Compare'
   *  Switch: '<S244>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_i = rtb_Add_oh / rtb_Hypot_bl;
    rtb_rx_kh = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_kh = 1.0;
  }

  /* End of Switch: '<S244>/Switch' */

  /* RelationalOperator: '<S241>/Compare' incorporates:
   *  Abs: '<S233>/Abs'
   *  Constant: '<S241>/Constant'
   *  Trigonometry: '<S244>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_kh)) >
    1.5707963267948966);

  /* Switch: '<S233>/Angle_Switch' incorporates:
   *  Trigonometry: '<S243>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S243>/Subtract1' incorporates:
     *  Product: '<S243>/Product2'
     *  Product: '<S243>/Product3'
     */
    rtb_Add_oh = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract_e *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S243>/Subtract' incorporates:
     *  Product: '<S243>/Product'
     *  Product: '<S243>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract_e
      * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S243>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S243>/Switch1' incorporates:
     *  Constant: '<S243>/Constant'
     *  Constant: '<S243>/Constant1'
     *  Constant: '<S246>/Constant'
     *  Product: '<S243>/Divide'
     *  Product: '<S243>/Divide1'
     *  RelationalOperator: '<S246>/Compare'
     *  Switch: '<S243>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S243>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S235>/Sum' incorporates:
   *  Sum: '<S234>/Add'
   */
  rtb_thetay_i -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S248>/Add1' incorporates:
   *  Constant: '<S248>/Constant3'
   *  Constant: '<S248>/Constant4'
   *  Math: '<S248>/Math Function'
   *  Sum: '<S235>/Sum'
   *  Sum: '<S248>/Add2'
   */
  rtb_rx_kh = rt_modd_snf(rtb_thetay_i + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S250>/Sum1' incorporates:
   *  Constant: '<S235>/Constant2'
   *  Product: '<S250>/Product'
   *  Sum: '<S250>/Sum'
   *  UnitDelay: '<S250>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S235>/Product' incorporates:
   *  Constant: '<S235>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S249>/Diff' incorporates:
   *  UnitDelay: '<S249>/UD'
   *
   * Block description for '<S249>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S249>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S235>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S235>/Add' incorporates:
   *  Gain: '<S235>/Gain1'
   *  Saturate: '<S235>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_rx_kh) + rtb_Add_ov;

  /* Sum: '<S235>/Subtract' incorporates:
   *  Constant: '<S235>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_i;

  /* Sum: '<S235>/Sum2' incorporates:
   *  Gain: '<S235>/Gain2'
   *  UnitDelay: '<S235>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S251>/Switch2' incorporates:
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S251>/LowerRelop1'
   *  Sum: '<S235>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S251>/Switch' incorporates:
     *  Constant: '<S235>/Constant1'
     *  RelationalOperator: '<S251>/UpperRelop'
     *  Sum: '<S235>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_Switch2_k = -1.0 - rtb_Add_i;
    } else {
      rtb_Switch2_k = rtb_Hypot_bl;
    }

    /* End of Switch: '<S251>/Switch' */
  }

  /* End of Switch: '<S251>/Switch2' */

  /* Saturate: '<S235>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_Switch2_k;
  }

  /* End of Saturate: '<S235>/Saturation1' */

  /* Sum: '<S235>/Add1' */
  rtb_Add_ov = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S235>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S235>/Saturation2' */

  /* Product: '<S330>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S233>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S233>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S236>/Product2' incorporates:
   *  Constant: '<S236>/Constant'
   *  Switch: '<S233>/Speed_Switch'
   */
  rtb_rx_kh = tmp * 1150.4247703785388;

  /* Signum: '<S231>/Sign' */
  if (rtIsNaN(rtb_rx_kh)) {
    tmp = (rtNaN);
  } else if (rtb_rx_kh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_kh > 0.0);
  }

  /* Signum: '<S231>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S206>/Product' incorporates:
   *  Abs: '<S231>/Abs'
   *  Abs: '<S234>/Abs'
   *  Constant: '<S237>/Constant'
   *  Constant: '<S247>/Constant3'
   *  Constant: '<S247>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S231>/OR'
   *  Lookup_n-D: '<S234>/1-D Lookup Table'
   *  Math: '<S247>/Math Function'
   *  RelationalOperator: '<S231>/Equal1'
   *  RelationalOperator: '<S237>/Compare'
   *  Signum: '<S231>/Sign'
   *  Signum: '<S231>/Sign1'
   *  Sum: '<S247>/Add1'
   *  Sum: '<S247>/Add2'
   */
  rtb_rx_kh = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kh) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_thetay_i + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled28,
     Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S232>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_rx_kh;

  /* Sum: '<S232>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_rx_kh -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S239>/Sum1' incorporates:
   *  Constant: '<S232>/Constant2'
   *  Product: '<S239>/Product'
   *  Sum: '<S239>/Sum'
   *  UnitDelay: '<S239>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S232>/Product' incorporates:
   *  Constant: '<S232>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S232>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S232>/Add' incorporates:
   *  Gain: '<S232>/Gain1'
   *  Saturate: '<S232>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_rx_kh) + rtb_FeedForward_n) +
    rtb_Add_ov;

  /* Sum: '<S232>/Subtract' incorporates:
   *  Constant: '<S232>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_o2;

  /* Sum: '<S232>/Sum2' incorporates:
   *  Gain: '<S232>/Gain2'
   *  UnitDelay: '<S232>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S240>/Switch2' incorporates:
   *  Constant: '<S232>/Constant'
   *  RelationalOperator: '<S240>/LowerRelop1'
   *  Sum: '<S232>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S232>/Constant1'
     *  RelationalOperator: '<S240>/UpperRelop'
     *  Sum: '<S232>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_thetay_i = -1.0 - rtb_Add_o2;
    } else {
      rtb_thetay_i = rtb_FeedForward_n;
    }

    /* End of Switch: '<S240>/Switch' */
  }

  /* End of Switch: '<S240>/Switch2' */

  /* Saturate: '<S232>/Saturation1' */
  if (rtb_thetay_i > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_thetay_i;
  }

  /* End of Saturate: '<S232>/Saturation1' */

  /* Sum: '<S232>/Add1' */
  rtb_Add_ov = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S232>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S232>/Saturation2' */

  /* Switch: '<S345>/Switch' */
  if (!rtb_Compare_cu) {
    /* Switch: '<S345>/Switch' incorporates:
     *  Fcn: '<S346>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S345>/Switch' */

  /* Trigonometry: '<S265>/Cos4' incorporates:
   *  Switch: '<S254>/Angle_Switch'
   *  Trigonometry: '<S264>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S203>/Add1' incorporates:
   *  Constant: '<S203>/Constant3'
   *  Constant: '<S203>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S203>/Math Function'
   *  Sum: '<S19>/Add2'
   *  Sum: '<S203>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S265>/Sin5' incorporates:
   *  UnaryMinus: '<S263>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S265>/Sin4' incorporates:
   *  Switch: '<S254>/Angle_Switch'
   *  Trigonometry: '<S264>/Sin4'
   */
  rtb_Subtract_e = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S265>/Cos5' incorporates:
   *  UnaryMinus: '<S263>/Unary Minus'
   */
  rtb_rx_kh = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S265>/Subtract1' incorporates:
   *  Product: '<S265>/Product2'
   *  Product: '<S265>/Product3'
   *  Trigonometry: '<S265>/Cos4'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Add_o2 = (rtb_Add_gd * rtb_Switch2_k) + (rtb_Subtract_e * rtb_rx_kh);

  /* Sum: '<S265>/Subtract' incorporates:
   *  Product: '<S265>/Product'
   *  Product: '<S265>/Product1'
   *  Trigonometry: '<S265>/Cos4'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Add_gd * rtb_rx_kh) - (rtb_Subtract_e * rtb_Switch2_k);

  /* Math: '<S265>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S265>/Switch' incorporates:
   *  Constant: '<S265>/Constant'
   *  Constant: '<S265>/Constant1'
   *  Constant: '<S266>/Constant'
   *  Product: '<S265>/Divide'
   *  Product: '<S265>/Divide1'
   *  RelationalOperator: '<S266>/Compare'
   *  Switch: '<S265>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_thetay_i = rtb_Add_o2 / rtb_Hypot_d;
    rtb_rx_kh = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_kh = 1.0;
  }

  /* End of Switch: '<S265>/Switch' */

  /* RelationalOperator: '<S262>/Compare' incorporates:
   *  Abs: '<S254>/Abs'
   *  Constant: '<S262>/Constant'
   *  Trigonometry: '<S265>/Atan1'
   */
  rtb_Compare_cu = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_kh)) >
                    1.5707963267948966);

  /* Switch: '<S254>/Angle_Switch' incorporates:
   *  Trigonometry: '<S264>/Atan1'
   */
  if (rtb_Compare_cu) {
    /* Sum: '<S264>/Subtract1' incorporates:
     *  Product: '<S264>/Product2'
     *  Product: '<S264>/Product3'
     */
    rtb_Add_o2 = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Subtract_e *
      Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S264>/Subtract' incorporates:
     *  Product: '<S264>/Product'
     *  Product: '<S264>/Product1'
     */
    rtb_Hypot_d = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Subtract_e *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S264>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S264>/Constant'
     *  Constant: '<S264>/Constant1'
     *  Constant: '<S267>/Constant'
     *  Product: '<S264>/Divide'
     *  Product: '<S264>/Divide1'
     *  RelationalOperator: '<S267>/Compare'
     *  Switch: '<S264>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S264>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S256>/Sum' incorporates:
   *  Sum: '<S255>/Add'
   */
  rtb_thetay_i -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S269>/Add1' incorporates:
   *  Constant: '<S269>/Constant3'
   *  Constant: '<S269>/Constant4'
   *  Math: '<S269>/Math Function'
   *  Sum: '<S256>/Sum'
   *  Sum: '<S269>/Add2'
   */
  rtb_rx_kh = rt_modd_snf(rtb_thetay_i + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S271>/Sum1' incorporates:
   *  Constant: '<S256>/Constant2'
   *  Product: '<S271>/Product'
   *  Sum: '<S271>/Sum'
   *  UnitDelay: '<S271>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S256>/Product' incorporates:
   *  Constant: '<S256>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S270>/Diff' incorporates:
   *  UnitDelay: '<S270>/UD'
   *
   * Block description for '<S270>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S270>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S256>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S256>/Add' incorporates:
   *  Gain: '<S256>/Gain1'
   *  Saturate: '<S256>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_rx_kh) + rtb_Add_ov;

  /* Sum: '<S256>/Subtract' incorporates:
   *  Constant: '<S256>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_gj;

  /* Sum: '<S256>/Sum2' incorporates:
   *  Gain: '<S256>/Gain2'
   *  UnitDelay: '<S256>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S272>/Switch2' incorporates:
   *  Constant: '<S256>/Constant'
   *  RelationalOperator: '<S272>/LowerRelop1'
   *  Sum: '<S256>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S256>/Constant1'
     *  RelationalOperator: '<S272>/UpperRelop'
     *  Sum: '<S256>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_Switch2_k = -1.0 - rtb_Add_gj;
    } else {
      rtb_Switch2_k = rtb_Hypot_d;
    }

    /* End of Switch: '<S272>/Switch' */
  }

  /* End of Switch: '<S272>/Switch2' */

  /* Saturate: '<S256>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_Switch2_k;
  }

  /* End of Saturate: '<S256>/Saturation1' */

  /* Sum: '<S256>/Add1' */
  rtb_Add_ov = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S256>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S256>/Saturation2' */

  /* Product: '<S330>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S254>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S254>/Unary Minus'
   */
  if (rtb_Compare_cu) {
    tmp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S257>/Product2' incorporates:
   *  Constant: '<S257>/Constant'
   *  Switch: '<S254>/Speed_Switch'
   */
  rtb_rx_kh = tmp * 1150.4247703785388;

  /* Signum: '<S252>/Sign' */
  if (rtIsNaN(rtb_rx_kh)) {
    tmp = (rtNaN);
  } else if (rtb_rx_kh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_kh > 0.0);
  }

  /* Signum: '<S252>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S207>/Product' incorporates:
   *  Abs: '<S252>/Abs'
   *  Abs: '<S255>/Abs'
   *  Constant: '<S258>/Constant'
   *  Constant: '<S268>/Constant3'
   *  Constant: '<S268>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S252>/OR'
   *  Lookup_n-D: '<S255>/1-D Lookup Table'
   *  Math: '<S268>/Math Function'
   *  RelationalOperator: '<S252>/Equal1'
   *  RelationalOperator: '<S258>/Compare'
   *  Signum: '<S252>/Sign'
   *  Signum: '<S252>/Sign1'
   *  Sum: '<S268>/Add1'
   *  Sum: '<S268>/Add2'
   */
  rtb_rx_kh = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kh) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_thetay_i + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled28,
     Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S253>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_rx_kh;

  /* Sum: '<S253>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_rx_kh -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S260>/Sum1' incorporates:
   *  Constant: '<S253>/Constant2'
   *  Product: '<S260>/Product'
   *  Sum: '<S260>/Sum'
   *  UnitDelay: '<S260>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S253>/Product' incorporates:
   *  Constant: '<S253>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S253>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S253>/Add' incorporates:
   *  Gain: '<S253>/Gain1'
   *  Saturate: '<S253>/Saturation'
   */
  rtb_Add_gd = ((Drive_Motor_Control_P * rtb_rx_kh) + rtb_FeedForward_a) +
    rtb_Add_ov;

  /* Sum: '<S253>/Subtract' incorporates:
   *  Constant: '<S253>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_gd;

  /* Sum: '<S253>/Sum2' incorporates:
   *  Gain: '<S253>/Gain2'
   *  UnitDelay: '<S253>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S261>/Switch2' incorporates:
   *  Constant: '<S253>/Constant'
   *  RelationalOperator: '<S261>/LowerRelop1'
   *  Sum: '<S253>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_Add_gd))) {
    /* Sum: '<S253>/Subtract1' incorporates:
     *  Constant: '<S253>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_gd;

    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S253>/Constant1'
     *  RelationalOperator: '<S261>/UpperRelop'
     *  Sum: '<S253>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_Add_gd))) {
      rtb_thetay_i = rtb_FeedForward_a;
    }

    /* End of Switch: '<S261>/Switch' */
  }

  /* End of Switch: '<S261>/Switch2' */

  /* Saturate: '<S253>/Saturation1' */
  if (rtb_thetay_i > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_thetay_i;
  }

  /* End of Saturate: '<S253>/Saturation1' */

  /* Sum: '<S253>/Add1' */
  rtb_Add_ov = rtb_Add_gd + rtb_FeedForward_a;

  /* Saturate: '<S253>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S253>/Saturation2' */

  /* Switch: '<S350>/Switch' */
  if (!rtb_AT_Target_Enable) {
    /* Switch: '<S350>/Switch' incorporates:
     *  Fcn: '<S351>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S350>/Switch' */

  /* Trigonometry: '<S286>/Cos4' incorporates:
   *  Switch: '<S275>/Angle_Switch'
   *  Trigonometry: '<S285>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S204>/Add1' incorporates:
   *  Constant: '<S204>/Constant3'
   *  Constant: '<S204>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S204>/Math Function'
   *  Sum: '<S19>/Add3'
   *  Sum: '<S204>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S286>/Sin5' incorporates:
   *  UnaryMinus: '<S284>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S286>/Sin4' incorporates:
   *  Switch: '<S275>/Angle_Switch'
   *  Trigonometry: '<S285>/Sin4'
   */
  rtb_Subtract_e = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S286>/Cos5' incorporates:
   *  UnaryMinus: '<S284>/Unary Minus'
   */
  rtb_rx_kh = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S286>/Subtract1' incorporates:
   *  Product: '<S286>/Product2'
   *  Product: '<S286>/Product3'
   *  Trigonometry: '<S286>/Cos4'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_thetay_i = (rtb_Add_gd * rtb_Switch2_k) + (rtb_Subtract_e * rtb_rx_kh);

  /* Sum: '<S286>/Subtract' incorporates:
   *  Product: '<S286>/Product'
   *  Product: '<S286>/Product1'
   *  Trigonometry: '<S286>/Cos4'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Switch2_k = (rtb_Add_gd * rtb_rx_kh) - (rtb_Subtract_e * rtb_Switch2_k);

  /* Math: '<S286>/Hypot' */
  rtb_Add2_k_idx_0 = rt_hypotd_snf(rtb_Switch2_k, rtb_thetay_i);

  /* Switch: '<S286>/Switch' incorporates:
   *  Constant: '<S286>/Constant'
   *  Constant: '<S286>/Constant1'
   *  Constant: '<S287>/Constant'
   *  Product: '<S286>/Divide'
   *  Product: '<S286>/Divide1'
   *  RelationalOperator: '<S287>/Compare'
   *  Switch: '<S286>/Switch1'
   */
  if (rtb_Add2_k_idx_0 > 1.0E-6) {
    rtb_thetay_i /= rtb_Add2_k_idx_0;
    rtb_rx_kh = rtb_Switch2_k / rtb_Add2_k_idx_0;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_kh = 1.0;
  }

  /* End of Switch: '<S286>/Switch' */

  /* RelationalOperator: '<S283>/Compare' incorporates:
   *  Abs: '<S275>/Abs'
   *  Constant: '<S283>/Constant'
   *  Trigonometry: '<S286>/Atan1'
   */
  rtb_AT_Target_Enable = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_kh)) >
    1.5707963267948966);

  /* Switch: '<S275>/Angle_Switch' incorporates:
   *  Trigonometry: '<S285>/Atan1'
   */
  if (rtb_AT_Target_Enable) {
    /* Sum: '<S285>/Subtract1' incorporates:
     *  Product: '<S285>/Product2'
     *  Product: '<S285>/Product3'
     */
    rtb_thetay_i = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract_e
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S285>/Subtract' incorporates:
     *  Product: '<S285>/Product'
     *  Product: '<S285>/Product1'
     */
    rtb_Subtract_e = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S285>/Hypot' */
    rtb_Add_gd = rt_hypotd_snf(rtb_Subtract_e, rtb_thetay_i);

    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S285>/Constant'
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S288>/Constant'
     *  Product: '<S285>/Divide'
     *  Product: '<S285>/Divide1'
     *  RelationalOperator: '<S288>/Compare'
     *  Switch: '<S285>/Switch'
     */
    if (rtb_Add_gd > 1.0E-6) {
      rtb_Subtract_e /= rtb_Add_gd;
      rtb_thetay_i /= rtb_Add_gd;
    } else {
      rtb_Subtract_e = 1.0;
      rtb_thetay_i = 0.0;
    }

    /* End of Switch: '<S285>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_thetay_i, rtb_Subtract_e);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S277>/Sum' incorporates:
   *  Sum: '<S276>/Add'
   */
  rtb_thetay_i -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S290>/Add1' incorporates:
   *  Constant: '<S290>/Constant3'
   *  Constant: '<S290>/Constant4'
   *  Math: '<S290>/Math Function'
   *  Sum: '<S277>/Sum'
   *  Sum: '<S290>/Add2'
   */
  rtb_rx_kh = rt_modd_snf(rtb_thetay_i + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S292>/Sum1' incorporates:
   *  Constant: '<S277>/Constant2'
   *  Product: '<S292>/Product'
   *  Sum: '<S292>/Sum'
   *  UnitDelay: '<S292>/Unit Delay1'
   */
  rtb_Add_gd = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S277>/Product' incorporates:
   *  Constant: '<S277>/Constant3'
   */
  rtb_Subtract_e = rtb_Add_gd * Steering_Motor_Control_D;

  /* Sum: '<S291>/Diff' incorporates:
   *  UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract_e - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S277>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Gain: '<S277>/Gain1'
   *  Saturate: '<S277>/Saturation'
   */
  rtb_Add2_k_idx_0 = (Steering_Motor_Control_P * rtb_rx_kh) + rtb_Add_ov;

  /* Sum: '<S277>/Subtract' incorporates:
   *  Constant: '<S277>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add2_k_idx_0;

  /* Sum: '<S277>/Sum2' incorporates:
   *  Gain: '<S277>/Gain2'
   *  UnitDelay: '<S277>/Unit Delay'
   */
  rtb_rx_kh = (Steering_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S293>/Switch2' incorporates:
   *  Constant: '<S277>/Constant'
   *  RelationalOperator: '<S293>/LowerRelop1'
   *  Sum: '<S277>/Subtract'
   */
  if (!(rtb_rx_kh > (1.0 - rtb_Add2_k_idx_0))) {
    /* Sum: '<S277>/Subtract1' incorporates:
     *  Constant: '<S277>/Constant1'
     */
    rtb_Switch2_k = -1.0 - rtb_Add2_k_idx_0;

    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S277>/Constant1'
     *  RelationalOperator: '<S293>/UpperRelop'
     *  Sum: '<S277>/Subtract1'
     */
    if (!(rtb_rx_kh < (-1.0 - rtb_Add2_k_idx_0))) {
      rtb_Switch2_k = rtb_rx_kh;
    }

    /* End of Switch: '<S293>/Switch' */
  }

  /* End of Switch: '<S293>/Switch2' */

  /* Saturate: '<S277>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Switch2_k = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Switch2_k = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S277>/Saturation1' */

  /* Sum: '<S277>/Add1' */
  rtb_Add_ov = rtb_Add2_k_idx_0 + rtb_Switch2_k;

  /* Saturate: '<S277>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S277>/Saturation2' */

  /* Product: '<S330>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S275>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  if (rtb_AT_Target_Enable) {
    tmp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S278>/Product2' incorporates:
   *  Constant: '<S278>/Constant'
   *  Switch: '<S275>/Speed_Switch'
   */
  rtb_rx_kh = tmp * 1150.4247703785388;

  /* Signum: '<S273>/Sign' */
  if (rtIsNaN(rtb_rx_kh)) {
    tmp = (rtNaN);
  } else if (rtb_rx_kh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_kh > 0.0);
  }

  /* Signum: '<S273>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S208>/Product' incorporates:
   *  Abs: '<S273>/Abs'
   *  Abs: '<S276>/Abs'
   *  Constant: '<S279>/Constant'
   *  Constant: '<S289>/Constant3'
   *  Constant: '<S289>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S273>/OR'
   *  Lookup_n-D: '<S276>/1-D Lookup Table'
   *  Math: '<S289>/Math Function'
   *  RelationalOperator: '<S273>/Equal1'
   *  RelationalOperator: '<S279>/Compare'
   *  Signum: '<S273>/Sign'
   *  Signum: '<S273>/Sign1'
   *  Sum: '<S289>/Add1'
   *  Sum: '<S289>/Add2'
   */
  rtb_rx_kh = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kh) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_thetay_i + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled28,
     Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S274>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_rx_kh;

  /* Sum: '<S274>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_rx_kh -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S281>/Sum1' incorporates:
   *  Constant: '<S274>/Constant2'
   *  Product: '<S281>/Product'
   *  Sum: '<S281>/Sum'
   *  UnitDelay: '<S281>/Unit Delay1'
   */
  rtb_Switch_jh = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_kw) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kw;

  /* Product: '<S274>/Product' incorporates:
   *  Constant: '<S274>/Constant3'
   */
  rtb_Add2_k_idx_0 = rtb_Switch_jh * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Add2_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S274>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S274>/Add' incorporates:
   *  Gain: '<S274>/Gain1'
   *  Saturate: '<S274>/Saturation'
   */
  rtb_Add_ov += (Drive_Motor_Control_P * rtb_rx_kh) + rtb_thetay_i;

  /* Sum: '<S274>/Subtract' incorporates:
   *  Constant: '<S274>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_ov;

  /* Sum: '<S274>/Sum2' incorporates:
   *  Gain: '<S274>/Gain2'
   *  UnitDelay: '<S274>/Unit Delay'
   */
  rtb_rx_kh = (Drive_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S282>/Switch2' incorporates:
   *  Constant: '<S274>/Constant'
   *  RelationalOperator: '<S282>/LowerRelop1'
   *  Sum: '<S274>/Subtract'
   */
  if (!(rtb_rx_kh > (1.0 - rtb_Add_ov))) {
    /* Sum: '<S274>/Subtract1' incorporates:
     *  Constant: '<S274>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_ov;

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S274>/Constant1'
     *  RelationalOperator: '<S282>/UpperRelop'
     *  Sum: '<S274>/Subtract1'
     */
    if (!(rtb_rx_kh < (-1.0 - rtb_Add_ov))) {
      rtb_thetay_i = rtb_rx_kh;
    }

    /* End of Switch: '<S282>/Switch' */
  }

  /* End of Switch: '<S282>/Switch2' */

  /* Saturate: '<S274>/Saturation1' */
  if (rtb_thetay_i > Drive_Motor_Control_I_UL) {
    rtb_rx_kh = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Drive_Motor_Control_I_LL) {
    rtb_rx_kh = Drive_Motor_Control_I_LL;
  } else {
    rtb_rx_kh = rtb_thetay_i;
  }

  /* End of Saturate: '<S274>/Saturation1' */

  /* Sum: '<S274>/Add1' */
  rtb_Add_ov += rtb_rx_kh;

  /* Saturate: '<S274>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S274>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_rx_g;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_thetay_a;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Uk1_iw;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* MinMax: '<S9>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit1'
   *  Merge: '<S15>/Merge13'
   */
  rtb_Uk1_iw = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired, look1_binlcpw
    (Code_Gen_Model_B.Coral_Arm_Angle_Desired, Code_Gen_Model_ConstP.pooled30,
     Code_Gen_Model_ConstP.pooled29, 95U)), look1_binlcpw
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured,
                     Code_Gen_Model_ConstP.pooled30,
                     Code_Gen_Model_ConstP.pooled29, 95U));

  /* Switch: '<S9>/Switch3' incorporates:
   *  Abs: '<S9>/Abs1'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant6'
   *  Logic: '<S9>/AND'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired < rtb_Uk1_iw) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    tmp = Elevator_Error_Increase;
  } else {
    tmp = 0.0;
  }

  /* Sum: '<S9>/Add' incorporates:
   *  Sum: '<S9>/Subtract'
   *  Switch: '<S9>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Uk1_iw -
    Code_Gen_Model_B.Elevator_Height_Measured) + tmp;

  /* Logic: '<S9>/Logical Operator3' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S40>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   */
  Compare = (Compare || ((Code_Gen_Model_B.Elevator_Height_Desired == 0.0) &&
              (fabs(Code_Gen_Model_B.Elevator_Error) <=
               Elevator_Error_Bottom_Disable)));

  /* Gain: '<S42>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator2'
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/NOT2'
   *  Logic: '<S9>/OR'
   */
  rtb_Swerve_Motors_Disabled = (((!Compare) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable)) && ((!rtb_Compare_pd) &&
    (!rtb_Compare)));

  /* Switch: '<S42>/Switch' */
  if (rtb_Swerve_Motors_Disabled) {
    /* Switch: '<S42>/Switch1' incorporates:
     *  UnitDelay: '<S51>/Delay Input1'
     *
     * Block description for '<S51>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S42>/Switch' incorporates:
       *  Constant: '<S42>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S42>/Sum2' incorporates:
       *  Gain: '<S42>/Gain2'
       *  UnitDelay: '<S42>/Unit Delay'
       */
      rtb_Uk1_iw = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S42>/Subtract' incorporates:
       *  Constant: '<S42>/Constant'
       */
      rtb_rx_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S52>/Switch2' incorporates:
       *  RelationalOperator: '<S52>/LowerRelop1'
       */
      if (!(rtb_Uk1_iw > rtb_rx_g)) {
        /* Sum: '<S42>/Subtract1' incorporates:
         *  Constant: '<S42>/Constant1'
         */
        rtb_rx_g = Elevator_Total_LL - Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S52>/Switch' incorporates:
         *  RelationalOperator: '<S52>/UpperRelop'
         */
        if (!(rtb_Uk1_iw < rtb_rx_g)) {
          rtb_rx_g = rtb_Uk1_iw;
        }

        /* End of Switch: '<S52>/Switch' */
      }

      /* End of Switch: '<S52>/Switch2' */

      /* Saturate: '<S42>/Saturation1' */
      if (rtb_rx_g > Elevator_Int_UL) {
        /* Switch: '<S42>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_rx_g < Elevator_Int_LL) {
        /* Switch: '<S42>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S42>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_rx_g;
      }

      /* End of Saturate: '<S42>/Saturation1' */
    }

    /* End of Switch: '<S42>/Switch1' */
  } else {
    /* Switch: '<S42>/Switch' incorporates:
     *  Constant: '<S42>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     */
    if (Compare) {
      rtb_Uk1_iw = Elevator_Bottom_DC;
    } else {
      /* Sum: '<S42>/Add1' */
      rtb_rx_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S42>/Saturation2' */
      if (rtb_rx_g > Elevator_Total_UL) {
        rtb_rx_g = Elevator_Total_UL;
      } else if (rtb_rx_g < Elevator_Total_LL) {
        rtb_rx_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S42>/Saturation2' */

      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/Constant1'
       *  Constant: '<S9>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Uk1_iw = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Uk1_iw = 1.0;
      }

      /* End of Switch: '<S9>/Switch1' */

      /* Switch: '<S43>/Switch2' incorporates:
       *  RelationalOperator: '<S43>/LowerRelop1'
       */
      if (!(rtb_rx_g > rtb_Uk1_iw)) {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant3'
         *  Constant: '<S9>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Uk1_iw = 0.0;
        } else {
          rtb_Uk1_iw = -1.0;
        }

        /* End of Switch: '<S9>/Switch' */

        /* Switch: '<S43>/Switch' incorporates:
         *  RelationalOperator: '<S43>/UpperRelop'
         */
        if (!(rtb_rx_g < rtb_Uk1_iw)) {
          rtb_Uk1_iw = rtb_rx_g;
        }

        /* End of Switch: '<S43>/Switch' */
      }

      /* End of Switch: '<S43>/Switch2' */
    }

    /* End of Switch: '<S9>/Switch4' */
  } else {
    rtb_Uk1_iw = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* UnitDelay: '<S41>/Unit Delay' */
  rtb_thetay_a = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Signum: '<S41>/Sign2' */
  if (rtIsNaN(rtb_thetay_a)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_a < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_a > 0.0);
  }

  /* Signum: '<S41>/Sign1' */
  if (rtIsNaN(rtb_Uk1_iw)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (rtb_Uk1_iw < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Uk1_iw > 0.0);
  }

  /* Product: '<S41>/Product1' incorporates:
   *  Signum: '<S41>/Sign1'
   *  Signum: '<S41>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Logic: '<S41>/or'
   *  Product: '<S41>/Product1'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   */
  if ((rtb_thetay_a == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_g = rtb_Uk1_iw;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S41>/Switch' */

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   */
  Compare = (rtb_rx_g == 0.0);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_g > 0.0);

  /* Abs: '<S41>/Abs' incorporates:
   *  Sum: '<S41>/Subtract'
   */
  rtb_Uk1_iw = fabs(rtb_thetay_a - rtb_Uk1_iw);

  /* Switch: '<S41>/Switch5' incorporates:
   *  Switch: '<S41>/Switch1'
   */
  if (Compare) {
    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S41>/Constant4'
     *  Constant: '<S41>/Constant6'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S41>/Constant2'
     *  Constant: '<S41>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S41>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S41>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_jw), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic_jw;
    tmp = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else {
    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S41>/Constant10'
     *  Constant: '<S41>/Constant8'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S41>/Constant7'
     *  Constant: '<S41>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S41>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S41>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_b), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic1_b;

    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S41>/Constant3'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Elevator_DC_Inc_RL;
    } else {
      tmp = Code_Gen_Model_ConstB.UnaryMinus_m;
    }

    /* End of Switch: '<S41>/Switch3' */
  }

  /* End of Switch: '<S41>/Switch5' */

  /* Product: '<S41>/Product' incorporates:
   *  Switch: '<S41>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_thetay_a;

  /* Switch: '<S50>/Init' incorporates:
   *  UnitDelay: '<S50>/FixPt Unit Delay1'
   *  UnitDelay: '<S50>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Uk1_iw = rtb_rx_g;
  } else {
    rtb_Uk1_iw = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S50>/Init' */

  /* Sum: '<S48>/Sum1' */
  rtb_rx_g -= rtb_Uk1_iw;

  /* Switch: '<S49>/Switch2' incorporates:
   *  RelationalOperator: '<S49>/LowerRelop1'
   */
  if (!(rtb_rx_g > rtb_thetay_i)) {
    /* Switch: '<S41>/Switch2' incorporates:
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S41>/Constant3'
     *  Switch: '<S41>/Switch4'
     *  UnaryMinus: '<S41>/Unary Minus1'
     */
    if (Compare) {
      tmp = -1.0;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S41>/Switch4' incorporates:
       *  Constant: '<S41>/Constant1'
       */
      tmp = -1.0;
    } else {
      tmp = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S41>/Product2' incorporates:
     *  Switch: '<S41>/Switch2'
     */
    rtb_thetay_i = tmp * rtb_thetay_a;

    /* Switch: '<S49>/Switch' incorporates:
     *  RelationalOperator: '<S49>/UpperRelop'
     */
    if (!(rtb_rx_g < rtb_thetay_i)) {
      rtb_thetay_i = rtb_rx_g;
    }

    /* End of Switch: '<S49>/Switch' */
  }

  /* End of Switch: '<S49>/Switch2' */

  /* Sum: '<S48>/Sum' */
  rtb_Add_ov = rtb_thetay_i + rtb_Uk1_iw;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Add_ov;

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   */
  Compare = ((Code_Gen_Model_B.Elevator_Height_Measured <
              Elevator_Height_Coral_Arm_Low_Thresh) &&
             (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
              Coral_Arm_Angle_Neg_Threshold));

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_rx_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 2U);

  /* Switch: '<S27>/Switch2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S27>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired > 90.0) {
    rtb_Uk1_iw = 90.0;
  } else {
    /* Lookup_n-D: '<S7>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S10>/Switch'
     */
    rtb_Uk1_iw = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S27>/Switch' incorporates:
     *  RelationalOperator: '<S27>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired < rtb_Uk1_iw)) {
      rtb_Uk1_iw = Code_Gen_Model_B.Coral_Arm_Angle_Desired;
    }

    /* End of Switch: '<S27>/Switch' */
  }

  /* End of Switch: '<S27>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Uk1_iw -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S26>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   */
  rtb_Is_Absolute_Translation_g = ((!Compare) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Lookup_n-D: '<S7>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Uk1_iw = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S26>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S26>/Switch1' incorporates:
     *  UnitDelay: '<S35>/Delay Input1'
     *
     * Block description for '<S35>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S26>/Switch' incorporates:
       *  Constant: '<S26>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S26>/Sum2' incorporates:
       *  Gain: '<S26>/Gain2'
       *  UnitDelay: '<S26>/Unit Delay'
       */
      rtb_thetay_a = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error)
        + Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S26>/Subtract' */
      rtb_thetay_i = rtb_rx_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S36>/Switch2' incorporates:
       *  RelationalOperator: '<S36>/LowerRelop1'
       */
      if (!(rtb_thetay_a > rtb_thetay_i)) {
        /* Sum: '<S26>/Subtract1' */
        rtb_thetay_i = rtb_Uk1_iw - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S36>/Switch' incorporates:
         *  RelationalOperator: '<S36>/UpperRelop'
         */
        if (!(rtb_thetay_a < rtb_thetay_i)) {
          rtb_thetay_i = rtb_thetay_a;
        }

        /* End of Switch: '<S36>/Switch' */
      }

      /* End of Switch: '<S36>/Switch2' */

      /* Saturate: '<S26>/Saturation1' */
      if (rtb_thetay_i > Coral_Arm_Int_UL) {
        /* Switch: '<S26>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_thetay_i < Coral_Arm_Int_LL) {
        /* Switch: '<S26>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S26>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_thetay_i;
      }

      /* End of Saturate: '<S26>/Saturation1' */
    }

    /* End of Switch: '<S26>/Switch1' */
  } else {
    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    if (Compare) {
      rtb_Uk1_iw = Coral_Arm_Neg90_DC;
    } else {
      /* Sum: '<S26>/Add1' */
      rtb_thetay_a = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S37>/Switch2' incorporates:
       *  RelationalOperator: '<S37>/LowerRelop1'
       *  RelationalOperator: '<S37>/UpperRelop'
       *  Switch: '<S37>/Switch'
       */
      if (rtb_thetay_a > rtb_rx_g) {
        rtb_Uk1_iw = rtb_rx_g;
      } else if (!(rtb_thetay_a < rtb_Uk1_iw)) {
        rtb_Uk1_iw = rtb_thetay_a;
      }

      /* End of Switch: '<S37>/Switch2' */
    }

    /* End of Switch: '<S7>/Switch1' */
  } else {
    rtb_Uk1_iw = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* UnitDelay: '<S25>/Unit Delay' */
  rtb_thetay_a = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Signum: '<S25>/Sign2' */
  if (rtIsNaN(rtb_thetay_a)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_a < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_a > 0.0);
  }

  /* Signum: '<S25>/Sign1' */
  if (rtIsNaN(rtb_Uk1_iw)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (rtb_Uk1_iw < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Uk1_iw > 0.0);
  }

  /* Product: '<S25>/Product1' incorporates:
   *  Signum: '<S25>/Sign1'
   *  Signum: '<S25>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Logic: '<S25>/or'
   *  Product: '<S25>/Product1'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   */
  if ((rtb_thetay_a == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_g = rtb_Uk1_iw;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S25>/Switch' */

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  Compare = (rtb_rx_g == 0.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_g > 0.0);

  /* Abs: '<S25>/Abs' incorporates:
   *  Sum: '<S25>/Subtract'
   */
  rtb_Uk1_iw = fabs(rtb_thetay_a - rtb_Uk1_iw);

  /* Switch: '<S25>/Switch5' incorporates:
   *  Switch: '<S25>/Switch1'
   */
  if (Compare) {
    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S25>/Constant4'
     *  Constant: '<S25>/Constant6'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S25>/Constant2'
     *  Constant: '<S25>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S25>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S25>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic_n;
    tmp = Code_Gen_Model_ConstB.UnaryMinus;
  } else {
    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S25>/Constant10'
     *  Constant: '<S25>/Constant8'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S25>/Constant7'
     *  Constant: '<S25>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S25>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S25>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic1_a;

    /* Switch: '<S25>/Switch3' incorporates:
     *  Constant: '<S25>/Constant3'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Coral_Arm_DC_Inc_RL;
    } else {
      tmp = Code_Gen_Model_ConstB.UnaryMinus;
    }

    /* End of Switch: '<S25>/Switch3' */
  }

  /* End of Switch: '<S25>/Switch5' */

  /* Product: '<S25>/Product' incorporates:
   *  Switch: '<S25>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_thetay_a;

  /* Switch: '<S34>/Init' incorporates:
   *  UnitDelay: '<S34>/FixPt Unit Delay1'
   *  UnitDelay: '<S34>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Uk1_iw = rtb_rx_g;
  } else {
    rtb_Uk1_iw = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S34>/Init' */

  /* Sum: '<S32>/Sum1' */
  rtb_rx_g -= rtb_Uk1_iw;

  /* Switch: '<S33>/Switch2' incorporates:
   *  RelationalOperator: '<S33>/LowerRelop1'
   */
  if (!(rtb_rx_g > rtb_thetay_i)) {
    /* Switch: '<S25>/Switch2' incorporates:
     *  Constant: '<S25>/Constant1'
     *  Constant: '<S25>/Constant3'
     *  Switch: '<S25>/Switch4'
     *  UnaryMinus: '<S25>/Unary Minus1'
     */
    if (Compare) {
      tmp = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S25>/Switch4' incorporates:
       *  Constant: '<S25>/Constant1'
       */
      tmp = -1.0;
    } else {
      tmp = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S25>/Product2' incorporates:
     *  Switch: '<S25>/Switch2'
     */
    rtb_thetay_i = tmp * rtb_thetay_a;

    /* Switch: '<S33>/Switch' incorporates:
     *  RelationalOperator: '<S33>/UpperRelop'
     */
    if (!(rtb_rx_g < rtb_thetay_i)) {
      rtb_thetay_i = rtb_rx_g;
    }

    /* End of Switch: '<S33>/Switch' */
  }

  /* End of Switch: '<S33>/Switch2' */

  /* Sum: '<S32>/Sum' */
  rtb_Uk1_iw += rtb_thetay_i;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Uk1_iw;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_thetay;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle = rtb_rx;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle = rtb_thetay_n;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Sum: '<S11>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = rtb_Switch1_p2 + rtb_Switch1;

  /* SignalConversion: '<S12>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S16>/Trigonometric Function1' */
  rtb_rx = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S16>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_rx_g = rtb_rx;

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus'
   */
  rtb_Switch1_p2 = -rtb_rx;

  /* Sum: '<S128>/Diff' incorporates:
   *  UnitDelay: '<S128>/UD'
   *
   * Block description for '<S128>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S128>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S16>/Subtract2' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Gain: '<S16>/Gain7'
   *  Math: '<S16>/Square'
   */
  rtb_rx = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S16>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_Add2_k_idx_1 = rtb_thetay_n;

  /* SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_0 = -rtb_thetay_n;

  /* Product: '<S16>/Product' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S129>/Diff'
   *  UnitDelay: '<S129>/UD'
   *
   * Block description for '<S129>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S16>/Product1' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S130>/Diff'
   *  UnitDelay: '<S130>/UD'
   *
   * Block description for '<S130>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S16>/Product2' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S131>/Diff'
   *  UnitDelay: '<S131>/UD'
   *
   * Block description for '<S131>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_a = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S16>/Product3' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S132>/Diff'
   *  UnitDelay: '<S132>/UD'
   *
   * Block description for '<S132>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S16>/Product7' incorporates:
   *  Fcn: '<S133>/r->x'
   *  Fcn: '<S133>/theta->y'
   *  Fcn: '<S134>/r->x'
   *  Fcn: '<S134>/theta->y'
   *  Fcn: '<S135>/r->x'
   *  Fcn: '<S135>/theta->y'
   *  Fcn: '<S136>/r->x'
   *  Fcn: '<S136>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_a * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_a * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_thetay_i * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_thetay_i * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S16>/Product7' incorporates:
   *  Constant: '<S16>/Constant4'
   */
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
    tmp = 0.0;
    tmp_0 = 0;
    for (i = 0; i < 8; i++) {
      tmp += Code_Gen_Model_ConstP.Constant4_Value[tmp_0 + rtb_Num_Segments] *
        rtb_thetay_n_0[i];
      tmp_0 += 2;
    }

    rtb_Akxhatkk1[rtb_Num_Segments] = tmp;
  }

  /* End of Product: '<S16>/Product7' */

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_0 *
    rtb_Akxhatkk1[1]);
  rtb_rx = (rtb_Add2_k_idx_1 * rtb_Akxhatkk1[0]) + (rtb_rx * rtb_Akxhatkk1[1]);

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 * rtb_thetay)
    + (rtb_Switch1_p2 * rtb_rx);
  Code_Gen_Model_B.Product6[1] = (rtb_rx_g * rtb_thetay) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_rx);

  /* Outputs for Enabled SubSystem: '<S94>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S125>/D[k]*u[k]' incorporates:
     *  Constant: '<S74>/D'
     */
    rtb_rx = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S125>/Sum' incorporates:
     *  Constant: '<S74>/C'
     *  Delay: '<S74>/MemoryX'
     *  Product: '<S125>/C[k]*xhat[k|k-1]'
     *  Product: '<S125>/D[k]*u[k]'
     *  Sum: '<S125>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_rx;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_rx;

    /* Product: '<S125>/Product3' incorporates:
     *  Constant: '<S75>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S125>/Product3' incorporates:
     *  Outport: '<S125>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S94>/MeasurementUpdate' */

  /* RelationalOperator: '<S138>/Compare' incorporates:
   *  Constant: '<S137>/Constant'
   *  Constant: '<S138>/Constant'
   */
  Compare = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S137>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S137>/Switch' incorporates:
   *  UnitDelay: '<S137>/Unit Delay'
   */
  if (Compare) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S137>/Switch' */

  /* Sum: '<S137>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay;

  /* Gain: '<S137>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S137>/Switch1' incorporates:
   *  UnitDelay: '<S137>/Unit Delay1'
   */
  if (Compare) {
    rtb_rx = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_rx = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S137>/Switch1' */

  /* Sum: '<S137>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_rx;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  tmp = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(tmp)) || (rtIsInf(tmp))) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  rtb_GameState = (uint8_T)((tmp < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-tmp)))))) : ((int32_T)((uint8_T)tmp)));

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* Chart: '<S17>/Chart' */
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

  /* End of Chart: '<S17>/Chart' */

  /* Update for UnitDelay: '<S71>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S72>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S73>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' incorporates:
     *  Bias: '<S168>/Bias'
     *  Merge: '<S142>/Merge1'
     *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' incorporates:
     *  Bias: '<S168>/Bias'
     *  Merge: '<S142>/Merge1'
     *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S74>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S94>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S74>/A'
   *  Delay: '<S74>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S74>/MemoryX' incorporates:
   *  Constant: '<S74>/B'
   *  Product: '<S94>/A[k]*xhat[k|k-1]'
   *  Product: '<S94>/B[k]*u[k]'
   *  Sum: '<S94>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S16>/Accumulator2' incorporates:
   *  Constant: '<S16>/Constant'
   *  DiscreteIntegrator: '<S16>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S16>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S16>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S57>/Delay Input1' incorporates:
   *  Constant: '<S11>/Constant3'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S53>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S305>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S305>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S327>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S326>/UD'
   *
   * Block description for '<S326>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch2;

  /* Update for UnitDelay: '<S324>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch4;

  /* Update for UnitDelay: '<S307>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Sum_jt;

  /* Update for UnitDelay: '<S322>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S322>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S322>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Sum_jt;

  /* Update for UnitDelay: '<S306>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_n;

  /* Update for UnitDelay: '<S315>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S315>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S315>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_n;

  /* Update for UnitDelay: '<S229>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Product2_e2;

  /* Update for UnitDelay: '<S228>/UD'
   *
   * Block description for '<S228>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_i;

  /* Update for UnitDelay: '<S214>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_c;

  /* Update for UnitDelay: '<S218>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Sin4;

  /* Update for UnitDelay: '<S217>/UD'
   *
   * Block description for '<S217>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S211>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S250>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S249>/UD'
   *
   * Block description for '<S249>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S235>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S239>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S238>/UD'
   *
   * Block description for '<S238>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S232>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S271>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S270>/UD'
   *
   * Block description for '<S270>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S256>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S260>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S253>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S292>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Add_gd;

  /* Update for UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Subtract_e;

  /* Update for UnitDelay: '<S277>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Switch2_k;

  /* Update for UnitDelay: '<S281>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kw = rtb_Switch_jh;

  /* Update for UnitDelay: '<S280>/UD'
   *
   * Block description for '<S280>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S274>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_kh;

  /* Update for UnitDelay: '<S51>/Delay Input1'
   *
   * Block description for '<S51>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Swerve_Motors_Disabled;

  /* Update for UnitDelay: '<S41>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Add_ov;

  /* Update for UnitDelay: '<S50>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S50>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S50>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Add_ov;

  /* Update for UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Uk1_iw;

  /* Update for UnitDelay: '<S34>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S34>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S34>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Uk1_iw;

  /* Update for UnitDelay: '<S128>/UD'
   *
   * Block description for '<S128>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S129>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S130>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S131>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S132>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S137>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay;

  /* Update for UnitDelay: '<S137>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_rx;
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

    /* Start for If: '<S18>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S74>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S305>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S322>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S315>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S50>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S34>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S375>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S18>/Spline Path Following Enabled' */
    /* Start for If: '<S146>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S142>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S146>/Robot_Index_Is_Valid' */
    /* Start for If: '<S149>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S149>/Circle_Check_Valid' */
    /* Start for If: '<S151>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S149>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S146>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S18>/Spline Path Following Enabled' */
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
