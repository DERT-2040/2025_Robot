/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.394
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Apr  5 05:28:53 2025
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
#include <string.h>
#include <float.h>
#include "rt_defines.h"

/* Named constants for Chart: '<S9>/Debounce' */
#define Code_Gen_Model_IN_False        ((uint8_T)1U)
#define Code_Gen_Model_IN_Timer_False  ((uint8_T)2U)
#define Code_Gen_Model_IN_Timer_True   ((uint8_T)3U)
#define Code_Gen_Model_IN_True         ((uint8_T)4U)

/* Named constants for Chart: '<S31>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)7U)
#define Code_G_IN_Auto_Lower_Elevator_l ((uint8_T)2U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)2U)
#define Code_Gen_IN_Auto_Lower_Elevator ((uint8_T)1U)
#define Code_Gen_IN_Manual_Adjustment_c ((uint8_T)5U)
#define Code_Gen_M_IN_Algae_Pickup_High ((uint8_T)1U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)2U)
#define Code_Gen_Mo_IN_Algae_Pickup_Low ((uint8_T)2U)
#define Code_Gen_Mod_IN_Coral_Motor_Off ((uint8_T)2U)
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Mode_IN_Auto_Lower_Arm ((uint8_T)1U)
#define Code_Gen_Mode_IN_End_Game_Climb ((uint8_T)8U)
#define Code_Gen_Mode_IN_Level_4_Teleop ((uint8_T)5U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Algae_Score  ((uint8_T)3U)
#define Code_Gen_Model_IN_Coral        ((uint8_T)4U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)1U)
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
#define Code_Gen_Model_IN_Level_4_Auto ((uint8_T)4U)
#define Code_Gen_Model_IN_Level_4_Timer ((uint8_T)6U)
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Off_Target   ((uint8_T)1U)
#define Code_Gen_Model_IN_On_Target    ((uint8_T)2U)
#define Code_Gen_Model_IN_Start        ((uint8_T)9U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)7U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)6U)

/* Named constants for Chart: '<S22>/Chart' */
#define Code_Gen_M_IN_NO_ACTIVE_CHILD_g ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S28>/Reefscape_Auto_Steps' */
#define C_IN_Path_to_Coral_Station_1_v3 ((uint8_T)5U)
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)3U)
#define Code_Gen_M_IN_Lower_for_Scoring ((uint8_T)7U)
#define Code_Gen_M_IN_Path_to_Processor ((uint8_T)8U)
#define Code_Gen_M_IN_Path_to_Reef_2_v2 ((uint8_T)8U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)9U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)10U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)12U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)6U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)7U)
#define Code_Gen_Model_IN_Back         ((uint8_T)1U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Drive        ((uint8_T)1U)
#define Code_Gen_Model_IN_End_early    ((uint8_T)6U)
#define Code_Gen_Model_IN_L1_g         ((uint8_T)2U)
#define Code_Gen_Model_IN_Path_to_Reef ((uint8_T)9U)
#define Code_Gen_Model_IN_Raise_to_L2  ((uint8_T)2U)
#define Code_Gen_Model_IN_Raise_to_L4  ((uint8_T)2U)
#define Code_Gen_Model_IN_Raise_to_L4_e ((uint8_T)1U)
#define Code_Gen_Model_IN_Score_at_Reef ((uint8_T)11U)
#define Code_Gen_Model_IN_Set_L4       ((uint8_T)1U)
#define Code_Gen_Model_IN_Start_l      ((uint8_T)3U)
#define Code_Gen_Model_IN_Stay_at_L2   ((uint8_T)2U)
#define Code_Gen_Model_IN_Timer_to_L4  ((uint8_T)2U)
#define Code_Gen__IN_Score_at_Processor ((uint8_T)10U)
#define Code_IN_Adjust_Height_for_Algae ((uint8_T)1U)
#define Code_IN_Path_to_Coral_Station_1 ((uint8_T)4U)
#define Code_IN_Wait_at_Coral_Station_1 ((uint8_T)11U)
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)3U)
#define IN_Drive_Backward_from_Processo ((uint8_T)4U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)5U)

/* Exported block parameters */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S419>/Constant'
                                      *   '<S36>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S426>/Constant'
                                          *   '<S427>/Constant'
                                          *   '<S43>/Constant'
                                          *   '<S44>/Constant'
                                          */
real_T AT_Max_Error_Angle = 1.0;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S425>/Constant'
                                        *   '<S42>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.75;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S423>/Constant'
                                        *   '<S424>/Constant'
                                        *   '<S40>/Constant'
                                        *   '<S41>/Constant'
                                        */
real_T AT_On_Target_Time = 0.25;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S413>/Constant7'
                                        *   '<S29>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S413>/Constant6'
                                        *   '<S29>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S413>/Constant3'
                                        *   '<S29>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S413>/Constant4'
                                        *   '<S29>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S413>/Constant'
                                        *   '<S29>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S413>/Constant5'
                                        *   '<S29>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S413>/Constant1'
                                        *   '<S29>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S413>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S33>/Constant4'
                                      *   '<S435>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S33>/Constant10'
                                        *   '<S435>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S436>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.07;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S33>/Gain1'
                                *   '<S436>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S436>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.75;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S33>/Constant8'
                                   *   '<S436>/Constant8'
                                   */
real_T Actuator_DC = 0.5;              /* Variable: Actuator_DC
                                        * Referenced by: '<S14>/Constant6'
                                        */
real_T Actuator_Rev_Startup_Range = 10.0;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S108>/Constant'
                                          */
real_T Actuator_Rev_Target = 85.0;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S109>/Constant'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Auto_Algae_Height_Time = 0.5;   /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Backup_Time_Processor = 1.0;/* Variable: Auto_Backup_Time_Processor
                                         * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                         */
real_T Auto_Backup_Time_Reef = 0.25;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Path1_Delay_to_L2_Time = 0.5;/* Variable: Auto_Path1_Delay_to_L2_Time
                                          * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Path1_Delay_to_L4_Time = 0.25;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                           */
real_T Auto_Path2_Delay_to_L4_Time = 0.0;/* Variable: Auto_Path2_Delay_to_L4_Time
                                          * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Speed_Algae = 0.5;         /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Coral = 1.0;         /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Processor = 0.5;     /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Reef = 1.0;          /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Starting_Position = 2.0;   /* Variable: Auto_Starting_Position
                                        * Referenced by:
                                        *   '<S15>/Constant2'
                                        *   '<S28>/Constant1'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S450>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S446>/Constant'
                                        *   '<S446>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S450>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S446>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -2.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S415>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S415>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S415>/Reefscape_Chart'
                                       *   '<S31>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S415>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_Neg_Threshold = -86.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S71>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 80.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S72>/Constant'
                                       *   '<S73>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S415>/Reefscape_Chart'
                                             *   '<S31>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.033333; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S74>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.0005;    /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S75>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.005;    /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S75>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S75>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.025;      /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S75>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.025;       /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S75>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
real_T Coral_Detect_Distance = 150.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S28>/Reefscape_Auto_Steps'
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Drive_Engage_Hook_Angle = 3.1416;/* Variable: Drive_Engage_Hook_Angle
                                         * Referenced by: '<S436>/Constant9'
                                         */
real_T Drive_Engage_Hook_Speed = 0.4;  /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S436>/Constant7'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S269>/Constant3'
                                        *   '<S290>/Constant3'
                                        *   '<S311>/Constant3'
                                        *   '<S332>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S269>/Constant2'
                                   *   '<S290>/Constant2'
                                   *   '<S311>/Constant2'
                                   *   '<S332>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S269>/Saturation'
                                        *   '<S290>/Saturation'
                                        *   '<S311>/Saturation'
                                        *   '<S332>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S269>/Saturation'
                                        *   '<S290>/Saturation'
                                        *   '<S311>/Saturation'
                                        *   '<S332>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S269>/Gain'
                                            *   '<S290>/Gain'
                                            *   '<S311>/Gain'
                                            *   '<S332>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S269>/Gain2'
                                        *   '<S290>/Gain2'
                                        *   '<S311>/Gain2'
                                        *   '<S332>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S269>/Saturation1'
                                         *   '<S290>/Saturation1'
                                         *   '<S311>/Saturation1'
                                         *   '<S332>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S269>/Saturation1'
                                        *   '<S290>/Saturation1'
                                        *   '<S311>/Saturation1'
                                        *   '<S332>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S269>/Gain1'
                                        *   '<S290>/Gain1'
                                        *   '<S311>/Gain1'
                                        *   '<S332>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S274>/Constant'
                            *   '<S295>/Constant'
                            *   '<S316>/Constant'
                            *   '<S337>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.1;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S12>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S92>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 1.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S89>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S12>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S93>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S93>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 20.5;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S415>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S415>/Reefscape_Chart'
                                         *   '<S31>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S415>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Bottom_Pre = 14.0;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S415>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S70>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.2;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S415>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 15.0;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S90>/Constant'
                                     *   '<S415>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 12.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = 1.25;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.25;     /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 9.25;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 27.5;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.5;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S415>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.875;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 11.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.6;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 30.0;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S13>/Constant1'
                                         *   '<S13>/Constant3'
                                         */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S12>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S93>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S93>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S93>/Saturation1'
                                        */
real_T Elevator_Limit_Switch_Debounce_F2T = 0.5;
                                 /* Variable: Elevator_Limit_Switch_Debounce_F2T
                                  * Referenced by:
                                  *   '<S9>/Constant1'
                                  *   '<S10>/Constant1'
                                  */
real_T Elevator_Limit_Switch_Debounce_T2F = 0.0;
                                 /* Variable: Elevator_Limit_Switch_Debounce_T2F
                                  * Referenced by:
                                  *   '<S9>/Constant2'
                                  *   '<S10>/Constant2'
                                  */
real_T Elevator_LowerPickup_Time = 0.3;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S13>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S12>/Constant8'
                                        *   '<S93>/Constant1'
                                        *   '<S93>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S93>/Constant'
                                        *   '<S93>/Saturation2'
                                        */
real_T Gyro_Calibration_Auto_Center = 180.0;/* Variable: Gyro_Calibration_Auto_Center
                                             * Referenced by: '<S15>/Constant5'
                                             */
real_T Gyro_Calibration_Auto_Left = 210.0;/* Variable: Gyro_Calibration_Auto_Left
                                           * Referenced by: '<S15>/Constant4'
                                           */
real_T Gyro_Calibration_Auto_Right = 125.0;/* Variable: Gyro_Calibration_Auto_Right
                                            * Referenced by: '<S15>/Constant6'
                                            */
real_T Gyro_Calibration_Default = 180.0;/* Variable: Gyro_Calibration_Default
                                         * Referenced by:
                                         *   '<S15>/Constant7'
                                         *   '<S15>/Unit Delay1'
                                         */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S15>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S18>/Constant1'
                                        *   '<S18>/Constant2'
                                        */
real_T L4_Switch_Time = 0.1;           /* Variable: L4_Switch_Time
                                        * Referenced by:
                                        *   '<S415>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Limelight_Tag_Angle_Offset = 0.0;/* Variable: Limelight_Tag_Angle_Offset
                                         * Referenced by: '<S19>/Constant2'
                                         */
real_T Limelight_Tag_X_Offset = -0.28; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S19>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = -0.28; /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S19>/Constant1'
                                        */
real_T MatchTime_Skip_Coral_Pickup = 7.0;/* Variable: MatchTime_Skip_Coral_Pickup
                                          * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                          */
real_T MatchTime_Skip_Second_L4 = 3.6; /* Variable: MatchTime_Skip_Second_L4
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S21>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S195>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S254>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S254>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S201>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S214>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S254>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S365>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S365>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S365>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S365>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S365>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S365>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S382>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S382>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S382>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S382>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S381>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S382>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S382>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S382>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S382>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S382>/Constant1'
                                   *   '<S382>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S382>/Constant'
                                   *   '<S382>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S272>/Constant3'
                                        *   '<S293>/Constant3'
                                        *   '<S314>/Constant3'
                                        *   '<S335>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S272>/Constant2'
                                *   '<S293>/Constant2'
                                *   '<S314>/Constant2'
                                *   '<S335>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S272>/Saturation'
                                           *   '<S293>/Saturation'
                                           *   '<S314>/Saturation'
                                           *   '<S335>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S272>/Saturation'
                                          *   '<S293>/Saturation'
                                          *   '<S314>/Saturation'
                                          *   '<S335>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S272>/Gain2'
                                         *   '<S293>/Gain2'
                                         *   '<S314>/Gain2'
                                         *   '<S335>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S272>/Saturation1'
                                             *   '<S293>/Saturation1'
                                             *   '<S314>/Saturation1'
                                             *   '<S335>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S272>/Saturation1'
                                            *   '<S293>/Saturation1'
                                            *   '<S314>/Saturation1'
                                            *   '<S335>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S272>/Gain1'
                                        *   '<S293>/Gain1'
                                        *   '<S314>/Gain1'
                                        *   '<S335>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S364>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S364>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S364>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S364>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S364>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S364>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S435>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S435>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S416>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S416>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S416>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S352>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S352>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S352>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S352>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S352>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S352>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S436>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S435>/Dead Zone'
                                        *   '<S436>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S435>/Dead Zone'
                                        *   '<S436>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.05;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S14>/Constant2'
                                        */
real_T Winch_Rev_Target = 30.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S107>/Constant'
                                        */
real_T Winch_Spool_DC = 1.0;           /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S14>/Constant1'
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
static void Code_Gen_Mode_Algae_Pickup_High(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Algae_Pickup_Low(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_enter_internal_Coral_Eject(uint8_T rtu_GameState, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void enter_internal_Coral_Score_Posi(boolean_T rtu_Gamepad_B1_A,
  boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T
  rtu_Gamepad_B4_Y, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Level_3(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Level_4(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_M_Coral_Score_Position(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code__exit_internal_Coral_Eject(boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Level_4_Teleop(boolean_T rtu_Gamepad_RB, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Coral(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, boolean_T rtu_AT_On_Target, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_exit_internal_Coral_Pickup(boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Set_Level(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Coral_Pickup(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  boolean_T rtu_Gamepad_Start, boolean_T rtu_Gamepad_Back, boolean_T
  rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down,
  boolean_T rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, real_T
  rtu_Coral_TOF_Distance, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, boolean_T *rty_Elevator_LowerPickup_Reset, boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, uint8_T *rty_Set_Algae_Level,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Elevator_Height_Bottom(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Elevator_Height_Bottom_pre(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_End_Game_Climb(boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Set_Level_h(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Co_Elevator_CoralArm_CoralWheel(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, real_T rtu_Coral_TOF_Distance, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, boolean_T
  *rty_Elevator_LowerPickup_Reset, boolean_T *rty_Coral_Pickup_Lower_Wait_Sta,
  uint16_T *rty_Set_Coral_Level, uint8_T *rty_Set_Algae_Level, boolean_T
  *rty_Coral_Score, DW_Reefscape_Chart_Code_Gen_M_T *localDW);

/* Forward declaration for local functions */
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, const uint8_T *Switch6, const uint8_T *Switch14, const
  boolean_T *UnitDelay1);

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

uint32_T plook_u32u8_evencka(uint8_T u, uint8_T bp0, uint8_T bpSpace, uint32_T
  maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'even'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp0) {
    bpIndex = 0U;
  } else {
    uint8_T fbpIndex;
    fbpIndex = (uint8_T)(((uint32_T)((uint8_T)(((uint32_T)u) - bp0))) / bpSpace);
    if (fbpIndex < maxIndex) {
      bpIndex = fbpIndex;
    } else {
      bpIndex = maxIndex;
    }
  }

  return bpIndex;
}

/*
 * System initialize for atomic system:
 *    '<S9>/Debounce'
 *    '<S10>/Debounce'
 */
void Code_Gen_Model_Debounce_Init(boolean_T *rty_Out)
{
  *rty_Out = false;
}

/*
 * Output and update for atomic system:
 *    '<S9>/Debounce'
 *    '<S10>/Debounce'
 */
void Code_Gen_Model_Debounce(boolean_T rtu_In, boolean_T rtu_Init_Cond, real_T
  rtu_Time_True, real_T rtu_Time_False, boolean_T *rty_Out,
  DW_Debounce_Code_Gen_Model_T *localDW)
{
  /* Chart: '<S9>/Debounce' */
  if (localDW->is_active_c3_Controls_Component == 0U) {
    localDW->is_active_c3_Controls_Component = 1U;
    if (!rtu_Init_Cond) {
      localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_False;
      *rty_Out = false;
    } else {
      localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_True;
      *rty_Out = true;
    }
  } else {
    switch (localDW->is_c3_Controls_Components_lib) {
     case Code_Gen_Model_IN_False:
      *rty_Out = false;
      if (rtu_In) {
        localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_Timer_True;
        localDW->timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Timer_False:
      if (localDW->timer >= rtu_Time_False) {
        localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_False;
        *rty_Out = false;
      } else if (rtu_In) {
        localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_True;
        *rty_Out = true;
      } else {
        localDW->timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Timer_True:
      if (localDW->timer >= rtu_Time_True) {
        localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_True;
        *rty_Out = true;
      } else if (!rtu_In) {
        localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_False;
        *rty_Out = false;
      } else {
        localDW->timer += 0.02;
      }
      break;

     default:
      /* case IN_True: */
      *rty_Out = true;
      if (!rtu_In) {
        localDW->is_c3_Controls_Components_lib = Code_Gen_Model_IN_Timer_False;
        localDW->timer = 0.02;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/Debounce' */
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Mode_Algae_Pickup_High(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 4.3;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Algae_Pickup_High == Code_Gen_Model_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Algae_Pickup_High = Code_Gen_Model_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Algae_Pickup_Low(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 4.2;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Algae_Pickup_Low == Code_Gen_Model_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Algae_Pickup_Low = Code_Gen_Model_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_enter_internal_Coral_Eject(uint8_T rtu_GameState, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  switch (*rty_Set_Coral_Level) {
   case 2:
    localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_2;
    *rty_State_ID = 3.2;
    localDW->is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
    *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    break;

   case 3:
    localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_3;
    *rty_State_ID = 3.3;
    localDW->is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
    *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    break;

   default:
    if (((*rty_Set_Coral_Level) == 4) && (rtu_GameState == 2)) {
      localDW->is_Coral_Eject = Code_Gen_Mode_IN_Level_4_Teleop;
      *rty_State_ID = 3.4;
      localDW->is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else if (((*rty_Set_Coral_Level) == 4) && (rtu_GameState == 1)) {
      localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_4_Auto;
      *rty_State_ID = 3.5;
      localDW->is_Level_4_Auto = Code_Gen_Mode_IN_Auto_Lower_Arm;
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
      *rty_State_ID = 3.7;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(boolean_T rtu_Gamepad_B1_A,
  boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T
  rtu_Gamepad_B4_Y, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  if ((localDW->Set_L1) || rtu_Gamepad_B1_A) {
    localDW->is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    *rty_State_ID = 2.1;
    *rty_Set_Coral_Level = 1U;
    *rty_Elevator_Height_Desired = Elevator_Height_L1;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L1;
  } else if ((localDW->Set_L2) || rtu_Gamepad_B3_X) {
    localDW->is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    *rty_State_ID = 2.2;
    *rty_Set_Coral_Level = 2U;
    *rty_Elevator_Height_Desired = Elevator_Height_L2;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L2;
  } else if ((localDW->Set_L3) || rtu_Gamepad_B2_B) {
    localDW->is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    *rty_State_ID = 2.3;
    *rty_Set_Coral_Level = 3U;
    *rty_Elevator_Height_Desired = Elevator_Height_L3;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L3;
  } else if ((localDW->Set_L4) || rtu_Gamepad_B4_Y) {
    localDW->is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
    *rty_State_ID = 2.4;
    *rty_Set_Coral_Level = 4U;
    *rty_Elevator_Height_Desired = Elevator_Height_L4;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L4;
  } else {
    localDW->is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
    *rty_State_ID = 2.5;
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Level_3(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 2.3;
  if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0)) {
    localDW->is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
    *rty_State_ID = 2.5;
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 2.4;
  if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0)) {
    localDW->is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
    *rty_State_ID = 2.5;
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_M_Coral_Score_Position(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  if (((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) ||
      rtu_Gamepad_B4_Y) {
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
    localDW->is_Coral = Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
      rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
  } else if (rtu_Gamepad_RB || (localDW->timer_robot_target >= AT_On_Target_Time))
  {
    localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Code_Gen_Model_IN_Coral_Eject;
    Code_enter_internal_Coral_Eject(rtu_GameState, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Coral_Level, localDW);
  } else if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    switch (localDW->is_Coral_Score_Position) {
     case Code_Gen_Model_IN_Level_1:
      *rty_State_ID = 2.1;
      if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0))
      {
        localDW->is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
        *rty_State_ID = 2.5;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      *rty_State_ID = 2.2;
      if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0))
      {
        localDW->is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
        *rty_State_ID = 2.5;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_Level_3(rtu_Gamepad_Stick_Left_Y, rtu_Gamepad_Stick_Right_Y,
        rty_State_ID, rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
        localDW);
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_Level_4(rtu_Gamepad_Stick_Left_Y, rtu_Gamepad_Stick_Right_Y,
        rty_State_ID, rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
        localDW);
      break;

     default:
      /* case IN_Manual_Adjustment: */
      *rty_State_ID = 2.5;
      if (!rtu_Coral_Limit_Switch) {
        localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Coral = Code_Gen_Model_IN_Coral_Eject;
        localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
        *rty_State_ID = 3.7;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
        localDW->timer = 0.0;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code__exit_internal_Coral_Eject(boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  if (localDW->is_Coral_Eject == Code_Gen_Model_IN_Stop) {
    *rty_Coral_Score = false;
    localDW->is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    localDW->is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Level_4_Auto = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4_Teleop(boolean_T rtu_Gamepad_RB, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 3.4;
  if (rtu_Gamepad_RB) {
    localDW->is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
    *rty_State_ID = 3.7;
    *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
    localDW->timer = 0.0;
  } else if (!rtu_Coral_Limit_Switch) {
    localDW->is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_4_Timer;
    *rty_State_ID = 3.6;
    *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    localDW->timer = 0.02;
  } else if (localDW->is_Level_4_Teleop == Code_Gen_Mode_IN_Auto_Lower_Arm) {
    if (rtu_Coral_Arm_Angle_Measured < Coral_Arm_Angle_L4_Eject_Teleop) {
      localDW->is_Level_4_Teleop = Code_Gen_M_IN_Manual_Adjustment;
      *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
        Elevator_Height_Manual_Gain;
      *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
        Coral_Arm_Manual_Gain;
    } else {
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    }

    /* case IN_Manual_Adjustment: */
  } else if (rtu_AT_On_Target) {
    localDW->is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
    *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Coral(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, boolean_T rtu_AT_On_Target, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  if (localDW->is_Coral == Code_Gen_Model_IN_Coral_Eject) {
    if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
      Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
      localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      *rty_State_ID = 1.0;
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
      localDW->is_Set_Level = Code_Gen_Model_IN_None;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_Back) {
      if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
        Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
        localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        *rty_Set_Coral_Level = 0U;
        localDW->is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        *rty_State_ID = 0.2;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
        localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        *rty_Set_Coral_Level = 0U;
        localDW->is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        *rty_State_ID = 0.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
        localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      }
    } else if (rtu_Gamepad_POV_Up) {
      Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
      *rty_State_ID = 4.4;
      *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Down) {
      Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
      *rty_State_ID = 4.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Left) {
      Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
      *rty_State_ID = 4.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 2U;
      localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Right) {
      Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
      *rty_State_ID = 4.3;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 3U;
      localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      switch (localDW->is_Coral_Eject) {
       case Code_Gen_Model_IN_Eject:
        *rty_State_ID = 3.7;
        if (localDW->timer >= Coral_Eject_Time) {
          localDW->is_Coral_Eject = Code_Gen_Model_IN_Stop;
          *rty_State_ID = 3.8;
          *rty_Coral_Wheel_DC = 0.0;
          *rty_Coral_Score = true;
        } else {
          localDW->timer += 0.02;
        }
        break;

       case Code_Gen_Model_IN_Level_2:
        *rty_State_ID = 3.2;
        if ((!rtu_Coral_Limit_Switch) || rtu_Gamepad_RB) {
          localDW->is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
          *rty_State_ID = 3.7;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        } else if (localDW->is_Level_2 == Code_Gen_IN_Auto_Lower_Elevator) {
          if (rtu_Elevator_Height_Measured <= Elevator_Height_L2_Eject) {
            localDW->is_Level_2 = Code_Gen_M_IN_Manual_Adjustment;
            *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
              Elevator_Height_Manual_Gain;
            *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
              Coral_Arm_Manual_Gain;
          } else {
            *rty_Elevator_Height_Desired +=
              Elevator_Height_Coral_Score_Lower_Rate;
          }

          /* case IN_Manual_Adjustment: */
        } else if (rtu_AT_On_Target) {
          localDW->is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
            Elevator_Height_Manual_Gain;
          *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
            Coral_Arm_Manual_Gain;
        }
        break;

       case Code_Gen_Model_IN_Level_3:
        *rty_State_ID = 3.3;
        if ((!rtu_Coral_Limit_Switch) || rtu_Gamepad_RB) {
          localDW->is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
          *rty_State_ID = 3.7;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        } else if (localDW->is_Level_3 == Code_Gen_IN_Auto_Lower_Elevator) {
          if (rtu_Elevator_Height_Measured <= Elevator_Height_L3_Eject) {
            localDW->is_Level_3 = Code_Gen_M_IN_Manual_Adjustment;
            *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
              Elevator_Height_Manual_Gain;
            *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
              Coral_Arm_Manual_Gain;
          } else {
            *rty_Elevator_Height_Desired +=
              Elevator_Height_Coral_Score_Lower_Rate;
          }

          /* case IN_Manual_Adjustment: */
        } else if (rtu_AT_On_Target) {
          localDW->is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
            Elevator_Height_Manual_Gain;
          *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
            Coral_Arm_Manual_Gain;
        }
        break;

       case Code_Gen_Model_IN_Level_4_Auto:
        *rty_State_ID = 3.5;
        if (!rtu_Coral_Limit_Switch) {
          localDW->is_Level_4_Auto = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_4_Timer;
          *rty_State_ID = 3.6;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
          localDW->timer = 0.02;
        } else if (localDW->is_Level_4_Auto == Code_Gen_Mode_IN_Auto_Lower_Arm)
        {
          if (rtu_Coral_Arm_Angle_Measured < Coral_Arm_Angle_L4_Eject_Auto) {
            localDW->is_Level_4_Auto = Code_G_IN_Auto_Lower_Elevator_l;
            *rty_Elevator_Height_Desired +=
              Elevator_Height_Coral_Score_Lower_Rate;
          } else {
            *rty_Coral_Arm_Angle_Desired +=
              Coral_Arm_Angle_Coral_Score_Lower_Rate;
          }
        } else {
          /* case IN_Auto_Lower_Elevator: */
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        }
        break;

       case Code_Gen_Mode_IN_Level_4_Teleop:
        Code_Gen_Model_Level_4_Teleop(rtu_Gamepad_RB, rtu_Gamepad_Stick_Left_Y,
          rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
          rtu_Coral_Limit_Switch, rtu_AT_On_Target, rty_State_ID,
          rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
          rty_Coral_Wheel_DC, localDW);
        break;

       case Code_Gen_Model_IN_Level_4_Timer:
        *rty_State_ID = 3.6;
        if (localDW->timer >= L4_Switch_Time) {
          localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
          *rty_State_ID = 3.7;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        } else {
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
          localDW->timer += 0.02;
        }
        break;

       default:
        /* case IN_Stop: */
        *rty_State_ID = 3.8;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
        break;
      }
    }
  } else {
    /* case IN_Coral_Score_Position: */
    Code_Gen_M_Coral_Score_Position(rtu_GameState, rtu_Gamepad_B1_A,
      rtu_Gamepad_B2_B, rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start,
      rtu_Gamepad_Back, rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Coral_Limit_Switch, rtu_Algae_Limit_Switch, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Coral_Level, rty_Set_Algae_Level, localDW);
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_exit_internal_Coral_Pickup(boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  localDW->is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (localDW->is_Actions == Code_IN_Coral_Pickup_Lower_Wait) {
    *rty_Coral_Pickup_Lower_Wait_Sta = false;
    localDW->is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  switch (localDW->is_Set_Level) {
   case Code_Gen_Model_IN_L1:
    if ((rtu_Gamepad_B3_X || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (rtu_Gamepad_B1_A) {
      localDW->is_Set_Level = Code_Gen_Model_IN_L1;
      localDW->Set_L1 = true;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B3_X) {
      localDW->is_Set_Level = Code_Gen_Model_IN_L2;
      localDW->Set_L1 = false;
      localDW->Set_L2 = true;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B2_B) {
      localDW->is_Set_Level = Code_Gen_Model_IN_L3;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = true;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B4_Y) {
      localDW->is_Set_Level = Code_Gen_Model_IN_L4;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  boolean_T rtu_Gamepad_Start, boolean_T rtu_Gamepad_Back, boolean_T
  rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down,
  boolean_T rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, real_T
  rtu_Coral_TOF_Distance, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, boolean_T *rty_Elevator_LowerPickup_Reset, boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, uint8_T *rty_Set_Algae_Level,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    switch (localDW->is_Actions) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      *rty_State_ID = 1.1;
      if (rtu_Coral_Limit_Switch) {
        localDW->is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
        *rty_State_ID = 1.2;
        *rty_Coral_Pickup_Lower_Wait_Sta = true;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Hold;
        *rty_Elevator_LowerPickup_Reset = false;
        localDW->timer = 0.0;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      *rty_State_ID = 1.2;
      *rty_Elevator_LowerPickup_Reset = false;
      if ((localDW->timer >= Elevator_LowerPickup_Time) && ((((localDW->Set_L1) ||
             (localDW->Set_L2)) || (localDW->Set_L3)) || (localDW->Set_L4))) {
        *rty_Coral_Pickup_Lower_Wait_Sta = false;
        localDW->is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
        *rty_State_ID = 1.3;
        *rty_Elevator_Height_Desired = Elevator_Height_Raise;
      } else {
        localDW->timer += 0.02;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      *rty_State_ID = 1.0;
      if ((fabs((*rty_Elevator_Height_Desired) - rtu_Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            ((*rty_Coral_Arm_Angle_Desired) - rtu_Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) && (rtu_Coral_TOF_Distance <
            Coral_Detect_Distance))) {
        localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
        *rty_State_ID = 1.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Lower;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
        if (localDW->is_Coral_Pickup_Prepare == Code_Gen_Model_IN_Coral_Eject) {
          if (localDW->timer >= Coral_Eject_Time) {
            localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
            *rty_Coral_Wheel_DC = 0.0;
          } else {
            localDW->timer += 0.02;
          }

          /* case IN_Coral_Motor_Off: */
        } else if (rtu_Gamepad_RB) {
          localDW->is_Coral_Pickup_Prepare = Code_Gen_Model_IN_Coral_Eject;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        }
      }
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      *rty_State_ID = 1.3;
      if ((fabs((*rty_Elevator_Height_Desired) - rtu_Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((localDW->Set_L1) ||
             (localDW->Set_L2)) || (localDW->Set_L3)) || (localDW->Set_L4))) {
        Code_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
        localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Start_Angle;
        *rty_State_ID = 2.0;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Start;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;
    }

    if (localDW->is_Elevator_CoralArm_CoralWheel ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, localDW);
    }
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Elevator_Height_Bottom(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 0.2;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Elevator_Height_Bottom == Code_Gen_Model_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Elevator_Height_Bottom = Code_Gen_Model_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Elevator_Height_Bottom_pre(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  boolean_T guard1;
  *rty_State_ID = 0.1;
  guard1 = false;
  if (rtu_Elevator_Height_Measured > ((*rty_Elevator_Height_Desired) -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Elevator_Height_Bottom_pre == Code_Gen_Model_IN_Coral_Eject)
    {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Model_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }

  if (guard1) {
    localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
    *rty_State_ID = 0.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb(boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 4.4;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
    localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_End_Game_Climb == Code_Gen_Model_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_End_Game_Climb = Code_Gen_Model_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_h(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  switch (localDW->is_Set_Level_n) {
   case Code_Gen_Model_IN_L1:
    if ((rtu_Gamepad_B3_X || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Code_Gen_Model_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (rtu_Gamepad_B1_A) {
      localDW->is_Set_Level_n = Code_Gen_Model_IN_L1;
      localDW->Set_L1 = true;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B3_X) {
      localDW->is_Set_Level_n = Code_Gen_Model_IN_L2;
      localDW->Set_L1 = false;
      localDW->Set_L2 = true;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B2_B) {
      localDW->is_Set_Level_n = Code_Gen_Model_IN_L3;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = true;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B4_Y) {
      localDW->is_Set_Level_n = Code_Gen_Model_IN_L4;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S31>/Reefscape_Chart' */
static void Co_Elevator_CoralArm_CoralWheel(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, real_T rtu_Coral_TOF_Distance, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, boolean_T
  *rty_Elevator_LowerPickup_Reset, boolean_T *rty_Coral_Pickup_Lower_Wait_Sta,
  uint16_T *rty_Set_Coral_Level, uint8_T *rty_Set_Algae_Level, boolean_T
  *rty_Coral_Score, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  switch (localDW->is_Elevator_CoralArm_CoralWheel) {
   case Code_Gen_M_IN_Algae_Pickup_High:
    Code_Gen_Mode_Algae_Pickup_High(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      localDW);
    break;

   case Code_Gen_Mo_IN_Algae_Pickup_Low:
    Code_Gen_Model_Algae_Pickup_Low(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      localDW);
    break;

   case Code_Gen_Model_IN_Algae_Score:
    *rty_State_ID = 4.1;
    if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
      localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral_Pickup;
      localDW->is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      *rty_State_ID = 1.0;
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
      localDW->is_Set_Level = Code_Gen_Model_IN_None;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_Back) {
      if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
        localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        *rty_State_ID = 0.2;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        *rty_State_ID = 0.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
        localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      }
    } else if (rtu_Gamepad_POV_Up) {
      localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mode_IN_End_Game_Climb;
      *rty_State_ID = 4.4;
      *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      localDW->is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Down) {
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
      *rty_State_ID = 4.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Left) {
      localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mo_IN_Algae_Pickup_Low;
      *rty_State_ID = 4.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 2U;
      localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Right) {
      localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_M_IN_Algae_Pickup_High;
      *rty_State_ID = 4.3;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 3U;
      localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
        Elevator_Height_Manual_Gain;
      *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
        Coral_Arm_Manual_Gain;
      if (localDW->is_Algae_Score == Code_Gen_Model_IN_Coral_Eject) {
        if (localDW->timer >= Coral_Eject_Time) {
          localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
          *rty_Coral_Wheel_DC = 0.0;
        } else {
          localDW->timer += 0.02;
        }

        /* case IN_Coral_Motor_Off: */
      } else if (rtu_Gamepad_RB) {
        localDW->is_Algae_Score = Code_Gen_Model_IN_Coral_Eject;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
        localDW->timer = 0.0;
      }
    }
    break;

   case Code_Gen_Model_IN_Coral:
    Code_Gen_Model_Coral(rtu_GameState, rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
                         rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start,
                         rtu_Gamepad_Back, rtu_Gamepad_RB, rtu_Gamepad_POV_Up,
                         rtu_Gamepad_POV_Down, rtu_Gamepad_POV_Left,
                         rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
                         rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
                         rtu_Coral_Arm_Angle_Measured, rtu_Coral_Limit_Switch,
                         rtu_Algae_Limit_Switch, rtu_AT_On_Target, rty_State_ID,
                         rty_Elevator_Height_Desired,
                         rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC,
                         rty_Set_Coral_Level, rty_Set_Algae_Level,
                         rty_Coral_Score, localDW);
    break;

   case Code_Gen_Model_IN_Coral_Pickup:
    Code_Gen_Model_Coral_Pickup(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
      rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Coral_TOF_Distance,
      rtu_Coral_Limit_Switch, rtu_Algae_Limit_Switch, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Elevator_LowerPickup_Reset,
      rty_Coral_Pickup_Lower_Wait_Sta, rty_Set_Algae_Level, localDW);
    break;

   case Code__IN_Elevator_Height_Bottom:
    Code_Gen_Elevator_Height_Bottom(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      localDW);
    break;

   case C_IN_Elevator_Height_Bottom_pre:
    Code_Elevator_Height_Bottom_pre(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Algae_Limit_Switch, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Algae_Level, localDW);
    break;

   case Code_Gen_Mode_IN_End_Game_Climb:
    Code_Gen_Model_End_Game_Climb(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      localDW);
    break;

   case Code_Gen_Model_IN_Start:
    *rty_State_ID = 0.0;
    if ((((rtu_Coral_Limit_Switch && (localDW->Set_L1)) || (localDW->Set_L2)) ||
         (localDW->Set_L3)) || (localDW->Set_L4)) {
      localDW->is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral;
      localDW->is_Coral = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
        rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
        rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
    } else if (!rtu_Coral_Limit_Switch) {
      if (rtu_Algae_Limit_Switch) {
        localDW->is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Algae_Score;
        *rty_State_ID = 4.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        localDW->is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        *rty_State_ID = 0.2;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      }
    } else {
      Code_Gen_Model_Set_Level_h(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, localDW);
    }
    break;

   default:
    /* case IN_Start_Angle: */
    *rty_State_ID = 2.0;
    if (rtu_Coral_Arm_Angle_Measured > Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral;
      localDW->is_Coral = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
        rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
        rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
    }
    break;
  }
}

/*
 * System initialize for atomic system:
 *    '<S31>/Reefscape_Chart'
 *    '<S415>/Reefscape_Chart'
 */
void Code_Gen_M_Reefscape_Chart_Init(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score)
{
  *rty_State_ID = 0.0;
  *rty_Elevator_Height_Desired = 0.0;
  *rty_Coral_Arm_Angle_Desired = 0.0;
  *rty_Coral_Wheel_DC = 0.0;
  *rty_Algae_Wheel_Outside_DC = 0.0;
  *rty_Algae_Wheel_Inside_DC = 0.0;
  *rty_Elevator_LowerPickup_Reset = false;
  *rty_Coral_Pickup_Lower_Wait_Sta = false;
  *rty_Set_Coral_Level = 0U;
  *rty_Set_Algae_Level = 0U;
  *rty_Coral_Score = false;
}

/*
 * System reset for atomic system:
 *    '<S31>/Reefscape_Chart'
 *    '<S415>/Reefscape_Chart'
 */
void Code_Gen__Reefscape_Chart_Reset(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  localDW->is_active_c5_Code_Gen_Model = 0U;
  localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_4_Auto = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Elevator_Height_Bottom_pre = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Wheels = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  localDW->is_AT_On_Target_Timer = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  *rty_State_ID = 0.0;
  *rty_Elevator_Height_Desired = 0.0;
  *rty_Coral_Arm_Angle_Desired = 0.0;
  *rty_Coral_Wheel_DC = 0.0;
  localDW->timer = 0.0;
  *rty_Algae_Wheel_Outside_DC = 0.0;
  *rty_Algae_Wheel_Inside_DC = 0.0;
  *rty_Elevator_LowerPickup_Reset = false;
  localDW->Set_L1 = false;
  localDW->Set_L2 = false;
  localDW->Set_L3 = false;
  localDW->Set_L4 = false;
  *rty_Coral_Pickup_Lower_Wait_Sta = false;
  *rty_Set_Coral_Level = 0U;
  *rty_Set_Algae_Level = 0U;
  localDW->timer_robot_target = 0.0;
  *rty_Coral_Score = false;
}

/*
 * Output and update for atomic system:
 *    '<S31>/Reefscape_Chart'
 *    '<S415>/Reefscape_Chart'
 */
void Code_Gen_Model_Reefscape_Chart(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_LT,
  boolean_T rtu_Gamepad_RT, boolean_T rtu_Gamepad_POV_Up, boolean_T
  rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, real_T rtu_Coral_TOF_Distance, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, real_T
  *rty_Algae_Wheel_Outside_DC, real_T *rty_Algae_Wheel_Inside_DC, boolean_T
  *rty_Elevator_LowerPickup_Reset, boolean_T *rty_Coral_Pickup_Lower_Wait_Sta,
  uint16_T *rty_Set_Coral_Level, uint8_T *rty_Set_Algae_Level, boolean_T
  *rty_Coral_Score, DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  /* Chart: '<S31>/Reefscape_Chart' */
  if (localDW->is_active_c5_Code_Gen_Model == 0U) {
    localDW->is_active_c5_Code_Gen_Model = 1U;
    localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Start;
    *rty_State_ID = 0.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level_n = Code_Gen_Model_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
    localDW->is_Algae_Wheels = Code_Gen_Model_IN_Off;
    *rty_Algae_Wheel_Outside_DC = 0.0;
    *rty_Algae_Wheel_Inside_DC = 0.0;
    localDW->is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
    localDW->timer_robot_target = 0.0;
  } else {
    Co_Elevator_CoralArm_CoralWheel(rtu_GameState, rtu_Gamepad_B1_A,
      rtu_Gamepad_B2_B, rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start,
      rtu_Gamepad_Back, rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Coral_TOF_Distance,
      rtu_Coral_Limit_Switch, rtu_Algae_Limit_Switch, rtu_AT_On_Target,
      rty_State_ID, rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Elevator_LowerPickup_Reset,
      rty_Coral_Pickup_Lower_Wait_Sta, rty_Set_Coral_Level, rty_Set_Algae_Level,
      rty_Coral_Score, localDW);
    switch (localDW->is_Algae_Wheels) {
     case Code_Gen_Model_IN_Algae_Hold:
      *rty_Algae_Wheel_Outside_DC = Algae_Hold_DC;
      *rty_Algae_Wheel_Inside_DC = Algae_Hold_DC;
      if (rtu_Gamepad_RT) {
        localDW->is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;
        *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
        localDW->timer = 0.0;
      }
      break;

     case Code_Gen_Model_IN_Algae_Pull_In:
      *rty_Algae_Wheel_Outside_DC = Algae_Pull_In_DC;
      *rty_Algae_Wheel_Inside_DC = Algae_Pull_In_DC;
      if (rtu_Algae_Limit_Switch) {
        localDW->is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;
        *rty_Algae_Wheel_Outside_DC = Algae_Hold_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Hold_DC;
      } else if (rtu_Gamepad_RT) {
        localDW->is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;
        *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
        localDW->timer = 0.0;
      }
      break;

     case Code_Gen_Mode_IN_Algae_Push_Out:
      *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
      *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
      if (localDW->timer >= Algae_Eject_Time) {
        localDW->is_Algae_Wheels = Code_Gen_Model_IN_Off;
        *rty_Algae_Wheel_Outside_DC = 0.0;
        *rty_Algae_Wheel_Inside_DC = 0.0;
      } else if ((rtu_Gamepad_LT || rtu_Gamepad_POV_Left) ||
                 rtu_Gamepad_POV_Right) {
        localDW->is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;
        *rty_Algae_Wheel_Outside_DC = Algae_Pull_In_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Pull_In_DC;
      } else {
        localDW->timer += 0.02;
      }
      break;

     default:
      /* case IN_Off: */
      *rty_Algae_Wheel_Outside_DC = 0.0;
      *rty_Algae_Wheel_Inside_DC = 0.0;
      if (rtu_Algae_Limit_Switch) {
        localDW->is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;
        *rty_Algae_Wheel_Outside_DC = Algae_Hold_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Hold_DC;
      } else if ((rtu_Gamepad_LT || rtu_Gamepad_POV_Left) ||
                 rtu_Gamepad_POV_Right) {
        localDW->is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;
        *rty_Algae_Wheel_Outside_DC = Algae_Pull_In_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Pull_In_DC;
      } else if (rtu_Gamepad_RT) {
        localDW->is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;
        *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
        localDW->timer = 0.0;
      }
      break;
    }

    if (localDW->is_AT_On_Target_Timer == Code_Gen_Model_IN_Off_Target) {
      if (rtu_AT_On_Target) {
        localDW->is_AT_On_Target_Timer = Code_Gen_Model_IN_On_Target;
        localDW->timer_robot_target = 0.02;
      }

      /* case IN_On_Target: */
    } else if (!rtu_AT_On_Target) {
      localDW->is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
      localDW->timer_robot_target = 0.0;
    } else {
      localDW->timer_robot_target += 0.02;
    }
  }

  /* End of Chart: '<S31>/Reefscape_Chart' */
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

/* Function for Chart: '<S28>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, const uint8_T *Switch6, const uint8_T *Switch14, const
  boolean_T *UnitDelay1)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_Model_IN_Back:
    Code_Gen_Model_B.Gamepad_Back_out = false;
    Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Wait_for_Teleop;
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    break;

   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      /* Inport: '<Root>/MatchTime' */
      if (Code_Gen_Model_U.MatchTime <= MatchTime_Skip_Coral_Pickup) {
        Code_Gen_Model_DW.is_Left_and_Right = C_IN_Path_to_Coral_Station_1_v3;
        Code_Gen_Model_B.Auto_Step_ID = 20U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *Switch14;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_B.Gamepad_Back_out = true;
      } else {
        Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_1;
        Code_Gen_Model_B.Auto_Step_ID = 4U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_B.Gamepad_Start_out = true;
      }
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 8U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Model_IN_Back;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_IN_Path_to_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 4U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 5U;
      Code_Gen_Model_B.Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    }
    break;

   case C_IN_Path_to_Coral_Station_1_v3:
    Code_Gen_Model_B.Auto_Step_ID = 20U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Wait_for_Teleop;
      Code_Gen_Model_B.Auto_Step_ID = 9U;
      Code_Gen_Model_B.Path_Enable = false;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 1U;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    switch (Code_Gen_Model_DW.is_Path_to_Reef_1) {
     case Code_Gen_Model_IN_Drive:
      Code_Gen_Model_B.Path_Enable = true;
      if (*Robot_Reached_Destination) {
        if (Code_Gen_Model_DW.is_Drive == Code_Gen_Model_IN_Raise_to_L4_e) {
          Code_Gen_Model_B.Gamepad_B4_Y_out = false;
          Code_Gen_Model_DW.is_Drive = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        } else {
          Code_Gen_Model_DW.is_Drive = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        }

        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 2U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Align_Left_d = true;
      } else {
        switch (Code_Gen_Model_DW.is_Drive) {
         case Code_Gen_Model_IN_Raise_to_L4_e:
          break;

         default:
          /* case IN_Stay_at_L2: */
          if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
            Code_Gen_Model_DW.is_Drive = Code_Gen_Model_IN_Raise_to_L4_e;
            Code_Gen_Model_B.Gamepad_B4_Y_out = true;
          } else {
            Code_Gen_Model_DW.timer += 0.02;
          }
          break;
        }
      }
      break;

     case Code_Gen_Model_IN_Raise_to_L2:
      Code_Gen_Model_B.Path_Enable = false;
      if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L2_Time) {
        Code_Gen_Model_B.Gamepad_B3_X_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Drive;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *MultiportSwitch;
        Code_Gen_Model_DW.is_Drive = Code_Gen_Model_IN_Stay_at_L2;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Start: */
      Code_Gen_Model_B.Path_Enable = false;
      if (Code_Gen_Model_DW.timer >= 0.04) {
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Raise_to_L2;
        Code_Gen_Model_B.Gamepad_B3_X_out = true;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 6U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2 == Code_Gen_Model_IN_Set_L4) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_2;
        Code_Gen_Model_B.Auto_Step_ID = 7U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Align_Left_d = true;
      }

      /* case IN_Timer_to_L4: */
    } else if (Code_Gen_Model_DW.timer >= Auto_Path2_Delay_to_L4_Time) {
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Set_L4;
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_M_IN_Path_to_Reef_2_v2:
    Code_Gen_Model_B.Auto_Step_ID = 21U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2_v2 == Code_Gen_Model_IN_Back) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_Back_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Wait_for_Teleop;
        Code_Gen_Model_B.Auto_Step_ID = 9U;
        Code_Gen_Model_B.Path_Enable = false;
      }

      /* case IN_L1: */
    } else if (Code_Gen_Model_B.UnitDelay2 >= 2.1) {
      Code_Gen_Model_B.Gamepad_B1_A_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_Back;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 2U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 3U;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 7U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 8U;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 5U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      /* Inport: '<Root>/MatchTime' */
      if (Code_Gen_Model_U.MatchTime <= MatchTime_Skip_Second_L4) {
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Path_to_Reef_2_v2;
        Code_Gen_Model_B.Auto_Step_ID = 21U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *Switch6;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_L1_g;
        Code_Gen_Model_B.Gamepad_B1_A_out = true;
      } else {
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_2;
        Code_Gen_Model_B.Auto_Step_ID = 6U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *Switch6;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Timer_to_L4;
        Code_Gen_Model_DW.timer = 0.0;
      }
    }

    /* End of Inport: '<Root>/Coral_TOF_Distance' */
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    break;
  }
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

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
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
  real_T rtb_MatrixConcatenate_o[450];
  real_T rtb_Position_and_Curvature[450];
  real_T distance_from_robot[150];
  real_T rtb_Assignment_d[150];
  real_T rtb_MatrixConcatenate_h[100];
  real_T rtb_Spline_Ref_Poses[40];
  real_T rtb_Assignment[24];
  real_T rtb_MatrixConcatenate_p[24];
  real_T rtb_Ref_Poses[20];
  real_T rtb_Selector5[20];
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T rtb_Abs1;
  real_T rtb_Abs2_p;
  real_T rtb_Add_cv;
  real_T rtb_Add_es;
  real_T rtb_Add_h5;
  real_T rtb_Add_kl;
  real_T rtb_Add_p4;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle_merge;
  real_T rtb_DeadZone;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_hv;
  real_T rtb_Integral_m;
  real_T rtb_Integral_p;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Modulation_Drv;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product2_a;
  real_T rtb_Product_lf;
  real_T rtb_Product_pz;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_b2;
  real_T rtb_Subtract_lm;
  real_T rtb_Sum1_m;
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Switch1;
  real_T rtb_Switch2_fx;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_gl;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_m;
  real_T rtb_Switch2_p;
  real_T rtb_Switch5_a;
  real_T rtb_Switch_jz;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s226_iter;
  uint16_T s251_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch;
  uint8_T MultiportSwitch1;
  uint8_T Switch14;
  uint8_T Switch6;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T Robot_Reached_Destination;
  boolean_T exitg1;
  boolean_T rtb_AND1;
  boolean_T rtb_AND4;
  boolean_T rtb_Compare_m3;
  boolean_T rtb_Compare_oq;
  boolean_T rtb_Disable_Wheels;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Reset_Wheel_Offsets;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S259>/Add1' incorporates:
   *  Constant: '<S259>/Constant3'
   *  Constant: '<S259>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S259>/Math Function'
   *  Sum: '<S24>/Add'
   *  Sum: '<S259>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S187>/Diff'
   *  UnitDelay: '<S187>/UD'
   *
   * Block description for '<S187>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S187>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S260>/Add1' incorporates:
   *  Constant: '<S260>/Constant3'
   *  Constant: '<S260>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S260>/Math Function'
   *  Sum: '<S24>/Add1'
   *  Sum: '<S260>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S188>/Diff'
   *  UnitDelay: '<S188>/UD'
   *
   * Block description for '<S188>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S261>/Add1' incorporates:
   *  Constant: '<S261>/Constant3'
   *  Constant: '<S261>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S261>/Math Function'
   *  Sum: '<S24>/Add2'
   *  Sum: '<S261>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product2' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S189>/Diff'
   *  UnitDelay: '<S189>/UD'
   *
   * Block description for '<S189>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S262>/Add1' incorporates:
   *  Constant: '<S262>/Constant3'
   *  Constant: '<S262>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S262>/Math Function'
   *  Sum: '<S24>/Add3'
   *  Sum: '<S262>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product3' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S190>/Diff'
   *  UnitDelay: '<S190>/UD'
   *
   * Block description for '<S190>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_cv = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* SignalConversion generated from: '<S21>/Product7' incorporates:
   *  Fcn: '<S191>/r->x'
   *  Fcn: '<S191>/theta->y'
   *  Fcn: '<S192>/r->x'
   *  Fcn: '<S192>/theta->y'
   *  Fcn: '<S193>/r->x'
   *  Fcn: '<S193>/theta->y'
   *  Fcn: '<S194>/r->x'
   *  Fcn: '<S194>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_Switch2_ji * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Switch2_ji * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_Init * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_Init * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Add_cv * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Add_cv * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* RelationalOperator: '<S129>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S129>/Delay Input1'
   *
   * Block description for '<S129>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S130>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S130>/Delay Input1'
   *
   * Block description for '<S130>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S131>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S131>/Delay Input1'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S16>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S16>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S16>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S16>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S16>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Switch: '<S15>/Switch1' incorporates:
   *  Constant: '<S15>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S112>/FixPt Relational Operator'
   *  Sum: '<S15>/Sum'
   *  UnitDelay: '<S112>/Delay Input1'
   *  UnitDelay: '<S15>/Unit Delay1'
   *
   * Block description for '<S112>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    /* MultiPortSwitch: '<S15>/Multiport Switch' incorporates:
     *  Constant: '<S15>/Constant2'
     *  Constant: '<S15>/Constant4'
     *  Constant: '<S15>/Constant5'
     *  Constant: '<S15>/Constant6'
     *  Constant: '<S15>/Constant7'
     */
    switch ((int32_T)Auto_Starting_Position) {
     case 1:
      rtb_Switch1 = Gyro_Calibration_Auto_Left;
      break;

     case 2:
      rtb_Switch1 = Gyro_Calibration_Auto_Center;
      break;

     case 3:
      rtb_Switch1 = Gyro_Calibration_Auto_Right;
      break;

     default:
      rtb_Switch1 = Gyro_Calibration_Default;
      break;
    }

    /* End of MultiPortSwitch: '<S15>/Multiport Switch' */
    rtb_Switch1 -= Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S15>/Switch1' */

  /* Sum: '<S15>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S111>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Sum: '<S19>/Add' incorporates:
   *  Constant: '<S19>/Constant'
   *  Gain: '<S19>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S19>/Add1' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Gain: '<S19>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S19>/Add2' incorporates:
   *  Constant: '<S19>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_Angle'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Angle =
    Code_Gen_Model_U.Limelight_Tag_Angle + Limelight_Tag_Angle_Offset;

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   */
  Code_Gen_Model_B.Drive_Engage_Hook = (Code_Gen_Model_U.Joystick_Left_B7 != 0.0);

  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Right = (Code_Gen_Model_U.Gamepad_POV == 90.0);

  /* Chart: '<S9>/Debounce' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   *  RelationalOperator: '<S4>/Compare'
   */
  Code_Gen_Model_Debounce((Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0),
    true, Elevator_Limit_Switch_Debounce_F2T, Elevator_Limit_Switch_Debounce_T2F,
    &Code_Gen_Model_B.Out_h, &Code_Gen_Model_DW.sf_Debounce);

  /* Chart: '<S10>/Debounce' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   *  RelationalOperator: '<S5>/Compare'
   */
  Code_Gen_Model_Debounce((Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0),
    false, Elevator_Limit_Switch_Debounce_F2T,
    Elevator_Limit_Switch_Debounce_T2F, &Code_Gen_Model_B.Out,
    &Code_Gen_Model_DW.sf_Debounce_m);

  /* Gain: '<S13>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S13>/Switch1' incorporates:
   *  RelationalOperator: '<S104>/FixPt Relational Operator'
   *  RelationalOperator: '<S105>/FixPt Relational Operator'
   *  RelationalOperator: '<S106>/FixPt Relational Operator'
   *  Switch: '<S13>/Switch2'
   *  Switch: '<S13>/Switch3'
   *  UnitDelay: '<S104>/Delay Input1'
   *  UnitDelay: '<S105>/Delay Input1'
   *  UnitDelay: '<S106>/Delay Input1'
   *  UnitDelay: '<S1>/Unit Delay'
   *
   * Block description for '<S104>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S106>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)Code_Gen_Model_B.Out_h) < ((int32_T)
       Code_Gen_Model_DW.DelayInput1_DSTATE_bd)) {
    /* Switch: '<S13>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)Code_Gen_Model_B.Out) < ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/Constant1'
     *  Sum: '<S13>/Subtract1'
     *  Switch: '<S13>/Switch2'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_mph) > ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/Constant2'
     *  Sum: '<S13>/Subtract2'
     *  Switch: '<S13>/Switch2'
     *  Switch: '<S13>/Switch3'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S13>/Switch' incorporates:
   *  Logic: '<S13>/Logical Operator'
   */
  if ((Code_Gen_Model_B.Out_h) || (Code_Gen_Model_B.Out)) {
    /* Switch: '<S13>/Switch4' */
    if (Code_Gen_Model_B.Out_h) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S13>/Constant'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S13>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S13>/Switch4' */
  } else {
    /* Switch: '<S13>/Switch' incorporates:
     *  Sum: '<S13>/Subtract'
     */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Coral_Limit_Switch'
   */
  Compare = (Code_Gen_Model_U.Coral_Limit_Switch != 0.0);

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   *  Inport: '<Root>/Algae_Limit_Switch'
   */
  Compare_f = (Code_Gen_Model_U.Algae_Limit_Switch != 0.0);

  /* UnitDelay: '<S17>/Unit Delay' */
  Robot_Reached_Destination = Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

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
     *  ActionPort: '<S11>/Action Port'
     */
    /* SignalConversion generated from: '<S11>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S20>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S20>/Merge1' incorporates:
     *  Constant: '<S11>/Constant1'
     *  SignalConversion generated from: '<S11>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S20>/Merge2' incorporates:
     *  Constant: '<S11>/Constant2'
     *  SignalConversion generated from: '<S11>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S20>/Merge3' incorporates:
     *  Constant: '<S11>/Constant3'
     *  SignalConversion generated from: '<S11>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S20>/Merge4' incorporates:
     *  Constant: '<S11>/Constant4'
     *  SignalConversion generated from: '<S11>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S11>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S11>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S11>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S11>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S20>/Merge7' incorporates:
     *  Constant: '<S11>/Constant7'
     *  SignalConversion generated from: '<S11>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S20>/Merge9' incorporates:
     *  Constant: '<S11>/Constant9'
     *  SignalConversion generated from: '<S11>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S20>/Merge10' incorporates:
     *  Constant: '<S11>/Constant10'
     *  SignalConversion generated from: '<S11>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S11>/Enable_Wheels' incorporates:
     *  Constant: '<S11>/Constant18'
     */
    Robot_Reached_Destination = false;

    /* SignalConversion generated from: '<S11>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S11>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = false;

    /* SignalConversion generated from: '<S11>/Disable_Wheels' incorporates:
     *  Constant: '<S11>/Constant14'
     */
    rtb_Disable_Wheels = false;

    /* SignalConversion generated from: '<S11>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S11>/Constant12'
     */
    Compare = true;

    /* Merge: '<S20>/Merge12' incorporates:
     *  Constant: '<S11>/Constant15'
     *  SignalConversion generated from: '<S11>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S20>/Merge11' incorporates:
     *  Constant: '<S11>/Constant11'
     *  SignalConversion generated from: '<S11>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S20>/Merge13' incorporates:
     *  Constant: '<S11>/Constant16'
     *  SignalConversion generated from: '<S11>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S11>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant17'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S11>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S11>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S20>/Merge21' incorporates:
     *  Constant: '<S11>/Constant21'
     *  SignalConversion generated from: '<S11>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S11>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S11>/Constant22'
     */
    rtb_Compare_m3 = false;

    /* Merge: '<S20>/Merge23' incorporates:
     *  Constant: '<S11>/Constant23'
     *  SignalConversion generated from: '<S11>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S11>/AT_On_Target' incorporates:
     *  Constant: '<S11>/Constant24'
     */
    Compare_f = false;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S28>/Unit Delay'
       *  UnitDelay: '<S28>/Unit Delay1'
       *  UnitDelay: '<S28>/Unit Delay2'
       *  UnitDelay: '<S29>/Unit Delay'
       *  UnitDelay: '<S29>/Unit Delay1'
       *  UnitDelay: '<S54>/Delay Input1'
       *  UnitDelay: '<S56>/Delay Input1'
       *  UnitDelay: '<S57>/Delay Input1'
       *  UnitDelay: '<S60>/Delay Input1'
       *  UnitDelay: '<S61>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S65>/Delay Input1'
       *  UnitDelay: '<S67>/Delay Input1'
       *
       * Block description for '<S54>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S56>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S57>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S60>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S61>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S62>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S65>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S67>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_p = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_l = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_au = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_b = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Autonomous' */

      /* SystemReset for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S28>/Reefscape_Auto_Steps'
       *  Chart: '<S31>/Reefscape_Chart'
       *  SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle'
       */
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Drive = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_B.Align_Center_a = false;
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_B.Gamepad_RT_out = false;
      Code_Gen_Model_B.Gamepad_POV_Down_k = false;
      Code_Gen_Model_B.Gamepad_POV_Left_p = false;
      Code_Gen_Model_B.Path_Enable = false;
      Code_Gen_Model_B.Path_ID = 0U;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_B.Gamepad_B1_A_out = false;
      Code_Gen_Model_B.Gamepad_B3_X_out = false;

      /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      Code_Gen__Reefscape_Chart_Reset(&Code_Gen_Model_B.State_ID_Auto,
        &Code_Gen_Model_B.Elevator_Height_Desired_h,
        &Code_Gen_Model_B.Coral_Arm_Angle_Desired_f,
        &Code_Gen_Model_B.Coral_Wheel_DC_a, &rtb_Algae_Wheel_Outside_DutyCyc,
        &rtb_Algae_Wheel_Inside_DutyCycl,
        &Code_Gen_Model_B.Elevator_LowerPickup_Reset_g,
        &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m,
        &Code_Gen_Model_B.Set_Coral_Level_j, &Code_Gen_Model_B.Set_Algae_Level_p,
        &Code_Gen_Model_B.Coral_Score_j, &Code_Gen_Model_DW.sf_Reefscape_Chart);

      /* End of Outputs for SubSystem: '<S1>/Autonomous' */
      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    switch ((int32_T)Auto_Starting_Position) {
     case 1:
      /* Switch: '<S30>/Switch' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S30>/Multiport Switch1'
       *  Switch: '<S30>/Switch3'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant3'
         */
        MultiportSwitch = 1U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant17'
         */
        MultiportSwitch1 = 2U;
      } else {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant4'
         */
        MultiportSwitch = 9U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant18'
         */
        MultiportSwitch1 = 10U;
      }

      /* End of Switch: '<S30>/Switch' */
      break;

     case 2:
      /* Switch: '<S30>/Switch1' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S30>/Multiport Switch1'
       *  Switch: '<S30>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant6'
         */
        MultiportSwitch = 7U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant19'
         */
        MultiportSwitch1 = 8U;
      } else {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant11'
         */
        MultiportSwitch = 15U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant14'
         */
        MultiportSwitch1 = 16U;
      }

      /* End of Switch: '<S30>/Switch1' */
      break;

     default:
      /* Switch: '<S30>/Switch2' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S30>/Multiport Switch1'
       *  Switch: '<S30>/Switch5'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant13'
         */
        MultiportSwitch = 4U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant16'
         */
        MultiportSwitch1 = 5U;
      } else {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant12'
         */
        MultiportSwitch = 12U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant15'
         */
        MultiportSwitch1 = 13U;
      }

      /* End of Switch: '<S30>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

    /* Switch: '<S30>/Switch6' incorporates:
     *  Constant: '<S28>/Constant1'
     *  Constant: '<S52>/Constant'
     *  Inport: '<Root>/IsBlueAlliance'
     *  RelationalOperator: '<S52>/Compare'
     *  Switch: '<S30>/Switch13'
     *  Switch: '<S30>/Switch14'
     *  Switch: '<S30>/Switch8'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S30>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S30>/Switch12'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S30>/Constant20'
         */
        Switch6 = 3U;

        /* Switch: '<S30>/Switch14' incorporates:
         *  Constant: '<S30>/Constant1'
         */
        Switch14 = 17U;
      } else {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S30>/Constant21'
         */
        Switch6 = 11U;

        /* Switch: '<S30>/Switch14' incorporates:
         *  Constant: '<S30>/Constant2'
         */
        Switch14 = 19U;
      }

      /* End of Switch: '<S30>/Switch7' */
    } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S30>/Switch8' incorporates:
       *  Constant: '<S30>/Constant22'
       *  Switch: '<S30>/Switch6'
       */
      Switch6 = 6U;

      /* Switch: '<S30>/Switch13' incorporates:
       *  Constant: '<S30>/Constant5'
       *  Switch: '<S30>/Switch14'
       */
      Switch14 = 18U;
    } else {
      /* Switch: '<S30>/Switch6' incorporates:
       *  Constant: '<S30>/Constant23'
       *  Switch: '<S30>/Switch8'
       */
      Switch6 = 14U;

      /* Switch: '<S30>/Switch14' incorporates:
       *  Constant: '<S30>/Constant7'
       *  Switch: '<S30>/Switch13'
       */
      Switch14 = 20U;
    }

    /* End of Switch: '<S30>/Switch6' */

    /* UnitDelay: '<S28>/Unit Delay2' */
    Code_Gen_Model_B.UnitDelay2 = Code_Gen_Model_DW.UnitDelay2_DSTATE;

    /* Chart: '<S28>/Reefscape_Auto_Steps' incorporates:
     *  Constant: '<S28>/Constant1'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S28>/Unit Delay1'
     */
    if (Code_Gen_Model_DW.is_active_c6_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 1U;
      if ((Auto_Starting_Position == 1.0) || (Auto_Starting_Position == 3.0)) {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Mode_IN_Left_and_Right;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 1U;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Start_l;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Start_l;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
    } else if (Code_Gen_Model_DW.is_c6_Code_Gen_Model ==
               Code_Gen_Model_IN_Center) {
      switch (Code_Gen_Model_DW.is_Center) {
       case Code_IN_Adjust_Height_for_Algae:
        Code_Gen_Model_B.Auto_Step_ID = 104U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Code_Gen_Model_DW.timer >= Auto_Algae_Height_Time) {
          Code_Gen_Model_B.Gamepad_POV_Left_p = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
          Code_Gen_Model_B.Auto_Step_ID = 105U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Algae;
          Code_Gen_Model_B.Align_Center_a = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Scor:
        Code_Gen_Model_B.Auto_Step_ID = 103U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_IN_Adjust_Height_for_Algae;
          Code_Gen_Model_B.Auto_Step_ID = 104U;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
          Code_Gen_Model_B.Gamepad_POV_Left_p = true;
          Code_Gen_Model_DW.timer = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Collect_:
        Code_Gen_Model_B.Auto_Step_ID = 106U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_Path_to_Processor;
          Code_Gen_Model_B.Auto_Step_ID = 107U;
          Code_Gen_Model_B.Path_Enable = true;
          Code_Gen_Model_B.Path_ID = MultiportSwitch1;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Processo:
        Code_Gen_Model_B.Auto_Step_ID = 110U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Processor;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Processor) {
          Code_Gen_Model_B.Gamepad_Back_out = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 111U;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Code_Gen_Model_B.Auto_Step_ID = 105U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Algae;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Compare_f) {
          Code_Gen_Model_B.Align_Center_a = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Collect_;
          Code_Gen_Model_B.Auto_Step_ID = 106U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_End_early:
        Code_Gen_Model_B.Gamepad_Back_out = false;
        Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
        Code_Gen_Model_B.Auto_Step_ID = 111U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        break;

       case Code_Gen_M_IN_Lower_for_Scoring:
        Code_Gen_Model_B.Auto_Step_ID = 108U;
        if (Code_Gen_Model_DW.timer >= Auto_Algae_Height_Time) {
          Code_Gen_Model_B.Gamepad_POV_Down_k = false;
          Code_Gen_Model_DW.is_Center = Code_Gen__IN_Score_at_Processor;
          Code_Gen_Model_B.Auto_Step_ID = 109U;
          Code_Gen_Model_B.Path_Enable = false;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
          Code_Gen_Model_B.Gamepad_RT_out = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case Code_Gen_M_IN_Path_to_Processor:
        Code_Gen_Model_B.Auto_Step_ID = 107U;
        Code_Gen_Model_B.Path_Enable = true;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_Lower_for_Scoring;
          Code_Gen_Model_B.Auto_Step_ID = 108U;
          Code_Gen_Model_B.Gamepad_POV_Down_k = true;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Path_to_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        switch (Code_Gen_Model_DW.is_Path_to_Reef) {
         case Code_Gen_Model_IN_Drive:
          Code_Gen_Model_B.Path_Enable = true;
          if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
            Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Score_at_Reef;
            Code_Gen_Model_B.Auto_Step_ID = 102U;
            Code_Gen_Model_B.Path_Enable = false;
            Code_Gen_Model_B.Align_Left_d = true;
          }
          break;

         case Code_Gen_Model_IN_Raise_to_L4:
          Code_Gen_Model_B.Path_Enable = false;
          if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
            Code_Gen_Model_B.Gamepad_B4_Y_out = false;
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Drive;
            Code_Gen_Model_B.Path_Enable = true;
            Code_Gen_Model_B.Path_ID = MultiportSwitch;
          } else {
            Code_Gen_Model_B.Gamepad_B4_Y_out = true;
            Code_Gen_Model_DW.timer += 0.02;
          }
          break;

         default:
          /* case IN_Start: */
          Code_Gen_Model_B.Path_Enable = false;
          if (Code_Gen_Model_DW.timer >= 0.04) {
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Raise_to_L4;
            Code_Gen_Model_DW.timer = 0.0;
          } else {
            Code_Gen_Model_DW.timer += 0.02;
          }
          break;
        }
        break;

       case Code_Gen__IN_Score_at_Processor:
        Code_Gen_Model_B.Auto_Step_ID = 109U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (!Compare_f) {
          Code_Gen_Model_B.Gamepad_RT_out = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Processo;
          Code_Gen_Model_B.Auto_Step_ID = 110U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Processor;
          Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
          Code_Gen_Model_B.Gamepad_Back_out = true;
        }
        break;

       case Code_Gen_Model_IN_Score_at_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 102U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Code_Gen_Model_DW.UnitDelay1_DSTATE_p) {
          Code_Gen_Model_B.Align_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Back_Up_from_Reef_Coral_Scor;
          Code_Gen_Model_B.Auto_Step_ID = 103U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       default:
        /* case IN_Wait_for_Teleop: */
        Code_Gen_Model_B.Auto_Step_ID = 111U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        break;
      }
    } else {
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
        &MultiportSwitch, &MultiportSwitch1, &Switch6, &Switch14,
        &Code_Gen_Model_DW.UnitDelay1_DSTATE_p);
    }

    /* End of Chart: '<S28>/Reefscape_Auto_Steps' */

    /* Selector: '<S28>/Selector' incorporates:
     *  Constant: '<S28>/Constant'
     *  Merge: '<S20>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s226_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s226_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s226_iter];
      }
    }

    /* End of Selector: '<S28>/Selector' */

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S31>/Reefscape_Chart'
     *  Constant: '<S28>/GameState = 1 is Autos'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  RelationalOperator: '<S54>/FixPt Relational Operator'
     *  RelationalOperator: '<S55>/FixPt Relational Operator'
     *  RelationalOperator: '<S56>/FixPt Relational Operator'
     *  RelationalOperator: '<S57>/FixPt Relational Operator'
     *  RelationalOperator: '<S58>/FixPt Relational Operator'
     *  RelationalOperator: '<S60>/FixPt Relational Operator'
     *  RelationalOperator: '<S61>/FixPt Relational Operator'
     *  RelationalOperator: '<S62>/FixPt Relational Operator'
     *  RelationalOperator: '<S63>/FixPt Relational Operator'
     *  RelationalOperator: '<S64>/FixPt Relational Operator'
     *  RelationalOperator: '<S65>/FixPt Relational Operator'
     *  RelationalOperator: '<S66>/FixPt Relational Operator'
     *  RelationalOperator: '<S67>/FixPt Relational Operator'
     *  UnitDelay: '<S28>/Unit Delay'
     *  UnitDelay: '<S54>/Delay Input1'
     *  UnitDelay: '<S56>/Delay Input1'
     *  UnitDelay: '<S57>/Delay Input1'
     *  UnitDelay: '<S60>/Delay Input1'
     *  UnitDelay: '<S61>/Delay Input1'
     *  UnitDelay: '<S62>/Delay Input1'
     *  UnitDelay: '<S65>/Delay Input1'
     *  UnitDelay: '<S67>/Delay Input1'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S67>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_Reefscape_Chart(1, (((int32_T)
      Code_Gen_Model_B.Gamepad_B1_A_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_l)), false, (((int32_T)
      Code_Gen_Model_B.Gamepad_B3_X_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_au)), (((int32_T)
      Code_Gen_Model_B.Gamepad_B4_Y_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne)), (((int32_T)
      Code_Gen_Model_B.Gamepad_Start_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff)), (((int32_T)
      Code_Gen_Model_B.Gamepad_Back_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev)), false, false, (((int32_T)
      Code_Gen_Model_B.Gamepad_RT_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_b2)), false, (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down_k) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left_p) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae)), false,
      Code_Gen_Model_ConstB.DeadZone, Code_Gen_Model_ConstB.DeadZone1,
      Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_B.Coral_Arm_Angle_Measured,
      Code_Gen_Model_U.Coral_TOF_Distance, Compare, Compare_f,
      Code_Gen_Model_DW.UnitDelay_DSTATE_i3, &Code_Gen_Model_B.State_ID_Auto,
      &Code_Gen_Model_B.Elevator_Height_Desired_h,
      &Code_Gen_Model_B.Coral_Arm_Angle_Desired_f,
      &Code_Gen_Model_B.Coral_Wheel_DC_a, &rtb_Algae_Wheel_Outside_DutyCyc,
      &rtb_Algae_Wheel_Inside_DutyCycl,
      &Code_Gen_Model_B.Elevator_LowerPickup_Reset_g,
      &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m,
      &Code_Gen_Model_B.Set_Coral_Level_j, &Code_Gen_Model_B.Set_Algae_Level_p,
      &Code_Gen_Model_B.Coral_Score_j, &Code_Gen_Model_DW.sf_Reefscape_Chart);

    /* Merge: '<S20>/Merge13' incorporates:
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_m3 = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.Coral_Wheel_DC_a;

    /* Merge: '<S20>/Merge11' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired_h;

    /* Merge: '<S20>/Merge21' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_g;

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S50>/Constant'
     *  Logic: '<S29>/AND'
     *  Logic: '<S29>/AND1'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S50>/Compare'
     *  Switch: '<S29>/Switch4'
     *  Switch: '<S29>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left_d) {
      rtb_Switch_jz = AT_Reef_Target_Left_Y;
    } else if ((Code_Gen_Model_B.Align_Center_a) &&
               (Code_Gen_Model_B.Set_Coral_Level_j == 1)) {
      /* Switch: '<S29>/Switch4' incorporates:
       *  Constant: '<S29>/Constant3'
       */
      rtb_Switch_jz = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center_a) &&
               (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S29>/Switch6' incorporates:
       *  Constant: '<S29>/Constant6'
       *  Switch: '<S29>/Switch4'
       */
      rtb_Switch_jz = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S29>/Switch4' incorporates:
       *  UnitDelay: '<S29>/Unit Delay1'
       */
      rtb_Switch_jz = Code_Gen_Model_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S29>/Switch' */

    /* Sum: '<S29>/Subtract1' */
    rtb_Abs1 = rtb_Switch_jz - Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S28>/Signal Copy6' */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Y = rtb_Abs1;

    /* Switch: '<S29>/Switch2' incorporates:
     *  Constant: '<S29>/Constant4'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S35>/Constant'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S51>/Constant'
     *  Logic: '<S29>/AND2'
     *  Logic: '<S29>/AND3'
     *  Logic: '<S29>/Logical Operator5'
     *  Logic: '<S29>/Logical Operator6'
     *  Logic: '<S29>/OR'
     *  Logic: '<S29>/OR1'
     *  RelationalOperator: '<S34>/Compare'
     *  RelationalOperator: '<S35>/Compare'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S51>/Compare'
     *  Switch: '<S29>/Switch3'
     *  Switch: '<S29>/Switch5'
     *  Switch: '<S29>/Switch7'
     */
    if ((Code_Gen_Model_B.Align_Center_a) && (Code_Gen_Model_B.Set_Coral_Level_j
         == 1)) {
      rtb_Switch2_gl = AT_Reef_Target_L1_X;
    } else if ((Code_Gen_Model_B.Align_Left_d) &&
               ((Code_Gen_Model_B.Set_Coral_Level_j == 2) ||
                (Code_Gen_Model_B.Set_Coral_Level_j == 3))) {
      /* Switch: '<S29>/Switch3' incorporates:
       *  Constant: '<S29>/Constant'
       */
      rtb_Switch2_gl = AT_Reef_Target_L2_L3_X;
    } else if ((Code_Gen_Model_B.Align_Left_d) &&
               (Code_Gen_Model_B.Set_Coral_Level_j == 4)) {
      /* Switch: '<S29>/Switch5' incorporates:
       *  Constant: '<S29>/Constant5'
       *  Switch: '<S29>/Switch3'
       */
      rtb_Switch2_gl = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center_a) &&
               (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S29>/Switch7' incorporates:
       *  Constant: '<S29>/Constant7'
       *  Switch: '<S29>/Switch3'
       *  Switch: '<S29>/Switch5'
       */
      rtb_Switch2_gl = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S29>/Switch5' incorporates:
       *  Switch: '<S29>/Switch3'
       *  UnitDelay: '<S29>/Unit Delay'
       */
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S29>/Switch2' */

    /* Sum: '<S29>/Subtract' */
    rtb_Switch2_ji = rtb_Switch2_gl - Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S28>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus1'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_X = -rtb_Switch2_ji;

    /* Logic: '<S29>/Logical Operator1' incorporates:
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S49>/Constant'
     *  Logic: '<S29>/Logical Operator2'
     *  Logic: '<S29>/Logical Operator3'
     *  Logic: '<S29>/Logical Operator4'
     *  Logic: '<S29>/NOT'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     *  RelationalOperator: '<S47>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     *  RelationalOperator: '<S49>/Compare'
     */
    Compare = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
                  (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                 (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                ((Code_Gen_Model_B.Set_Coral_Level_j != 0) ||
                 (Code_Gen_Model_B.Set_Algae_Level_p != 0))) &&
               ((Code_Gen_Model_B.Align_Left_d) ||
                (Code_Gen_Model_B.Align_Center_a)));

    /* SignalConversion: '<S28>/Signal Copy1' */
    Code_Gen_Model_B.Auto_AT_Relative_Enable = Compare;

    /* SignalConversion: '<S28>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S33>/Switch2' incorporates:
     *  Switch: '<S33>/Switch'
     *  Switch: '<S33>/Switch1'
     */
    if (Code_Gen_Model_B.Auto_AT_Relative_Enable) {
      /* Merge: '<S20>/Merge3' incorporates:
       *  Trigonometry: '<S33>/Atan3'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.Auto_AT_Relative_Error_Y,
         Code_Gen_Model_B.Auto_AT_Relative_Error_X);

      /* Product: '<S33>/Product2' incorporates:
       *  Constant: '<S33>/Constant4'
       */
      rtb_Product2_a = Code_Gen_Model_B.Auto_AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S69>/Switch2' incorporates:
       *  Constant: '<S33>/Constant10'
       *  RelationalOperator: '<S69>/LowerRelop1'
       *  RelationalOperator: '<S69>/UpperRelop'
       *  Switch: '<S69>/Switch'
       *  UnaryMinus: '<S33>/Unary Minus'
       */
      if (rtb_Product2_a > AT_Steering_Speed_Max) {
        /* Merge: '<S20>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Product2_a < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S69>/Switch' incorporates:
         *  Merge: '<S20>/Merge2'
         *  UnaryMinus: '<S33>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S20>/Merge2' incorporates:
         *  Switch: '<S69>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Product2_a;
      }

      /* End of Switch: '<S69>/Switch2' */

      /* Merge: '<S20>/Merge4' incorporates:
       *  Constant: '<S33>/Constant8'
       *  Gain: '<S33>/Gain1'
       *  Math: '<S33>/Magnitude2'
       *  MinMax: '<S33>/Min1'
       */
      Code_Gen_Model_B.Translation_Speed = fmin
        (AT_Translation_Speed_Max_Relative, AT_Translation_Control_Gain_Relative
         * rt_hypotd_snf(Code_Gen_Model_B.Auto_AT_Relative_Error_X,
                         Code_Gen_Model_B.Auto_AT_Relative_Error_Y));
    } else {
      /* Merge: '<S20>/Merge3' */
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_B.Translation_Angle_l;

      /* Merge: '<S20>/Merge2' incorporates:
       *  Constant: '<S33>/Constant2'
       */
      Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S20>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.Translation_Speed_g;
    }

    /* End of Switch: '<S33>/Switch2' */

    /* Abs: '<S29>/Abs2' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus'
     */
    rtb_Product2_a = fabs(-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S29>/Abs' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus1'
     */
    rtb_Switch2_ji = fabs(-rtb_Switch2_ji);

    /* Abs: '<S29>/Abs1' */
    rtb_Abs1 = fabs(rtb_Abs1);

    /* Merge: '<S20>/Merge23' incorporates:
     *  Constant: '<S36>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Logic: '<S29>/Logical Operator7'
     *  RelationalOperator: '<S36>/Compare'
     *  RelationalOperator: '<S43>/Compare'
     *  RelationalOperator: '<S44>/Compare'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Compare &&
      (rtb_Switch2_ji <= AT_Integral_Enable_Error_XY)) && (rtb_Abs1 <=
      AT_Integral_Enable_Error_XY)) && (rtb_Product2_a <=
      AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S28>/Signal Copy8' incorporates:
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Logic: '<S29>/Logical Operator'
     *  RelationalOperator: '<S40>/Compare'
     *  RelationalOperator: '<S41>/Compare'
     *  RelationalOperator: '<S42>/Compare'
     */
    Code_Gen_Model_B.Auto_AT_On_Target = (((Compare && (rtb_Switch2_ji <=
      AT_Max_Error_XY)) && (rtb_Abs1 <= AT_Max_Error_XY)) && (rtb_Product2_a <=
      AT_Max_Error_Angle));

    /* SignalConversion: '<S28>/Signal Copy9' */
    Compare_f = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Merge: '<S20>/Merge9' incorporates:
     *  Lookup_n-D: '<S28>/1-D Lookup Table'
     */
    Code_Gen_Model_B.Spline_Num_Poses =
      Code_Gen_Model_ConstP.uDLookupTable_tableData[plook_u32u8_evencka
      (Code_Gen_Model_B.Path_ID, 1U, 1U, 19U)];

    /* Merge: '<S20>/Merge7' incorporates:
     *  SignalConversion: '<S28>/Signal Copy'
     */
    Code_Gen_Model_B.Spline_Enable = Code_Gen_Model_B.Path_Enable;

    /* Merge: '<S20>/Merge12' incorporates:
     *  Constant: '<S31>/Constant5'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S20>/Merge1' incorporates:
     *  Constant: '<S33>/Constant1'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S33>/Constant3'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S33>/Constant5'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S20>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    Robot_Reached_Destination = false;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = false;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Disable_Wheels = false;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    Compare = false;

    /* Update for UnitDelay: '<S28>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_p = Code_Gen_Model_B.Coral_Score_j;

    /* Update for UnitDelay: '<S28>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = Code_Gen_Model_B.State_ID_Auto;

    /* Update for UnitDelay: '<S54>/Delay Input1'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_l = Code_Gen_Model_B.Gamepad_B1_A_out;

    /* Update for UnitDelay: '<S55>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant4'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bdz = false;

    /* Update for UnitDelay: '<S60>/Delay Input1'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_au = Code_Gen_Model_B.Gamepad_B3_X_out;

    /* Update for UnitDelay: '<S61>/Delay Input1'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ne = Code_Gen_Model_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ff = Code_Gen_Model_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S56>/Delay Input1'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ev = Code_Gen_Model_B.Gamepad_Back_out;

    /* Update for UnitDelay: '<S63>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant17'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S66>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant12'
     *
     * Block description for '<S66>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_os = false;

    /* Update for UnitDelay: '<S67>/Delay Input1'
     *
     * Block description for '<S67>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = Code_Gen_Model_B.Gamepad_RT_out;

    /* Update for UnitDelay: '<S59>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant13'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bm = false;

    /* Update for UnitDelay: '<S64>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant2'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S65>/Delay Input1'
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b3 =
      Code_Gen_Model_B.Gamepad_POV_Down_k;

    /* Update for UnitDelay: '<S57>/Delay Input1'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_p;

    /* Update for UnitDelay: '<S58>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant14'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_mu = false;

    /* Update for UnitDelay: '<S28>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Update for UnitDelay: '<S29>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = rtb_Switch_jz;

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_Switch2_gl;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S26>/Unit Delay'
       *  UnitDelay: '<S413>/Unit Delay'
       *  UnitDelay: '<S413>/Unit Delay1'
       *  UnitDelay: '<S435>/Unit Delay1'
       *  UnitDelay: '<S435>/Unit Delay2'
       *  UnitDelay: '<S435>/Unit Delay3'
       *  UnitDelay: '<S435>/Unit Delay4'
       *  UnitDelay: '<S438>/Delay Input1'
       *  UnitDelay: '<S439>/Delay Input1'
       *  UnitDelay: '<S440>/Delay Input1'
       *  UnitDelay: '<S441>/Delay Input1'
       *  UnitDelay: '<S443>/Delay Input1'
       *  UnitDelay: '<S449>/Unit Delay'
       *  UnitDelay: '<S449>/Unit Delay1'
       *  UnitDelay: '<S453>/FixPt Unit Delay1'
       *  UnitDelay: '<S453>/FixPt Unit Delay2'
       *  UnitDelay: '<S456>/Delay Input1'
       *  UnitDelay: '<S457>/Delay Input1'
       *  UnitDelay: '<S458>/Delay Input1'
       *  UnitDelay: '<S459>/Delay Input1'
       *  UnitDelay: '<S460>/Delay Input1'
       *  UnitDelay: '<S461>/Delay Input1'
       *  UnitDelay: '<S462>/Delay Input1'
       *  UnitDelay: '<S463>/Delay Input1'
       *  UnitDelay: '<S464>/Delay Input1'
       *  UnitDelay: '<S465>/Delay Input1'
       *  UnitDelay: '<S466>/Delay Input1'
       *  UnitDelay: '<S467>/Delay Input1'
       *  UnitDelay: '<S468>/Delay Input1'
       *  UnitDelay: '<S469>/Delay Input1'
       *
       * Block description for '<S438>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S439>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S440>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S441>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S443>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S456>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S457>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S458>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S459>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S460>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S461>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S462>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S463>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S464>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S465>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S466>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S467>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S468>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S469>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ia = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_kq = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE_l = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S415>/Reefscape_Chart'
       *  SignalConversion generated from: '<S26>/Algae_Wheel_Outside_DutyCycle'
       */
      Code_Gen__Reefscape_Chart_Reset(&Code_Gen_Model_B.State_ID_Teleop,
        &Code_Gen_Model_B.Elevator_Height_Desired,
        &Code_Gen_Model_B.Coral_Arm_Angle_Desired,
        &Code_Gen_Model_B.Coral_Wheel_DC, &rtb_Algae_Wheel_Outside_DutyCyc,
        &rtb_Algae_Wheel_Inside_DutyCycl,
        &Code_Gen_Model_B.Elevator_LowerPickup_Reset,
        &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State,
        &Code_Gen_Model_B.Set_Coral_Level, &Code_Gen_Model_B.Set_Algae_Level,
        &Robot_Reached_Destination, &Code_Gen_Model_DW.sf_Reefscape_Chart_n);

      /* End of Outputs for SubSystem: '<S1>/Teleop' */
      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    /* SignalConversion generated from: '<S26>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S20>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* DeadZone: '<S415>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* DeadZone: '<S415>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      rtb_Switch2_fx = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      rtb_Switch2_fx = 0.0;
    } else {
      rtb_Switch2_fx = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* SignalConversion generated from: '<S26>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S415>/Reefscape_Chart'
     *  Constant: '<S26>/Constant'
     *  DeadZone: '<S415>/Dead Zone'
     *  DeadZone: '<S415>/Dead Zone1'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  Inport: '<Root>/Gamepad_B1_A'
     *  Inport: '<Root>/Gamepad_B2_B'
     *  Inport: '<Root>/Gamepad_B3_X'
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  Inport: '<Root>/Gamepad_Back'
     *  Inport: '<Root>/Gamepad_LT'
     *  Inport: '<Root>/Gamepad_RB'
     *  Inport: '<Root>/Gamepad_RT'
     *  Inport: '<Root>/Gamepad_Start'
     *  Inport: '<Root>/Joystick_Right_B1'
     *  Logic: '<S415>/Logical Operator'
     *  RelationalOperator: '<S456>/FixPt Relational Operator'
     *  RelationalOperator: '<S457>/FixPt Relational Operator'
     *  RelationalOperator: '<S458>/FixPt Relational Operator'
     *  RelationalOperator: '<S459>/FixPt Relational Operator'
     *  RelationalOperator: '<S460>/FixPt Relational Operator'
     *  RelationalOperator: '<S461>/FixPt Relational Operator'
     *  RelationalOperator: '<S462>/FixPt Relational Operator'
     *  RelationalOperator: '<S463>/FixPt Relational Operator'
     *  RelationalOperator: '<S464>/FixPt Relational Operator'
     *  RelationalOperator: '<S465>/FixPt Relational Operator'
     *  RelationalOperator: '<S466>/FixPt Relational Operator'
     *  RelationalOperator: '<S467>/FixPt Relational Operator'
     *  RelationalOperator: '<S468>/FixPt Relational Operator'
     *  RelationalOperator: '<S469>/FixPt Relational Operator'
     *  UnitDelay: '<S26>/Unit Delay'
     *  UnitDelay: '<S456>/Delay Input1'
     *  UnitDelay: '<S457>/Delay Input1'
     *  UnitDelay: '<S458>/Delay Input1'
     *  UnitDelay: '<S459>/Delay Input1'
     *  UnitDelay: '<S460>/Delay Input1'
     *  UnitDelay: '<S461>/Delay Input1'
     *  UnitDelay: '<S462>/Delay Input1'
     *  UnitDelay: '<S463>/Delay Input1'
     *  UnitDelay: '<S464>/Delay Input1'
     *  UnitDelay: '<S465>/Delay Input1'
     *  UnitDelay: '<S466>/Delay Input1'
     *  UnitDelay: '<S467>/Delay Input1'
     *  UnitDelay: '<S468>/Delay Input1'
     *  UnitDelay: '<S469>/Delay Input1'
     *
     * Block description for '<S456>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S457>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S458>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S459>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_Reefscape_Chart(2, (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c), (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr), (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez), (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh), (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i), (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp), (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd), (Code_Gen_Model_U.Gamepad_LT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_o), ((Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j) ||
      (Code_Gen_Model_U.Joystick_Right_B1 >
       Code_Gen_Model_DW.DelayInput1_DSTATE_b)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Up) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_f)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a)), rtb_Minus_k_idx_0,
      rtb_Switch2_fx, Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_B.Coral_Arm_Angle_Measured,
      Code_Gen_Model_U.Coral_TOF_Distance, Compare, Compare_f,
      Code_Gen_Model_DW.UnitDelay_DSTATE_ia, &Code_Gen_Model_B.State_ID_Teleop,
      &Code_Gen_Model_B.Elevator_Height_Desired,
      &Code_Gen_Model_B.Coral_Arm_Angle_Desired,
      &Code_Gen_Model_B.Coral_Wheel_DC, &rtb_Algae_Wheel_Outside_DutyCyc,
      &rtb_Algae_Wheel_Inside_DutyCycl,
      &Code_Gen_Model_B.Elevator_LowerPickup_Reset,
      &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State,
      &Code_Gen_Model_B.Set_Coral_Level, &Code_Gen_Model_B.Set_Algae_Level,
      &Robot_Reached_Destination, &Code_Gen_Model_DW.sf_Reefscape_Chart_n);

    /* Switch: '<S413>/Switch' incorporates:
     *  Constant: '<S413>/Constant1'
     *  Constant: '<S422>/Constant'
     *  Constant: '<S433>/Constant'
     *  Logic: '<S413>/AND'
     *  Logic: '<S413>/AND1'
     *  RelationalOperator: '<S422>/Compare'
     *  RelationalOperator: '<S433>/Compare'
     *  Switch: '<S413>/Switch1'
     *  Switch: '<S413>/Switch4'
     *  Switch: '<S413>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch_jz = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S413>/Switch1' incorporates:
       *  Constant: '<S413>/Constant2'
       */
      rtb_Switch_jz = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant3'
       *  Switch: '<S413>/Switch1'
       */
      rtb_Switch_jz = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S413>/Switch6' incorporates:
       *  Constant: '<S413>/Constant6'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch4'
       */
      rtb_Switch_jz = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S413>/Switch4' incorporates:
       *  Switch: '<S413>/Switch1'
       *  UnitDelay: '<S413>/Unit Delay1'
       */
      rtb_Switch_jz = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S413>/Switch' */

    /* Sum: '<S413>/Subtract1' */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Switch_jz -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S26>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S413>/Switch2' incorporates:
     *  Constant: '<S413>/Constant4'
     *  Constant: '<S421>/Constant'
     *  Logic: '<S413>/AND2'
     *  RelationalOperator: '<S421>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Abs1 = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S413>/OR' */
      Compare = ((Code_Gen_Model_B.Align_Left) || (Code_Gen_Model_B.Align_Right));

      /* Switch: '<S413>/Switch3' incorporates:
       *  Constant: '<S413>/Constant'
       *  Constant: '<S417>/Constant'
       *  Constant: '<S418>/Constant'
       *  Constant: '<S420>/Constant'
       *  Constant: '<S434>/Constant'
       *  Logic: '<S413>/AND3'
       *  Logic: '<S413>/Logical Operator5'
       *  Logic: '<S413>/Logical Operator6'
       *  Logic: '<S413>/OR1'
       *  RelationalOperator: '<S417>/Compare'
       *  RelationalOperator: '<S418>/Compare'
       *  RelationalOperator: '<S420>/Compare'
       *  RelationalOperator: '<S434>/Compare'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch7'
       */
      if (Compare && ((Code_Gen_Model_B.Set_Coral_Level == 2) ||
                      (Code_Gen_Model_B.Set_Coral_Level == 3))) {
        rtb_Abs1 = AT_Reef_Target_L2_L3_X;
      } else if (Compare && (Code_Gen_Model_B.Set_Coral_Level == 4)) {
        /* Switch: '<S413>/Switch5' incorporates:
         *  Constant: '<S413>/Constant5'
         */
        rtb_Abs1 = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center) &&
                 (Code_Gen_Model_B.Set_Algae_Level != 0)) {
        /* Switch: '<S413>/Switch7' incorporates:
         *  Constant: '<S413>/Constant7'
         *  Switch: '<S413>/Switch5'
         */
        rtb_Abs1 = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S413>/Switch5' incorporates:
         *  UnitDelay: '<S413>/Unit Delay'
         */
        rtb_Abs1 = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
      }

      /* End of Switch: '<S413>/Switch3' */
    }

    /* End of Switch: '<S413>/Switch2' */

    /* Sum: '<S413>/Subtract' */
    rtb_Subtract_b2 = rtb_Abs1 - Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S26>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S413>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X = -rtb_Subtract_b2;

    /* DeadZone: '<S436>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S436>/Dead Zone' */

    /* Lookup_n-D: '<S436>/Modulation_Drv' incorporates:
     *  Math: '<S436>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S447>/Compare' incorporates:
     *  Constant: '<S447>/Constant'
     */
    Robot_Reached_Destination = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S436>/Logical Operator' incorporates:
     *  Constant: '<S448>/Constant'
     *  RelationalOperator: '<S448>/Compare'
     */
    rtb_Disable_Wheels = ((rtb_DeadZone != 0.0) && Robot_Reached_Destination);

    /* Logic: '<S413>/Logical Operator1' incorporates:
     *  Constant: '<S428>/Constant'
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Logic: '<S413>/Logical Operator2'
     *  Logic: '<S413>/Logical Operator3'
     *  Logic: '<S413>/Logical Operator4'
     *  Logic: '<S413>/NOT'
     *  RelationalOperator: '<S428>/Compare'
     *  RelationalOperator: '<S429>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     *  RelationalOperator: '<S431>/Compare'
     *  RelationalOperator: '<S432>/Compare'
     */
    Compare = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
                  (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                 (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
                 (Code_Gen_Model_B.Set_Algae_Level != 0))) &&
               (((Code_Gen_Model_B.Align_Left) || (Code_Gen_Model_B.Align_Right))
                || (Code_Gen_Model_B.Align_Center)));

    /* SignalConversion: '<S26>/Signal Copy6' */
    Code_Gen_Model_B.AT_Relative_Error_Enable = Compare;

    /* Logic: '<S436>/Logical Operator1' */
    rtb_Reset_Wheel_Offsets = (((Code_Gen_Model_B.Drive_Engage_Hook) ||
      (Code_Gen_Model_B.AT_Relative_Error_Enable)) || rtb_Disable_Wheels);

    /* Switch: '<S449>/Switch1' incorporates:
     *  Constant: '<S454>/Constant'
     *  Constant: '<S455>/Constant'
     *  Logic: '<S449>/AND'
     *  RelationalOperator: '<S454>/Compare'
     *  RelationalOperator: '<S455>/Compare'
     *  Switch: '<S449>/Switch2'
     *  UnitDelay: '<S449>/Unit Delay'
     *  UnitDelay: '<S449>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch2_gl = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_ji = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S449>/Switch1' */

    /* Switch: '<S436>/Switch9' incorporates:
     *  Switch: '<S436>/Switch4'
     */
    if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S436>/Switch3' incorporates:
       *  Switch: '<S436>/Switch1'
       */
      if (Code_Gen_Model_B.Drive_Engage_Hook) {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Constant: '<S436>/Constant9'
         */
        Code_Gen_Model_B.Translation_Angle = Drive_Engage_Hook_Angle;
      } else if (rtb_Disable_Wheels) {
        /* Signum: '<S436>/Sign' incorporates:
         *  Switch: '<S436>/Switch1'
         */
        if (rtIsNaN(rtb_DeadZone)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_DeadZone < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_DeadZone > 0.0);
        }

        /* Switch: '<S436>/Switch5' incorporates:
         *  Constant: '<S436>/Constant3'
         *  Constant: '<S436>/Constant4'
         *  Switch: '<S436>/Switch1'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_fx = -1.5707963267948966;
        } else {
          rtb_Switch2_fx = 0.0;
        }

        /* Merge: '<S20>/Merge3' incorporates:
         *  Gain: '<S436>/Gain3'
         *  Signum: '<S436>/Sign'
         *  Sum: '<S436>/Add'
         *  Switch: '<S436>/Switch1'
         *  Switch: '<S436>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_fx;
      } else {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Switch: '<S436>/Switch1'
         *  Trigonometry: '<S436>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S436>/Switch3' */
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S436>/Switch6' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S436>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Constant: '<S436>/Constant'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      } else {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Constant: '<S436>/Constant1'
         */
        Code_Gen_Model_B.Translation_Angle = 3.1415926535897931;
      }

      /* End of Switch: '<S436>/Switch6' */
    } else {
      /* Merge: '<S20>/Merge3' incorporates:
       *  Switch: '<S436>/Switch4'
       *  Trigonometry: '<S436>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch2_gl,
        rtb_Switch2_ji);
    }

    /* End of Switch: '<S436>/Switch9' */

    /* Switch: '<S446>/Switch1' incorporates:
     *  Constant: '<S446>/Constant'
     *  Constant: '<S446>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Add_h5 = Boost_Trigger_High_Speed;
    } else {
      rtb_Add_h5 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S446>/Switch1' */

    /* Switch: '<S453>/Init' incorporates:
     *  UnitDelay: '<S453>/FixPt Unit Delay1'
     *  UnitDelay: '<S453>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Abs2_p = rtb_Add_h5;
    } else {
      rtb_Abs2_p = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S453>/Init' */

    /* Sum: '<S451>/Sum1' */
    rtb_Product2_a = rtb_Add_h5 - rtb_Abs2_p;

    /* Switch: '<S452>/Switch2' incorporates:
     *  Constant: '<S450>/Constant1'
     *  Constant: '<S450>/Constant3'
     *  RelationalOperator: '<S452>/LowerRelop1'
     *  RelationalOperator: '<S452>/UpperRelop'
     *  Switch: '<S452>/Switch'
     */
    if (rtb_Product2_a > Boost_Trigger_Increasing_Limit) {
      rtb_Product2_a = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product2_a < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S452>/Switch' incorporates:
       *  Constant: '<S450>/Constant1'
       */
      rtb_Product2_a = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S451>/Sum' incorporates:
     *  Switch: '<S452>/Switch2'
     */
    rtb_Product2_a += rtb_Abs2_p;

    /* Switch: '<S436>/Switch8' incorporates:
     *  Switch: '<S436>/Switch2'
     */
    if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S436>/Switch10' incorporates:
       *  Switch: '<S436>/Switch'
       */
      if (Code_Gen_Model_B.Drive_Engage_Hook) {
        /* Merge: '<S20>/Merge4' incorporates:
         *  Constant: '<S436>/Constant7'
         */
        Code_Gen_Model_B.Translation_Speed = Drive_Engage_Hook_Speed;
      } else if (rtb_Disable_Wheels) {
        /* Switch: '<S436>/Switch' incorporates:
         *  Gain: '<S436>/Gain'
         *  Merge: '<S20>/Merge4'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_DeadZone;
      } else {
        /* Merge: '<S20>/Merge4' incorporates:
         *  Constant: '<S436>/Constant8'
         *  Gain: '<S436>/Gain1'
         *  Math: '<S436>/Magnitude2'
         *  MinMax: '<S436>/Min1'
         *  Switch: '<S436>/Switch'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S436>/Switch10' */
    } else if (Robot_Reached_Destination) {
      /* Merge: '<S20>/Merge4' incorporates:
       *  Constant: '<S26>/Constant7'
       *  Constant: '<S26>/Constant8'
       *  Constant: '<S436>/Constant5'
       *  Gain: '<S436>/Gain2'
       *  Math: '<S436>/Magnitude1'
       *  MinMax: '<S436>/Min'
       *  Switch: '<S436>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * 0.0);
    } else {
      /* Product: '<S446>/Product' incorporates:
       *  Switch: '<S436>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Modulation_Drv * rtb_Product2_a;

      /* Saturate: '<S446>/Saturation' incorporates:
       *  Switch: '<S436>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S20>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S20>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S20>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S446>/Saturation' */
    }

    /* End of Switch: '<S436>/Switch8' */

    /* Switch: '<S416>/Switch' incorporates:
     *  Constant: '<S416>/Constant5'
     *  Constant: '<S416>/Constant7'
     *  DataTypeConversion: '<S416>/Data Type Conversion'
     *  Switch: '<S436>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Reset_Wheel_Offsets;
    }

    /* End of Switch: '<S416>/Switch' */

    /* SignalConversion: '<S26>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S413>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S435>/Switch' incorporates:
     *  Constant: '<S435>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S435>/Product2' incorporates:
       *  Constant: '<S435>/Constant4'
       */
      rtb_Abs2_p = Code_Gen_Model_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S445>/Switch2' incorporates:
       *  Constant: '<S435>/Constant10'
       *  RelationalOperator: '<S445>/LowerRelop1'
       *  RelationalOperator: '<S445>/UpperRelop'
       *  Switch: '<S445>/Switch'
       *  UnaryMinus: '<S435>/Unary Minus'
       */
      if (rtb_Abs2_p > AT_Steering_Speed_Max) {
        rtb_Add_h5 = AT_Steering_Speed_Max;
      } else if (rtb_Abs2_p < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S445>/Switch' incorporates:
         *  UnaryMinus: '<S435>/Unary Minus'
         */
        rtb_Add_h5 = -AT_Steering_Speed_Max;
      } else {
        rtb_Add_h5 = rtb_Abs2_p;
      }

      /* End of Switch: '<S445>/Switch2' */
    } else {
      rtb_Add_h5 = 0.0;
    }

    /* End of Switch: '<S435>/Switch' */

    /* DeadZone: '<S435>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S435>/Add' incorporates:
     *  Constant: '<S435>/Constant'
     *  Constant: '<S435>/Constant1'
     *  DeadZone: '<S435>/Dead Zone'
     *  Lookup_n-D: '<S435>/Modulation_Str_Y_Rel'
     *  Product: '<S435>/Product'
     *  Product: '<S435>/Product1'
     *  SignalConversion: '<S16>/Signal Copy5'
     */
    rtb_Add_h5 += (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                   Steering_Relative_Gain) + (rtb_Minus_k_idx_0 *
      Steering_Twist_Gain);

    /* RelationalOperator: '<S437>/Compare' incorporates:
     *  Constant: '<S437>/Constant'
     */
    rtb_Compare_oq = (rtb_Add_h5 == 0.0);

    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant5'
     *  Constant: '<S416>/Constant8'
     *  DataTypeConversion: '<S416>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_Compare_oq;
    }

    /* End of Switch: '<S416>/Switch1' */

    /* Logic: '<S435>/AND2' incorporates:
     *  RelationalOperator: '<S438>/FixPt Relational Operator'
     *  RelationalOperator: '<S439>/FixPt Relational Operator'
     *  RelationalOperator: '<S440>/FixPt Relational Operator'
     *  RelationalOperator: '<S441>/FixPt Relational Operator'
     *  UnitDelay: '<S438>/Delay Input1'
     *  UnitDelay: '<S439>/Delay Input1'
     *  UnitDelay: '<S440>/Delay Input1'
     *  UnitDelay: '<S441>/Delay Input1'
     *
     * Block description for '<S438>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S439>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S440>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S441>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Reached_Destination = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver)
      > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S435>/AND1' incorporates:
     *  Logic: '<S435>/AND3'
     *  UnitDelay: '<S435>/Unit Delay2'
     */
    rtb_AND1 = (rtb_Compare_oq && (Robot_Reached_Destination ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Logic: '<S435>/AND4' incorporates:
     *  Logic: '<S435>/AND8'
     *  UnitDelay: '<S435>/Unit Delay4'
     */
    rtb_AND4 = ((rtb_Compare_oq && (!Robot_Reached_Destination)) &&
                (Code_Gen_Model_DW.UnitDelay4_DSTATE));

    /* Logic: '<S435>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 || rtb_AND4);

    /* Switch: '<S435>/Switch8' incorporates:
     *  Constant: '<S444>/Constant'
     *  Logic: '<S435>/AND9'
     *  RelationalOperator: '<S443>/FixPt Relational Operator'
     *  RelationalOperator: '<S444>/Compare'
     *  UnitDelay: '<S22>/Unit Delay'
     *  UnitDelay: '<S443>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_Compare_oq) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp)))
        || (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S435>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S435>/Switch8' incorporates:
       *  UnitDelay: '<S435>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S435>/Switch8' */

    /* Switch: '<S435>/Switch4' incorporates:
     *  Constant: '<S435>/Constant5'
     *  Switch: '<S435>/Switch1'
     *  Switch: '<S435>/Switch5'
     *  Switch: '<S435>/Switch6'
     *  Switch: '<S435>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_DeadZone = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S435>/Switch5' incorporates:
       *  Constant: '<S435>/Constant6'
       */
      rtb_DeadZone = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S435>/Switch6' incorporates:
       *  Constant: '<S435>/Constant7'
       *  Switch: '<S435>/Switch5'
       */
      rtb_DeadZone = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S435>/Switch7' incorporates:
       *  Constant: '<S435>/Constant8'
       *  Switch: '<S435>/Switch5'
       *  Switch: '<S435>/Switch6'
       */
      rtb_DeadZone = 4.71238898038469;
    } else if (rtb_AND4) {
      /* Switch: '<S435>/Switch1' incorporates:
       *  Constant: '<S26>/Constant10'
       *  Switch: '<S435>/Switch5'
       *  Switch: '<S435>/Switch6'
       *  Switch: '<S435>/Switch7'
       */
      rtb_DeadZone = 0.0;
    } else {
      /* Switch: '<S435>/Switch6' incorporates:
       *  Switch: '<S435>/Switch5'
       *  Switch: '<S435>/Switch7'
       *  UnitDelay: '<S435>/Unit Delay1'
       */
      rtb_DeadZone = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S435>/Switch4' */

    /* Switch: '<S435>/Switch2' incorporates:
     *  Switch: '<S435>/Switch3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S435>/Switch2' incorporates:
       *  Constant: '<S435>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;

      /* Switch: '<S435>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_DeadZone;
    } else {
      /* Switch: '<S435>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

      /* Switch: '<S435>/Switch3' incorporates:
       *  Constant: '<S435>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S435>/Switch2' */

    /* Merge: '<S20>/Merge1' incorporates:
     *  Sum: '<S435>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S20>/Merge2' incorporates:
     *  SignalConversion: '<S435>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Add_h5;

    /* Abs: '<S413>/Abs2' incorporates:
     *  UnaryMinus: '<S413>/Unary Minus'
     */
    rtb_Abs2_p = fabs(-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S413>/Abs' incorporates:
     *  UnaryMinus: '<S413>/Unary Minus1'
     */
    rtb_Subtract_b2 = fabs(-rtb_Subtract_b2);

    /* Abs: '<S413>/Abs1' */
    rtb_Coral_Wheel_DutyCycle_merge = fabs(rtb_Coral_Wheel_DutyCycle_merge);

    /* Merge: '<S20>/Merge23' incorporates:
     *  Constant: '<S419>/Constant'
     *  Constant: '<S426>/Constant'
     *  Constant: '<S427>/Constant'
     *  Logic: '<S413>/Logical Operator7'
     *  RelationalOperator: '<S419>/Compare'
     *  RelationalOperator: '<S426>/Compare'
     *  RelationalOperator: '<S427>/Compare'
     *  SignalConversion: '<S26>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Compare &&
      (rtb_Subtract_b2 <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Abs2_p <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy10' incorporates:
     *  Constant: '<S423>/Constant'
     *  Constant: '<S424>/Constant'
     *  Constant: '<S425>/Constant'
     *  Logic: '<S413>/Logical Operator'
     *  RelationalOperator: '<S423>/Compare'
     *  RelationalOperator: '<S424>/Compare'
     *  RelationalOperator: '<S425>/Compare'
     */
    Code_Gen_Model_B.Teleop_AT_On_Target = (((Compare && (rtb_Subtract_b2 <=
      AT_Max_Error_XY)) && (rtb_Coral_Wheel_DutyCycle_merge <= AT_Max_Error_XY))
      && (rtb_Abs2_p <= AT_Max_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy11' */
    Compare_f = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Merge: '<S20>/Merge13' incorporates:
     *  SignalConversion generated from: '<S26>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired;

    /* SignalConversion generated from: '<S26>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_m3 = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S26>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S20>/Merge11' incorporates:
     *  SignalConversion generated from: '<S26>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired;

    /* Merge: '<S20>/Merge21' incorporates:
     *  SignalConversion generated from: '<S26>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S20>/Merge12' incorporates:
     *  Constant: '<S415>/Constant5'
     *  SignalConversion generated from: '<S26>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S20>/Merge7' incorporates:
     *  Constant: '<S26>/Constant3'
     *  SignalConversion generated from: '<S26>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S20>/Merge9' incorporates:
     *  Constant: '<S26>/Constant9'
     *  SignalConversion generated from: '<S26>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S20>/Merge10' incorporates:
     *  Constant: '<S26>/Constant1'
     *  SignalConversion generated from: '<S26>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S26>/Enable_Wheels' incorporates:
     *  Constant: '<S26>/Constant6'
     */
    Robot_Reached_Destination = false;

    /* SignalConversion generated from: '<S26>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S26>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = false;

    /* SignalConversion generated from: '<S26>/Disable_Wheels' incorporates:
     *  Constant: '<S26>/Constant14'
     */
    rtb_Disable_Wheels = false;

    /* SignalConversion generated from: '<S26>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S26>/Constant2'
     */
    Compare = false;

    /* Update for UnitDelay: '<S456>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S456>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S457>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S457>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S462>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S463>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S464>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S458>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S458>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S465>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S468>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S469>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S461>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Right_B1'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b = Code_Gen_Model_U.Joystick_Right_B1;

    /* Update for UnitDelay: '<S466>/Delay Input1'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S467>/Delay Input1'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S459>/Delay Input1'
     *
     * Block description for '<S459>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S460>/Delay Input1'
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S413>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch_jz;

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Abs1;

    /* Update for UnitDelay: '<S449>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S449>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S453>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S453>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S453>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Product2_a;

    /* Update for UnitDelay: '<S443>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_Compare_oq;

    /* Update for UnitDelay: '<S442>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant5'
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = false;

    /* Update for UnitDelay: '<S438>/Delay Input1'
     *
     * Block description for '<S438>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S439>/Delay Input1'
     *
     * Block description for '<S439>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S440>/Delay Input1'
     *
     * Block description for '<S440>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S441>/Delay Input1'
     *
     * Block description for '<S441>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S435>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND1;

    /* Update for UnitDelay: '<S435>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND4;

    /* Update for UnitDelay: '<S435>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S435>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_DeadZone;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S27>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    /* SignalConversion generated from: '<S27>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S20>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S20>/Merge1' incorporates:
     *  Constant: '<S27>/Constant1'
     *  SignalConversion generated from: '<S27>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S20>/Merge2' incorporates:
     *  Constant: '<S27>/Constant2'
     *  SignalConversion generated from: '<S27>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S20>/Merge3' incorporates:
     *  Constant: '<S27>/Constant3'
     *  SignalConversion generated from: '<S27>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S20>/Merge4' incorporates:
     *  Constant: '<S27>/Constant4'
     *  SignalConversion generated from: '<S27>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S27>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S27>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S27>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S27>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S20>/Merge7' incorporates:
     *  Constant: '<S27>/Constant7'
     *  SignalConversion generated from: '<S27>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S20>/Merge9' incorporates:
     *  Constant: '<S27>/Constant9'
     *  SignalConversion generated from: '<S27>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S20>/Merge10' incorporates:
     *  Constant: '<S27>/Constant12'
     *  SignalConversion generated from: '<S27>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant14'
     *  Switch: '<S27>/Switch1'
     *  UnitDelay: '<S27>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      Compare = true;
    } else {
      Compare = ((!Code_Gen_Model_B.Button_Enable_Wheels) &&
                 (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));
    }

    /* End of Switch: '<S27>/Switch' */

    /* Merge: '<S20>/Merge12' incorporates:
     *  Constant: '<S27>/Constant11'
     *  SignalConversion generated from: '<S27>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S20>/Merge11' incorporates:
     *  Constant: '<S27>/Constant10'
     *  SignalConversion generated from: '<S27>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S20>/Merge13' incorporates:
     *  Constant: '<S27>/Constant15'
     *  SignalConversion generated from: '<S27>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S27>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S27>/Constant16'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S27>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S27>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S27>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S27>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S20>/Merge21' incorporates:
     *  Constant: '<S27>/Constant19'
     *  SignalConversion generated from: '<S27>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S27>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S27>/Constant20'
     */
    rtb_Compare_m3 = false;

    /* Merge: '<S20>/Merge23' incorporates:
     *  Constant: '<S27>/Constant21'
     *  SignalConversion generated from: '<S27>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S27>/AT_On_Target' incorporates:
     *  Constant: '<S27>/Constant23'
     */
    Compare_f = false;

    /* SignalConversion: '<S27>/Signal Copy' */
    Robot_Reached_Destination = Code_Gen_Model_B.Button_Enable_Wheels;

    /* SignalConversion: '<S27>/Signal Copy2' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* SignalConversion: '<S27>/Signal Copy1' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = Compare;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S132>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S18>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S18>/Tapped Delay1'
   *  Sum: '<S18>/Add'
   *  Sum: '<S18>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Delay: '<S132>/MemoryX' incorporates:
   *  Constant: '<S132>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch_jz = 0.0;
  } else {
    rtb_Switch_jz = 3.1415926535897931;
  }

  /* End of Switch: '<S15>/Switch' */

  /* Sum: '<S15>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch_jz;

  /* Trigonometry: '<S21>/Trigonometric Function' */
  rtb_Add_cv = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S21>/Trigonometric Function1' */
  rtb_Switch2_g = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S21>/Rotation matrix from local to global' */
  rtb_DeadZone = rtb_Add_cv;
  rtb_Abs2_p = rtb_Switch2_g;

  /* SignalConversion generated from: '<S21>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S21>/Unary Minus'
   */
  rtb_Abs1 = -rtb_Switch2_g;
  rtb_Subtract_b2 = rtb_Add_cv;

  /* Sum: '<S186>/Diff' incorporates:
   *  UnitDelay: '<S186>/UD'
   *
   * Block description for '<S186>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S186>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_cv = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S21>/Subtract2' incorporates:
   *  Constant: '<S21>/Constant3'
   *  Gain: '<S21>/Gain7'
   *  Math: '<S21>/Square'
   */
  rtb_Switch2_g = 1.0 - ((rtb_Add_cv * rtb_Add_cv) * 0.16666666666666666);

  /* Gain: '<S21>/Gain6' */
  rtb_Add_cv *= 0.5;

  /* Product: '<S21>/Product7' incorporates:
   *  Constant: '<S21>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    rtb_Num_Segments = 0;
    for (s226_iter = 0; s226_iter < 8; s226_iter++) {
      rtb_Minus_k_idx_0 +=
        Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s226_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S21>/Product7' */

  /* Product: '<S21>/Product6' incorporates:
   *  SignalConversion generated from: '<S21>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S21>/Unary Minus2'
   */
  rtb_Switch2_ji = (rtb_Switch2_g * tmp[0]) + ((-rtb_Add_cv) * tmp[1]);
  rtb_Switch2_gl = (rtb_Add_cv * tmp[0]) + (rtb_Switch2_g * tmp[1]);

  /* Product: '<S21>/Product6' incorporates:
   *  Concatenate: '<S21>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_DeadZone * rtb_Switch2_ji) + (rtb_Abs1 *
    rtb_Switch2_gl);
  Code_Gen_Model_B.Product6[1] = (rtb_Abs2_p * rtb_Switch2_ji) +
    (rtb_Subtract_b2 * rtb_Switch2_gl);

  /* Outputs for Enabled SubSystem: '<S159>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S185>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S152>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S183>/Enable'
   */
  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S18>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S183>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S132>/C'
     *  Delay: '<S132>/MemoryX'
     *  Product: '<S185>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_gl;

    /* Sum: '<S183>/Sum' incorporates:
     *  Constant: '<S132>/D'
     *  Product: '<S183>/C[k]*xhat[k|k-1]'
     *  Product: '<S183>/D[k]*u[k]'
     *  Sum: '<S183>/Add1'
     */
    rtb_Switch2_ji = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Abs1 = rtb_Reshapey[0] - (rtb_Switch2_ji + rtb_Switch2_gl);

    /* Product: '<S183>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S132>/C'
     *  Delay: '<S132>/MemoryX'
     *  Product: '<S185>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_gl;

    /* Sum: '<S183>/Sum' incorporates:
     *  Constant: '<S132>/D'
     *  Product: '<S183>/C[k]*xhat[k|k-1]'
     *  Product: '<S183>/D[k]*u[k]'
     *  Sum: '<S183>/Add1'
     */
    rtb_Switch2_ji = rtb_Reshapey[1] - (rtb_Switch2_ji + rtb_Switch2_gl);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S183>/Product3' incorporates:
     *  Constant: '<S133>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Abs1) +
      (-2.0601714451538746E-17 * rtb_Switch2_ji);

    /* Sum: '<S185>/Add1' incorporates:
     *  Product: '<S185>/Product'
     */
    rtb_Switch2_gl = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S183>/Product3' incorporates:
     *  Constant: '<S133>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Abs1) +
      (0.095124921972504 * rtb_Switch2_ji);

    /* Sum: '<S185>/Add1' incorporates:
     *  Product: '<S185>/Product'
     */
    rtb_Switch2_ji = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S185>/Product2' incorporates:
     *  Constant: '<S133>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_gl) +
      (5.9896845167210271E-17 * rtb_Switch2_ji);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_gl) +
      (0.095124921972503981 * rtb_Switch2_ji);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S183>/Product3' incorporates:
       *  Outport: '<S183>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S185>/Product2' incorporates:
       *  Outport: '<S185>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S18>/AND' */
  /* End of Outputs for SubSystem: '<S152>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S159>/Enabled Subsystem' */

  /* Sum: '<S159>/Add' incorporates:
   *  Delay: '<S132>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S21>/Accumulator2' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S21>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S21>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S18>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S18>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S18>/Switch' */

  /* DiscreteIntegrator: '<S21>/Accumulator' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S21>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S21>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S18>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S18>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S18>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* If: '<S23>/If' incorporates:
   *  Constant: '<S251>/Constant'
   *  Logic: '<S251>/AND'
   *  MATLAB Function: '<S201>/Find closest index to curve'
   *  Product: '<S251>/Product'
   *  RelationalOperator: '<S251>/Relational Operator'
   *  RelationalOperator: '<S251>/Relational Operator1'
   *  Selector: '<S251>/Selector'
   *  Selector: '<S251>/Selector1'
   *  Selector: '<S252>/Selector'
   *  Sum: '<S251>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S204>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S207>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S209>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S204>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S23>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* InitializeConditions for If: '<S23>/If' incorporates:
       *  UnitDelay: '<S199>/Unit Delay'
       *  UnitDelay: '<S200>/Unit Delay'
       *  UnitDelay: '<S202>/Unit Delay'
       *  UnitDelay: '<S202>/Unit Delay1'
       *  UnitDelay: '<S252>/Unit Delay'
       *  UnitDelay: '<S252>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S23>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S23>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */
    /* Selector: '<S200>/Selector1' incorporates:
     *  Merge: '<S20>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S200>/Selector1' */

    /* Lookup_n-D: '<S199>/Capture Radius' incorporates:
     *  UnitDelay: '<S199>/Unit Delay'
     */
    rtb_Abs1 = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S200>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S200>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S204>/If' incorporates:
     *  RelationalOperator: '<S204>/ '
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S207>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S209>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S204>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* InitializeConditions for If: '<S204>/If' incorporates:
       *  UnitDelay: '<S207>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S204>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S204>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S207>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* If: '<S207>/If' incorporates:
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S207>/Selector'
       *  Selector: '<S210>/Selector'
       */
      rtb_Abs2_p = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S207>/Increment_If_Rectangle_Check' */

      /* Sum: '<S207>/Minus' incorporates:
       *  Concatenate: '<S200>/Matrix Concatenate2'
       *  Selector: '<S207>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Abs2_p;

      /* Outputs for IfAction SubSystem: '<S207>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* If: '<S207>/If' incorporates:
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S207>/Selector'
       *  Selector: '<S210>/Selector'
       *  Sum: '<S207>/Minus'
       */
      rtb_Product2_a = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S207>/Increment_If_Rectangle_Check' */

      /* Sum: '<S207>/Minus' incorporates:
       *  Concatenate: '<S200>/Matrix Concatenate2'
       *  Selector: '<S207>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Product2_a;

      /* Math: '<S207>/Hypot' */
      rtb_Switch2_gl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S207>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S207>/Switch' incorporates:
       *  Logic: '<S207>/AND'
       *  Logic: '<S207>/OR'
       *  RelationalOperator: '<S207>/Relational Operator'
       *  UnitDelay: '<S207>/Unit Delay'
       */
      rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch2_gl <= rtb_Abs1) && rtb_Is_Absolute_Steering));

      /* If: '<S207>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation_g) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S209>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S207>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S209>/Action Port'
         */
        /* If: '<S209>/If' incorporates:
         *  RelationalOperator: '<S209>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S209>/Is_Last_Point' incorporates:
           *  ActionPort: '<S212>/Action Port'
           */
          /* InitializeConditions for If: '<S209>/If' incorporates:
           *  UnitDelay: '<S212>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S209>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S209>/Is_Last_Point' incorporates:
           *  ActionPort: '<S212>/Action Port'
           */
          /* Switch: '<S212>/Switch' incorporates:
           *  Constant: '<S214>/Constant'
           *  Logic: '<S212>/OR'
           *  RelationalOperator: '<S214>/Compare'
           *  UnitDelay: '<S212>/Unit Delay'
           */
          rtb_AND1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) || (rtb_Switch2_gl <=
            Spline_Stop_Radius));

          /* If: '<S212>/If' */
          if (rtb_AND1) {
            /* Outputs for IfAction SubSystem: '<S212>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S215>/Action Port'
             */
            /* Merge: '<S204>/Merge2' incorporates:
             *  Constant: '<S215>/Constant'
             *  SignalConversion generated from: '<S215>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S215>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S215>/Constant1'
             */
            rtb_Compare_oq = false;

            /* End of Outputs for SubSystem: '<S212>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S212>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S216>/Action Port'
             */
            /* Merge: '<S204>/Merge2' incorporates:
             *  Constant: '<S216>/Constant'
             *  SignalConversion generated from: '<S216>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S216>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S216>/Constant1'
             */
            rtb_Compare_oq = true;

            /* End of Outputs for SubSystem: '<S212>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S212>/If' */

          /* Merge: '<S204>/Merge4' incorporates:
           *  SignalConversion: '<S212>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S212>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AND1;

          /* End of Outputs for SubSystem: '<S209>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S209>/Increment_Search' incorporates:
           *  ActionPort: '<S211>/Action Port'
           */
          /* Merge: '<S204>/Merge2' incorporates:
           *  Constant: '<S211>/Constant'
           *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S211>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S211>/Constant1'
           */
          rtb_Compare_oq = false;

          /* Merge: '<S204>/Merge4' incorporates:
           *  Constant: '<S213>/FixPt Constant'
           *  SignalConversion: '<S211>/Signal Copy'
           *  Sum: '<S213>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S209>/Increment_Search' */
        }

        /* End of If: '<S209>/If' */
        /* End of Outputs for SubSystem: '<S207>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S207>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S210>/Action Port'
         */
        /* Sum: '<S217>/FixPt Sum1' incorporates:
         *  Constant: '<S217>/FixPt Constant'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S210>/Selector1' incorporates:
         *  Selector: '<S200>/Selector1'
         */
        rtb_Switch2_g = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) - 1];

        /* Sum: '<S218>/Subtract' incorporates:
         *  Selector: '<S210>/Selector1'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_g - rtb_Abs2_p;

        /* Selector: '<S210>/Selector1' incorporates:
         *  Selector: '<S200>/Selector1'
         */
        rtb_Subtract_b2 = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) + 9];

        /* Sum: '<S218>/Subtract' incorporates:
         *  Selector: '<S210>/Selector1'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Subtract_b2 - rtb_Product2_a;

        /* Math: '<S218>/Hypot' */
        rtb_Switch2_ji = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S218>/Divide' */
        rtb_Switch2_gl = rtb_Minus_n[1];

        /* UnaryMinus: '<S218>/Unary Minus' */
        rtb_Add_cv = rtb_Minus_n[0];

        /* Product: '<S218>/Product' incorporates:
         *  Product: '<S218>/Divide'
         *  UnaryMinus: '<S218>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2_gl / rtb_Switch2_ji) * rtb_Abs1;
        rtb_Minus_n[1] = ((-rtb_Add_cv) / rtb_Switch2_ji) * rtb_Abs1;

        /* Sum: '<S218>/Add1' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Add_cv = rtb_Switch2_g - rtb_Minus_n[0];

        /* Sum: '<S218>/Minus4' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Switch2_g = (rtb_Switch2_g + rtb_Minus_n[0]) - rtb_Add_cv;

        /* Sum: '<S218>/Minus5' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         */
        rtb_DeadZone = rtb_Reshapey[0] - rtb_Add_cv;

        /* Sum: '<S218>/Add' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Switch2_gl = rtb_Abs2_p - rtb_Minus_n[0];

        /* Sum: '<S218>/Minus' incorporates:
         *  Sum: '<S218>/Minus1'
         */
        rtb_Add_cv -= rtb_Switch2_gl;

        /* DotProduct: '<S218>/Dot Product' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         *  Sum: '<S218>/Minus1'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Reshapey[0] - rtb_Switch2_gl) * rtb_Add_cv;

        /* DotProduct: '<S218>/Dot Product1' incorporates:
         *  Sum: '<S218>/Minus'
         */
        rtb_Abs2_p = rtb_Add_cv * rtb_Add_cv;

        /* DotProduct: '<S218>/Dot Product2' incorporates:
         *  Sum: '<S218>/Minus4'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Minus_k_idx_0 = rtb_Switch2_g * rtb_DeadZone;

        /* DotProduct: '<S218>/Dot Product3' incorporates:
         *  Sum: '<S218>/Minus4'
         */
        rtb_Init = rtb_Switch2_g * rtb_Switch2_g;

        /* Sum: '<S218>/Add1' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Add_cv = rtb_Subtract_b2 - rtb_Minus_n[1];

        /* Sum: '<S218>/Minus4' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Switch2_g = (rtb_Subtract_b2 + rtb_Minus_n[1]) - rtb_Add_cv;

        /* Sum: '<S218>/Minus5' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         */
        rtb_DeadZone = rtb_Reshapey[1] - rtb_Add_cv;

        /* Sum: '<S218>/Add' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Switch2_gl = rtb_Product2_a - rtb_Minus_n[1];

        /* Sum: '<S218>/Minus' incorporates:
         *  Sum: '<S218>/Minus1'
         */
        rtb_Add_cv -= rtb_Switch2_gl;

        /* DotProduct: '<S218>/Dot Product' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         *  Sum: '<S218>/Minus1'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Switch2_ji += (rtb_Reshapey[1] - rtb_Switch2_gl) * rtb_Add_cv;

        /* RelationalOperator: '<S219>/Compare' incorporates:
         *  Constant: '<S219>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Switch2_ji >= 0.0);

        /* RelationalOperator: '<S218>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S218>/Dot Product1'
         *  Sum: '<S218>/Minus'
         */
        rtb_Compare_oq = (rtb_Switch2_ji <= ((rtb_Add_cv * rtb_Add_cv) +
          rtb_Abs2_p));

        /* DotProduct: '<S218>/Dot Product2' incorporates:
         *  Sum: '<S218>/Minus4'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Switch2_g * rtb_DeadZone) + rtb_Minus_k_idx_0;

        /* Merge: '<S204>/Merge4' incorporates:
         *  Constant: '<S220>/Constant'
         *  DataTypeConversion: '<S210>/Data Type Conversion'
         *  DotProduct: '<S218>/Dot Product3'
         *  Logic: '<S218>/AND'
         *  RelationalOperator: '<S218>/LessThanOrEqual1'
         *  RelationalOperator: '<S220>/Compare'
         *  Sum: '<S210>/Add'
         *  Sum: '<S218>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Steering && rtb_Compare_oq) && (rtb_Switch2_ji >=
          0.0)) && (rtb_Switch2_ji <= ((rtb_Switch2_g * rtb_Switch2_g) +
          rtb_Init)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S204>/Merge2' incorporates:
         *  Constant: '<S210>/Constant2'
         *  SignalConversion generated from: '<S210>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S210>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S210>/Constant1'
         */
        rtb_Compare_oq = false;

        /* End of Outputs for SubSystem: '<S207>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S207>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S208>/Action Port'
         */
        /* Merge: '<S204>/Merge2' incorporates:
         *  Constant: '<S208>/Constant2'
         *  SignalConversion generated from: '<S208>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S208>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S208>/Constant1'
         */
        rtb_Compare_oq = false;

        /* Merge: '<S204>/Merge4' incorporates:
         *  SignalConversion generated from: '<S208>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S207>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S204>/Merge1' incorporates:
       *  Constant: '<S207>/Constant'
       *  SignalConversion generated from: '<S207>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S207>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation_g;

      /* End of Outputs for SubSystem: '<S204>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S204>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S206>/Action Port'
       */
      /* Merge: '<S204>/Merge1' incorporates:
       *  Constant: '<S206>/Constant'
       *  SignalConversion generated from: '<S206>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S204>/Merge2' incorporates:
       *  Constant: '<S206>/Constant1'
       *  SignalConversion generated from: '<S206>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S206>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S206>/Constant2'
       */
      rtb_Compare_oq = false;

      /* Merge: '<S204>/Merge4' incorporates:
       *  SignalConversion generated from: '<S206>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S204>/Escape_Auto_Driving' */
    }

    /* End of If: '<S204>/If' */

    /* If: '<S200>/If1' */
    if (!rtb_Compare_oq) {
      /* Outputs for IfAction SubSystem: '<S200>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S205>/Action Port'
       */
      /* Bias: '<S221>/Add Constant' incorporates:
       *  Bias: '<S221>/Bias'
       *  Sum: '<S221>/Subtract'
       */
      rtb_Switch2_gl = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S221>/Selector4' incorporates:
       *  Bias: '<S221>/Bias1'
       *  Constant: '<S223>/FixPt Constant'
       *  Sum: '<S223>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S221>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S221>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S221>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S221>/Selector5' incorporates:
       *  Concatenate: '<S221>/Matrix Concatenate'
       *  Gain: '<S225>/Gain'
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S221>/Selector2'
       *  Selector: '<S221>/Selector3'
       *  Sum: '<S225>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s226_iter = 0; s226_iter <= rtb_Bias1_p; s226_iter++) {
          rtb_Selector5[s226_iter + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[s226_iter + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S221>/Matrix Concatenate' incorporates:
       *  Bias: '<S221>/Add Constant1'
       *  Gain: '<S224>/Gain'
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S221>/Selector'
       *  Selector: '<S221>/Selector1'
       *  Selector: '<S221>/Selector5'
       *  Sum: '<S224>/Subtract'
       */
      rtb_Bias1_p = Code_Gen_Model_DW.Selector5_DIMS1[0];
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments < rtb_Bias1_p;
             rtb_Num_Segments++) {
          rtb_MatrixConcatenate_p[(rtb_Num_Segments +
            (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) + 1] =
            rtb_Selector5[(Code_Gen_Model_DW.Selector5_DIMS1[0] * i) +
            rtb_Num_Segments];
        }
      }

      rtb_MatrixConcatenate_p[Code_Gen_Model_DW.Selector5_DIMS1[0] + 1] =
        (rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) - 1] * 2.0)
        - rtb_Ref_Poses[((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) - 1];
      rtb_MatrixConcatenate_p[(Code_Gen_Model_DW.Selector5_DIMS1[0] +
        Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0]) + 1] = (rtb_Ref_Poses
        [((int32_T)Code_Gen_Model_B.Spline_Num_Poses) + 9] * 2.0) -
        rtb_Ref_Poses[((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) + 9];

      /* Selector: '<S221>/Selector4' */
      s226_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s226_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S221>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S221>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S221>/Assignment' incorporates:
       *  Concatenate: '<S221>/Matrix Concatenate'
       *  Selector: '<S221>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s226_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S222>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S226>/While Iterator'
       */
      s226_iter = 1;
      do {
        rtb_Abs2_p = rtb_Assignment[s226_iter + 1];
        rtb_Minus_n[0] = rtb_Abs2_p - rtb_Assignment[s226_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s226_iter] - rtb_Assignment[s226_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Abs2_p - rtb_Assignment[s226_iter];
        rtb_Abs2_p = rtb_Assignment[s226_iter + 13];
        rtb_Minus_n[1] = rtb_Abs2_p - rtb_Assignment[s226_iter + 11];
        rtb_Add_cv = rtb_Assignment[s226_iter + 12];
        rtb_Add2_f[1] = rtb_Add_cv - rtb_Assignment[s226_iter + 14];
        rtb_Modulation_Drv = rtb_Abs2_p - rtb_Add_cv;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch2_ji = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Product2_a = rt_powd_snf(rtb_Switch2_ji, 2.0);
          rtb_DeadZone = rt_powd_snf(rtb_Switch2_ji, 3.0);
          rtb_Subtract_b2 = (rtb_Switch2_ji - (2.0 * rtb_Product2_a)) +
            rtb_DeadZone;
          rtb_Abs2_p = rtb_Product2_a - rtb_DeadZone;
          rtb_DeadZone = (3.0 * rtb_Product2_a) - (2.0 * rtb_DeadZone);
          rtb_Switch2_g = ((((rtb_Minus_n[0] * rtb_Subtract_b2) + (rtb_Add2_f[0]
            * rtb_Abs2_p)) * 0.0) + (rtb_Minus_k_idx_0 * rtb_DeadZone)) +
            rtb_Assignment[s226_iter];
          rtb_Init = ((((rtb_Minus_n[1] * rtb_Subtract_b2) + (rtb_Add2_f[1] *
            rtb_Abs2_p)) * 0.0) + (rtb_Modulation_Drv * rtb_DeadZone)) +
            rtb_Add_cv;
          rtb_Subtract_b2 = ((3.0 * rtb_Product2_a) - (4.0 * rtb_Switch2_ji)) +
            1.0;
          rtb_Abs2_p = (2.0 * rtb_Switch2_ji) - (3.0 * rtb_Product2_a);
          rtb_Product2_a = (rtb_Switch2_ji - rtb_Product2_a) * 6.0;
          rtb_DeadZone = (((rtb_Minus_n[0] * rtb_Subtract_b2) + (rtb_Add2_f[0] *
            rtb_Abs2_p)) * 0.0) + (rtb_Minus_k_idx_0 * rtb_Product2_a);
          rtb_Add_h5 = (((rtb_Minus_n[1] * rtb_Subtract_b2) + (rtb_Add2_f[1] *
            rtb_Abs2_p)) * 0.0) + (rtb_Modulation_Drv * rtb_Product2_a);
          rtb_Product2_a = (6.0 * rtb_Switch2_ji) - 4.0;
          rtb_Subtract_b2 = (-6.0 * rtb_Switch2_ji) + 2.0;
          rtb_Switch2_ji = (-12.0 * rtb_Switch2_ji) + 6.0;
          rtb_Abs2_p = (((rtb_Minus_n[0] * rtb_Product2_a) + (rtb_Add2_f[0] *
            rtb_Subtract_b2)) * 0.0) + (rtb_Minus_k_idx_0 * rtb_Switch2_ji);
          rtb_Subtract_b2 = (((rtb_Minus_n[1] * rtb_Product2_a) + (rtb_Add2_f[1]
            * rtb_Subtract_b2)) * 0.0) + (rtb_Modulation_Drv * rtb_Switch2_ji);
          rtb_Product2_a = rt_powd_snf(rt_hypotd_snf(rtb_DeadZone, rtb_Add_h5),
            3.0);
          rtb_Switch2_ji = fmax(1.0E-10, rtb_Product2_a);
          Code_Gen_Model_DW.Relay_Mode = ((rtb_Product2_a >=
            2.2204460492503131E-16) || (Code_Gen_Model_DW.Relay_Mode));
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_Switch2_g;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Init;
          if (Code_Gen_Model_DW.Relay_Mode) {
            i = 1;
          } else {
            i = -1;
          }

          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((rtb_DeadZone *
            rtb_Subtract_b2) - (rtb_Abs2_p * rtb_Add_h5)) / (rtb_Switch2_ji *
            ((real_T)i));
        }

        if (s226_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s226_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_ji = rtb_Switch2_gl - ((real_T)s226_iter);
        rtb_Num_Segments = s226_iter;
        s226_iter++;
      } while ((rtb_Switch2_ji >= 4.0) && (s226_iter <= 3));

      /* End of Outputs for SubSystem: '<S222>/Sampling_Loop' */

      /* SignalConversion generated from: '<S205>/Position_and_Curvature' incorporates:
       *  Assignment: '<S226>/Assignment'
       *  Merge: '<S200>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S200>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S200>/If Action Subsystem' incorporates:
       *  ActionPort: '<S203>/Action Port'
       */
      /* Product: '<S203>/Product' incorporates:
       *  Selector: '<S200>/Selector'
       *  Selector: '<S200>/Selector1'
       */
      rtb_Switch2_ji = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S203>/Product1' incorporates:
       *  Selector: '<S200>/Selector'
       *  Selector: '<S200>/Selector1'
       */
      rtb_Switch2_gl = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S203>/Product' incorporates:
         *  Constant: '<S203>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_ji;

        /* Product: '<S203>/Product1' incorporates:
         *  Constant: '<S203>/Constant2'
         *  Product: '<S203>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2_gl;
      }

      /* Assignment: '<S203>/Assignment' incorporates:
       *  Concatenate: '<S203>/Matrix Concatenate'
       *  Merge: '<S200>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S203>/Assignment' */

      /* SignalConversion generated from: '<S203>/Num_Segments' incorporates:
       *  Constant: '<S203>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S200>/If Action Subsystem' */
    }

    /* End of If: '<S200>/If1' */

    /* Concatenate: '<S201>/Matrix Concatenate' incorporates:
     *  Merge: '<S200>/Merge'
     *  Selector: '<S201>/Selector'
     *  Selector: '<S201>/Selector1'
     *  Selector: '<S201>/Selector3'
     */
    for (i = 0; i < 50; i++) {
      rtb_MatrixConcatenate_o[i] = rtb_Position_and_Curvature[i];
      rtb_MatrixConcatenate_o[i + 50] = rtb_Position_and_Curvature[i + 150];
      rtb_MatrixConcatenate_o[i + 100] = rtb_Position_and_Curvature[i + 300];
      rtb_MatrixConcatenate_o[i + 150] = rtb_Position_and_Curvature[i + 50];
      rtb_MatrixConcatenate_o[i + 200] = rtb_Position_and_Curvature[i + 200];
      rtb_MatrixConcatenate_o[i + 250] = rtb_Position_and_Curvature[i + 350];
      rtb_MatrixConcatenate_o[i + 300] = rtb_Position_and_Curvature[i + 100];
      rtb_MatrixConcatenate_o[i + 350] = rtb_Position_and_Curvature[i + 250];
      rtb_MatrixConcatenate_o[i + 400] = rtb_Position_and_Curvature[i + 400];
    }

    /* End of Concatenate: '<S201>/Matrix Concatenate' */

    /* MATLAB Function: '<S201>/Distance Along Curve' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector4'
     *  Selector: '<S201>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s226_iter = 0; s226_iter < 149; s226_iter++) {
      /* Outputs for Iterator SubSystem: '<S222>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S226>/While Iterator'
       */
      rtb_Assignment_d[s226_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s226_iter + 1] -
         rtb_MatrixConcatenate_o[s226_iter], rtb_MatrixConcatenate_o[s226_iter +
         151] - rtb_MatrixConcatenate_o[s226_iter + 150]) +
        rtb_Assignment_d[s226_iter];

      /* End of Outputs for SubSystem: '<S222>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S201>/Distance Along Curve' */

    /* MATLAB Function: '<S201>/Find closest index to curve' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector4'
     *  Selector: '<S201>/Selector5'
     *  Selector: '<S252>/Selector'
     */
    for (s226_iter = 0; s226_iter < 150; s226_iter++) {
      /* Outputs for Iterator SubSystem: '<S222>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S226>/While Iterator'
       */
      distance_from_robot[s226_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s226_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s226_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S222>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s226_iter = 1;
    } else {
      s226_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s226_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s226_iter == 0) {
      rtb_Switch2_gl = distance_from_robot[0];
    } else {
      rtb_Switch2_gl = distance_from_robot[s226_iter - 1];
      for (rtb_Bias1_p = s226_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_ji = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2_gl > rtb_Switch2_ji) {
          rtb_Switch2_gl = rtb_Switch2_ji;
        }
      }
    }

    s226_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s226_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2_gl) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S252>/Selector' incorporates:
     *  Constant: '<S252>/Constant'
     *  MATLAB Function: '<S201>/Find closest index to curve'
     *  MinMax: '<S252>/Min'
     */
    rtb_Switch2_ji = rtb_Assignment_d[((int32_T)fmin(50.0, s226_iter)) - 1];

    /* If: '<S252>/If' incorporates:
     *  RelationalOperator: '<S252>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S252>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S255>/Action Port'
       */
      /* SignalConversion generated from: '<S255>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S257>/FixPt Sum1' incorporates:
       *  Constant: '<S257>/FixPt Constant'
       */
      rtb_Switch2_gl = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S255>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S20>/Merge8'
       *  Selector: '<S255>/Selector11'
       *  Selector: '<S255>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S255>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S20>/Merge8'
       *  Selector: '<S255>/Selector1'
       *  Selector: '<S255>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S255>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S255>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2_gl), &rtb_Minus_n[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S255>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S255>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S255>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S252>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S252>/Latch' incorporates:
       *  ActionPort: '<S256>/Action Port'
       */
      /* SignalConversion generated from: '<S256>/In1' incorporates:
       *  UnitDelay: '<S252>/Unit Delay1'
       */
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S256>/In2' incorporates:
       *  UnitDelay: '<S252>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S252>/Latch' */
    }

    /* End of If: '<S252>/If' */

    /* MinMax: '<S199>/Min' incorporates:
     *  Lookup_n-D: '<S199>/Lookahead Distance'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    rtb_Abs1 = fmin(rtb_Abs1, look1_binlcpw
                    (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                     Code_Gen_Model_ConstP.pooled9,
                     Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S201>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S251>/While Iterator'
     */
    s251_iter = 1U;
    rtb_Is_Absolute_Translation_g = true;
    while (rtb_Is_Absolute_Translation_g && (s251_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S201>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S251>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s251_iter;
      rtb_Is_Absolute_Translation_g =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s226_iter - 1] + rtb_Abs1)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s251_iter++;
    }

    /* End of Outputs for SubSystem: '<S201>/Find first index that meets distance target' */

    /* Switch: '<S254>/Switch' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Constant: '<S201>/Constant'
     *  Constant: '<S251>/Constant'
     *  Constant: '<S254>/Constant'
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant2'
     *  Constant: '<S254>/Constant3'
     *  Logic: '<S251>/AND'
     *  MATLAB Function: '<S201>/Find closest index to curve'
     *  Math: '<S254>/Hypot'
     *  Merge: '<S20>/Merge8'
     *  MinMax: '<S254>/Max'
     *  MinMax: '<S254>/Min'
     *  MinMax: '<S254>/Min1'
     *  Product: '<S251>/Product'
     *  Product: '<S254>/Divide'
     *  Product: '<S254>/Product'
     *  Product: '<S254>/Product1'
     *  RelationalOperator: '<S201>/Relational Operator'
     *  RelationalOperator: '<S251>/Relational Operator'
     *  RelationalOperator: '<S251>/Relational Operator1'
     *  Selector: '<S201>/Selector10'
     *  Selector: '<S201>/Selector7'
     *  Selector: '<S201>/Selector8'
     *  Selector: '<S201>/Selector9'
     *  Selector: '<S251>/Selector'
     *  Selector: '<S251>/Selector1'
     *  Selector: '<S252>/Selector'
     *  Sqrt: '<S254>/Sqrt'
     *  Sum: '<S201>/Subtract'
     *  Sum: '<S251>/Add'
     *  Sum: '<S254>/Subtract'
     *  Sum: '<S254>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Abs1 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[9] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
                      Spline_Last_Pose_Distance_to_Velocity_Gain, fmin
                      (rtb_Switch2_gl * Spline_Velocity_Multiplier_TEST, sqrt
                       (Spline_Max_Centripital_Acceleration / fmax
                        (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator
                         + 299], 1.0E-5))));
    } else {
      rtb_Abs1 = fmin(rtb_Switch2_gl * Spline_Velocity_Multiplier_TEST, sqrt
                      (Spline_Max_Centripital_Acceleration / fmax
                       (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator +
                        299], 1.0E-5)));
    }

    /* End of Switch: '<S254>/Switch' */

    /* Logic: '<S202>/OR' */
    rtb_Compare_oq = (rtb_Is_Absolute_Steering ||
                      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S202>/Switch1' incorporates:
     *  Switch: '<S202>/Switch'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if (rtb_Compare_oq) {
      /* Merge: '<S23>/Merge2' incorporates:
       *  Constant: '<S202>/Constant3'
       *  SignalConversion: '<S202>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S23>/Merge2' incorporates:
       *  SignalConversion: '<S202>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Abs1;
      rtb_Switch2_ji = rtb_Merge1;
    }

    /* End of Switch: '<S202>/Switch1' */

    /* Merge: '<S23>/Merge' incorporates:
     *  SignalConversion: '<S202>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch2_ji;

    /* Selector: '<S201>/Selector6' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S201>/Selector2' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S202>/Switch2' incorporates:
     *  Sum: '<S258>/Subtract'
     *  Sum: '<S258>/Subtract1'
     *  Trigonometry: '<S258>/Atan2'
     *  UnitDelay: '<S202>/Unit Delay1'
     */
    if (rtb_Compare_oq) {
      rtb_Product2_a = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Product2_a = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S202>/Switch2' */

    /* Merge: '<S23>/Merge3' incorporates:
     *  SignalConversion: '<S202>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Product2_a;

    /* Merge: '<S23>/Merge7' incorporates:
     *  SignalConversion: '<S199>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Steering;

    /* Merge: '<S23>/Merge1' incorporates:
     *  Constant: '<S202>/Constant2'
     *  SignalConversion generated from: '<S199>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S23>/Merge4' incorporates:
     *  Constant: '<S202>/Constant5'
     *  SignalConversion generated from: '<S199>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S23>/Merge5' incorporates:
     *  Constant: '<S202>/Constant6'
     *  SignalConversion generated from: '<S199>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S23>/Merge8' incorporates:
     *  SignalConversion generated from: '<S199>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S199>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Abs1;

    /* Update for UnitDelay: '<S252>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S252>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S202>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Product2_a;

    /* End of Outputs for SubSystem: '<S23>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/Pass Through' incorporates:
     *  ActionPort: '<S198>/Action Port'
     */
    /* Merge: '<S23>/Merge7' incorporates:
     *  Constant: '<S198>/Constant'
     *  SignalConversion generated from: '<S198>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S23>/Merge' incorporates:
     *  SignalConversion generated from: '<S198>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S23>/Merge1' incorporates:
     *  SignalConversion generated from: '<S198>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S23>/Merge2' incorporates:
     *  SignalConversion generated from: '<S198>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S23>/Merge3' incorporates:
     *  SignalConversion generated from: '<S198>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S23>/Merge4' incorporates:
     *  SignalConversion generated from: '<S198>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S23>/Merge5' incorporates:
     *  SignalConversion generated from: '<S198>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S23>/Merge8' incorporates:
     *  SignalConversion generated from: '<S198>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S23>/Pass Through' */
  }

  /* End of If: '<S23>/If' */

  /* Signum: '<S352>/Sign2' incorporates:
   *  UnitDelay: '<S352>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S352>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S352>/Product1' incorporates:
   *  Signum: '<S352>/Sign1'
   *  Signum: '<S352>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S352>/Switch' incorporates:
   *  Constant: '<S352>/Constant'
   *  Constant: '<S357>/Constant'
   *  Constant: '<S358>/Constant'
   *  Logic: '<S352>/or'
   *  Product: '<S352>/Product1'
   *  RelationalOperator: '<S357>/Compare'
   *  RelationalOperator: '<S358>/Compare'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S352>/Switch' */

  /* Switch: '<S363>/Init' incorporates:
   *  UnitDelay: '<S363>/FixPt Unit Delay1'
   *  UnitDelay: '<S363>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S363>/Init' */

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_g > 0.0);

  /* Abs: '<S352>/Abs' incorporates:
   *  Sum: '<S352>/Subtract'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S352>/Switch5' incorporates:
   *  Constant: '<S352>/Constant1'
   *  Switch: '<S352>/Switch1'
   *  UnaryMinus: '<S352>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S352>/Constant4'
     *  Constant: '<S352>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S352>/Constant2'
     *  Constant: '<S352>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S352>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S352>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S352>/Constant10'
     *  Constant: '<S352>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S352>/Constant7'
     *  Constant: '<S352>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S352>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S352>/Lookup Table Dynamic1'
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

    /* Switch: '<S352>/Switch3' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Constant: '<S352>/Constant3'
     *  UnaryMinus: '<S352>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S352>/Switch3' */
  }

  /* End of Switch: '<S352>/Switch5' */

  /* Product: '<S352>/Product' incorporates:
   *  Switch: '<S352>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S361>/Sum1' */
  rtb_Abs1 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S362>/Switch2' incorporates:
   *  RelationalOperator: '<S362>/LowerRelop1'
   */
  if (!(rtb_Abs1 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S352>/Switch2' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Switch: '<S352>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S352>/Switch4' incorporates:
       *  Constant: '<S352>/Constant1'
       */
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S352>/Switch4' incorporates:
       *  Constant: '<S352>/Constant3'
       *  UnaryMinus: '<S352>/Unary Minus1'
       */
      rtb_Switch2_gl = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S352>/Switch2' */

    /* Product: '<S352>/Product2' */
    rtb_Switch2_gl *= rtb_Merge1;

    /* Switch: '<S362>/Switch' incorporates:
     *  RelationalOperator: '<S362>/UpperRelop'
     */
    if (rtb_Abs1 < rtb_Switch2_gl) {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    } else {
      rtb_Optimized_Module_Angle = rtb_Abs1;
    }

    /* End of Switch: '<S362>/Switch' */
  }

  /* End of Switch: '<S362>/Switch2' */

  /* Sum: '<S361>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S355>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S355>/Switch' incorporates:
     *  Constant: '<S387>/Constant3'
     *  Constant: '<S387>/Constant4'
     *  Math: '<S387>/Math Function'
     *  Sum: '<S355>/Subtract'
     *  Sum: '<S387>/Add1'
     *  Sum: '<S387>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S355>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S355>/Switch' */

  /* Sum: '<S383>/Add1' incorporates:
   *  Constant: '<S383>/Constant3'
   *  Constant: '<S383>/Constant4'
   *  Math: '<S383>/Math Function'
   *  Sum: '<S382>/Sum'
   *  Sum: '<S383>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S385>/Sum1' incorporates:
   *  Constant: '<S382>/Constant2'
   *  Product: '<S385>/Product'
   *  Sum: '<S385>/Sum'
   *  UnitDelay: '<S385>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S382>/Product' incorporates:
   *  Constant: '<S382>/Constant3'
   */
  rtb_Abs1 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S384>/Diff' incorporates:
   *  UnitDelay: '<S384>/UD'
   *
   * Block description for '<S384>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S384>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Abs1 - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S382>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S382>/Add' incorporates:
   *  Gain: '<S382>/Gain1'
   *  Saturate: '<S382>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S382>/Subtract' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S382>/Sum2' incorporates:
   *  Gain: '<S382>/Gain2'
   *  UnitDelay: '<S382>/Unit Delay'
   */
  rtb_Switch2_gl = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S386>/Switch2' incorporates:
   *  RelationalOperator: '<S386>/LowerRelop1'
   */
  if (!(rtb_Switch2_gl > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S382>/Subtract1' incorporates:
     *  Constant: '<S382>/Constant1'
     */
    rtb_Product2_a = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S386>/Switch' incorporates:
     *  RelationalOperator: '<S386>/UpperRelop'
     */
    if (rtb_Switch2_gl < rtb_Product2_a) {
      rtb_Optimized_Module_Angle = rtb_Product2_a;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    }

    /* End of Switch: '<S386>/Switch' */
  }

  /* End of Switch: '<S386>/Switch2' */

  /* Saturate: '<S382>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2_gl = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S382>/Saturation1' */

  /* Sum: '<S382>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Switch2_gl;

  /* Saturate: '<S382>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S382>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S382>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S382>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S382>/Saturation2' */

  /* Switch: '<S366>/Switch' incorporates:
   *  Abs: '<S366>/Abs'
   *  Constant: '<S366>/Constant'
   *  Constant: '<S381>/Constant'
   *  RelationalOperator: '<S381>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S366>/Switch' */

  /* Signum: '<S365>/Sign2' incorporates:
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S365>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Init > 0.0);
  }

  /* Product: '<S365>/Product1' incorporates:
   *  Signum: '<S365>/Sign1'
   *  Signum: '<S365>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S365>/Switch' incorporates:
   *  Constant: '<S365>/Constant'
   *  Constant: '<S374>/Constant'
   *  Constant: '<S375>/Constant'
   *  Logic: '<S365>/or'
   *  Product: '<S365>/Product1'
   *  RelationalOperator: '<S374>/Compare'
   *  RelationalOperator: '<S375>/Compare'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S365>/Switch' */

  /* Switch: '<S380>/Init' incorporates:
   *  UnitDelay: '<S380>/FixPt Unit Delay1'
   *  UnitDelay: '<S380>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Product2_a = rtb_uDLookupTable_l;
  } else {
    rtb_Product2_a = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S380>/Init' */

  /* RelationalOperator: '<S376>/Compare' incorporates:
   *  Constant: '<S376>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S365>/Abs' incorporates:
   *  Sum: '<S365>/Subtract'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  rtb_Subtract_b2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Init);

  /* Switch: '<S365>/Switch1' incorporates:
   *  Constant: '<S365>/Constant1'
   *  Switch: '<S365>/Switch3'
   *  Switch: '<S365>/Switch5'
   *  UnaryMinus: '<S365>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant4'
     *  Constant: '<S365>/Constant6'
     *  UnaryMinus: '<S365>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant2'
     *  Constant: '<S365>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Subtract_b2, &rtb_Minus_n[0], 1U);
    rtb_Subtract_b2 = rtb_LookupTableDynamic;
  } else {
    if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S365>/Switch3' incorporates:
       *  Constant: '<S365>/Constant3'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant10'
     *  Constant: '<S365>/Constant8'
     *  UnaryMinus: '<S365>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant7'
     *  Constant: '<S365>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Subtract_b2, &rtb_Minus_n[0], 1U);
    rtb_Subtract_b2 = rtb_LookupTableDynamic1;
  }

  /* End of Switch: '<S365>/Switch1' */

  /* Product: '<S365>/Product' */
  rtb_Switch2_ji *= rtb_Subtract_b2;

  /* Sum: '<S378>/Sum1' */
  rtb_Abs2_p = rtb_uDLookupTable_l - rtb_Product2_a;

  /* Switch: '<S379>/Switch2' incorporates:
   *  RelationalOperator: '<S379>/LowerRelop1'
   */
  if (!(rtb_Abs2_p > rtb_Switch2_ji)) {
    /* Switch: '<S365>/Switch2' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Switch: '<S365>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant1'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant3'
       *  UnaryMinus: '<S365>/Unary Minus1'
       */
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S365>/Switch2' */

    /* Product: '<S365>/Product2' */
    rtb_Switch2_ji *= rtb_Subtract_b2;

    /* Switch: '<S379>/Switch' incorporates:
     *  RelationalOperator: '<S379>/UpperRelop'
     */
    if (!(rtb_Abs2_p < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Abs2_p;
    }

    /* End of Switch: '<S379>/Switch' */
  }

  /* End of Switch: '<S379>/Switch2' */

  /* Sum: '<S378>/Sum' */
  rtb_Switch2_ji += rtb_Product2_a;

  /* Signum: '<S364>/Sign2' incorporates:
   *  UnitDelay: '<S364>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S364>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S364>/Product1' incorporates:
   *  Signum: '<S364>/Sign1'
   *  Signum: '<S364>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S364>/Switch' incorporates:
   *  Constant: '<S364>/Constant'
   *  Constant: '<S367>/Constant'
   *  Constant: '<S368>/Constant'
   *  Logic: '<S364>/or'
   *  Product: '<S364>/Product1'
   *  RelationalOperator: '<S367>/Compare'
   *  RelationalOperator: '<S368>/Compare'
   *  UnitDelay: '<S364>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S364>/Switch' */

  /* Switch: '<S373>/Init' incorporates:
   *  UnitDelay: '<S373>/FixPt Unit Delay1'
   *  UnitDelay: '<S373>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S373>/Init' */

  /* RelationalOperator: '<S369>/Compare' incorporates:
   *  Constant: '<S369>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S370>/Compare' incorporates:
   *  Constant: '<S370>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S364>/Abs' incorporates:
   *  Sum: '<S364>/Subtract'
   *  UnitDelay: '<S364>/Unit Delay'
   */
  rtb_Subtract_b2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S364>/Switch5' incorporates:
   *  Constant: '<S364>/Constant1'
   *  Switch: '<S364>/Switch1'
   *  UnaryMinus: '<S364>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S364>/Constant4'
     *  Constant: '<S364>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S364>/Constant2'
     *  Constant: '<S364>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S364>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S364>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Subtract_b2, &rtb_Minus_n[0], 1U);
    rtb_Subtract_b2 = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S364>/Constant10'
     *  Constant: '<S364>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S364>/Constant7'
     *  Constant: '<S364>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S364>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S364>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Subtract_b2, &rtb_Minus_n[0], 1U);
    rtb_Subtract_b2 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S364>/Switch3' incorporates:
     *  Constant: '<S364>/Constant1'
     *  Constant: '<S364>/Constant3'
     *  UnaryMinus: '<S364>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S364>/Switch3' */
  }

  /* End of Switch: '<S364>/Switch5' */

  /* Product: '<S364>/Product' incorporates:
   *  Switch: '<S364>/Switch1'
   */
  rtb_Product2_a = rtb_Minus_k_idx_0 * rtb_Subtract_b2;

  /* Sum: '<S371>/Sum1' */
  rtb_Abs2_p = rtb_Optimized_Module_Angle - rtb_uDLookupTable_l;

  /* Switch: '<S372>/Switch2' incorporates:
   *  RelationalOperator: '<S372>/LowerRelop1'
   */
  if (!(rtb_Abs2_p > rtb_Product2_a)) {
    /* Switch: '<S364>/Switch2' incorporates:
     *  Constant: '<S364>/Constant1'
     *  Constant: '<S364>/Constant3'
     *  Switch: '<S364>/Switch4'
     *  UnaryMinus: '<S364>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S364>/Switch4' incorporates:
       *  Constant: '<S364>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S364>/Product2' incorporates:
     *  Switch: '<S364>/Switch2'
     */
    rtb_Product2_a = rtb_Minus_k_idx_0 * rtb_Subtract_b2;

    /* Switch: '<S372>/Switch' incorporates:
     *  RelationalOperator: '<S372>/UpperRelop'
     */
    if (!(rtb_Abs2_p < rtb_Product2_a)) {
      rtb_Product2_a = rtb_Abs2_p;
    }

    /* End of Switch: '<S372>/Switch' */
  }

  /* End of Switch: '<S372>/Switch2' */

  /* Sum: '<S371>/Sum' */
  rtb_Product2_a += rtb_uDLookupTable_l;

  /* Switch: '<S354>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S354>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S354>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Product2_a;
  }

  /* End of Switch: '<S354>/Switch' */

  /* Fcn: '<S395>/r->x' incorporates:
   *  Fcn: '<S400>/r->x'
   *  Fcn: '<S405>/r->x'
   *  Fcn: '<S410>/r->x'
   */
  rtb_Abs2_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S389>/Add' incorporates:
   *  Fcn: '<S395>/r->x'
   *  Fcn: '<S396>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Abs2_p;

  /* Fcn: '<S395>/theta->y' incorporates:
   *  Fcn: '<S400>/theta->y'
   *  Fcn: '<S405>/theta->y'
   *  Fcn: '<S410>/theta->y'
   */
  rtb_Subtract_b2 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S389>/Add' incorporates:
   *  Fcn: '<S395>/theta->y'
   *  Fcn: '<S396>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Subtract_b2;

  /* Sum: '<S390>/Add' incorporates:
   *  Fcn: '<S401>/r->x'
   *  Fcn: '<S401>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Abs2_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Subtract_b2;

  /* Sum: '<S391>/Add' incorporates:
   *  Fcn: '<S406>/r->x'
   *  Fcn: '<S406>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Abs2_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Subtract_b2;

  /* Sum: '<S392>/Add' incorporates:
   *  Fcn: '<S411>/r->x'
   *  Fcn: '<S411>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Abs2_p;
  rtb_Modulation_Drv = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                        (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Subtract_b2;

  /* Fcn: '<S409>/x->r' */
  rtb_Add_cv = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Modulation_Drv);

  /* RelationalOperator: '<S412>/Compare' incorporates:
   *  Constant: '<S412>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_cv == 0.0);

  /* Switch: '<S408>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S408>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S408>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Add_cv;
  }

  /* End of Switch: '<S408>/Switch1' */

  /* Fcn: '<S394>/x->r' */
  rtb_Add_cv = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S397>/Compare' incorporates:
   *  Constant: '<S397>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_cv == 0.0);

  /* Switch: '<S393>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S393>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S393>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Add_cv;
  }

  /* End of Switch: '<S393>/Switch1' */

  /* Fcn: '<S399>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S402>/Compare' incorporates:
   *  Constant: '<S402>/Constant'
   */
  rtb_Compare_oq = (rtb_Switch2_g == 0.0);

  /* Switch: '<S398>/Switch1' */
  if (rtb_Compare_oq) {
    /* Switch: '<S398>/Switch1' incorporates:
     *  Constant: '<S398>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S398>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S398>/Switch1' */

  /* Fcn: '<S404>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S407>/Compare' incorporates:
   *  Constant: '<S407>/Constant'
   */
  rtb_AND1 = (rtb_Init == 0.0);

  /* Switch: '<S403>/Switch1' */
  if (rtb_AND1) {
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S403>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S403>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S403>/Switch1' */

  /* Product: '<S388>/Divide' incorporates:
   *  Abs: '<S388>/Abs'
   *  Abs: '<S388>/Abs1'
   *  Abs: '<S388>/Abs2'
   *  Abs: '<S388>/Abs3'
   *  Constant: '<S388>/Constant'
   *  MinMax: '<S388>/Max'
   */
  rtb_Add_cv = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S388>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S408>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S408>/Switch' incorporates:
     *  Fcn: '<S409>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Modulation_Drv,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S408>/Switch' */

  /* Trigonometry: '<S344>/Cos4' incorporates:
   *  Switch: '<S333>/Angle_Switch'
   *  Trigonometry: '<S343>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S344>/Sin5' incorporates:
   *  UnaryMinus: '<S342>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S344>/Sin4' incorporates:
   *  Switch: '<S333>/Angle_Switch'
   *  Trigonometry: '<S343>/Sin4'
   */
  rtb_Subtract_b2 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S344>/Cos5' incorporates:
   *  UnaryMinus: '<S342>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S344>/Subtract1' incorporates:
   *  Product: '<S344>/Product2'
   *  Product: '<S344>/Product3'
   *  Trigonometry: '<S344>/Cos4'
   *  Trigonometry: '<S344>/Sin4'
   */
  rtb_Abs2_p = (rtb_Subtract_lm * rtb_Optimized_Module_Angle) + (rtb_Subtract_b2
    * rtb_Init);

  /* Sum: '<S344>/Subtract' incorporates:
   *  Product: '<S344>/Product'
   *  Product: '<S344>/Product1'
   *  Trigonometry: '<S344>/Cos4'
   *  Trigonometry: '<S344>/Sin4'
   */
  rtb_DeadZone = (rtb_Subtract_lm * rtb_Init) - (rtb_Subtract_b2 *
    rtb_Optimized_Module_Angle);

  /* Math: '<S344>/Hypot' */
  rtb_Modulation_Drv = rt_hypotd_snf(rtb_DeadZone, rtb_Abs2_p);

  /* Switch: '<S344>/Switch' incorporates:
   *  Constant: '<S344>/Constant'
   *  Constant: '<S344>/Constant1'
   *  Constant: '<S345>/Constant'
   *  Product: '<S344>/Divide'
   *  Product: '<S344>/Divide1'
   *  RelationalOperator: '<S345>/Compare'
   *  Switch: '<S344>/Switch1'
   */
  if (rtb_Modulation_Drv > 1.0E-6) {
    rtb_Switch2_g = rtb_Abs2_p / rtb_Modulation_Drv;
    rtb_Init = rtb_DeadZone / rtb_Modulation_Drv;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S344>/Switch' */

  /* Switch: '<S333>/Speed_Switch' incorporates:
   *  Abs: '<S333>/Abs'
   *  Constant: '<S341>/Constant'
   *  RelationalOperator: '<S341>/Compare'
   *  Switch: '<S333>/Angle_Switch'
   *  Trigonometry: '<S343>/Atan1'
   *  Trigonometry: '<S344>/Atan1'
   *  UnaryMinus: '<S333>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S343>/Subtract1' incorporates:
     *  Product: '<S343>/Product2'
     *  Product: '<S343>/Product3'
     *  UnaryMinus: '<S333>/Unary Minus'
     */
    rtb_Abs2_p = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract_b2 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S343>/Subtract' incorporates:
     *  Product: '<S343>/Product'
     *  Product: '<S343>/Product1'
     */
    rtb_DeadZone = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract_b2 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S343>/Hypot' */
    rtb_Subtract_b2 = rt_hypotd_snf(rtb_DeadZone, rtb_Abs2_p);

    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S343>/Constant'
     *  Constant: '<S343>/Constant1'
     *  Constant: '<S346>/Constant'
     *  Product: '<S343>/Divide'
     *  Product: '<S343>/Divide1'
     *  RelationalOperator: '<S346>/Compare'
     *  Switch: '<S343>/Switch'
     */
    if (rtb_Subtract_b2 > 1.0E-6) {
      rtb_DeadZone /= rtb_Subtract_b2;
      rtb_Subtract_b2 = rtb_Abs2_p / rtb_Subtract_b2;
    } else {
      rtb_DeadZone = 1.0;
      rtb_Subtract_b2 = 0.0;
    }

    /* End of Switch: '<S343>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Subtract_b2, rtb_DeadZone);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S336>/Product2' incorporates:
   *  Constant: '<S336>/Constant'
   *  Switch: '<S333>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S331>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S331>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S334>/Add' incorporates:
   *  Sum: '<S335>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S266>/Product' incorporates:
   *  Abs: '<S331>/Abs'
   *  Abs: '<S334>/Abs'
   *  Constant: '<S337>/Constant'
   *  Constant: '<S347>/Constant3'
   *  Constant: '<S347>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S331>/OR'
   *  Lookup_n-D: '<S334>/1-D Lookup Table'
   *  Math: '<S347>/Math Function'
   *  RelationalOperator: '<S331>/Equal1'
   *  RelationalOperator: '<S337>/Compare'
   *  Signum: '<S331>/Sign'
   *  Signum: '<S331>/Sign1'
   *  Sum: '<S334>/Add'
   *  Sum: '<S347>/Add1'
   *  Sum: '<S347>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled34, Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S332>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_DeadZone = rtb_Switch2_g - Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S339>/Sum1' incorporates:
   *  Constant: '<S332>/Constant2'
   *  Product: '<S339>/Product'
   *  Sum: '<S339>/Sum'
   *  UnitDelay: '<S339>/Unit Delay1'
   */
  rtb_Subtract_b2 = ((rtb_DeadZone - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                     Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S332>/Product' incorporates:
   *  Constant: '<S332>/Constant3'
   */
  rtb_Abs2_p = rtb_Subtract_b2 * Drive_Motor_Control_D;

  /* Sum: '<S338>/Diff' incorporates:
   *  UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Abs2_p - Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S332>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S332>/Add' incorporates:
   *  Gain: '<S332>/Gain'
   *  Gain: '<S332>/Gain1'
   *  Saturate: '<S332>/Saturation'
   */
  rtb_Modulation_Drv = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                        (Drive_Motor_Control_P * rtb_DeadZone)) +
    rtb_Minus_k_idx_0;

  /* Switch: '<S332>/Switch' incorporates:
   *  Constant: '<S332>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S332>/Sum2' incorporates:
     *  Gain: '<S332>/Gain2'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    rtb_DeadZone = (Drive_Motor_Control_I * rtb_DeadZone) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S332>/Subtract' incorporates:
     *  Constant: '<S332>/Constant'
     */
    rtb_Add_h5 = 1.0 - rtb_Modulation_Drv;

    /* Switch: '<S340>/Switch2' incorporates:
     *  Constant: '<S332>/Constant'
     *  RelationalOperator: '<S340>/LowerRelop1'
     *  Sum: '<S332>/Subtract'
     */
    if (!(rtb_DeadZone > (1.0 - rtb_Modulation_Drv))) {
      /* Sum: '<S332>/Subtract1' incorporates:
       *  Constant: '<S332>/Constant1'
       */
      rtb_Add_h5 = -1.0 - rtb_Modulation_Drv;

      /* Switch: '<S340>/Switch' incorporates:
       *  Constant: '<S332>/Constant1'
       *  RelationalOperator: '<S340>/UpperRelop'
       *  Sum: '<S332>/Subtract1'
       */
      if (!(rtb_DeadZone < (-1.0 - rtb_Modulation_Drv))) {
        rtb_Add_h5 = rtb_DeadZone;
      }

      /* End of Switch: '<S340>/Switch' */
    }

    /* End of Switch: '<S340>/Switch2' */

    /* Saturate: '<S332>/Saturation1' */
    if (rtb_Add_h5 > Drive_Motor_Control_I_UL) {
      rtb_DeadZone = Drive_Motor_Control_I_UL;
    } else if (rtb_Add_h5 < Drive_Motor_Control_I_LL) {
      rtb_DeadZone = Drive_Motor_Control_I_LL;
    } else {
      rtb_DeadZone = rtb_Add_h5;
    }

    /* End of Saturate: '<S332>/Saturation1' */
  } else {
    rtb_DeadZone = 0.0;
  }

  /* End of Switch: '<S332>/Switch' */

  /* Sum: '<S332>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Modulation_Drv + rtb_DeadZone;

  /* Saturate: '<S332>/Saturation2' */
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

  /* End of Saturate: '<S332>/Saturation2' */

  /* Switch: '<S393>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S393>/Switch' incorporates:
     *  Fcn: '<S394>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S393>/Switch' */

  /* Trigonometry: '<S281>/Cos4' incorporates:
   *  Switch: '<S270>/Angle_Switch'
   *  Trigonometry: '<S280>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S281>/Sin5' incorporates:
   *  UnaryMinus: '<S279>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S281>/Sin4' incorporates:
   *  Switch: '<S270>/Angle_Switch'
   *  Trigonometry: '<S280>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S281>/Cos5' incorporates:
   *  UnaryMinus: '<S279>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S281>/Subtract1' incorporates:
   *  Product: '<S281>/Product2'
   *  Product: '<S281>/Product3'
   *  Trigonometry: '<S281>/Cos4'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Subtract_lm * rtb_uDLookupTable_l) +
    (rtb_Integral_hv * rtb_Init);

  /* Sum: '<S281>/Subtract' incorporates:
   *  Product: '<S281>/Product'
   *  Product: '<S281>/Product1'
   *  Trigonometry: '<S281>/Cos4'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Add_h5 = (rtb_Subtract_lm * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S281>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Add_h5, rtb_Modulation_Drv);

  /* Switch: '<S281>/Switch' incorporates:
   *  Constant: '<S281>/Constant'
   *  Constant: '<S281>/Constant1'
   *  Constant: '<S282>/Constant'
   *  Product: '<S281>/Divide'
   *  Product: '<S281>/Divide1'
   *  RelationalOperator: '<S282>/Compare'
   *  Switch: '<S281>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_Modulation_Drv / rtb_Hypot_g5;
    rtb_Init = rtb_Add_h5 / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S281>/Switch' */

  /* Product: '<S388>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S270>/Speed_Switch' incorporates:
   *  Abs: '<S270>/Abs'
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S278>/Compare'
   *  Switch: '<S270>/Angle_Switch'
   *  Trigonometry: '<S280>/Atan1'
   *  Trigonometry: '<S281>/Atan1'
   *  UnaryMinus: '<S270>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S280>/Subtract1' incorporates:
     *  Product: '<S280>/Product2'
     *  Product: '<S280>/Product3'
     *  UnaryMinus: '<S270>/Unary Minus'
     */
    rtb_Modulation_Drv = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S280>/Subtract' incorporates:
     *  Product: '<S280>/Product'
     *  Product: '<S280>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S280>/Hypot' */
    rtb_Add_h5 = rt_hypotd_snf(rtb_Hypot_g5, rtb_Modulation_Drv);

    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S280>/Constant'
     *  Constant: '<S280>/Constant1'
     *  Constant: '<S283>/Constant'
     *  Product: '<S280>/Divide'
     *  Product: '<S280>/Divide1'
     *  RelationalOperator: '<S283>/Compare'
     *  Switch: '<S280>/Switch'
     */
    if (rtb_Add_h5 > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Add_h5;
      rtb_Modulation_Drv /= rtb_Add_h5;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Modulation_Drv = 0.0;
    }

    /* End of Switch: '<S280>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Modulation_Drv, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S273>/Product2' incorporates:
   *  Constant: '<S273>/Constant'
   *  Switch: '<S270>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S268>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S268>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S271>/Add' incorporates:
   *  Sum: '<S272>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S263>/Product' incorporates:
   *  Abs: '<S268>/Abs'
   *  Abs: '<S271>/Abs'
   *  Constant: '<S274>/Constant'
   *  Constant: '<S284>/Constant3'
   *  Constant: '<S284>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S268>/OR'
   *  Lookup_n-D: '<S271>/1-D Lookup Table'
   *  Math: '<S284>/Math Function'
   *  RelationalOperator: '<S268>/Equal1'
   *  RelationalOperator: '<S274>/Compare'
   *  Signum: '<S268>/Sign'
   *  Signum: '<S268>/Sign1'
   *  Sum: '<S271>/Add'
   *  Sum: '<S284>/Add1'
   *  Sum: '<S284>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S269>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S276>/Sum1' incorporates:
   *  Constant: '<S269>/Constant2'
   *  Product: '<S276>/Product'
   *  Sum: '<S276>/Sum'
   *  UnitDelay: '<S276>/Unit Delay1'
   */
  rtb_Modulation_Drv = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                        Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S269>/Product' incorporates:
   *  Constant: '<S269>/Constant3'
   */
  rtb_Add_h5 = rtb_Modulation_Drv * Drive_Motor_Control_D;

  /* Sum: '<S275>/Diff' incorporates:
   *  UnitDelay: '<S275>/UD'
   *
   * Block description for '<S275>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S275>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Add_h5 - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S269>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S269>/Add' incorporates:
   *  Gain: '<S269>/Gain'
   *  Gain: '<S269>/Gain1'
   *  Saturate: '<S269>/Saturation'
   */
  rtb_Add_p4 = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S269>/Switch' incorporates:
   *  Constant: '<S269>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S269>/Sum2' incorporates:
     *  Gain: '<S269>/Gain2'
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S269>/Subtract' incorporates:
     *  Constant: '<S269>/Constant'
     */
    rtb_Switch2_m = 1.0 - rtb_Add_p4;

    /* Switch: '<S277>/Switch2' incorporates:
     *  Constant: '<S269>/Constant'
     *  RelationalOperator: '<S277>/LowerRelop1'
     *  Sum: '<S269>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_p4))) {
      /* Sum: '<S269>/Subtract1' incorporates:
       *  Constant: '<S269>/Constant1'
       */
      rtb_Switch2_m = -1.0 - rtb_Add_p4;

      /* Switch: '<S277>/Switch' incorporates:
       *  Constant: '<S269>/Constant1'
       *  RelationalOperator: '<S277>/UpperRelop'
       *  Sum: '<S269>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_p4))) {
        rtb_Switch2_m = rtb_Hypot_g5;
      }

      /* End of Switch: '<S277>/Switch' */
    }

    /* End of Switch: '<S277>/Switch2' */

    /* Saturate: '<S269>/Saturation1' */
    if (rtb_Switch2_m > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_m < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_m;
    }

    /* End of Saturate: '<S269>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S269>/Switch' */

  /* Sum: '<S269>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_p4 + rtb_Hypot_g5;

  /* Saturate: '<S269>/Saturation2' */
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

  /* End of Saturate: '<S269>/Saturation2' */

  /* Sum: '<S285>/Add1' incorporates:
   *  Constant: '<S285>/Constant3'
   *  Constant: '<S285>/Constant4'
   *  Math: '<S285>/Math Function'
   *  Sum: '<S285>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S287>/Sum1' incorporates:
   *  Constant: '<S272>/Constant2'
   *  Product: '<S287>/Product'
   *  Sum: '<S287>/Sum'
   *  UnitDelay: '<S287>/Unit Delay1'
   */
  rtb_Add_p4 = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S272>/Product' incorporates:
   *  Constant: '<S272>/Constant3'
   */
  rtb_Switch2_m = rtb_Add_p4 * Steering_Motor_Control_D;

  /* Sum: '<S286>/Diff' incorporates:
   *  UnitDelay: '<S286>/UD'
   *
   * Block description for '<S286>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S286>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_m - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S272>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Gain: '<S272>/Gain1'
   *  Saturate: '<S272>/Saturation'
   */
  rtb_Add_kl = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S272>/Subtract' incorporates:
   *  Constant: '<S272>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_kl;

  /* Sum: '<S272>/Sum2' incorporates:
   *  Gain: '<S272>/Gain2'
   *  UnitDelay: '<S272>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S288>/Switch2' incorporates:
   *  RelationalOperator: '<S288>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S288>/Switch' incorporates:
     *  Constant: '<S272>/Constant1'
     *  RelationalOperator: '<S288>/UpperRelop'
     *  Sum: '<S272>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_kl)) {
      rtb_Init = -1.0 - rtb_Add_kl;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S288>/Switch' */
  }

  /* End of Switch: '<S288>/Switch2' */

  /* Saturate: '<S272>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S272>/Saturation1' */

  /* Sum: '<S272>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_kl + rtb_Sum2_e;

  /* Saturate: '<S272>/Saturation2' */
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

  /* End of Saturate: '<S272>/Saturation2' */

  /* Switch: '<S398>/Switch' */
  if (!rtb_Compare_oq) {
    /* Switch: '<S398>/Switch' incorporates:
     *  Fcn: '<S399>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S398>/Switch' */

  /* Trigonometry: '<S302>/Cos4' incorporates:
   *  Switch: '<S291>/Angle_Switch'
   *  Trigonometry: '<S301>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S302>/Sin5' incorporates:
   *  UnaryMinus: '<S300>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S302>/Sin4' incorporates:
   *  Switch: '<S291>/Angle_Switch'
   *  Trigonometry: '<S301>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S302>/Cos5' incorporates:
   *  UnaryMinus: '<S300>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S302>/Subtract1' incorporates:
   *  Product: '<S302>/Product2'
   *  Product: '<S302>/Product3'
   *  Trigonometry: '<S302>/Cos4'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Add_kl = (rtb_Subtract_lm * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S302>/Subtract' incorporates:
   *  Product: '<S302>/Product'
   *  Product: '<S302>/Product1'
   *  Trigonometry: '<S302>/Cos4'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_lm * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S302>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_kl);

  /* Switch: '<S302>/Switch' incorporates:
   *  Constant: '<S302>/Constant'
   *  Constant: '<S302>/Constant1'
   *  Constant: '<S303>/Constant'
   *  Product: '<S302>/Divide'
   *  Product: '<S302>/Divide1'
   *  RelationalOperator: '<S303>/Compare'
   *  Switch: '<S302>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_kl / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S302>/Switch' */

  /* Product: '<S388>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S291>/Speed_Switch' incorporates:
   *  Abs: '<S291>/Abs'
   *  Constant: '<S299>/Constant'
   *  RelationalOperator: '<S299>/Compare'
   *  Switch: '<S291>/Angle_Switch'
   *  Trigonometry: '<S301>/Atan1'
   *  Trigonometry: '<S302>/Atan1'
   *  UnaryMinus: '<S291>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S301>/Subtract1' incorporates:
     *  Product: '<S301>/Product2'
     *  Product: '<S301>/Product3'
     *  UnaryMinus: '<S291>/Unary Minus'
     */
    rtb_Add_kl = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S301>/Subtract' incorporates:
     *  Product: '<S301>/Product'
     *  Product: '<S301>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S301>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_kl);

    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S301>/Constant'
     *  Constant: '<S301>/Constant1'
     *  Constant: '<S304>/Constant'
     *  Product: '<S301>/Divide'
     *  Product: '<S301>/Divide1'
     *  RelationalOperator: '<S304>/Compare'
     *  Switch: '<S301>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_kl /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_kl = 0.0;
    }

    /* End of Switch: '<S301>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_kl, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S294>/Product2' incorporates:
   *  Constant: '<S294>/Constant'
   *  Switch: '<S291>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S289>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S289>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S292>/Add' incorporates:
   *  Sum: '<S293>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S264>/Product' incorporates:
   *  Abs: '<S289>/Abs'
   *  Abs: '<S292>/Abs'
   *  Constant: '<S295>/Constant'
   *  Constant: '<S305>/Constant3'
   *  Constant: '<S305>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S289>/OR'
   *  Lookup_n-D: '<S292>/1-D Lookup Table'
   *  Math: '<S305>/Math Function'
   *  RelationalOperator: '<S289>/Equal1'
   *  RelationalOperator: '<S295>/Compare'
   *  Signum: '<S289>/Sign'
   *  Signum: '<S289>/Sign1'
   *  Sum: '<S292>/Add'
   *  Sum: '<S305>/Add1'
   *  Sum: '<S305>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S290>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S297>/Sum1' incorporates:
   *  Constant: '<S290>/Constant2'
   *  Product: '<S297>/Product'
   *  Sum: '<S297>/Sum'
   *  UnitDelay: '<S297>/Unit Delay1'
   */
  rtb_Add_kl = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S290>/Product' incorporates:
   *  Constant: '<S290>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_kl * Drive_Motor_Control_D;

  /* Sum: '<S296>/Diff' incorporates:
   *  UnitDelay: '<S296>/UD'
   *
   * Block description for '<S296>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S296>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S290>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S290>/Add' incorporates:
   *  Gain: '<S290>/Gain'
   *  Gain: '<S290>/Gain1'
   *  Saturate: '<S290>/Saturation'
   */
  rtb_Add_es = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S290>/Switch' incorporates:
   *  Constant: '<S290>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S290>/Sum2' incorporates:
     *  Gain: '<S290>/Gain2'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S290>/Subtract' incorporates:
     *  Constant: '<S290>/Constant'
     */
    rtb_Switch2_p = 1.0 - rtb_Add_es;

    /* Switch: '<S298>/Switch2' incorporates:
     *  Constant: '<S290>/Constant'
     *  RelationalOperator: '<S298>/LowerRelop1'
     *  Sum: '<S290>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_es))) {
      /* Sum: '<S290>/Subtract1' incorporates:
       *  Constant: '<S290>/Constant1'
       */
      rtb_Switch2_p = -1.0 - rtb_Add_es;

      /* Switch: '<S298>/Switch' incorporates:
       *  Constant: '<S290>/Constant1'
       *  RelationalOperator: '<S298>/UpperRelop'
       *  Sum: '<S290>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_es))) {
        rtb_Switch2_p = rtb_Hypot_b;
      }

      /* End of Switch: '<S298>/Switch' */
    }

    /* End of Switch: '<S298>/Switch2' */

    /* Saturate: '<S290>/Saturation1' */
    if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_p;
    }

    /* End of Saturate: '<S290>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S290>/Switch' */

  /* Sum: '<S290>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_es + rtb_Hypot_b;

  /* Saturate: '<S290>/Saturation2' */
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

  /* End of Saturate: '<S290>/Saturation2' */

  /* Sum: '<S306>/Add1' incorporates:
   *  Constant: '<S306>/Constant3'
   *  Constant: '<S306>/Constant4'
   *  Math: '<S306>/Math Function'
   *  Sum: '<S306>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S308>/Sum1' incorporates:
   *  Constant: '<S293>/Constant2'
   *  Product: '<S308>/Product'
   *  Sum: '<S308>/Sum'
   *  UnitDelay: '<S308>/Unit Delay1'
   */
  rtb_Add_es = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S293>/Product' incorporates:
   *  Constant: '<S293>/Constant3'
   */
  rtb_Switch2_p = rtb_Add_es * Steering_Motor_Control_D;

  /* Sum: '<S307>/Diff' incorporates:
   *  UnitDelay: '<S307>/UD'
   *
   * Block description for '<S307>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S307>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_p - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S293>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S293>/Add' incorporates:
   *  Gain: '<S293>/Gain1'
   *  Saturate: '<S293>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S293>/Subtract' incorporates:
   *  Constant: '<S293>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S293>/Sum2' incorporates:
   *  Gain: '<S293>/Gain2'
   *  UnitDelay: '<S293>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S309>/Switch2' incorporates:
   *  RelationalOperator: '<S309>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S293>/Constant1'
     *  RelationalOperator: '<S309>/UpperRelop'
     *  Sum: '<S293>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S309>/Switch' */
  }

  /* End of Switch: '<S309>/Switch2' */

  /* Saturate: '<S293>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S293>/Saturation1' */

  /* Sum: '<S293>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S293>/Saturation2' */
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

  /* End of Saturate: '<S293>/Saturation2' */

  /* Switch: '<S403>/Switch' */
  if (!rtb_AND1) {
    /* Switch: '<S403>/Switch' incorporates:
     *  Fcn: '<S404>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S403>/Switch' */

  /* Trigonometry: '<S323>/Cos4' incorporates:
   *  Switch: '<S312>/Angle_Switch'
   *  Trigonometry: '<S322>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S323>/Sin5' incorporates:
   *  UnaryMinus: '<S321>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S323>/Sin4' incorporates:
   *  Switch: '<S312>/Angle_Switch'
   *  Trigonometry: '<S322>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S323>/Cos5' incorporates:
   *  UnaryMinus: '<S321>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S323>/Subtract1' incorporates:
   *  Product: '<S323>/Product2'
   *  Product: '<S323>/Product3'
   *  Trigonometry: '<S323>/Cos4'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_lm * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S323>/Subtract' incorporates:
   *  Product: '<S323>/Product'
   *  Product: '<S323>/Product1'
   *  Trigonometry: '<S323>/Cos4'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_lm * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S323>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S323>/Switch' incorporates:
   *  Constant: '<S323>/Constant'
   *  Constant: '<S323>/Constant1'
   *  Constant: '<S324>/Constant'
   *  Product: '<S323>/Divide'
   *  Product: '<S323>/Divide1'
   *  RelationalOperator: '<S324>/Compare'
   *  Switch: '<S323>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Switch2_g /= rtb_Init;
    rtb_Init = rtb_uDLookupTable_l / rtb_Init;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S323>/Switch' */

  /* Product: '<S388>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S312>/Speed_Switch' incorporates:
   *  Abs: '<S312>/Abs'
   *  Constant: '<S320>/Constant'
   *  RelationalOperator: '<S320>/Compare'
   *  Switch: '<S312>/Angle_Switch'
   *  Trigonometry: '<S322>/Atan1'
   *  Trigonometry: '<S323>/Atan1'
   *  UnaryMinus: '<S312>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S322>/Subtract1' incorporates:
     *  Product: '<S322>/Product2'
     *  Product: '<S322>/Product3'
     *  UnaryMinus: '<S312>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S322>/Subtract' incorporates:
     *  Product: '<S322>/Product'
     *  Product: '<S322>/Product1'
     */
    rtb_Subtract_lm = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S322>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_lm, rtb_Switch2_g);

    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S322>/Constant'
     *  Constant: '<S322>/Constant1'
     *  Constant: '<S325>/Constant'
     *  Product: '<S322>/Divide'
     *  Product: '<S322>/Divide1'
     *  RelationalOperator: '<S325>/Compare'
     *  Switch: '<S322>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_lm /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_lm = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S322>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_lm);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S315>/Product2' incorporates:
   *  Constant: '<S315>/Constant'
   *  Switch: '<S312>/Speed_Switch'
   */
  rtb_Add_cv = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S310>/Sign' */
  if (rtIsNaN(rtb_Add_cv)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Add_cv < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Add_cv > 0.0);
  }

  /* Signum: '<S310>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S313>/Add' incorporates:
   *  Sum: '<S314>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S265>/Product' incorporates:
   *  Abs: '<S310>/Abs'
   *  Abs: '<S313>/Abs'
   *  Constant: '<S316>/Constant'
   *  Constant: '<S326>/Constant3'
   *  Constant: '<S326>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S310>/OR'
   *  Lookup_n-D: '<S313>/1-D Lookup Table'
   *  Math: '<S326>/Math Function'
   *  RelationalOperator: '<S310>/Equal1'
   *  RelationalOperator: '<S316>/Compare'
   *  Signum: '<S310>/Sign'
   *  Signum: '<S310>/Sign1'
   *  Sum: '<S313>/Add'
   *  Sum: '<S326>/Add1'
   *  Sum: '<S326>/Add2'
   */
  rtb_Add_cv = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Add_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S311>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_Add_cv - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S318>/Sum1' incorporates:
   *  Constant: '<S311>/Constant2'
   *  Product: '<S318>/Product'
   *  Sum: '<S318>/Sum'
   *  UnitDelay: '<S318>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S311>/Product' incorporates:
   *  Constant: '<S311>/Constant3'
   */
  rtb_Subtract_lm = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S317>/Diff' incorporates:
   *  UnitDelay: '<S317>/UD'
   *
   * Block description for '<S317>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S317>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_lm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S311>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S311>/Add' incorporates:
   *  Gain: '<S311>/Gain'
   *  Gain: '<S311>/Gain1'
   *  Saturate: '<S311>/Saturation'
   */
  rtb_Add_cv = ((Drive_Motor_Control_FF * rtb_Add_cv) + (Drive_Motor_Control_P *
    rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S311>/Switch' incorporates:
   *  Constant: '<S311>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S311>/Sum2' incorporates:
     *  Gain: '<S311>/Gain2'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S311>/Subtract' incorporates:
     *  Constant: '<S311>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_Add_cv;

    /* Switch: '<S319>/Switch2' incorporates:
     *  Constant: '<S311>/Constant'
     *  RelationalOperator: '<S319>/LowerRelop1'
     *  Sum: '<S311>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_Add_cv))) {
      /* Sum: '<S311>/Subtract1' incorporates:
       *  Constant: '<S311>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_Add_cv;

      /* Switch: '<S319>/Switch' incorporates:
       *  Constant: '<S311>/Constant1'
       *  RelationalOperator: '<S319>/UpperRelop'
       *  Sum: '<S311>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_Add_cv))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S319>/Switch' */
    }

    /* End of Switch: '<S319>/Switch2' */

    /* Saturate: '<S311>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S311>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S311>/Switch' */

  /* Sum: '<S311>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_cv + rtb_Integral_hv;

  /* Saturate: '<S311>/Saturation2' */
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

  /* End of Saturate: '<S311>/Saturation2' */

  /* Sum: '<S327>/Add1' incorporates:
   *  Constant: '<S327>/Constant3'
   *  Constant: '<S327>/Constant4'
   *  Math: '<S327>/Math Function'
   *  Sum: '<S327>/Add2'
   */
  rtb_Add_cv = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S329>/Sum1' incorporates:
   *  Constant: '<S314>/Constant2'
   *  Product: '<S329>/Product'
   *  Sum: '<S329>/Sum'
   *  UnitDelay: '<S329>/Unit Delay1'
   */
  rtb_Sum1_m = ((rtb_Add_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S314>/Product' incorporates:
   *  Constant: '<S314>/Constant3'
   */
  rtb_Product_lf = rtb_Sum1_m * Steering_Motor_Control_D;

  /* Sum: '<S328>/Diff' incorporates:
   *  UnitDelay: '<S328>/UD'
   *
   * Block description for '<S328>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S328>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S314>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S314>/Add' incorporates:
   *  Gain: '<S314>/Gain1'
   *  Saturate: '<S314>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_cv) + rtb_Minus_k_idx_0;

  /* Sum: '<S314>/Subtract' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S314>/Sum2' incorporates:
   *  Gain: '<S314>/Gain2'
   *  UnitDelay: '<S314>/Unit Delay'
   */
  rtb_Add_cv = (Steering_Motor_Control_I * rtb_Add_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S330>/Switch2' incorporates:
   *  Constant: '<S314>/Constant'
   *  RelationalOperator: '<S330>/LowerRelop1'
   *  Sum: '<S314>/Subtract'
   */
  if (!(rtb_Add_cv > (1.0 - rtb_Init))) {
    /* Sum: '<S314>/Subtract1' incorporates:
     *  Constant: '<S314>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S330>/Switch' incorporates:
     *  Constant: '<S314>/Constant1'
     *  RelationalOperator: '<S330>/UpperRelop'
     *  Sum: '<S314>/Subtract1'
     */
    if (!(rtb_Add_cv < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S330>/Switch' */
  }

  /* End of Switch: '<S330>/Switch2' */

  /* Saturate: '<S314>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S314>/Saturation1' */

  /* Sum: '<S314>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S314>/Saturation2' */
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

  /* End of Saturate: '<S314>/Saturation2' */

  /* Sum: '<S348>/Add1' incorporates:
   *  Constant: '<S348>/Constant3'
   *  Constant: '<S348>/Constant4'
   *  Math: '<S348>/Math Function'
   *  Sum: '<S348>/Add2'
   */
  rtb_Add_cv = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S350>/Sum1' incorporates:
   *  Constant: '<S335>/Constant2'
   *  Product: '<S350>/Product'
   *  Sum: '<S350>/Sum'
   *  UnitDelay: '<S350>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Add_cv -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S335>/Product' incorporates:
   *  Constant: '<S335>/Constant3'
   */
  rtb_Product_pz = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S349>/Diff' incorporates:
   *  UnitDelay: '<S349>/UD'
   *
   * Block description for '<S349>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S349>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S335>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S335>/Add' incorporates:
   *  Gain: '<S335>/Gain1'
   *  Saturate: '<S335>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_cv) + rtb_Minus_k_idx_0;

  /* Sum: '<S335>/Subtract' incorporates:
   *  Constant: '<S335>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S335>/Sum2' incorporates:
   *  Gain: '<S335>/Gain2'
   *  UnitDelay: '<S335>/Unit Delay'
   */
  rtb_Add_cv = (Steering_Motor_Control_I * rtb_Add_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S351>/Switch2' incorporates:
   *  Constant: '<S335>/Constant'
   *  RelationalOperator: '<S351>/LowerRelop1'
   *  Sum: '<S335>/Subtract'
   */
  if (!(rtb_Add_cv > (1.0 - rtb_Init))) {
    /* Sum: '<S335>/Subtract1' incorporates:
     *  Constant: '<S335>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S335>/Constant1'
     *  RelationalOperator: '<S351>/UpperRelop'
     *  Sum: '<S335>/Subtract1'
     */
    if (!(rtb_Add_cv < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S351>/Switch' */
  }

  /* End of Switch: '<S351>/Switch2' */

  /* Saturate: '<S335>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S335>/Saturation1' */

  /* Sum: '<S335>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S335>/Saturation2' */
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

  /* End of Saturate: '<S335>/Saturation2' */

  /* MinMax: '<S12>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S12>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S12>/Range of Motion Protection Limit1'
   *  Merge: '<S20>/Merge13'
   */
  rtb_Add_cv = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired_merge,
    look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge,
                  Code_Gen_Model_ConstP.pooled36, Code_Gen_Model_ConstP.pooled35,
                  95U)), look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.pooled36, Code_Gen_Model_ConstP.pooled35, 95U));

  /* Switch: '<S12>/Switch3' incorporates:
   *  Abs: '<S12>/Abs1'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S90>/Constant'
   *  Logic: '<S12>/AND'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S90>/Compare'
   *  UnitDelay: '<S12>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired_merge < rtb_Add_cv) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S12>/Add' incorporates:
   *  Sum: '<S12>/Subtract'
   *  Switch: '<S12>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Add_cv -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S12>/Logical Operator3' incorporates:
   *  Constant: '<S91>/Constant'
   *  RelationalOperator: '<S91>/Compare'
   */
  rtb_Compare_m3 = (rtb_Compare_m3 ||
                    (Code_Gen_Model_B.Elevator_Height_Desired_merge == 0.0));

  /* Gain: '<S93>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  Logic: '<S12>/Logical Operator2'
   *  Logic: '<S12>/NOT'
   *  Logic: '<S12>/NOT2'
   *  Logic: '<S12>/OR'
   */
  rtb_Is_Absolute_Translation_g = (((!rtb_Compare_m3) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable_merge)) && ((!Code_Gen_Model_B.Out)
    && (!Code_Gen_Model_B.Out_h)));

  /* Switch: '<S93>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S93>/Switch1' incorporates:
     *  UnitDelay: '<S102>/Delay Input1'
     *
     * Block description for '<S102>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S93>/Switch' incorporates:
       *  Constant: '<S93>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S93>/Sum2' incorporates:
       *  Gain: '<S93>/Gain2'
       *  UnitDelay: '<S93>/Unit Delay'
       */
      rtb_Add_cv = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S93>/Subtract' incorporates:
       *  Constant: '<S93>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S103>/Switch2' incorporates:
       *  RelationalOperator: '<S103>/LowerRelop1'
       */
      if (!(rtb_Add_cv > rtb_Switch2_g)) {
        /* Sum: '<S93>/Subtract1' incorporates:
         *  Constant: '<S93>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S103>/Switch' incorporates:
         *  RelationalOperator: '<S103>/UpperRelop'
         */
        if (!(rtb_Add_cv < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Add_cv;
        }

        /* End of Switch: '<S103>/Switch' */
      }

      /* End of Switch: '<S103>/Switch2' */

      /* Saturate: '<S93>/Saturation1' */
      if (rtb_Switch2_g > Elevator_Int_UL) {
        /* Switch: '<S93>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_g < Elevator_Int_LL) {
        /* Switch: '<S93>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S93>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_g;
      }

      /* End of Saturate: '<S93>/Saturation1' */
    }

    /* End of Switch: '<S93>/Switch1' */
  } else {
    /* Switch: '<S93>/Switch' incorporates:
     *  Constant: '<S93>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S93>/Switch' */

  /* Switch: '<S12>/Switch2' incorporates:
   *  Constant: '<S12>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S12>/Switch4' */
    if (rtb_Compare_m3) {
      /* Switch: '<S12>/Switch5' incorporates:
       *  Abs: '<S12>/Abs'
       *  Constant: '<S12>/Constant7'
       *  Constant: '<S12>/Constant8'
       *  Constant: '<S89>/Constant'
       *  RelationalOperator: '<S89>/Compare'
       */
      if (fabs(Code_Gen_Model_B.Elevator_Error) <= Elevator_Error_Bottom_Disable)
      {
        rtb_Add_cv = Elevator_Bottom_DC;
      } else {
        rtb_Add_cv = Elevator_Total_LL;
      }

      /* End of Switch: '<S12>/Switch5' */
    } else {
      /* Sum: '<S93>/Add1' */
      rtb_Switch2_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S93>/Saturation2' */
      if (rtb_Switch2_g > Elevator_Total_UL) {
        rtb_Switch2_g = Elevator_Total_UL;
      } else if (rtb_Switch2_g < Elevator_Total_LL) {
        rtb_Switch2_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S93>/Saturation2' */

      /* Switch: '<S12>/Switch1' incorporates:
       *  Constant: '<S12>/Constant1'
       *  Constant: '<S12>/Constant2'
       */
      if (Code_Gen_Model_B.Out) {
        rtb_Add_cv = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Add_cv = 1.0;
      }

      /* End of Switch: '<S12>/Switch1' */

      /* Switch: '<S94>/Switch2' incorporates:
       *  RelationalOperator: '<S94>/LowerRelop1'
       */
      if (!(rtb_Switch2_g > rtb_Add_cv)) {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S12>/Constant3'
         *  Constant: '<S12>/Constant4'
         */
        if (Code_Gen_Model_B.Out_h) {
          rtb_Add_cv = 0.0;
        } else {
          rtb_Add_cv = -1.0;
        }

        /* End of Switch: '<S12>/Switch' */

        /* Switch: '<S94>/Switch' incorporates:
         *  RelationalOperator: '<S94>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_Add_cv)) {
          rtb_Add_cv = rtb_Switch2_g;
        }

        /* End of Switch: '<S94>/Switch' */
      }

      /* End of Switch: '<S94>/Switch2' */
    }

    /* End of Switch: '<S12>/Switch4' */
  } else {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* UnitDelay: '<S92>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S92>/Abs' incorporates:
   *  Sum: '<S92>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_cv);

  /* Signum: '<S92>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S92>/Sign1' */
  if (rtIsNaN(rtb_Add_cv)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Add_cv < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Add_cv > 0.0);
  }

  /* Product: '<S92>/Product1' incorporates:
   *  Signum: '<S92>/Sign1'
   *  Signum: '<S92>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S92>/Switch' incorporates:
   *  Constant: '<S92>/Constant'
   *  Constant: '<S95>/Constant'
   *  Constant: '<S96>/Constant'
   *  Logic: '<S92>/or'
   *  Product: '<S92>/Product1'
   *  RelationalOperator: '<S95>/Compare'
   *  RelationalOperator: '<S96>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S92>/Switch' */

  /* RelationalOperator: '<S97>/Compare' incorporates:
   *  Constant: '<S97>/Constant'
   */
  rtb_Compare_m3 = (rtb_Add_cv == 0.0);

  /* Switch: '<S92>/Switch5' */
  if (rtb_Compare_m3) {
    /* SignalConversion generated from: '<S92>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S92>/Constant4'
     *  Constant: '<S92>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S92>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S92>/Constant2'
     *  Constant: '<S92>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S92>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S92>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S92>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S92>/Constant10'
     *  Constant: '<S92>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S92>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S92>/Constant7'
     *  Constant: '<S92>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S92>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S92>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S92>/Switch5' */

  /* RelationalOperator: '<S98>/Compare' incorporates:
   *  Constant: '<S98>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_cv > 0.0);

  /* Switch: '<S92>/Switch1' incorporates:
   *  Switch: '<S92>/Switch3'
   */
  if (rtb_Compare_m3) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S92>/Switch3' incorporates:
     *  Constant: '<S92>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S92>/Product' incorporates:
   *  Switch: '<S92>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S101>/Init' incorporates:
   *  UnitDelay: '<S101>/FixPt Unit Delay1'
   *  UnitDelay: '<S101>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Add_cv;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S101>/Init' */

  /* Sum: '<S99>/Sum1' */
  rtb_Add_cv -= rtb_Init;

  /* Switch: '<S100>/Switch2' incorporates:
   *  RelationalOperator: '<S100>/LowerRelop1'
   */
  if (!(rtb_Add_cv > rtb_Switch2_g)) {
    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S92>/Constant1'
     *  Constant: '<S92>/Constant3'
     *  Switch: '<S92>/Switch4'
     *  UnaryMinus: '<S92>/Unary Minus1'
     */
    if (rtb_Compare_m3) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S92>/Switch4' incorporates:
       *  Constant: '<S92>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S92>/Product2' incorporates:
     *  Switch: '<S92>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S100>/Switch' incorporates:
     *  RelationalOperator: '<S100>/UpperRelop'
     */
    if (!(rtb_Add_cv < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S100>/Switch' */
  }

  /* End of Switch: '<S100>/Switch2' */

  /* Sum: '<S99>/Sum' */
  rtb_Switch5_a = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   */
  rtb_Compare_m3 = ((Code_Gen_Model_B.Elevator_Height_Measured <
                     Elevator_Height_Coral_Arm_Low_Thresh) &&
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                     Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S8>/Logical Operator4' incorporates:
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   */
  rtb_Compare_oq = ((Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge >
                     Coral_Arm_Angle_Pos_Threshold) &&
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured >
                     Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 2U);

  /* Switch: '<S76>/Switch2' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S76>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge > 90.0) {
    rtb_Add_cv = 90.0;
  } else {
    /* Lookup_n-D: '<S8>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S13>/Switch'
     */
    rtb_Add_cv = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S76>/Switch' incorporates:
     *  RelationalOperator: '<S76>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge < rtb_Add_cv)) {
      rtb_Add_cv = Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S76>/Switch' */
  }

  /* End of Switch: '<S76>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Add_cv -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S75>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S8>/Logical Operator2' incorporates:
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator3'
   */
  rtb_Is_Absolute_Steering = (((!rtb_Compare_oq) && (!rtb_Compare_m3)) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable_merge));

  /* Lookup_n-D: '<S8>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Add_cv = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S75>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S75>/Switch1' incorporates:
     *  UnitDelay: '<S84>/Delay Input1'
     *
     * Block description for '<S84>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S75>/Switch' incorporates:
       *  Constant: '<S75>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S75>/Sum2' incorporates:
       *  Gain: '<S75>/Gain2'
       *  UnitDelay: '<S75>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S75>/Subtract' */
      rtb_Switch2_fx = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S85>/Switch2' incorporates:
       *  RelationalOperator: '<S85>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_fx)) {
        /* Sum: '<S75>/Subtract1' */
        rtb_Switch2_fx = rtb_Add_cv - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S85>/Switch' incorporates:
         *  RelationalOperator: '<S85>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_fx)) {
          rtb_Switch2_fx = rtb_Init;
        }

        /* End of Switch: '<S85>/Switch' */
      }

      /* End of Switch: '<S85>/Switch2' */

      /* Saturate: '<S75>/Saturation1' */
      if (rtb_Switch2_fx > Coral_Arm_Int_UL) {
        /* Switch: '<S75>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_fx < Coral_Arm_Int_LL) {
        /* Switch: '<S75>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S75>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_fx;
      }

      /* End of Saturate: '<S75>/Saturation1' */
    }

    /* End of Switch: '<S75>/Switch1' */
  } else {
    /* Switch: '<S75>/Switch' incorporates:
     *  Constant: '<S75>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S75>/Switch' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Switch: '<S8>/Switch3'
     */
    if (rtb_Compare_m3) {
      rtb_Add_cv = Coral_Arm_Neg90_DC;
    } else if (rtb_Compare_oq) {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant1'
       */
      rtb_Add_cv = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S75>/Add1' incorporates:
       *  Switch: '<S8>/Switch3'
       */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S86>/Switch2' incorporates:
       *  RelationalOperator: '<S86>/LowerRelop1'
       *  RelationalOperator: '<S86>/UpperRelop'
       *  Switch: '<S86>/Switch'
       *  Switch: '<S8>/Switch3'
       */
      if (rtb_Init > rtb_Switch2_g) {
        rtb_Add_cv = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_Add_cv)) {
        rtb_Add_cv = rtb_Init;
      }

      /* End of Switch: '<S86>/Switch2' */
    }

    /* End of Switch: '<S8>/Switch1' */
  } else {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S74>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S74>/Abs' incorporates:
   *  Sum: '<S74>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_cv);

  /* Signum: '<S74>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S74>/Sign1' */
  if (rtIsNaN(rtb_Add_cv)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Add_cv < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Add_cv > 0.0);
  }

  /* Product: '<S74>/Product1' incorporates:
   *  Signum: '<S74>/Sign1'
   *  Signum: '<S74>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S74>/Switch' incorporates:
   *  Constant: '<S74>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  Logic: '<S74>/or'
   *  Product: '<S74>/Product1'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S74>/Switch' */

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  rtb_Compare_m3 = (rtb_Add_cv == 0.0);

  /* Switch: '<S74>/Switch5' */
  if (rtb_Compare_m3) {
    /* SignalConversion generated from: '<S74>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S74>/Constant4'
     *  Constant: '<S74>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S74>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S74>/Constant2'
     *  Constant: '<S74>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S74>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S74>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_fx = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S74>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S74>/Constant10'
     *  Constant: '<S74>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S74>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S74>/Constant7'
     *  Constant: '<S74>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S74>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S74>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_fx = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S74>/Switch5' */

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  rtb_Compare_oq = (rtb_Add_cv > 0.0);

  /* Switch: '<S74>/Switch1' incorporates:
   *  Switch: '<S74>/Switch3'
   */
  if (rtb_Compare_m3) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_Compare_oq) {
    /* Switch: '<S74>/Switch3' incorporates:
     *  Constant: '<S74>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S74>/Product' incorporates:
   *  Switch: '<S74>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_fx;

  /* Switch: '<S83>/Init' incorporates:
   *  UnitDelay: '<S83>/FixPt Unit Delay1'
   *  UnitDelay: '<S83>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Add_cv;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S83>/Init' */

  /* Sum: '<S81>/Sum1' */
  rtb_Add_cv -= rtb_Init;

  /* Switch: '<S82>/Switch2' incorporates:
   *  RelationalOperator: '<S82>/LowerRelop1'
   */
  if (!(rtb_Add_cv > rtb_Switch2_g)) {
    /* Switch: '<S74>/Switch2' incorporates:
     *  Constant: '<S74>/Constant1'
     *  Constant: '<S74>/Constant3'
     *  Switch: '<S74>/Switch4'
     *  UnaryMinus: '<S74>/Unary Minus1'
     */
    if (rtb_Compare_m3) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Compare_oq) {
      /* Switch: '<S74>/Switch4' incorporates:
       *  Constant: '<S74>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S74>/Product2' incorporates:
     *  Switch: '<S74>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_fx;

    /* Switch: '<S82>/Switch' incorporates:
     *  RelationalOperator: '<S82>/UpperRelop'
     */
    if (!(rtb_Add_cv < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S82>/Switch' */
  }

  /* End of Switch: '<S82>/Switch2' */

  /* Sum: '<S81>/Sum' */
  rtb_Add_cv = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Add_cv;

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
   *  Inport: '<Root>/Joystick_Left_B5'
   */
  Code_Gen_Model_B.Winch_Cmd = (Code_Gen_Model_U.Joystick_Left_B5 != 0.0);

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Minus_k_idx_0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 256.0);
  }

  MultiportSwitch = (uint8_T)((rtb_Minus_k_idx_0 < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Minus_k_idx_0)))))) : ((int32_T)((uint8_T)
    rtb_Minus_k_idx_0)));

  /* End of DataTypeConversion: '<S22>/Data Type Conversion' */

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   */
  rtb_AND1 = (MultiportSwitch == 0);

  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Constant: '<S14>/Constant5'
   *  Logic: '<S14>/Logical Operator2'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  rtb_Compare_m3 = ((Code_Gen_Model_B.Reefscape_Motors_Enable_merge) &&
                    (Code_Gen_Model_B.Elevator_Height_Desired_merge ==
                     Elevator_Height_End_Game));

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant8'
   *  Logic: '<S14>/Logical Operator3'
   *  Switch: '<S14>/Switch6'
   *  UnitDelay: '<S14>/Unit Delay'
   */
  if (rtb_Compare_m3 && (Code_Gen_Model_B.Winch_Cmd)) {
    rtb_Compare_oq = true;
  } else {
    rtb_Compare_oq = ((!rtb_AND1) && (Code_Gen_Model_DW.UnitDelay_DSTATE_gln));
  }

  /* End of Switch: '<S14>/Switch4' */

  /* Switch: '<S14>/Switch' */
  if (rtb_Compare_oq) {
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S107>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S107>/Compare'
     */
    if (Code_Gen_Model_U.Winch_Revs < Winch_Rev_Target) {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant1'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Spool_DC;
    } else {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant2'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Hold_DC;
    }

    /* End of Switch: '<S14>/Switch1' */
  } else {
    /* Outport: '<Root>/Winch_DutyCycle' incorporates:
     *  Constant: '<S14>/Constant'
     */
    Code_Gen_Model_Y.Winch_DutyCycle = 0.0;
  }

  /* End of Switch: '<S14>/Switch' */

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Code_Gen_Model_B.Actuator_Cmd = (Code_Gen_Model_U.Joystick_Left_B8 != 0.0);

  /* Switch: '<S14>/Switch5' incorporates:
   *  Constant: '<S14>/Constant9'
   *  Logic: '<S14>/Logical Operator2'
   *  Switch: '<S14>/Switch7'
   *  UnitDelay: '<S14>/Unit Delay1'
   */
  if (rtb_Compare_m3 && (Code_Gen_Model_B.Actuator_Cmd)) {
    rtb_AND1 = true;
  } else {
    rtb_AND1 = ((!rtb_AND1) && (Code_Gen_Model_DW.UnitDelay1_DSTATE_kb));
  }

  /* End of Switch: '<S14>/Switch5' */

  /* Switch: '<S14>/Switch8' incorporates:
   *  Abs: '<S14>/Abs'
   *  Constant: '<S108>/Constant'
   *  Constant: '<S109>/Constant'
   *  Constant: '<S14>/Constant11'
   *  Inport: '<Root>/Actuator_Revs'
   *  RelationalOperator: '<S108>/Compare'
   *  RelationalOperator: '<S109>/Compare'
   *  UnitDelay: '<S14>/Unit Delay2'
   */
  if (fabs(Code_Gen_Model_U.Actuator_Revs) <= Actuator_Rev_Startup_Range) {
    rtb_AND4 = true;
  } else {
    rtb_AND4 = ((!(Code_Gen_Model_U.Actuator_Revs >= Actuator_Rev_Target)) &&
                (Code_Gen_Model_DW.UnitDelay2_DSTATE_k));
  }

  /* End of Switch: '<S14>/Switch8' */

  /* Switch: '<S14>/Switch2' incorporates:
   *  Logic: '<S14>/Logical Operator4'
   */
  if (rtb_Compare_oq && rtb_AND1) {
    /* Switch: '<S14>/Switch3' */
    if (rtb_AND4) {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant6'
       */
      Code_Gen_Model_Y.Actuator_DutyCycle = Actuator_DC;
    } else {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant7'
       */
      Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
    }

    /* End of Switch: '<S14>/Switch3' */
  } else {
    /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
     *  Constant: '<S14>/Constant4'
     */
    Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S14>/Switch2' */

  /* Chart: '<S22>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Active_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (MultiportSwitch != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Active_GameState = MultiportSwitch;
    }

    /* case IN_Not_Disabled: */
  } else if (MultiportSwitch == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Active_GameState = MultiportSwitch;
  }

  /* End of Chart: '<S22>/Chart' */

  /* Gain: '<S195>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S196>/Compare' incorporates:
   *  Constant: '<S195>/Constant'
   *  Constant: '<S196>/Constant'
   */
  rtb_Compare_m3 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S195>/Switch1' incorporates:
   *  UnitDelay: '<S195>/Unit Delay1'
   */
  if (rtb_Compare_m3) {
    rtb_Switch2_g = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S195>/Switch1' */

  /* Sum: '<S195>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_g;

  /* Gain: '<S195>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S195>/Switch' incorporates:
   *  UnitDelay: '<S195>/Unit Delay'
   */
  if (rtb_Compare_m3) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S195>/Switch' */

  /* Sum: '<S195>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S15>/Gain'
   *  Sum: '<S15>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_Switch_jz + rtb_Switch1) *
    57.295779513082323;

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  if (TEST_CANdle_Flag != 0.0) {
    /* Outport: '<Root>/CANdle_LED_ID' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    Code_Gen_Model_Y.CANdle_LED_ID = TEST_CANdle_LED_ID;
  } else {
    /* Outport: '<Root>/CANdle_LED_ID' incorporates:
     *  Switch: '<S3>/Switch'
     */
    Code_Gen_Model_Y.CANdle_LED_ID = Compare_f;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = Robot_Reached_Destination;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = Compare;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_Coral_Wheel_DutyCycle_merge;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle =
    rtb_Algae_Wheel_Outside_DutyCyc;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle =
    rtb_Algae_Wheel_Inside_DutyCycl;

  /* SignalConversion: '<S16>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Update for UnitDelay: '<S187>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S187>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S188>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S189>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S190>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S129>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S129>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S130>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S130>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S131>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S112>/Delay Input1' incorporates:
   *  Constant: '<S15>/Constant3'
   *
   * Block description for '<S112>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S15>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S104>/Delay Input1'
   *
   * Block description for '<S104>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_bd = Code_Gen_Model_B.Out_h;

  /* Update for UnitDelay: '<S105>/Delay Input1'
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = Code_Gen_Model_B.Out;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg;

  /* Update for UnitDelay: '<S106>/Delay Input1'
   *
   * Block description for '<S106>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination_l;

  /* Update for S-Function (sfix_udelay): '<S18>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S18>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S132>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S152>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S132>/A'
   *  Delay: '<S132>/MemoryX'
   */
  rtb_Switch1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
    + Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S132>/MemoryX' incorporates:
   *  Constant: '<S132>/B'
   *  Product: '<S152>/A[k]*xhat[k|k-1]'
   *  Product: '<S152>/B[k]*u[k]'
   *  Sum: '<S152>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch1) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle_merge) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S186>/UD'
   *
   * Block description for '<S186>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for DiscreteIntegrator: '<S21>/Accumulator2' incorporates:
   *  Constant: '<S21>/Constant'
   *  DiscreteIntegrator: '<S21>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S21>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S21>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S363>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S363>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S385>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S384>/UD'
   *
   * Block description for '<S384>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Abs1;

  /* Update for UnitDelay: '<S382>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2_gl;

  /* Update for UnitDelay: '<S365>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S380>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S380>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S380>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S364>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Product2_a;

  /* Update for UnitDelay: '<S373>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S373>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S373>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Product2_a;

  /* Update for UnitDelay: '<S339>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Subtract_b2;

  /* Update for UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Abs2_p;

  /* Update for UnitDelay: '<S332>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_DeadZone;

  /* Update for UnitDelay: '<S276>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S275>/UD'
   *
   * Block description for '<S275>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Add_h5;

  /* Update for UnitDelay: '<S269>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S287>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_p4;

  /* Update for UnitDelay: '<S286>/UD'
   *
   * Block description for '<S286>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_m;

  /* Update for UnitDelay: '<S272>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S297>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_kl;

  /* Update for UnitDelay: '<S296>/UD'
   *
   * Block description for '<S296>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S290>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S308>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_es;

  /* Update for UnitDelay: '<S307>/UD'
   *
   * Block description for '<S307>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_p;

  /* Update for UnitDelay: '<S293>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S318>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S317>/UD'
   *
   * Block description for '<S317>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_lm;

  /* Update for UnitDelay: '<S311>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S329>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_m;

  /* Update for UnitDelay: '<S328>/UD'
   *
   * Block description for '<S328>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S314>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S350>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S349>/UD'
   *
   * Block description for '<S349>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_pz;

  /* Update for UnitDelay: '<S335>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S102>/Delay Input1'
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S92>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S101>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S101>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S101>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S74>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Add_cv;

  /* Update for UnitDelay: '<S83>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S83>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S83>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Add_cv;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gln = rtb_Compare_oq;

  /* Update for UnitDelay: '<S14>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kb = rtb_AND1;

  /* Update for UnitDelay: '<S14>/Unit Delay2' */
  Code_Gen_Model_DW.UnitDelay2_DSTATE_k = rtb_AND4;

  /* Update for UnitDelay: '<S195>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_g;

  /* Update for UnitDelay: '<S195>/Unit Delay' */
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
    boolean_T Coral_Score;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for If: '<S23>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for UnitDelay: '<S15>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Default;

    /* InitializeConditions for Delay: '<S132>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S363>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S380>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S373>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S101>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S83>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for Chart: '<S9>/Debounce' */
    Code_Gen_Model_Debounce_Init(&Code_Gen_Model_B.Out_h);

    /* SystemInitialize for Chart: '<S10>/Debounce' */
    Code_Gen_Model_Debounce_Init(&Code_Gen_Model_B.Out);

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S31>/Reefscape_Chart' */
    Code_Gen_M_Reefscape_Chart_Init(&Code_Gen_Model_B.State_ID_Auto,
      &Code_Gen_Model_B.Elevator_Height_Desired_h,
      &Code_Gen_Model_B.Coral_Arm_Angle_Desired_f,
      &Code_Gen_Model_B.Coral_Wheel_DC_a, &Constant, &Constant1,
      &Code_Gen_Model_B.Elevator_LowerPickup_Reset_g,
      &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m,
      &Code_Gen_Model_B.Set_Coral_Level_j, &Code_Gen_Model_B.Set_Algae_Level_p,
      &Code_Gen_Model_B.Coral_Score_j);

    /* End of SystemInitialize for SubSystem: '<S1>/Autonomous' */

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S453>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* SystemInitialize for Chart: '<S415>/Reefscape_Chart' */
    Code_Gen_M_Reefscape_Chart_Init(&Code_Gen_Model_B.State_ID_Teleop,
      &Code_Gen_Model_B.Elevator_Height_Desired,
      &Code_Gen_Model_B.Coral_Arm_Angle_Desired,
      &Code_Gen_Model_B.Coral_Wheel_DC, &Constant, &Constant1,
      &Code_Gen_Model_B.Elevator_LowerPickup_Reset,
      &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State,
      &Code_Gen_Model_B.Set_Coral_Level, &Code_Gen_Model_B.Set_Algae_Level,
      &Coral_Score);

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S23>/Spline Path Following Enabled' */
    /* Start for If: '<S204>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S200>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S204>/Robot_Index_Is_Valid' */
    /* Start for If: '<S207>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S207>/Circle_Check_Valid' */
    /* Start for If: '<S209>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S207>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S204>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S23>/Spline Path Following Enabled' */
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
