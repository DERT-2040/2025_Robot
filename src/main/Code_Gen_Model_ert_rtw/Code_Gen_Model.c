/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.389
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 28 00:23:07 2025
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
#define C_IN_Wait_at_Coral_Station_1_v2 ((uint8_T)12U)
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)3U)
#define Code_Gen_M_IN_Path_to_Processor ((uint8_T)7U)
#define Code_Gen_M_IN_Path_to_Reef_2_v2 ((uint8_T)8U)
#define Code_Gen_M_IN_Wait_for_Teleop_m ((uint8_T)13U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)9U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)10U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)11U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)6U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)7U)
#define Code_Gen_Model_IN_Back         ((uint8_T)1U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Drive        ((uint8_T)1U)
#define Code_Gen_Model_IN_End_early    ((uint8_T)6U)
#define Code_Gen_Model_IN_L1_g         ((uint8_T)2U)
#define Code_Gen_Model_IN_L2_l         ((uint8_T)1U)
#define Code_Gen_Model_IN_L4_d         ((uint8_T)2U)
#define Code_Gen_Model_IN_Path_to_Reef ((uint8_T)8U)
#define Code_Gen_Model_IN_Raise_to_L2  ((uint8_T)2U)
#define Code_Gen_Model_IN_Score_at_Reef ((uint8_T)10U)
#define Code_Gen_Model_IN_Set_L4       ((uint8_T)2U)
#define Code_Gen_Model_IN_Set_L4_h     ((uint8_T)1U)
#define Code_Gen_Model_IN_Start_l      ((uint8_T)3U)
#define Code_Gen_Model_IN_Timer_to_L4  ((uint8_T)2U)
#define Code_Gen__IN_Score_at_Processor ((uint8_T)9U)
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
                                      *   '<S420>/Constant'
                                      *   '<S36>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S427>/Constant'
                                          *   '<S428>/Constant'
                                          *   '<S43>/Constant'
                                          *   '<S44>/Constant'
                                          */
real_T AT_Max_Error_Angle = 1.0;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S426>/Constant'
                                        *   '<S42>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.5;          /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S424>/Constant'
                                        *   '<S425>/Constant'
                                        *   '<S40>/Constant'
                                        *   '<S41>/Constant'
                                        */
real_T AT_On_Target_Time = 0.25;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S414>/Constant7'
                                        *   '<S29>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S414>/Constant6'
                                        *   '<S29>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S414>/Constant3'
                                        *   '<S29>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S414>/Constant4'
                                        *   '<S29>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S414>/Constant'
                                        *   '<S29>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S414>/Constant5'
                                        *   '<S29>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S414>/Constant1'
                                        *   '<S29>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S414>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S33>/Constant4'
                                      *   '<S436>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S33>/Constant10'
                                        *   '<S436>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S437>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.2;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S33>/Gain1'
                                *   '<S437>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S437>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.5;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S33>/Constant8'
                                   *   '<S437>/Constant8'
                                   */
real_T Actuator_DC = 0.5;              /* Variable: Actuator_DC
                                        * Referenced by: '<S14>/Constant6'
                                        */
real_T Actuator_Rev_Startup_Range = 10.0;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S109>/Constant'
                                          */
real_T Actuator_Rev_Target = 90.0;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S110>/Constant'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
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
real_T Auto_Starting_Position = 1.0;   /* Variable: Auto_Starting_Position
                                        * Referenced by: '<S28>/Constant1'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S451>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S447>/Constant'
                                        *   '<S447>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S451>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S447>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -2.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S416>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S416>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S416>/Reefscape_Chart'
                                       *   '<S31>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S416>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_Neg_Threshold = -86.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S72>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 80.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S73>/Constant'
                                       *   '<S74>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S416>/Reefscape_Chart'
                                             *   '<S31>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.033333; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S75>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.0005;    /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S76>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.005;    /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S76>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S76>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.025;      /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S76>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.025;       /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S76>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
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
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Drive_Engage_Hook_Angle = 3.1416;/* Variable: Drive_Engage_Hook_Angle
                                         * Referenced by: '<S437>/Constant9'
                                         */
real_T Drive_Engage_Hook_Speed = 0.3;  /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S437>/Constant7'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S270>/Constant3'
                                        *   '<S291>/Constant3'
                                        *   '<S312>/Constant3'
                                        *   '<S333>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S270>/Constant2'
                                   *   '<S291>/Constant2'
                                   *   '<S312>/Constant2'
                                   *   '<S333>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        *   '<S333>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        *   '<S333>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S270>/Gain'
                                            *   '<S291>/Gain'
                                            *   '<S312>/Gain'
                                            *   '<S333>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S270>/Gain2'
                                        *   '<S291>/Gain2'
                                        *   '<S312>/Gain2'
                                        *   '<S333>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S270>/Saturation1'
                                         *   '<S291>/Saturation1'
                                         *   '<S312>/Saturation1'
                                         *   '<S333>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S270>/Saturation1'
                                        *   '<S291>/Saturation1'
                                        *   '<S312>/Saturation1'
                                        *   '<S333>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S270>/Gain1'
                                        *   '<S291>/Gain1'
                                        *   '<S312>/Gain1'
                                        *   '<S333>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S275>/Constant'
                            *   '<S296>/Constant'
                            *   '<S317>/Constant'
                            *   '<S338>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.1;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S12>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S93>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 1.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S90>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S12>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S94>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S94>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 20.5;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S416>/Reefscape_Chart'
                                         *   '<S31>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Bottom_Pre = 14.0;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S71>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.2;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S416>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 15.0;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S91>/Constant'
                                     *   '<S416>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 12.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = 1.25;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.25;     /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 9.25;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 27.5;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.5;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.875;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 11.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.6;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
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
                                        * Referenced by: '<S94>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S94>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S94>/Saturation1'
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
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S13>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S12>/Constant8'
                                        *   '<S94>/Constant1'
                                        *   '<S94>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S94>/Constant'
                                        *   '<S94>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 180.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S15>/Constant2'
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
                                        *   '<S416>/Reefscape_Chart'
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
                                        * Referenced by: '<S196>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S255>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S255>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S202>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S215>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S255>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S366>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S366>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S366>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S366>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S366>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S366>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S383>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S383>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S383>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S383>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S382>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S383>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S383>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S383>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S383>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S383>/Constant1'
                                   *   '<S383>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S383>/Constant'
                                   *   '<S383>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S273>/Constant3'
                                        *   '<S294>/Constant3'
                                        *   '<S315>/Constant3'
                                        *   '<S336>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S273>/Constant2'
                                *   '<S294>/Constant2'
                                *   '<S315>/Constant2'
                                *   '<S336>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S273>/Saturation'
                                           *   '<S294>/Saturation'
                                           *   '<S315>/Saturation'
                                           *   '<S336>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S273>/Saturation'
                                          *   '<S294>/Saturation'
                                          *   '<S315>/Saturation'
                                          *   '<S336>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S273>/Gain2'
                                         *   '<S294>/Gain2'
                                         *   '<S315>/Gain2'
                                         *   '<S336>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S273>/Saturation1'
                                             *   '<S294>/Saturation1'
                                             *   '<S315>/Saturation1'
                                             *   '<S336>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S273>/Saturation1'
                                            *   '<S294>/Saturation1'
                                            *   '<S315>/Saturation1'
                                            *   '<S336>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S273>/Gain1'
                                        *   '<S294>/Gain1'
                                        *   '<S315>/Gain1'
                                        *   '<S336>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S365>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S365>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S365>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S365>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S365>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S365>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S436>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S436>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S417>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S417>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S417>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S353>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S353>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S353>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S353>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S353>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S353>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S437>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S436>/Dead Zone'
                                        *   '<S437>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S436>/Dead Zone'
                                        *   '<S437>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.3;            /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S14>/Constant2'
                                        */
real_T Winch_Rev_Target = 30.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S108>/Constant'
                                        */
real_T Winch_Spool_DC = 0.3;           /* Variable: Winch_Spool_DC
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
  *MultiportSwitch1, boolean_T *Path_Enable, const uint8_T *Switch6, const
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
      if ((localDW->timer >= Elevator_LowerPickup_Time) && ((((localDW->Set_L1) ||
             (localDW->Set_L2)) || (localDW->Set_L3)) || (localDW->Set_L4))) {
        *rty_Elevator_LowerPickup_Reset = true;
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
 *    '<S416>/Reefscape_Chart'
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
 *    '<S416>/Reefscape_Chart'
 */
void Code_Gen__Reefscape_Chart_Reset(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  localDW->is_active_c4_Code_Gen_Model = 0U;
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
 *    '<S416>/Reefscape_Chart'
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
  if (localDW->is_active_c4_Code_Gen_Model == 0U) {
    localDW->is_active_c4_Code_Gen_Model = 1U;
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
  *MultiportSwitch1, boolean_T *Path_Enable, const uint8_T *Switch6, const
  boolean_T *UnitDelay1)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_Model_IN_Back:
    Code_Gen_Model_B.Gamepad_Back_out = false;
    Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
    Code_Gen_Model_B.Auto_Step_ID = 15U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    break;

   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 4U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_B.Gamepad_Start_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 8U;
    *Path_Enable = false;
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
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 5U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    }
    break;

   case C_IN_Path_to_Coral_Station_1_v3:
    Code_Gen_Model_B.Auto_Step_ID = 20U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
      Code_Gen_Model_B.Auto_Step_ID = 15U;
      *Path_Enable = false;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 1U;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    switch (Code_Gen_Model_DW.is_Path_to_Reef_1) {
     case Code_Gen_Model_IN_Drive:
      *Path_Enable = true;
      if (*Robot_Reached_Destination) {
        if (Code_Gen_Model_DW.is_Drive == Code_Gen_Model_IN_L4_d) {
          Code_Gen_Model_B.Gamepad_B4_Y_out = false;
          Code_Gen_Model_DW.is_Drive = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        } else {
          Code_Gen_Model_DW.is_Drive = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        }

        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 2U;
        *Path_Enable = false;
        Code_Gen_Model_B.Align_Left_d = true;
      } else if (Code_Gen_Model_DW.is_Drive == Code_Gen_Model_IN_L2_l) {
        if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
          Code_Gen_Model_DW.is_Drive = Code_Gen_Model_IN_L4_d;
          Code_Gen_Model_B.Gamepad_B4_Y_out = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
      } else {
        /* case IN_L4: */
      }
      break;

     case Code_Gen_Model_IN_Raise_to_L2:
      *Path_Enable = false;
      if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L2_Time) {
        Code_Gen_Model_B.Gamepad_B3_X_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Drive;
        *Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *MultiportSwitch;
        Code_Gen_Model_DW.is_Drive = Code_Gen_Model_IN_L2_l;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Start: */
      *Path_Enable = false;
      if (Code_Gen_Model_DW.timer >= 0.04) {
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Raise_to_L2;
        *Path_Enable = false;
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
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2 == Code_Gen_Model_IN_Set_L4_h) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_2;
        Code_Gen_Model_B.Auto_Step_ID = 7U;
        *Path_Enable = false;
        Code_Gen_Model_B.Align_Left_d = true;
      }

      /* case IN_Timer_to_L4: */
    } else if (Code_Gen_Model_DW.timer >= Auto_Path2_Delay_to_L4_Time) {
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Set_L4_h;
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_M_IN_Path_to_Reef_2_v2:
    Code_Gen_Model_B.Auto_Step_ID = 22U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2_v2 == Code_Gen_Model_IN_Back) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_Back_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
        Code_Gen_Model_B.Auto_Step_ID = 15U;
        *Path_Enable = false;
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
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 3U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 7U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 8U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 5U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 6U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case C_IN_Wait_at_Coral_Station_1_v2:
    Code_Gen_Model_B.Auto_Step_ID = 21U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Path_to_Reef_2_v2;
      Code_Gen_Model_B.Auto_Step_ID = 22U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_L1_g;
      Code_Gen_Model_B.Gamepad_B1_A_out = true;
    }
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 15U;
    *Path_Enable = false;
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
  int32_T s227_iter;
  uint16_T s252_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch;
  uint8_T MultiportSwitch1;
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

  /* Sum: '<S260>/Add1' incorporates:
   *  Constant: '<S260>/Constant3'
   *  Constant: '<S260>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S260>/Math Function'
   *  Sum: '<S24>/Add'
   *  Sum: '<S260>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S261>/Add1' incorporates:
   *  Constant: '<S261>/Constant3'
   *  Constant: '<S261>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S261>/Math Function'
   *  Sum: '<S24>/Add1'
   *  Sum: '<S261>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S262>/Add1' incorporates:
   *  Constant: '<S262>/Constant3'
   *  Constant: '<S262>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S262>/Math Function'
   *  Sum: '<S24>/Add2'
   *  Sum: '<S262>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product2' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S263>/Add1' incorporates:
   *  Constant: '<S263>/Constant3'
   *  Constant: '<S263>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S263>/Math Function'
   *  Sum: '<S24>/Add3'
   *  Sum: '<S263>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product3' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S191>/Diff'
   *  UnitDelay: '<S191>/UD'
   *
   * Block description for '<S191>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S191>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_cv = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* SignalConversion generated from: '<S21>/Product7' incorporates:
   *  Fcn: '<S192>/r->x'
   *  Fcn: '<S192>/theta->y'
   *  Fcn: '<S193>/r->x'
   *  Fcn: '<S193>/theta->y'
   *  Fcn: '<S194>/r->x'
   *  Fcn: '<S194>/theta->y'
   *  Fcn: '<S195>/r->x'
   *  Fcn: '<S195>/theta->y'
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

  /* RelationalOperator: '<S130>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S130>/Delay Input1'
   *
   * Block description for '<S130>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S131>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S131>/Delay Input1'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S132>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S132>/Delay Input1'
   *
   * Block description for '<S132>/Delay Input1':
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

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
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

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Switch: '<S15>/Switch1' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S113>/FixPt Relational Operator'
   *  Sum: '<S15>/Sum'
   *  UnitDelay: '<S113>/Delay Input1'
   *  UnitDelay: '<S15>/Unit Delay1'
   *
   * Block description for '<S113>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S15>/Switch1' */

  /* Sum: '<S15>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S112>/Gain1' */
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

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   */
  Code_Gen_Model_B.Drive_Engage_Hook = (Code_Gen_Model_U.Joystick_Left_B7 != 0.0);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
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
   *  RelationalOperator: '<S105>/FixPt Relational Operator'
   *  RelationalOperator: '<S106>/FixPt Relational Operator'
   *  RelationalOperator: '<S107>/FixPt Relational Operator'
   *  Switch: '<S13>/Switch2'
   *  Switch: '<S13>/Switch3'
   *  UnitDelay: '<S105>/Delay Input1'
   *  UnitDelay: '<S106>/Delay Input1'
   *  UnitDelay: '<S107>/Delay Input1'
   *  UnitDelay: '<S1>/Unit Delay'
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S106>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S107>/Delay Input1':
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
       *  UnitDelay: '<S55>/Delay Input1'
       *  UnitDelay: '<S57>/Delay Input1'
       *  UnitDelay: '<S58>/Delay Input1'
       *  UnitDelay: '<S61>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S63>/Delay Input1'
       *  UnitDelay: '<S66>/Delay Input1'
       *  UnitDelay: '<S68>/Delay Input1'
       *
       * Block description for '<S55>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S57>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S58>/Delay Input1':
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
       * Block description for '<S63>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S66>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S68>/Delay Input1':
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
       *  Merge: '<S20>/Merge7'
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
      Code_Gen_Model_B.Spline_Enable = false;
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
        MultiportSwitch = 15U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant18'
         */
        MultiportSwitch1 = 16U;
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
        MultiportSwitch = 9U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant19'
         */
        MultiportSwitch1 = 10U;
      } else {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant11'
         */
        MultiportSwitch = 19U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant14'
         */
        MultiportSwitch1 = 20U;
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
        MultiportSwitch = 5U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant16'
         */
        MultiportSwitch1 = 6U;
      } else {
        /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
         *  Constant: '<S30>/Constant12'
         */
        MultiportSwitch = 11U;

        /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
         *  Constant: '<S30>/Constant15'
         */
        MultiportSwitch1 = 12U;
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
     *  Switch: '<S30>/Switch8'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S30>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S30>/Constant20'
         */
        Switch6 = 3U;
      } else {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S30>/Constant21'
         */
        Switch6 = 17U;
      }

      /* End of Switch: '<S30>/Switch7' */
    } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S30>/Switch8' incorporates:
       *  Constant: '<S30>/Constant22'
       *  Switch: '<S30>/Switch6'
       */
      Switch6 = 7U;
    } else {
      /* Switch: '<S30>/Switch6' incorporates:
       *  Constant: '<S30>/Constant23'
       *  Switch: '<S30>/Switch8'
       */
      Switch6 = 13U;
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

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Start_l;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
    } else if (Code_Gen_Model_DW.is_c6_Code_Gen_Model ==
               Code_Gen_Model_IN_Center) {
      switch (Code_Gen_Model_DW.is_Center) {
       case Code_IN_Adjust_Height_for_Algae:
        Code_Gen_Model_B.Auto_Step_ID = 104U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
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

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
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

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_Path_to_Processor;
          Code_Gen_Model_B.Auto_Step_ID = 107U;

          /* Merge: '<S20>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          Code_Gen_Model_B.Path_ID = MultiportSwitch1;
          Code_Gen_Model_B.Gamepad_POV_Down_k = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Processo:
        Code_Gen_Model_B.Auto_Step_ID = 109U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Processor;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Processor) {
          Code_Gen_Model_B.Gamepad_Back_out = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 110U;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Code_Gen_Model_B.Auto_Step_ID = 105U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
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
        Code_Gen_Model_B.Auto_Step_ID = 110U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        break;

       case Code_Gen_M_IN_Path_to_Processor:
        Code_Gen_Model_B.Auto_Step_ID = 107U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.Gamepad_POV_Down_k = false;
          Code_Gen_Model_DW.is_Center = Code_Gen__IN_Score_at_Processor;
          Code_Gen_Model_B.Auto_Step_ID = 108U;

          /* Merge: '<S20>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
          Code_Gen_Model_B.Gamepad_RT_out = true;
        }
        break;

       case Code_Gen_Model_IN_Path_to_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        switch (Code_Gen_Model_DW.is_Path_to_Reef) {
         case Code_Gen_Model_IN_Drive:
          /* Merge: '<S20>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
            Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Score_at_Reef;
            Code_Gen_Model_B.Auto_Step_ID = 102U;

            /* Merge: '<S20>/Merge7' */
            Code_Gen_Model_B.Spline_Enable = false;
            Code_Gen_Model_B.Align_Left_d = true;
          }
          break;

         case Code_Gen_Model_IN_Set_L4:
          /* Merge: '<S20>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
            Code_Gen_Model_B.Gamepad_B4_Y_out = false;
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Drive;

            /* Merge: '<S20>/Merge7' */
            Code_Gen_Model_B.Spline_Enable = true;
            Code_Gen_Model_B.Path_ID = MultiportSwitch;
          } else {
            Code_Gen_Model_B.Gamepad_B4_Y_out = true;
            Code_Gen_Model_DW.timer += 0.02;
          }
          break;

         default:
          /* Merge: '<S20>/Merge7' */
          /* case IN_Start: */
          Code_Gen_Model_B.Spline_Enable = false;
          if (Code_Gen_Model_DW.timer >= 0.04) {
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Set_L4;
            Code_Gen_Model_DW.timer = 0.0;
          } else {
            Code_Gen_Model_DW.timer += 0.02;
          }
          break;
        }
        break;

       case Code_Gen__IN_Score_at_Processor:
        Code_Gen_Model_B.Auto_Step_ID = 108U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (!Compare_f) {
          Code_Gen_Model_B.Gamepad_RT_out = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Processo;
          Code_Gen_Model_B.Auto_Step_ID = 109U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Processor;
          Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
          Code_Gen_Model_B.Gamepad_Back_out = true;
        }
        break;

       case Code_Gen_Model_IN_Score_at_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 102U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
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
        Code_Gen_Model_B.Auto_Step_ID = 110U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        break;
      }
    } else {
      /* Merge: '<S20>/Merge7' incorporates:
       *  UnitDelay: '<S17>/Unit Delay'
       *  UnitDelay: '<S28>/Unit Delay1'
       */
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
        &MultiportSwitch, &MultiportSwitch1, &Code_Gen_Model_B.Spline_Enable,
        &Switch6, &Code_Gen_Model_DW.UnitDelay1_DSTATE_p);
    }

    /* End of Chart: '<S28>/Reefscape_Auto_Steps' */

    /* Selector: '<S28>/Selector' incorporates:
     *  Constant: '<S28>/Constant'
     *  Merge: '<S20>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s227_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s227_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s227_iter];
      }
    }

    /* End of Selector: '<S28>/Selector' */

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S31>/Reefscape_Chart'
     *  Constant: '<S28>/GameState = 1 is Autos'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  RelationalOperator: '<S55>/FixPt Relational Operator'
     *  RelationalOperator: '<S56>/FixPt Relational Operator'
     *  RelationalOperator: '<S57>/FixPt Relational Operator'
     *  RelationalOperator: '<S58>/FixPt Relational Operator'
     *  RelationalOperator: '<S59>/FixPt Relational Operator'
     *  RelationalOperator: '<S61>/FixPt Relational Operator'
     *  RelationalOperator: '<S62>/FixPt Relational Operator'
     *  RelationalOperator: '<S63>/FixPt Relational Operator'
     *  RelationalOperator: '<S64>/FixPt Relational Operator'
     *  RelationalOperator: '<S65>/FixPt Relational Operator'
     *  RelationalOperator: '<S66>/FixPt Relational Operator'
     *  RelationalOperator: '<S67>/FixPt Relational Operator'
     *  RelationalOperator: '<S68>/FixPt Relational Operator'
     *  UnitDelay: '<S28>/Unit Delay'
     *  UnitDelay: '<S55>/Delay Input1'
     *  UnitDelay: '<S57>/Delay Input1'
     *  UnitDelay: '<S58>/Delay Input1'
     *  UnitDelay: '<S61>/Delay Input1'
     *  UnitDelay: '<S62>/Delay Input1'
     *  UnitDelay: '<S63>/Delay Input1'
     *  UnitDelay: '<S66>/Delay Input1'
     *  UnitDelay: '<S68>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S58>/Delay Input1':
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
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S66>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S68>/Delay Input1':
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

      /* Switch: '<S70>/Switch2' incorporates:
       *  Constant: '<S33>/Constant10'
       *  RelationalOperator: '<S70>/LowerRelop1'
       *  RelationalOperator: '<S70>/UpperRelop'
       *  Switch: '<S70>/Switch'
       *  UnaryMinus: '<S33>/Unary Minus'
       */
      if (rtb_Product2_a > AT_Steering_Speed_Max) {
        /* Merge: '<S20>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Product2_a < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S70>/Switch' incorporates:
         *  Merge: '<S20>/Merge2'
         *  UnaryMinus: '<S33>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S20>/Merge2' incorporates:
         *  Switch: '<S70>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Product2_a;
      }

      /* End of Switch: '<S70>/Switch2' */

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
      (Code_Gen_Model_B.Path_ID, 1U, 1U, 23U)];

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

    /* Update for UnitDelay: '<S55>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_l = Code_Gen_Model_B.Gamepad_B1_A_out;

    /* Update for UnitDelay: '<S56>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant4'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bdz = false;

    /* Update for UnitDelay: '<S61>/Delay Input1'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_au = Code_Gen_Model_B.Gamepad_B3_X_out;

    /* Update for UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ne = Code_Gen_Model_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ff = Code_Gen_Model_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S57>/Delay Input1'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ev = Code_Gen_Model_B.Gamepad_Back_out;

    /* Update for UnitDelay: '<S64>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant17'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S67>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant12'
     *
     * Block description for '<S67>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_os = false;

    /* Update for UnitDelay: '<S68>/Delay Input1'
     *
     * Block description for '<S68>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = Code_Gen_Model_B.Gamepad_RT_out;

    /* Update for UnitDelay: '<S60>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant13'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bm = false;

    /* Update for UnitDelay: '<S65>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant2'
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S66>/Delay Input1'
     *
     * Block description for '<S66>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b3 =
      Code_Gen_Model_B.Gamepad_POV_Down_k;

    /* Update for UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_p;

    /* Update for UnitDelay: '<S59>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant14'
     *
     * Block description for '<S59>/Delay Input1':
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
       *  UnitDelay: '<S414>/Unit Delay'
       *  UnitDelay: '<S414>/Unit Delay1'
       *  UnitDelay: '<S436>/Unit Delay1'
       *  UnitDelay: '<S436>/Unit Delay2'
       *  UnitDelay: '<S436>/Unit Delay3'
       *  UnitDelay: '<S436>/Unit Delay4'
       *  UnitDelay: '<S439>/Delay Input1'
       *  UnitDelay: '<S440>/Delay Input1'
       *  UnitDelay: '<S441>/Delay Input1'
       *  UnitDelay: '<S442>/Delay Input1'
       *  UnitDelay: '<S444>/Delay Input1'
       *  UnitDelay: '<S450>/Unit Delay'
       *  UnitDelay: '<S450>/Unit Delay1'
       *  UnitDelay: '<S454>/FixPt Unit Delay1'
       *  UnitDelay: '<S454>/FixPt Unit Delay2'
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
       *  UnitDelay: '<S470>/Delay Input1'
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
       * Block description for '<S442>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S444>/Delay Input1':
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
       *
       * Block description for '<S470>/Delay Input1':
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
       *  Chart: '<S416>/Reefscape_Chart'
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

    /* DeadZone: '<S416>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* DeadZone: '<S416>/Dead Zone1' incorporates:
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
     *  Chart: '<S416>/Reefscape_Chart'
     *  Constant: '<S26>/Constant'
     *  DeadZone: '<S416>/Dead Zone'
     *  DeadZone: '<S416>/Dead Zone1'
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
     *  Logic: '<S416>/Logical Operator'
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
     *  RelationalOperator: '<S470>/FixPt Relational Operator'
     *  UnitDelay: '<S26>/Unit Delay'
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
     *  UnitDelay: '<S470>/Delay Input1'
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
     *
     * Block description for '<S470>/Delay Input1':
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

    /* Switch: '<S414>/Switch' incorporates:
     *  Constant: '<S414>/Constant1'
     *  Constant: '<S423>/Constant'
     *  Constant: '<S434>/Constant'
     *  Logic: '<S414>/AND'
     *  Logic: '<S414>/AND1'
     *  RelationalOperator: '<S423>/Compare'
     *  RelationalOperator: '<S434>/Compare'
     *  Switch: '<S414>/Switch1'
     *  Switch: '<S414>/Switch4'
     *  Switch: '<S414>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch_jz = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S414>/Switch1' incorporates:
       *  Constant: '<S414>/Constant2'
       */
      rtb_Switch_jz = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S414>/Switch4' incorporates:
       *  Constant: '<S414>/Constant3'
       *  Switch: '<S414>/Switch1'
       */
      rtb_Switch_jz = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S414>/Switch6' incorporates:
       *  Constant: '<S414>/Constant6'
       *  Switch: '<S414>/Switch1'
       *  Switch: '<S414>/Switch4'
       */
      rtb_Switch_jz = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S414>/Switch4' incorporates:
       *  Switch: '<S414>/Switch1'
       *  UnitDelay: '<S414>/Unit Delay1'
       */
      rtb_Switch_jz = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S414>/Switch' */

    /* Sum: '<S414>/Subtract1' */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Switch_jz -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S26>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S414>/Switch2' incorporates:
     *  Constant: '<S414>/Constant4'
     *  Constant: '<S422>/Constant'
     *  Logic: '<S414>/AND2'
     *  RelationalOperator: '<S422>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Abs1 = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S414>/OR' */
      Compare = ((Code_Gen_Model_B.Align_Left) || (Code_Gen_Model_B.Align_Right));

      /* Switch: '<S414>/Switch3' incorporates:
       *  Constant: '<S414>/Constant'
       *  Constant: '<S418>/Constant'
       *  Constant: '<S419>/Constant'
       *  Constant: '<S421>/Constant'
       *  Constant: '<S435>/Constant'
       *  Logic: '<S414>/AND3'
       *  Logic: '<S414>/Logical Operator5'
       *  Logic: '<S414>/Logical Operator6'
       *  Logic: '<S414>/OR1'
       *  RelationalOperator: '<S418>/Compare'
       *  RelationalOperator: '<S419>/Compare'
       *  RelationalOperator: '<S421>/Compare'
       *  RelationalOperator: '<S435>/Compare'
       *  Switch: '<S414>/Switch5'
       *  Switch: '<S414>/Switch7'
       */
      if (Compare && ((Code_Gen_Model_B.Set_Coral_Level == 2) ||
                      (Code_Gen_Model_B.Set_Coral_Level == 3))) {
        rtb_Abs1 = AT_Reef_Target_L2_L3_X;
      } else if (Compare && (Code_Gen_Model_B.Set_Coral_Level == 4)) {
        /* Switch: '<S414>/Switch5' incorporates:
         *  Constant: '<S414>/Constant5'
         */
        rtb_Abs1 = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center) &&
                 (Code_Gen_Model_B.Set_Algae_Level != 0)) {
        /* Switch: '<S414>/Switch7' incorporates:
         *  Constant: '<S414>/Constant7'
         *  Switch: '<S414>/Switch5'
         */
        rtb_Abs1 = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S414>/Switch5' incorporates:
         *  UnitDelay: '<S414>/Unit Delay'
         */
        rtb_Abs1 = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
      }

      /* End of Switch: '<S414>/Switch3' */
    }

    /* End of Switch: '<S414>/Switch2' */

    /* Sum: '<S414>/Subtract' */
    rtb_Subtract_b2 = rtb_Abs1 - Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S26>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X = -rtb_Subtract_b2;

    /* DeadZone: '<S437>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S437>/Dead Zone' */

    /* Lookup_n-D: '<S437>/Modulation_Drv' incorporates:
     *  Math: '<S437>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S448>/Compare' incorporates:
     *  Constant: '<S448>/Constant'
     */
    Robot_Reached_Destination = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S437>/Logical Operator' incorporates:
     *  Constant: '<S449>/Constant'
     *  RelationalOperator: '<S449>/Compare'
     */
    rtb_Disable_Wheels = ((rtb_DeadZone != 0.0) && Robot_Reached_Destination);

    /* Logic: '<S414>/Logical Operator1' incorporates:
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Logic: '<S414>/Logical Operator2'
     *  Logic: '<S414>/Logical Operator3'
     *  Logic: '<S414>/Logical Operator4'
     *  Logic: '<S414>/NOT'
     *  RelationalOperator: '<S429>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     *  RelationalOperator: '<S431>/Compare'
     *  RelationalOperator: '<S432>/Compare'
     *  RelationalOperator: '<S433>/Compare'
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

    /* Logic: '<S437>/Logical Operator1' */
    rtb_Reset_Wheel_Offsets = (((Code_Gen_Model_B.Drive_Engage_Hook) ||
      (Code_Gen_Model_B.AT_Relative_Error_Enable)) || rtb_Disable_Wheels);

    /* Switch: '<S450>/Switch1' incorporates:
     *  Constant: '<S455>/Constant'
     *  Constant: '<S456>/Constant'
     *  Logic: '<S450>/AND'
     *  RelationalOperator: '<S455>/Compare'
     *  RelationalOperator: '<S456>/Compare'
     *  Switch: '<S450>/Switch2'
     *  UnitDelay: '<S450>/Unit Delay'
     *  UnitDelay: '<S450>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch2_gl = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_ji = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S450>/Switch1' */

    /* Switch: '<S437>/Switch9' incorporates:
     *  Switch: '<S437>/Switch4'
     */
    if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S437>/Switch3' incorporates:
       *  Switch: '<S437>/Switch1'
       */
      if (Code_Gen_Model_B.Drive_Engage_Hook) {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Constant: '<S437>/Constant9'
         */
        Code_Gen_Model_B.Translation_Angle = Drive_Engage_Hook_Angle;
      } else if (rtb_Disable_Wheels) {
        /* Signum: '<S437>/Sign' incorporates:
         *  Switch: '<S437>/Switch1'
         */
        if (rtIsNaN(rtb_DeadZone)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_DeadZone < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_DeadZone > 0.0);
        }

        /* Switch: '<S437>/Switch5' incorporates:
         *  Constant: '<S437>/Constant3'
         *  Constant: '<S437>/Constant4'
         *  Switch: '<S437>/Switch1'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_fx = -1.5707963267948966;
        } else {
          rtb_Switch2_fx = 0.0;
        }

        /* Merge: '<S20>/Merge3' incorporates:
         *  Gain: '<S437>/Gain3'
         *  Signum: '<S437>/Sign'
         *  Sum: '<S437>/Add'
         *  Switch: '<S437>/Switch1'
         *  Switch: '<S437>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_fx;
      } else {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Switch: '<S437>/Switch1'
         *  Trigonometry: '<S437>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S437>/Switch3' */
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S437>/Switch6' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S437>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Constant: '<S437>/Constant'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      } else {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Constant: '<S437>/Constant1'
         */
        Code_Gen_Model_B.Translation_Angle = 3.1415926535897931;
      }

      /* End of Switch: '<S437>/Switch6' */
    } else {
      /* Merge: '<S20>/Merge3' incorporates:
       *  Switch: '<S437>/Switch4'
       *  Trigonometry: '<S437>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch2_gl,
        rtb_Switch2_ji);
    }

    /* End of Switch: '<S437>/Switch9' */

    /* Switch: '<S447>/Switch1' incorporates:
     *  Constant: '<S447>/Constant'
     *  Constant: '<S447>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Add_h5 = Boost_Trigger_High_Speed;
    } else {
      rtb_Add_h5 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S447>/Switch1' */

    /* Switch: '<S454>/Init' incorporates:
     *  UnitDelay: '<S454>/FixPt Unit Delay1'
     *  UnitDelay: '<S454>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Abs2_p = rtb_Add_h5;
    } else {
      rtb_Abs2_p = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S454>/Init' */

    /* Sum: '<S452>/Sum1' */
    rtb_Product2_a = rtb_Add_h5 - rtb_Abs2_p;

    /* Switch: '<S453>/Switch2' incorporates:
     *  Constant: '<S451>/Constant1'
     *  Constant: '<S451>/Constant3'
     *  RelationalOperator: '<S453>/LowerRelop1'
     *  RelationalOperator: '<S453>/UpperRelop'
     *  Switch: '<S453>/Switch'
     */
    if (rtb_Product2_a > Boost_Trigger_Increasing_Limit) {
      rtb_Product2_a = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product2_a < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S453>/Switch' incorporates:
       *  Constant: '<S451>/Constant1'
       */
      rtb_Product2_a = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S452>/Sum' incorporates:
     *  Switch: '<S453>/Switch2'
     */
    rtb_Product2_a += rtb_Abs2_p;

    /* Switch: '<S437>/Switch8' incorporates:
     *  Switch: '<S437>/Switch2'
     */
    if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S437>/Switch10' incorporates:
       *  Switch: '<S437>/Switch'
       */
      if (Code_Gen_Model_B.Drive_Engage_Hook) {
        /* Merge: '<S20>/Merge4' incorporates:
         *  Constant: '<S437>/Constant7'
         */
        Code_Gen_Model_B.Translation_Speed = Drive_Engage_Hook_Speed;
      } else if (rtb_Disable_Wheels) {
        /* Switch: '<S437>/Switch' incorporates:
         *  Gain: '<S437>/Gain'
         *  Merge: '<S20>/Merge4'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_DeadZone;
      } else {
        /* Merge: '<S20>/Merge4' incorporates:
         *  Constant: '<S437>/Constant8'
         *  Gain: '<S437>/Gain1'
         *  Math: '<S437>/Magnitude2'
         *  MinMax: '<S437>/Min1'
         *  Switch: '<S437>/Switch'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S437>/Switch10' */
    } else if (Robot_Reached_Destination) {
      /* Merge: '<S20>/Merge4' incorporates:
       *  Constant: '<S26>/Constant7'
       *  Constant: '<S26>/Constant8'
       *  Constant: '<S437>/Constant5'
       *  Gain: '<S437>/Gain2'
       *  Math: '<S437>/Magnitude1'
       *  MinMax: '<S437>/Min'
       *  Switch: '<S437>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * 0.0);
    } else {
      /* Product: '<S447>/Product' incorporates:
       *  Switch: '<S437>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Modulation_Drv * rtb_Product2_a;

      /* Saturate: '<S447>/Saturation' incorporates:
       *  Switch: '<S437>/Switch2'
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

      /* End of Saturate: '<S447>/Saturation' */
    }

    /* End of Switch: '<S437>/Switch8' */

    /* Switch: '<S417>/Switch' incorporates:
     *  Constant: '<S417>/Constant5'
     *  Constant: '<S417>/Constant7'
     *  DataTypeConversion: '<S417>/Data Type Conversion'
     *  Switch: '<S437>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Reset_Wheel_Offsets;
    }

    /* End of Switch: '<S417>/Switch' */

    /* SignalConversion: '<S26>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S436>/Switch' incorporates:
     *  Constant: '<S436>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S436>/Product2' incorporates:
       *  Constant: '<S436>/Constant4'
       */
      rtb_Abs2_p = Code_Gen_Model_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S446>/Switch2' incorporates:
       *  Constant: '<S436>/Constant10'
       *  RelationalOperator: '<S446>/LowerRelop1'
       *  RelationalOperator: '<S446>/UpperRelop'
       *  Switch: '<S446>/Switch'
       *  UnaryMinus: '<S436>/Unary Minus'
       */
      if (rtb_Abs2_p > AT_Steering_Speed_Max) {
        rtb_Add_h5 = AT_Steering_Speed_Max;
      } else if (rtb_Abs2_p < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S446>/Switch' incorporates:
         *  UnaryMinus: '<S436>/Unary Minus'
         */
        rtb_Add_h5 = -AT_Steering_Speed_Max;
      } else {
        rtb_Add_h5 = rtb_Abs2_p;
      }

      /* End of Switch: '<S446>/Switch2' */
    } else {
      rtb_Add_h5 = 0.0;
    }

    /* End of Switch: '<S436>/Switch' */

    /* DeadZone: '<S436>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S436>/Add' incorporates:
     *  Constant: '<S436>/Constant'
     *  Constant: '<S436>/Constant1'
     *  DeadZone: '<S436>/Dead Zone'
     *  Lookup_n-D: '<S436>/Modulation_Str_Y_Rel'
     *  Product: '<S436>/Product'
     *  Product: '<S436>/Product1'
     *  SignalConversion: '<S16>/Signal Copy5'
     */
    rtb_Add_h5 += (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                   Steering_Relative_Gain) + (rtb_Minus_k_idx_0 *
      Steering_Twist_Gain);

    /* RelationalOperator: '<S438>/Compare' incorporates:
     *  Constant: '<S438>/Constant'
     */
    rtb_Compare_oq = (rtb_Add_h5 == 0.0);

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/Constant5'
     *  Constant: '<S417>/Constant8'
     *  DataTypeConversion: '<S417>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_Compare_oq;
    }

    /* End of Switch: '<S417>/Switch1' */

    /* Logic: '<S436>/AND2' incorporates:
     *  RelationalOperator: '<S439>/FixPt Relational Operator'
     *  RelationalOperator: '<S440>/FixPt Relational Operator'
     *  RelationalOperator: '<S441>/FixPt Relational Operator'
     *  RelationalOperator: '<S442>/FixPt Relational Operator'
     *  UnitDelay: '<S439>/Delay Input1'
     *  UnitDelay: '<S440>/Delay Input1'
     *  UnitDelay: '<S441>/Delay Input1'
     *  UnitDelay: '<S442>/Delay Input1'
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
     * Block description for '<S442>/Delay Input1':
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

    /* Logic: '<S436>/AND1' incorporates:
     *  Logic: '<S436>/AND3'
     *  UnitDelay: '<S436>/Unit Delay2'
     */
    rtb_AND1 = (rtb_Compare_oq && (Robot_Reached_Destination ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Logic: '<S436>/AND4' incorporates:
     *  Logic: '<S436>/AND8'
     *  UnitDelay: '<S436>/Unit Delay4'
     */
    rtb_AND4 = ((rtb_Compare_oq && (!Robot_Reached_Destination)) &&
                (Code_Gen_Model_DW.UnitDelay4_DSTATE));

    /* Logic: '<S436>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 || rtb_AND4);

    /* Switch: '<S436>/Switch8' incorporates:
     *  Constant: '<S445>/Constant'
     *  Logic: '<S436>/AND9'
     *  RelationalOperator: '<S444>/FixPt Relational Operator'
     *  RelationalOperator: '<S445>/Compare'
     *  UnitDelay: '<S22>/Unit Delay'
     *  UnitDelay: '<S444>/Delay Input1'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_Compare_oq) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp)))
        || (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S436>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S436>/Switch8' incorporates:
       *  UnitDelay: '<S436>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S436>/Switch8' */

    /* Switch: '<S436>/Switch4' incorporates:
     *  Constant: '<S436>/Constant5'
     *  Switch: '<S436>/Switch1'
     *  Switch: '<S436>/Switch5'
     *  Switch: '<S436>/Switch6'
     *  Switch: '<S436>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_DeadZone = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S436>/Switch5' incorporates:
       *  Constant: '<S436>/Constant6'
       */
      rtb_DeadZone = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S436>/Switch6' incorporates:
       *  Constant: '<S436>/Constant7'
       *  Switch: '<S436>/Switch5'
       */
      rtb_DeadZone = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S436>/Switch7' incorporates:
       *  Constant: '<S436>/Constant8'
       *  Switch: '<S436>/Switch5'
       *  Switch: '<S436>/Switch6'
       */
      rtb_DeadZone = 4.71238898038469;
    } else if (rtb_AND4) {
      /* Switch: '<S436>/Switch1' incorporates:
       *  Constant: '<S26>/Constant10'
       *  Switch: '<S436>/Switch5'
       *  Switch: '<S436>/Switch6'
       *  Switch: '<S436>/Switch7'
       */
      rtb_DeadZone = 0.0;
    } else {
      /* Switch: '<S436>/Switch6' incorporates:
       *  Switch: '<S436>/Switch5'
       *  Switch: '<S436>/Switch7'
       *  UnitDelay: '<S436>/Unit Delay1'
       */
      rtb_DeadZone = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S436>/Switch4' */

    /* Switch: '<S436>/Switch2' incorporates:
     *  Switch: '<S436>/Switch3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S436>/Switch2' incorporates:
       *  Constant: '<S436>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;

      /* Switch: '<S436>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_DeadZone;
    } else {
      /* Switch: '<S436>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

      /* Switch: '<S436>/Switch3' incorporates:
       *  Constant: '<S436>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S436>/Switch2' */

    /* Merge: '<S20>/Merge1' incorporates:
     *  Sum: '<S436>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S20>/Merge2' incorporates:
     *  SignalConversion: '<S436>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Add_h5;

    /* Abs: '<S414>/Abs2' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus'
     */
    rtb_Abs2_p = fabs(-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S414>/Abs' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus1'
     */
    rtb_Subtract_b2 = fabs(-rtb_Subtract_b2);

    /* Abs: '<S414>/Abs1' */
    rtb_Coral_Wheel_DutyCycle_merge = fabs(rtb_Coral_Wheel_DutyCycle_merge);

    /* Merge: '<S20>/Merge23' incorporates:
     *  Constant: '<S420>/Constant'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S428>/Constant'
     *  Logic: '<S414>/Logical Operator7'
     *  RelationalOperator: '<S420>/Compare'
     *  RelationalOperator: '<S427>/Compare'
     *  RelationalOperator: '<S428>/Compare'
     *  SignalConversion: '<S26>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Compare &&
      (rtb_Subtract_b2 <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Abs2_p <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy10' incorporates:
     *  Constant: '<S424>/Constant'
     *  Constant: '<S425>/Constant'
     *  Constant: '<S426>/Constant'
     *  Logic: '<S414>/Logical Operator'
     *  RelationalOperator: '<S424>/Compare'
     *  RelationalOperator: '<S425>/Compare'
     *  RelationalOperator: '<S426>/Compare'
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
     *  Constant: '<S416>/Constant5'
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

    /* Update for UnitDelay: '<S457>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S457>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S458>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S458>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S463>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S464>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S465>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S459>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S459>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S466>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S469>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S470>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S462>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Right_B1'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b = Code_Gen_Model_U.Joystick_Right_B1;

    /* Update for UnitDelay: '<S467>/Delay Input1'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S468>/Delay Input1'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S460>/Delay Input1'
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S461>/Delay Input1'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S414>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch_jz;

    /* Update for UnitDelay: '<S414>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Abs1;

    /* Update for UnitDelay: '<S450>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S454>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S454>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S454>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Product2_a;

    /* Update for UnitDelay: '<S444>/Delay Input1'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_Compare_oq;

    /* Update for UnitDelay: '<S443>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant5'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = false;

    /* Update for UnitDelay: '<S439>/Delay Input1'
     *
     * Block description for '<S439>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S440>/Delay Input1'
     *
     * Block description for '<S440>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S441>/Delay Input1'
     *
     * Block description for '<S441>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S442>/Delay Input1'
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S436>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND1;

    /* Update for UnitDelay: '<S436>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND4;

    /* Update for UnitDelay: '<S436>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S436>/Unit Delay1' */
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

  /* Reshape: '<S133>/Reshapey' incorporates:
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

  /* Delay: '<S133>/MemoryX' incorporates:
   *  Constant: '<S133>/X0'
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

  /* Sum: '<S187>/Diff' incorporates:
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
    for (s227_iter = 0; s227_iter < 8; s227_iter++) {
      rtb_Minus_k_idx_0 +=
        Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s227_iter];
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

  /* Outputs for Enabled SubSystem: '<S160>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S186>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S153>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S184>/Enable'
   */
  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S18>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S184>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S133>/C'
     *  Delay: '<S133>/MemoryX'
     *  Product: '<S186>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_gl;

    /* Sum: '<S184>/Sum' incorporates:
     *  Constant: '<S133>/D'
     *  Product: '<S184>/C[k]*xhat[k|k-1]'
     *  Product: '<S184>/D[k]*u[k]'
     *  Sum: '<S184>/Add1'
     */
    rtb_Switch2_ji = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Abs1 = rtb_Reshapey[0] - (rtb_Switch2_ji + rtb_Switch2_gl);

    /* Product: '<S184>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S133>/C'
     *  Delay: '<S133>/MemoryX'
     *  Product: '<S186>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_gl;

    /* Sum: '<S184>/Sum' incorporates:
     *  Constant: '<S133>/D'
     *  Product: '<S184>/C[k]*xhat[k|k-1]'
     *  Product: '<S184>/D[k]*u[k]'
     *  Sum: '<S184>/Add1'
     */
    rtb_Switch2_ji = rtb_Reshapey[1] - (rtb_Switch2_ji + rtb_Switch2_gl);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S184>/Product3' incorporates:
     *  Constant: '<S134>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Abs1) +
      (-2.0601714451538746E-17 * rtb_Switch2_ji);

    /* Sum: '<S186>/Add1' incorporates:
     *  Product: '<S186>/Product'
     */
    rtb_Switch2_gl = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S184>/Product3' incorporates:
     *  Constant: '<S134>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Abs1) +
      (0.095124921972504 * rtb_Switch2_ji);

    /* Sum: '<S186>/Add1' incorporates:
     *  Product: '<S186>/Product'
     */
    rtb_Switch2_ji = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S186>/Product2' incorporates:
     *  Constant: '<S134>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_gl) +
      (5.9896845167210271E-17 * rtb_Switch2_ji);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_gl) +
      (0.095124921972503981 * rtb_Switch2_ji);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S184>/Product3' incorporates:
       *  Outport: '<S184>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S186>/Product2' incorporates:
       *  Outport: '<S186>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S18>/AND' */
  /* End of Outputs for SubSystem: '<S153>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S160>/Enabled Subsystem' */

  /* Sum: '<S160>/Add' incorporates:
   *  Delay: '<S133>/MemoryX'
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
   *  Constant: '<S252>/Constant'
   *  Logic: '<S252>/AND'
   *  MATLAB Function: '<S202>/Find closest index to curve'
   *  Product: '<S252>/Product'
   *  RelationalOperator: '<S252>/Relational Operator'
   *  RelationalOperator: '<S252>/Relational Operator1'
   *  Selector: '<S252>/Selector'
   *  Selector: '<S252>/Selector1'
   *  Selector: '<S253>/Selector'
   *  Sum: '<S252>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S205>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S208>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S210>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S205>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S23>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S200>/Action Port'
       */
      /* InitializeConditions for If: '<S23>/If' incorporates:
       *  UnitDelay: '<S200>/Unit Delay'
       *  UnitDelay: '<S201>/Unit Delay'
       *  UnitDelay: '<S203>/Unit Delay'
       *  UnitDelay: '<S203>/Unit Delay1'
       *  UnitDelay: '<S253>/Unit Delay'
       *  UnitDelay: '<S253>/Unit Delay1'
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
     *  ActionPort: '<S200>/Action Port'
     */
    /* Selector: '<S201>/Selector1' incorporates:
     *  Merge: '<S20>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S201>/Selector1' */

    /* Lookup_n-D: '<S200>/Capture Radius' incorporates:
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_Abs1 = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S201>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S201>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S205>/If' incorporates:
     *  RelationalOperator: '<S205>/ '
     *  UnitDelay: '<S201>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S208>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S210>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S205>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S208>/Action Port'
       */
      /* InitializeConditions for If: '<S205>/If' incorporates:
       *  UnitDelay: '<S208>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S205>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S205>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S208>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S208>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S211>/Action Port'
       */
      /* If: '<S208>/If' incorporates:
       *  Selector: '<S201>/Selector1'
       *  Selector: '<S208>/Selector'
       *  Selector: '<S211>/Selector'
       */
      rtb_Abs2_p = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S208>/Increment_If_Rectangle_Check' */

      /* Sum: '<S208>/Minus' incorporates:
       *  Concatenate: '<S201>/Matrix Concatenate2'
       *  Selector: '<S208>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Abs2_p;

      /* Outputs for IfAction SubSystem: '<S208>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S211>/Action Port'
       */
      /* If: '<S208>/If' incorporates:
       *  Selector: '<S201>/Selector1'
       *  Selector: '<S208>/Selector'
       *  Selector: '<S211>/Selector'
       *  Sum: '<S208>/Minus'
       */
      rtb_Product2_a = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S208>/Increment_If_Rectangle_Check' */

      /* Sum: '<S208>/Minus' incorporates:
       *  Concatenate: '<S201>/Matrix Concatenate2'
       *  Selector: '<S208>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Product2_a;

      /* Math: '<S208>/Hypot' */
      rtb_Switch2_gl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S208>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S208>/Switch' incorporates:
       *  Logic: '<S208>/AND'
       *  Logic: '<S208>/OR'
       *  RelationalOperator: '<S208>/Relational Operator'
       *  UnitDelay: '<S208>/Unit Delay'
       */
      rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch2_gl <= rtb_Abs1) && rtb_Is_Absolute_Steering));

      /* If: '<S208>/If' */
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
        /* Disable for If: '<S210>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S208>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S210>/Action Port'
         */
        /* If: '<S210>/If' incorporates:
         *  RelationalOperator: '<S210>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S210>/Is_Last_Point' incorporates:
           *  ActionPort: '<S213>/Action Port'
           */
          /* InitializeConditions for If: '<S210>/If' incorporates:
           *  UnitDelay: '<S213>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S210>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S210>/Is_Last_Point' incorporates:
           *  ActionPort: '<S213>/Action Port'
           */
          /* Switch: '<S213>/Switch' incorporates:
           *  Constant: '<S215>/Constant'
           *  Logic: '<S213>/OR'
           *  RelationalOperator: '<S215>/Compare'
           *  UnitDelay: '<S213>/Unit Delay'
           */
          rtb_AND1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) || (rtb_Switch2_gl <=
            Spline_Stop_Radius));

          /* If: '<S213>/If' */
          if (rtb_AND1) {
            /* Outputs for IfAction SubSystem: '<S213>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S216>/Action Port'
             */
            /* Merge: '<S205>/Merge2' incorporates:
             *  Constant: '<S216>/Constant'
             *  SignalConversion generated from: '<S216>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S216>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S216>/Constant1'
             */
            rtb_Compare_oq = false;

            /* End of Outputs for SubSystem: '<S213>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S213>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S217>/Action Port'
             */
            /* Merge: '<S205>/Merge2' incorporates:
             *  Constant: '<S217>/Constant'
             *  SignalConversion generated from: '<S217>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S217>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S217>/Constant1'
             */
            rtb_Compare_oq = true;

            /* End of Outputs for SubSystem: '<S213>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S213>/If' */

          /* Merge: '<S205>/Merge4' incorporates:
           *  SignalConversion: '<S213>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S213>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AND1;

          /* End of Outputs for SubSystem: '<S210>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S210>/Increment_Search' incorporates:
           *  ActionPort: '<S212>/Action Port'
           */
          /* Merge: '<S205>/Merge2' incorporates:
           *  Constant: '<S212>/Constant'
           *  SignalConversion generated from: '<S212>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S212>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S212>/Constant1'
           */
          rtb_Compare_oq = false;

          /* Merge: '<S205>/Merge4' incorporates:
           *  Constant: '<S214>/FixPt Constant'
           *  SignalConversion: '<S212>/Signal Copy'
           *  Sum: '<S214>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S210>/Increment_Search' */
        }

        /* End of If: '<S210>/If' */
        /* End of Outputs for SubSystem: '<S208>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S208>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S211>/Action Port'
         */
        /* Sum: '<S218>/FixPt Sum1' incorporates:
         *  Constant: '<S218>/FixPt Constant'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S211>/Selector1' incorporates:
         *  Selector: '<S201>/Selector1'
         */
        rtb_Switch2_g = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) - 1];

        /* Sum: '<S219>/Subtract' incorporates:
         *  Selector: '<S211>/Selector1'
         *  Sum: '<S219>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_g - rtb_Abs2_p;

        /* Selector: '<S211>/Selector1' incorporates:
         *  Selector: '<S201>/Selector1'
         */
        rtb_Subtract_b2 = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) + 9];

        /* Sum: '<S219>/Subtract' incorporates:
         *  Selector: '<S211>/Selector1'
         *  Sum: '<S219>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Subtract_b2 - rtb_Product2_a;

        /* Math: '<S219>/Hypot' */
        rtb_Switch2_ji = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S219>/Divide' */
        rtb_Switch2_gl = rtb_Minus_n[1];

        /* UnaryMinus: '<S219>/Unary Minus' */
        rtb_Add_cv = rtb_Minus_n[0];

        /* Product: '<S219>/Product' incorporates:
         *  Product: '<S219>/Divide'
         *  UnaryMinus: '<S219>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2_gl / rtb_Switch2_ji) * rtb_Abs1;
        rtb_Minus_n[1] = ((-rtb_Add_cv) / rtb_Switch2_ji) * rtb_Abs1;

        /* Sum: '<S219>/Add1' incorporates:
         *  Sum: '<S219>/Add2'
         *  Sum: '<S219>/Minus'
         */
        rtb_Add_cv = rtb_Switch2_g - rtb_Minus_n[0];

        /* Sum: '<S219>/Minus4' incorporates:
         *  Sum: '<S219>/Add2'
         *  Sum: '<S219>/Minus'
         */
        rtb_Switch2_g = (rtb_Switch2_g + rtb_Minus_n[0]) - rtb_Add_cv;

        /* Sum: '<S219>/Minus5' incorporates:
         *  Concatenate: '<S201>/Matrix Concatenate2'
         *  Sum: '<S219>/Minus'
         */
        rtb_DeadZone = rtb_Reshapey[0] - rtb_Add_cv;

        /* Sum: '<S219>/Add' incorporates:
         *  Sum: '<S219>/Add2'
         *  Sum: '<S219>/Minus1'
         */
        rtb_Switch2_gl = rtb_Abs2_p - rtb_Minus_n[0];

        /* Sum: '<S219>/Minus' incorporates:
         *  Sum: '<S219>/Minus1'
         */
        rtb_Add_cv -= rtb_Switch2_gl;

        /* DotProduct: '<S219>/Dot Product' incorporates:
         *  Concatenate: '<S201>/Matrix Concatenate2'
         *  Sum: '<S219>/Minus'
         *  Sum: '<S219>/Minus1'
         *  Sum: '<S219>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Reshapey[0] - rtb_Switch2_gl) * rtb_Add_cv;

        /* DotProduct: '<S219>/Dot Product1' incorporates:
         *  Sum: '<S219>/Minus'
         */
        rtb_Abs2_p = rtb_Add_cv * rtb_Add_cv;

        /* DotProduct: '<S219>/Dot Product2' incorporates:
         *  Sum: '<S219>/Minus4'
         *  Sum: '<S219>/Minus5'
         */
        rtb_Minus_k_idx_0 = rtb_Switch2_g * rtb_DeadZone;

        /* DotProduct: '<S219>/Dot Product3' incorporates:
         *  Sum: '<S219>/Minus4'
         */
        rtb_Init = rtb_Switch2_g * rtb_Switch2_g;

        /* Sum: '<S219>/Add1' incorporates:
         *  Sum: '<S219>/Add2'
         *  Sum: '<S219>/Minus'
         */
        rtb_Add_cv = rtb_Subtract_b2 - rtb_Minus_n[1];

        /* Sum: '<S219>/Minus4' incorporates:
         *  Sum: '<S219>/Add2'
         *  Sum: '<S219>/Minus'
         */
        rtb_Switch2_g = (rtb_Subtract_b2 + rtb_Minus_n[1]) - rtb_Add_cv;

        /* Sum: '<S219>/Minus5' incorporates:
         *  Concatenate: '<S201>/Matrix Concatenate2'
         *  Sum: '<S219>/Minus'
         */
        rtb_DeadZone = rtb_Reshapey[1] - rtb_Add_cv;

        /* Sum: '<S219>/Add' incorporates:
         *  Sum: '<S219>/Add2'
         *  Sum: '<S219>/Minus1'
         */
        rtb_Switch2_gl = rtb_Product2_a - rtb_Minus_n[1];

        /* Sum: '<S219>/Minus' incorporates:
         *  Sum: '<S219>/Minus1'
         */
        rtb_Add_cv -= rtb_Switch2_gl;

        /* DotProduct: '<S219>/Dot Product' incorporates:
         *  Concatenate: '<S201>/Matrix Concatenate2'
         *  Sum: '<S219>/Minus'
         *  Sum: '<S219>/Minus1'
         *  Sum: '<S219>/Minus5'
         */
        rtb_Switch2_ji += (rtb_Reshapey[1] - rtb_Switch2_gl) * rtb_Add_cv;

        /* RelationalOperator: '<S220>/Compare' incorporates:
         *  Constant: '<S220>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Switch2_ji >= 0.0);

        /* RelationalOperator: '<S219>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S219>/Dot Product1'
         *  Sum: '<S219>/Minus'
         */
        rtb_Compare_oq = (rtb_Switch2_ji <= ((rtb_Add_cv * rtb_Add_cv) +
          rtb_Abs2_p));

        /* DotProduct: '<S219>/Dot Product2' incorporates:
         *  Sum: '<S219>/Minus4'
         *  Sum: '<S219>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Switch2_g * rtb_DeadZone) + rtb_Minus_k_idx_0;

        /* Merge: '<S205>/Merge4' incorporates:
         *  Constant: '<S221>/Constant'
         *  DataTypeConversion: '<S211>/Data Type Conversion'
         *  DotProduct: '<S219>/Dot Product3'
         *  Logic: '<S219>/AND'
         *  RelationalOperator: '<S219>/LessThanOrEqual1'
         *  RelationalOperator: '<S221>/Compare'
         *  Sum: '<S211>/Add'
         *  Sum: '<S219>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Steering && rtb_Compare_oq) && (rtb_Switch2_ji >=
          0.0)) && (rtb_Switch2_ji <= ((rtb_Switch2_g * rtb_Switch2_g) +
          rtb_Init)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S205>/Merge2' incorporates:
         *  Constant: '<S211>/Constant2'
         *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S211>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S211>/Constant1'
         */
        rtb_Compare_oq = false;

        /* End of Outputs for SubSystem: '<S208>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S208>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S209>/Action Port'
         */
        /* Merge: '<S205>/Merge2' incorporates:
         *  Constant: '<S209>/Constant2'
         *  SignalConversion generated from: '<S209>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S209>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S209>/Constant1'
         */
        rtb_Compare_oq = false;

        /* Merge: '<S205>/Merge4' incorporates:
         *  SignalConversion generated from: '<S209>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S208>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S205>/Merge1' incorporates:
       *  Constant: '<S208>/Constant'
       *  SignalConversion generated from: '<S208>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S208>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation_g;

      /* End of Outputs for SubSystem: '<S205>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S205>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* Merge: '<S205>/Merge1' incorporates:
       *  Constant: '<S207>/Constant'
       *  SignalConversion generated from: '<S207>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S205>/Merge2' incorporates:
       *  Constant: '<S207>/Constant1'
       *  SignalConversion generated from: '<S207>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S207>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S207>/Constant2'
       */
      rtb_Compare_oq = false;

      /* Merge: '<S205>/Merge4' incorporates:
       *  SignalConversion generated from: '<S207>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S205>/Escape_Auto_Driving' */
    }

    /* End of If: '<S205>/If' */

    /* If: '<S201>/If1' */
    if (!rtb_Compare_oq) {
      /* Outputs for IfAction SubSystem: '<S201>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S206>/Action Port'
       */
      /* Bias: '<S222>/Add Constant' incorporates:
       *  Bias: '<S222>/Bias'
       *  Sum: '<S222>/Subtract'
       */
      rtb_Switch2_gl = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S222>/Selector4' incorporates:
       *  Bias: '<S222>/Bias1'
       *  Constant: '<S224>/FixPt Constant'
       *  Sum: '<S224>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S222>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S222>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S222>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S222>/Selector5' incorporates:
       *  Concatenate: '<S222>/Matrix Concatenate'
       *  Gain: '<S226>/Gain'
       *  Selector: '<S201>/Selector1'
       *  Selector: '<S222>/Selector2'
       *  Selector: '<S222>/Selector3'
       *  Sum: '<S226>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s227_iter = 0; s227_iter <= rtb_Bias1_p; s227_iter++) {
          rtb_Selector5[s227_iter + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[s227_iter + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S222>/Matrix Concatenate' incorporates:
       *  Bias: '<S222>/Add Constant1'
       *  Gain: '<S225>/Gain'
       *  Selector: '<S201>/Selector1'
       *  Selector: '<S222>/Selector'
       *  Selector: '<S222>/Selector1'
       *  Selector: '<S222>/Selector5'
       *  Sum: '<S225>/Subtract'
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

      /* Selector: '<S222>/Selector4' */
      s227_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s227_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S222>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S222>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S222>/Assignment' incorporates:
       *  Concatenate: '<S222>/Matrix Concatenate'
       *  Selector: '<S222>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s227_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S223>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S227>/While Iterator'
       */
      s227_iter = 1;
      do {
        rtb_Abs2_p = rtb_Assignment[s227_iter + 1];
        rtb_Minus_n[0] = rtb_Abs2_p - rtb_Assignment[s227_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s227_iter] - rtb_Assignment[s227_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Abs2_p - rtb_Assignment[s227_iter];
        rtb_Abs2_p = rtb_Assignment[s227_iter + 13];
        rtb_Minus_n[1] = rtb_Abs2_p - rtb_Assignment[s227_iter + 11];
        rtb_Add_cv = rtb_Assignment[s227_iter + 12];
        rtb_Add2_f[1] = rtb_Add_cv - rtb_Assignment[s227_iter + 14];
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
            rtb_Assignment[s227_iter];
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

        if (s227_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s227_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_ji = rtb_Switch2_gl - ((real_T)s227_iter);
        rtb_Num_Segments = s227_iter;
        s227_iter++;
      } while ((rtb_Switch2_ji >= 4.0) && (s227_iter <= 3));

      /* End of Outputs for SubSystem: '<S223>/Sampling_Loop' */

      /* SignalConversion generated from: '<S206>/Position_and_Curvature' incorporates:
       *  Assignment: '<S227>/Assignment'
       *  Merge: '<S201>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S201>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S201>/If Action Subsystem' incorporates:
       *  ActionPort: '<S204>/Action Port'
       */
      /* Product: '<S204>/Product' incorporates:
       *  Selector: '<S201>/Selector'
       *  Selector: '<S201>/Selector1'
       */
      rtb_Switch2_ji = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S204>/Product1' incorporates:
       *  Selector: '<S201>/Selector'
       *  Selector: '<S201>/Selector1'
       */
      rtb_Switch2_gl = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S204>/Product' incorporates:
         *  Constant: '<S204>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_ji;

        /* Product: '<S204>/Product1' incorporates:
         *  Constant: '<S204>/Constant2'
         *  Product: '<S204>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2_gl;
      }

      /* Assignment: '<S204>/Assignment' incorporates:
       *  Concatenate: '<S204>/Matrix Concatenate'
       *  Merge: '<S201>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S204>/Assignment' */

      /* SignalConversion generated from: '<S204>/Num_Segments' incorporates:
       *  Constant: '<S204>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S201>/If Action Subsystem' */
    }

    /* End of If: '<S201>/If1' */

    /* Concatenate: '<S202>/Matrix Concatenate' incorporates:
     *  Merge: '<S201>/Merge'
     *  Selector: '<S202>/Selector'
     *  Selector: '<S202>/Selector1'
     *  Selector: '<S202>/Selector3'
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

    /* End of Concatenate: '<S202>/Matrix Concatenate' */

    /* MATLAB Function: '<S202>/Distance Along Curve' incorporates:
     *  Concatenate: '<S202>/Matrix Concatenate'
     *  Selector: '<S202>/Selector4'
     *  Selector: '<S202>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s227_iter = 0; s227_iter < 149; s227_iter++) {
      /* Outputs for Iterator SubSystem: '<S223>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S227>/While Iterator'
       */
      rtb_Assignment_d[s227_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s227_iter + 1] -
         rtb_MatrixConcatenate_o[s227_iter], rtb_MatrixConcatenate_o[s227_iter +
         151] - rtb_MatrixConcatenate_o[s227_iter + 150]) +
        rtb_Assignment_d[s227_iter];

      /* End of Outputs for SubSystem: '<S223>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S202>/Distance Along Curve' */

    /* MATLAB Function: '<S202>/Find closest index to curve' incorporates:
     *  Concatenate: '<S202>/Matrix Concatenate'
     *  Selector: '<S202>/Selector4'
     *  Selector: '<S202>/Selector5'
     *  Selector: '<S253>/Selector'
     */
    for (s227_iter = 0; s227_iter < 150; s227_iter++) {
      /* Outputs for Iterator SubSystem: '<S223>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S227>/While Iterator'
       */
      distance_from_robot[s227_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s227_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s227_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S223>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s227_iter = 1;
    } else {
      s227_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s227_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s227_iter == 0) {
      rtb_Switch2_gl = distance_from_robot[0];
    } else {
      rtb_Switch2_gl = distance_from_robot[s227_iter - 1];
      for (rtb_Bias1_p = s227_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_ji = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2_gl > rtb_Switch2_ji) {
          rtb_Switch2_gl = rtb_Switch2_ji;
        }
      }
    }

    s227_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s227_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2_gl) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S253>/Selector' incorporates:
     *  Constant: '<S253>/Constant'
     *  MATLAB Function: '<S202>/Find closest index to curve'
     *  MinMax: '<S253>/Min'
     */
    rtb_Switch2_ji = rtb_Assignment_d[((int32_T)fmin(50.0, s227_iter)) - 1];

    /* If: '<S253>/If' incorporates:
     *  RelationalOperator: '<S253>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S253>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S256>/Action Port'
       */
      /* SignalConversion generated from: '<S256>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S258>/FixPt Sum1' incorporates:
       *  Constant: '<S258>/FixPt Constant'
       */
      rtb_Switch2_gl = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S256>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S20>/Merge8'
       *  Selector: '<S256>/Selector11'
       *  Selector: '<S256>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S256>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S20>/Merge8'
       *  Selector: '<S256>/Selector1'
       *  Selector: '<S256>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S256>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S256>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2_gl), &rtb_Minus_n[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S256>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S256>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S256>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S253>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S253>/Latch' incorporates:
       *  ActionPort: '<S257>/Action Port'
       */
      /* SignalConversion generated from: '<S257>/In1' incorporates:
       *  UnitDelay: '<S253>/Unit Delay1'
       */
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S257>/In2' incorporates:
       *  UnitDelay: '<S253>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S253>/Latch' */
    }

    /* End of If: '<S253>/If' */

    /* MinMax: '<S200>/Min' incorporates:
     *  Lookup_n-D: '<S200>/Lookahead Distance'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_Abs1 = fmin(rtb_Abs1, look1_binlcpw
                    (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                     Code_Gen_Model_ConstP.pooled9,
                     Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S202>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S252>/While Iterator'
     */
    s252_iter = 1U;
    rtb_Is_Absolute_Translation_g = true;
    while (rtb_Is_Absolute_Translation_g && (s252_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S202>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S252>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s252_iter;
      rtb_Is_Absolute_Translation_g =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s227_iter - 1] + rtb_Abs1)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s252_iter++;
    }

    /* End of Outputs for SubSystem: '<S202>/Find first index that meets distance target' */

    /* Switch: '<S255>/Switch' incorporates:
     *  Concatenate: '<S202>/Matrix Concatenate'
     *  Constant: '<S202>/Constant'
     *  Constant: '<S252>/Constant'
     *  Constant: '<S255>/Constant'
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S255>/Constant2'
     *  Constant: '<S255>/Constant3'
     *  Logic: '<S252>/AND'
     *  MATLAB Function: '<S202>/Find closest index to curve'
     *  Math: '<S255>/Hypot'
     *  Merge: '<S20>/Merge8'
     *  MinMax: '<S255>/Max'
     *  MinMax: '<S255>/Min'
     *  MinMax: '<S255>/Min1'
     *  Product: '<S252>/Product'
     *  Product: '<S255>/Divide'
     *  Product: '<S255>/Product'
     *  Product: '<S255>/Product1'
     *  RelationalOperator: '<S202>/Relational Operator'
     *  RelationalOperator: '<S252>/Relational Operator'
     *  RelationalOperator: '<S252>/Relational Operator1'
     *  Selector: '<S202>/Selector10'
     *  Selector: '<S202>/Selector7'
     *  Selector: '<S202>/Selector8'
     *  Selector: '<S202>/Selector9'
     *  Selector: '<S252>/Selector'
     *  Selector: '<S252>/Selector1'
     *  Selector: '<S253>/Selector'
     *  Sqrt: '<S255>/Sqrt'
     *  Sum: '<S202>/Subtract'
     *  Sum: '<S252>/Add'
     *  Sum: '<S255>/Subtract'
     *  Sum: '<S255>/Subtract1'
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

    /* End of Switch: '<S255>/Switch' */

    /* Logic: '<S203>/OR' */
    rtb_Compare_oq = (rtb_Is_Absolute_Steering ||
                      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S203>/Switch1' incorporates:
     *  Switch: '<S203>/Switch'
     *  UnitDelay: '<S203>/Unit Delay'
     */
    if (rtb_Compare_oq) {
      /* Merge: '<S23>/Merge2' incorporates:
       *  Constant: '<S203>/Constant3'
       *  SignalConversion: '<S203>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S23>/Merge2' incorporates:
       *  SignalConversion: '<S203>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Abs1;
      rtb_Switch2_ji = rtb_Merge1;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Merge: '<S23>/Merge' incorporates:
     *  SignalConversion: '<S203>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch2_ji;

    /* Selector: '<S202>/Selector6' incorporates:
     *  Concatenate: '<S202>/Matrix Concatenate'
     *  Selector: '<S202>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S202>/Selector2' incorporates:
     *  Concatenate: '<S202>/Matrix Concatenate'
     *  Selector: '<S202>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S203>/Switch2' incorporates:
     *  Sum: '<S259>/Subtract'
     *  Sum: '<S259>/Subtract1'
     *  Trigonometry: '<S259>/Atan2'
     *  UnitDelay: '<S203>/Unit Delay1'
     */
    if (rtb_Compare_oq) {
      rtb_Product2_a = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Product2_a = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S203>/Switch2' */

    /* Merge: '<S23>/Merge3' incorporates:
     *  SignalConversion: '<S203>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Product2_a;

    /* Merge: '<S23>/Merge7' incorporates:
     *  SignalConversion: '<S200>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Steering;

    /* Merge: '<S23>/Merge1' incorporates:
     *  Constant: '<S203>/Constant2'
     *  SignalConversion generated from: '<S200>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S23>/Merge4' incorporates:
     *  Constant: '<S203>/Constant5'
     *  SignalConversion generated from: '<S200>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S23>/Merge5' incorporates:
     *  Constant: '<S203>/Constant6'
     *  SignalConversion generated from: '<S200>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S23>/Merge8' incorporates:
     *  SignalConversion generated from: '<S200>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S201>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Abs1;

    /* Update for UnitDelay: '<S253>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S253>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S203>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Product2_a;

    /* End of Outputs for SubSystem: '<S23>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/Pass Through' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */
    /* Merge: '<S23>/Merge7' incorporates:
     *  Constant: '<S199>/Constant'
     *  SignalConversion generated from: '<S199>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S23>/Merge' incorporates:
     *  SignalConversion generated from: '<S199>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S23>/Merge1' incorporates:
     *  SignalConversion generated from: '<S199>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S23>/Merge2' incorporates:
     *  SignalConversion generated from: '<S199>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S23>/Merge3' incorporates:
     *  SignalConversion generated from: '<S199>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S23>/Merge4' incorporates:
     *  SignalConversion generated from: '<S199>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S23>/Merge5' incorporates:
     *  SignalConversion generated from: '<S199>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S23>/Merge8' incorporates:
     *  SignalConversion generated from: '<S199>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S23>/Pass Through' */
  }

  /* End of If: '<S23>/If' */

  /* Signum: '<S353>/Sign2' incorporates:
   *  UnitDelay: '<S353>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S353>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S353>/Product1' incorporates:
   *  Signum: '<S353>/Sign1'
   *  Signum: '<S353>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S353>/Switch' incorporates:
   *  Constant: '<S353>/Constant'
   *  Constant: '<S358>/Constant'
   *  Constant: '<S359>/Constant'
   *  Logic: '<S353>/or'
   *  Product: '<S353>/Product1'
   *  RelationalOperator: '<S358>/Compare'
   *  RelationalOperator: '<S359>/Compare'
   *  UnitDelay: '<S353>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S353>/Switch' */

  /* Switch: '<S364>/Init' incorporates:
   *  UnitDelay: '<S364>/FixPt Unit Delay1'
   *  UnitDelay: '<S364>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S364>/Init' */

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_g > 0.0);

  /* Abs: '<S353>/Abs' incorporates:
   *  Sum: '<S353>/Subtract'
   *  UnitDelay: '<S353>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S353>/Switch5' incorporates:
   *  Constant: '<S353>/Constant1'
   *  Switch: '<S353>/Switch1'
   *  UnaryMinus: '<S353>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S353>/Constant4'
     *  Constant: '<S353>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S353>/Constant2'
     *  Constant: '<S353>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S353>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S353>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S353>/Constant10'
     *  Constant: '<S353>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S353>/Constant7'
     *  Constant: '<S353>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S353>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S353>/Lookup Table Dynamic1'
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

    /* Switch: '<S353>/Switch3' incorporates:
     *  Constant: '<S353>/Constant1'
     *  Constant: '<S353>/Constant3'
     *  UnaryMinus: '<S353>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S353>/Switch3' */
  }

  /* End of Switch: '<S353>/Switch5' */

  /* Product: '<S353>/Product' incorporates:
   *  Switch: '<S353>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S362>/Sum1' */
  rtb_Abs1 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S363>/Switch2' incorporates:
   *  RelationalOperator: '<S363>/LowerRelop1'
   */
  if (!(rtb_Abs1 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S353>/Switch2' incorporates:
     *  Constant: '<S353>/Constant1'
     *  Switch: '<S353>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S353>/Switch4' incorporates:
       *  Constant: '<S353>/Constant1'
       */
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S353>/Switch4' incorporates:
       *  Constant: '<S353>/Constant3'
       *  UnaryMinus: '<S353>/Unary Minus1'
       */
      rtb_Switch2_gl = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S353>/Switch2' */

    /* Product: '<S353>/Product2' */
    rtb_Switch2_gl *= rtb_Merge1;

    /* Switch: '<S363>/Switch' incorporates:
     *  RelationalOperator: '<S363>/UpperRelop'
     */
    if (rtb_Abs1 < rtb_Switch2_gl) {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    } else {
      rtb_Optimized_Module_Angle = rtb_Abs1;
    }

    /* End of Switch: '<S363>/Switch' */
  }

  /* End of Switch: '<S363>/Switch2' */

  /* Sum: '<S362>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S356>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S356>/Switch' incorporates:
     *  Constant: '<S388>/Constant3'
     *  Constant: '<S388>/Constant4'
     *  Math: '<S388>/Math Function'
     *  Sum: '<S356>/Subtract'
     *  Sum: '<S388>/Add1'
     *  Sum: '<S388>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S356>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S356>/Switch' */

  /* Sum: '<S384>/Add1' incorporates:
   *  Constant: '<S384>/Constant3'
   *  Constant: '<S384>/Constant4'
   *  Math: '<S384>/Math Function'
   *  Sum: '<S383>/Sum'
   *  Sum: '<S384>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S386>/Sum1' incorporates:
   *  Constant: '<S383>/Constant2'
   *  Product: '<S386>/Product'
   *  Sum: '<S386>/Sum'
   *  UnitDelay: '<S386>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S383>/Product' incorporates:
   *  Constant: '<S383>/Constant3'
   */
  rtb_Abs1 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S385>/Diff' incorporates:
   *  UnitDelay: '<S385>/UD'
   *
   * Block description for '<S385>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S385>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Abs1 - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S383>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S383>/Add' incorporates:
   *  Gain: '<S383>/Gain1'
   *  Saturate: '<S383>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S383>/Subtract' incorporates:
   *  Constant: '<S383>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S383>/Sum2' incorporates:
   *  Gain: '<S383>/Gain2'
   *  UnitDelay: '<S383>/Unit Delay'
   */
  rtb_Switch2_gl = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S387>/Switch2' incorporates:
   *  RelationalOperator: '<S387>/LowerRelop1'
   */
  if (!(rtb_Switch2_gl > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S383>/Subtract1' incorporates:
     *  Constant: '<S383>/Constant1'
     */
    rtb_Product2_a = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S387>/Switch' incorporates:
     *  RelationalOperator: '<S387>/UpperRelop'
     */
    if (rtb_Switch2_gl < rtb_Product2_a) {
      rtb_Optimized_Module_Angle = rtb_Product2_a;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    }

    /* End of Switch: '<S387>/Switch' */
  }

  /* End of Switch: '<S387>/Switch2' */

  /* Saturate: '<S383>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2_gl = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S383>/Saturation1' */

  /* Sum: '<S383>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Switch2_gl;

  /* Saturate: '<S383>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S383>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S383>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S383>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S383>/Saturation2' */

  /* Switch: '<S367>/Switch' incorporates:
   *  Abs: '<S367>/Abs'
   *  Constant: '<S367>/Constant'
   *  Constant: '<S382>/Constant'
   *  RelationalOperator: '<S382>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S367>/Switch' */

  /* Signum: '<S366>/Sign2' incorporates:
   *  UnitDelay: '<S366>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S366>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Init > 0.0);
  }

  /* Product: '<S366>/Product1' incorporates:
   *  Signum: '<S366>/Sign1'
   *  Signum: '<S366>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S366>/Switch' incorporates:
   *  Constant: '<S366>/Constant'
   *  Constant: '<S375>/Constant'
   *  Constant: '<S376>/Constant'
   *  Logic: '<S366>/or'
   *  Product: '<S366>/Product1'
   *  RelationalOperator: '<S375>/Compare'
   *  RelationalOperator: '<S376>/Compare'
   *  UnitDelay: '<S366>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S366>/Switch' */

  /* Switch: '<S381>/Init' incorporates:
   *  UnitDelay: '<S381>/FixPt Unit Delay1'
   *  UnitDelay: '<S381>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Product2_a = rtb_uDLookupTable_l;
  } else {
    rtb_Product2_a = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S381>/Init' */

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S378>/Compare' incorporates:
   *  Constant: '<S378>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S366>/Abs' incorporates:
   *  Sum: '<S366>/Subtract'
   *  UnitDelay: '<S366>/Unit Delay'
   */
  rtb_Subtract_b2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Init);

  /* Switch: '<S366>/Switch1' incorporates:
   *  Constant: '<S366>/Constant1'
   *  Switch: '<S366>/Switch3'
   *  Switch: '<S366>/Switch5'
   *  UnaryMinus: '<S366>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S366>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S366>/Constant1'
     *  Constant: '<S366>/Constant4'
     *  Constant: '<S366>/Constant6'
     *  UnaryMinus: '<S366>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S366>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S366>/Constant2'
     *  Constant: '<S366>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S366>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S366>/Lookup Table Dynamic'
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
      /* Switch: '<S366>/Switch3' incorporates:
       *  Constant: '<S366>/Constant3'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S366>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S366>/Constant1'
     *  Constant: '<S366>/Constant10'
     *  Constant: '<S366>/Constant8'
     *  UnaryMinus: '<S366>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S366>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S366>/Constant7'
     *  Constant: '<S366>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S366>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S366>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S366>/Switch1' */

  /* Product: '<S366>/Product' */
  rtb_Switch2_ji *= rtb_Subtract_b2;

  /* Sum: '<S379>/Sum1' */
  rtb_Abs2_p = rtb_uDLookupTable_l - rtb_Product2_a;

  /* Switch: '<S380>/Switch2' incorporates:
   *  RelationalOperator: '<S380>/LowerRelop1'
   */
  if (!(rtb_Abs2_p > rtb_Switch2_ji)) {
    /* Switch: '<S366>/Switch2' incorporates:
     *  Constant: '<S366>/Constant1'
     *  Switch: '<S366>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S366>/Switch4' incorporates:
       *  Constant: '<S366>/Constant1'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S366>/Switch4' incorporates:
       *  Constant: '<S366>/Constant3'
       *  UnaryMinus: '<S366>/Unary Minus1'
       */
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S366>/Switch2' */

    /* Product: '<S366>/Product2' */
    rtb_Switch2_ji *= rtb_Subtract_b2;

    /* Switch: '<S380>/Switch' incorporates:
     *  RelationalOperator: '<S380>/UpperRelop'
     */
    if (!(rtb_Abs2_p < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Abs2_p;
    }

    /* End of Switch: '<S380>/Switch' */
  }

  /* End of Switch: '<S380>/Switch2' */

  /* Sum: '<S379>/Sum' */
  rtb_Switch2_ji += rtb_Product2_a;

  /* Signum: '<S365>/Sign2' incorporates:
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S365>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
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
   *  Constant: '<S368>/Constant'
   *  Constant: '<S369>/Constant'
   *  Logic: '<S365>/or'
   *  Product: '<S365>/Product1'
   *  RelationalOperator: '<S368>/Compare'
   *  RelationalOperator: '<S369>/Compare'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S365>/Switch' */

  /* Switch: '<S374>/Init' incorporates:
   *  UnitDelay: '<S374>/FixPt Unit Delay1'
   *  UnitDelay: '<S374>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S374>/Init' */

  /* RelationalOperator: '<S370>/Compare' incorporates:
   *  Constant: '<S370>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S371>/Compare' incorporates:
   *  Constant: '<S371>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S365>/Abs' incorporates:
   *  Sum: '<S365>/Subtract'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  rtb_Subtract_b2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S365>/Switch5' incorporates:
   *  Constant: '<S365>/Constant1'
   *  Switch: '<S365>/Switch1'
   *  UnaryMinus: '<S365>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant4'
     *  Constant: '<S365>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant2'
     *  Constant: '<S365>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant10'
     *  Constant: '<S365>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant7'
     *  Constant: '<S365>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic1'
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

    /* Switch: '<S365>/Switch3' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant3'
     *  UnaryMinus: '<S365>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S365>/Switch3' */
  }

  /* End of Switch: '<S365>/Switch5' */

  /* Product: '<S365>/Product' incorporates:
   *  Switch: '<S365>/Switch1'
   */
  rtb_Product2_a = rtb_Minus_k_idx_0 * rtb_Subtract_b2;

  /* Sum: '<S372>/Sum1' */
  rtb_Abs2_p = rtb_Optimized_Module_Angle - rtb_uDLookupTable_l;

  /* Switch: '<S373>/Switch2' incorporates:
   *  RelationalOperator: '<S373>/LowerRelop1'
   */
  if (!(rtb_Abs2_p > rtb_Product2_a)) {
    /* Switch: '<S365>/Switch2' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant3'
     *  Switch: '<S365>/Switch4'
     *  UnaryMinus: '<S365>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S365>/Product2' incorporates:
     *  Switch: '<S365>/Switch2'
     */
    rtb_Product2_a = rtb_Minus_k_idx_0 * rtb_Subtract_b2;

    /* Switch: '<S373>/Switch' incorporates:
     *  RelationalOperator: '<S373>/UpperRelop'
     */
    if (!(rtb_Abs2_p < rtb_Product2_a)) {
      rtb_Product2_a = rtb_Abs2_p;
    }

    /* End of Switch: '<S373>/Switch' */
  }

  /* End of Switch: '<S373>/Switch2' */

  /* Sum: '<S372>/Sum' */
  rtb_Product2_a += rtb_uDLookupTable_l;

  /* Switch: '<S355>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S355>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S355>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Product2_a;
  }

  /* End of Switch: '<S355>/Switch' */

  /* Fcn: '<S396>/r->x' incorporates:
   *  Fcn: '<S401>/r->x'
   *  Fcn: '<S406>/r->x'
   *  Fcn: '<S411>/r->x'
   */
  rtb_Abs2_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S390>/Add' incorporates:
   *  Fcn: '<S396>/r->x'
   *  Fcn: '<S397>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Abs2_p;

  /* Fcn: '<S396>/theta->y' incorporates:
   *  Fcn: '<S401>/theta->y'
   *  Fcn: '<S406>/theta->y'
   *  Fcn: '<S411>/theta->y'
   */
  rtb_Subtract_b2 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S390>/Add' incorporates:
   *  Fcn: '<S396>/theta->y'
   *  Fcn: '<S397>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Subtract_b2;

  /* Sum: '<S391>/Add' incorporates:
   *  Fcn: '<S402>/r->x'
   *  Fcn: '<S402>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Abs2_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Subtract_b2;

  /* Sum: '<S392>/Add' incorporates:
   *  Fcn: '<S407>/r->x'
   *  Fcn: '<S407>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Abs2_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Subtract_b2;

  /* Sum: '<S393>/Add' incorporates:
   *  Fcn: '<S412>/r->x'
   *  Fcn: '<S412>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Abs2_p;
  rtb_Modulation_Drv = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                        (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Subtract_b2;

  /* Fcn: '<S410>/x->r' */
  rtb_Add_cv = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Modulation_Drv);

  /* RelationalOperator: '<S413>/Compare' incorporates:
   *  Constant: '<S413>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_cv == 0.0);

  /* Switch: '<S409>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S409>/Switch1' incorporates:
     *  Constant: '<S409>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S409>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Add_cv;
  }

  /* End of Switch: '<S409>/Switch1' */

  /* Fcn: '<S395>/x->r' */
  rtb_Add_cv = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S398>/Compare' incorporates:
   *  Constant: '<S398>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_cv == 0.0);

  /* Switch: '<S394>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S394>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S394>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Add_cv;
  }

  /* End of Switch: '<S394>/Switch1' */

  /* Fcn: '<S400>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S403>/Compare' incorporates:
   *  Constant: '<S403>/Constant'
   */
  rtb_Compare_oq = (rtb_Switch2_g == 0.0);

  /* Switch: '<S399>/Switch1' */
  if (rtb_Compare_oq) {
    /* Switch: '<S399>/Switch1' incorporates:
     *  Constant: '<S399>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S399>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S399>/Switch1' */

  /* Fcn: '<S405>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S408>/Compare' incorporates:
   *  Constant: '<S408>/Constant'
   */
  rtb_AND1 = (rtb_Init == 0.0);

  /* Switch: '<S404>/Switch1' */
  if (rtb_AND1) {
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S404>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S404>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S404>/Switch1' */

  /* Product: '<S389>/Divide' incorporates:
   *  Abs: '<S389>/Abs'
   *  Abs: '<S389>/Abs1'
   *  Abs: '<S389>/Abs2'
   *  Abs: '<S389>/Abs3'
   *  Constant: '<S389>/Constant'
   *  MinMax: '<S389>/Max'
   */
  rtb_Add_cv = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S389>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S409>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S409>/Switch' incorporates:
     *  Fcn: '<S410>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Modulation_Drv,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S409>/Switch' */

  /* Trigonometry: '<S345>/Cos4' incorporates:
   *  Switch: '<S334>/Angle_Switch'
   *  Trigonometry: '<S344>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S345>/Sin5' incorporates:
   *  UnaryMinus: '<S343>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S345>/Sin4' incorporates:
   *  Switch: '<S334>/Angle_Switch'
   *  Trigonometry: '<S344>/Sin4'
   */
  rtb_Subtract_b2 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S345>/Cos5' incorporates:
   *  UnaryMinus: '<S343>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S345>/Subtract1' incorporates:
   *  Product: '<S345>/Product2'
   *  Product: '<S345>/Product3'
   *  Trigonometry: '<S345>/Cos4'
   *  Trigonometry: '<S345>/Sin4'
   */
  rtb_Abs2_p = (rtb_Subtract_lm * rtb_Optimized_Module_Angle) + (rtb_Subtract_b2
    * rtb_Init);

  /* Sum: '<S345>/Subtract' incorporates:
   *  Product: '<S345>/Product'
   *  Product: '<S345>/Product1'
   *  Trigonometry: '<S345>/Cos4'
   *  Trigonometry: '<S345>/Sin4'
   */
  rtb_DeadZone = (rtb_Subtract_lm * rtb_Init) - (rtb_Subtract_b2 *
    rtb_Optimized_Module_Angle);

  /* Math: '<S345>/Hypot' */
  rtb_Modulation_Drv = rt_hypotd_snf(rtb_DeadZone, rtb_Abs2_p);

  /* Switch: '<S345>/Switch' incorporates:
   *  Constant: '<S345>/Constant'
   *  Constant: '<S345>/Constant1'
   *  Constant: '<S346>/Constant'
   *  Product: '<S345>/Divide'
   *  Product: '<S345>/Divide1'
   *  RelationalOperator: '<S346>/Compare'
   *  Switch: '<S345>/Switch1'
   */
  if (rtb_Modulation_Drv > 1.0E-6) {
    rtb_Switch2_g = rtb_Abs2_p / rtb_Modulation_Drv;
    rtb_Init = rtb_DeadZone / rtb_Modulation_Drv;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S345>/Switch' */

  /* Switch: '<S334>/Speed_Switch' incorporates:
   *  Abs: '<S334>/Abs'
   *  Constant: '<S342>/Constant'
   *  RelationalOperator: '<S342>/Compare'
   *  Switch: '<S334>/Angle_Switch'
   *  Trigonometry: '<S344>/Atan1'
   *  Trigonometry: '<S345>/Atan1'
   *  UnaryMinus: '<S334>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S344>/Subtract1' incorporates:
     *  Product: '<S344>/Product2'
     *  Product: '<S344>/Product3'
     *  UnaryMinus: '<S334>/Unary Minus'
     */
    rtb_Abs2_p = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract_b2 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S344>/Subtract' incorporates:
     *  Product: '<S344>/Product'
     *  Product: '<S344>/Product1'
     */
    rtb_DeadZone = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract_b2 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S344>/Hypot' */
    rtb_Subtract_b2 = rt_hypotd_snf(rtb_DeadZone, rtb_Abs2_p);

    /* Switch: '<S344>/Switch1' incorporates:
     *  Constant: '<S344>/Constant'
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S347>/Constant'
     *  Product: '<S344>/Divide'
     *  Product: '<S344>/Divide1'
     *  RelationalOperator: '<S347>/Compare'
     *  Switch: '<S344>/Switch'
     */
    if (rtb_Subtract_b2 > 1.0E-6) {
      rtb_DeadZone /= rtb_Subtract_b2;
      rtb_Subtract_b2 = rtb_Abs2_p / rtb_Subtract_b2;
    } else {
      rtb_DeadZone = 1.0;
      rtb_Subtract_b2 = 0.0;
    }

    /* End of Switch: '<S344>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Subtract_b2, rtb_DeadZone);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S337>/Product2' incorporates:
   *  Constant: '<S337>/Constant'
   *  Switch: '<S334>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S332>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S332>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S335>/Add' incorporates:
   *  Sum: '<S336>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S267>/Product' incorporates:
   *  Abs: '<S332>/Abs'
   *  Abs: '<S335>/Abs'
   *  Constant: '<S338>/Constant'
   *  Constant: '<S348>/Constant3'
   *  Constant: '<S348>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S332>/OR'
   *  Lookup_n-D: '<S335>/1-D Lookup Table'
   *  Math: '<S348>/Math Function'
   *  RelationalOperator: '<S332>/Equal1'
   *  RelationalOperator: '<S338>/Compare'
   *  Signum: '<S332>/Sign'
   *  Signum: '<S332>/Sign1'
   *  Sum: '<S335>/Add'
   *  Sum: '<S348>/Add1'
   *  Sum: '<S348>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled34, Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S333>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_DeadZone = rtb_Switch2_g - Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S340>/Sum1' incorporates:
   *  Constant: '<S333>/Constant2'
   *  Product: '<S340>/Product'
   *  Sum: '<S340>/Sum'
   *  UnitDelay: '<S340>/Unit Delay1'
   */
  rtb_Subtract_b2 = ((rtb_DeadZone - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                     Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S333>/Product' incorporates:
   *  Constant: '<S333>/Constant3'
   */
  rtb_Abs2_p = rtb_Subtract_b2 * Drive_Motor_Control_D;

  /* Sum: '<S339>/Diff' incorporates:
   *  UnitDelay: '<S339>/UD'
   *
   * Block description for '<S339>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S339>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Abs2_p - Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S333>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S333>/Add' incorporates:
   *  Gain: '<S333>/Gain'
   *  Gain: '<S333>/Gain1'
   *  Saturate: '<S333>/Saturation'
   */
  rtb_Modulation_Drv = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                        (Drive_Motor_Control_P * rtb_DeadZone)) +
    rtb_Minus_k_idx_0;

  /* Switch: '<S333>/Switch' incorporates:
   *  Constant: '<S333>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S333>/Sum2' incorporates:
     *  Gain: '<S333>/Gain2'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    rtb_DeadZone = (Drive_Motor_Control_I * rtb_DeadZone) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S333>/Subtract' incorporates:
     *  Constant: '<S333>/Constant'
     */
    rtb_Add_h5 = 1.0 - rtb_Modulation_Drv;

    /* Switch: '<S341>/Switch2' incorporates:
     *  Constant: '<S333>/Constant'
     *  RelationalOperator: '<S341>/LowerRelop1'
     *  Sum: '<S333>/Subtract'
     */
    if (!(rtb_DeadZone > (1.0 - rtb_Modulation_Drv))) {
      /* Sum: '<S333>/Subtract1' incorporates:
       *  Constant: '<S333>/Constant1'
       */
      rtb_Add_h5 = -1.0 - rtb_Modulation_Drv;

      /* Switch: '<S341>/Switch' incorporates:
       *  Constant: '<S333>/Constant1'
       *  RelationalOperator: '<S341>/UpperRelop'
       *  Sum: '<S333>/Subtract1'
       */
      if (!(rtb_DeadZone < (-1.0 - rtb_Modulation_Drv))) {
        rtb_Add_h5 = rtb_DeadZone;
      }

      /* End of Switch: '<S341>/Switch' */
    }

    /* End of Switch: '<S341>/Switch2' */

    /* Saturate: '<S333>/Saturation1' */
    if (rtb_Add_h5 > Drive_Motor_Control_I_UL) {
      rtb_DeadZone = Drive_Motor_Control_I_UL;
    } else if (rtb_Add_h5 < Drive_Motor_Control_I_LL) {
      rtb_DeadZone = Drive_Motor_Control_I_LL;
    } else {
      rtb_DeadZone = rtb_Add_h5;
    }

    /* End of Saturate: '<S333>/Saturation1' */
  } else {
    rtb_DeadZone = 0.0;
  }

  /* End of Switch: '<S333>/Switch' */

  /* Sum: '<S333>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Modulation_Drv + rtb_DeadZone;

  /* Saturate: '<S333>/Saturation2' */
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

  /* End of Saturate: '<S333>/Saturation2' */

  /* Switch: '<S394>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S394>/Switch' incorporates:
     *  Fcn: '<S395>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S394>/Switch' */

  /* Trigonometry: '<S282>/Cos4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Sin5' incorporates:
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S282>/Sin4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Cos5' incorporates:
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S282>/Subtract1' incorporates:
   *  Product: '<S282>/Product2'
   *  Product: '<S282>/Product3'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Subtract_lm * rtb_uDLookupTable_l) +
    (rtb_Integral_hv * rtb_Init);

  /* Sum: '<S282>/Subtract' incorporates:
   *  Product: '<S282>/Product'
   *  Product: '<S282>/Product1'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Add_h5 = (rtb_Subtract_lm * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S282>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Add_h5, rtb_Modulation_Drv);

  /* Switch: '<S282>/Switch' incorporates:
   *  Constant: '<S282>/Constant'
   *  Constant: '<S282>/Constant1'
   *  Constant: '<S283>/Constant'
   *  Product: '<S282>/Divide'
   *  Product: '<S282>/Divide1'
   *  RelationalOperator: '<S283>/Compare'
   *  Switch: '<S282>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_Modulation_Drv / rtb_Hypot_g5;
    rtb_Init = rtb_Add_h5 / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S282>/Switch' */

  /* Product: '<S389>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S271>/Speed_Switch' incorporates:
   *  Abs: '<S271>/Abs'
   *  Constant: '<S279>/Constant'
   *  RelationalOperator: '<S279>/Compare'
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Atan1'
   *  Trigonometry: '<S282>/Atan1'
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S281>/Subtract1' incorporates:
     *  Product: '<S281>/Product2'
     *  Product: '<S281>/Product3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    rtb_Modulation_Drv = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S281>/Subtract' incorporates:
     *  Product: '<S281>/Product'
     *  Product: '<S281>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S281>/Hypot' */
    rtb_Add_h5 = rt_hypotd_snf(rtb_Hypot_g5, rtb_Modulation_Drv);

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Constant'
     *  Constant: '<S281>/Constant1'
     *  Constant: '<S284>/Constant'
     *  Product: '<S281>/Divide'
     *  Product: '<S281>/Divide1'
     *  RelationalOperator: '<S284>/Compare'
     *  Switch: '<S281>/Switch'
     */
    if (rtb_Add_h5 > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Add_h5;
      rtb_Modulation_Drv /= rtb_Add_h5;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Modulation_Drv = 0.0;
    }

    /* End of Switch: '<S281>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Modulation_Drv, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S274>/Product2' incorporates:
   *  Constant: '<S274>/Constant'
   *  Switch: '<S271>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S269>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S269>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Sum: '<S273>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S264>/Product' incorporates:
   *  Abs: '<S269>/Abs'
   *  Abs: '<S272>/Abs'
   *  Constant: '<S275>/Constant'
   *  Constant: '<S285>/Constant3'
   *  Constant: '<S285>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S269>/OR'
   *  Lookup_n-D: '<S272>/1-D Lookup Table'
   *  Math: '<S285>/Math Function'
   *  RelationalOperator: '<S269>/Equal1'
   *  RelationalOperator: '<S275>/Compare'
   *  Signum: '<S269>/Sign'
   *  Signum: '<S269>/Sign1'
   *  Sum: '<S272>/Add'
   *  Sum: '<S285>/Add1'
   *  Sum: '<S285>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S270>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S277>/Sum1' incorporates:
   *  Constant: '<S270>/Constant2'
   *  Product: '<S277>/Product'
   *  Sum: '<S277>/Sum'
   *  UnitDelay: '<S277>/Unit Delay1'
   */
  rtb_Modulation_Drv = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                        Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S270>/Product' incorporates:
   *  Constant: '<S270>/Constant3'
   */
  rtb_Add_h5 = rtb_Modulation_Drv * Drive_Motor_Control_D;

  /* Sum: '<S276>/Diff' incorporates:
   *  UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Add_h5 - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S270>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S270>/Add' incorporates:
   *  Gain: '<S270>/Gain'
   *  Gain: '<S270>/Gain1'
   *  Saturate: '<S270>/Saturation'
   */
  rtb_Add_p4 = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S270>/Switch' incorporates:
   *  Constant: '<S270>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S270>/Sum2' incorporates:
     *  Gain: '<S270>/Gain2'
     *  UnitDelay: '<S270>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S270>/Subtract' incorporates:
     *  Constant: '<S270>/Constant'
     */
    rtb_Switch2_m = 1.0 - rtb_Add_p4;

    /* Switch: '<S278>/Switch2' incorporates:
     *  Constant: '<S270>/Constant'
     *  RelationalOperator: '<S278>/LowerRelop1'
     *  Sum: '<S270>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_p4))) {
      /* Sum: '<S270>/Subtract1' incorporates:
       *  Constant: '<S270>/Constant1'
       */
      rtb_Switch2_m = -1.0 - rtb_Add_p4;

      /* Switch: '<S278>/Switch' incorporates:
       *  Constant: '<S270>/Constant1'
       *  RelationalOperator: '<S278>/UpperRelop'
       *  Sum: '<S270>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_p4))) {
        rtb_Switch2_m = rtb_Hypot_g5;
      }

      /* End of Switch: '<S278>/Switch' */
    }

    /* End of Switch: '<S278>/Switch2' */

    /* Saturate: '<S270>/Saturation1' */
    if (rtb_Switch2_m > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_m < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_m;
    }

    /* End of Saturate: '<S270>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S270>/Switch' */

  /* Sum: '<S270>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_p4 + rtb_Hypot_g5;

  /* Saturate: '<S270>/Saturation2' */
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

  /* End of Saturate: '<S270>/Saturation2' */

  /* Sum: '<S286>/Add1' incorporates:
   *  Constant: '<S286>/Constant3'
   *  Constant: '<S286>/Constant4'
   *  Math: '<S286>/Math Function'
   *  Sum: '<S286>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S288>/Sum1' incorporates:
   *  Constant: '<S273>/Constant2'
   *  Product: '<S288>/Product'
   *  Sum: '<S288>/Sum'
   *  UnitDelay: '<S288>/Unit Delay1'
   */
  rtb_Add_p4 = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S273>/Product' incorporates:
   *  Constant: '<S273>/Constant3'
   */
  rtb_Switch2_m = rtb_Add_p4 * Steering_Motor_Control_D;

  /* Sum: '<S287>/Diff' incorporates:
   *  UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_m - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S273>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S273>/Add' incorporates:
   *  Gain: '<S273>/Gain1'
   *  Saturate: '<S273>/Saturation'
   */
  rtb_Add_kl = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S273>/Subtract' incorporates:
   *  Constant: '<S273>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_kl;

  /* Sum: '<S273>/Sum2' incorporates:
   *  Gain: '<S273>/Gain2'
   *  UnitDelay: '<S273>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S289>/Switch2' incorporates:
   *  RelationalOperator: '<S289>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S289>/Switch' incorporates:
     *  Constant: '<S273>/Constant1'
     *  RelationalOperator: '<S289>/UpperRelop'
     *  Sum: '<S273>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_kl)) {
      rtb_Init = -1.0 - rtb_Add_kl;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S289>/Switch' */
  }

  /* End of Switch: '<S289>/Switch2' */

  /* Saturate: '<S273>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S273>/Saturation1' */

  /* Sum: '<S273>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_kl + rtb_Sum2_e;

  /* Saturate: '<S273>/Saturation2' */
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

  /* End of Saturate: '<S273>/Saturation2' */

  /* Switch: '<S399>/Switch' */
  if (!rtb_Compare_oq) {
    /* Switch: '<S399>/Switch' incorporates:
     *  Fcn: '<S400>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S399>/Switch' */

  /* Trigonometry: '<S303>/Cos4' incorporates:
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S303>/Sin5' incorporates:
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S303>/Sin4' incorporates:
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S303>/Cos5' incorporates:
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S303>/Subtract1' incorporates:
   *  Product: '<S303>/Product2'
   *  Product: '<S303>/Product3'
   *  Trigonometry: '<S303>/Cos4'
   *  Trigonometry: '<S303>/Sin4'
   */
  rtb_Add_kl = (rtb_Subtract_lm * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S303>/Subtract' incorporates:
   *  Product: '<S303>/Product'
   *  Product: '<S303>/Product1'
   *  Trigonometry: '<S303>/Cos4'
   *  Trigonometry: '<S303>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_lm * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S303>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_kl);

  /* Switch: '<S303>/Switch' incorporates:
   *  Constant: '<S303>/Constant'
   *  Constant: '<S303>/Constant1'
   *  Constant: '<S304>/Constant'
   *  Product: '<S303>/Divide'
   *  Product: '<S303>/Divide1'
   *  RelationalOperator: '<S304>/Compare'
   *  Switch: '<S303>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_kl / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S303>/Switch' */

  /* Product: '<S389>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S292>/Speed_Switch' incorporates:
   *  Abs: '<S292>/Abs'
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S300>/Compare'
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Atan1'
   *  Trigonometry: '<S303>/Atan1'
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S302>/Subtract1' incorporates:
     *  Product: '<S302>/Product2'
     *  Product: '<S302>/Product3'
     *  UnaryMinus: '<S292>/Unary Minus'
     */
    rtb_Add_kl = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S302>/Subtract' incorporates:
     *  Product: '<S302>/Product'
     *  Product: '<S302>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S302>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_kl);

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S302>/Constant'
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S305>/Constant'
     *  Product: '<S302>/Divide'
     *  Product: '<S302>/Divide1'
     *  RelationalOperator: '<S305>/Compare'
     *  Switch: '<S302>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_kl /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_kl = 0.0;
    }

    /* End of Switch: '<S302>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_kl, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S295>/Product2' incorporates:
   *  Constant: '<S295>/Constant'
   *  Switch: '<S292>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S290>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S290>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S293>/Add' incorporates:
   *  Sum: '<S294>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S265>/Product' incorporates:
   *  Abs: '<S290>/Abs'
   *  Abs: '<S293>/Abs'
   *  Constant: '<S296>/Constant'
   *  Constant: '<S306>/Constant3'
   *  Constant: '<S306>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S290>/OR'
   *  Lookup_n-D: '<S293>/1-D Lookup Table'
   *  Math: '<S306>/Math Function'
   *  RelationalOperator: '<S290>/Equal1'
   *  RelationalOperator: '<S296>/Compare'
   *  Signum: '<S290>/Sign'
   *  Signum: '<S290>/Sign1'
   *  Sum: '<S293>/Add'
   *  Sum: '<S306>/Add1'
   *  Sum: '<S306>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S291>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S298>/Sum1' incorporates:
   *  Constant: '<S291>/Constant2'
   *  Product: '<S298>/Product'
   *  Sum: '<S298>/Sum'
   *  UnitDelay: '<S298>/Unit Delay1'
   */
  rtb_Add_kl = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S291>/Product' incorporates:
   *  Constant: '<S291>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_kl * Drive_Motor_Control_D;

  /* Sum: '<S297>/Diff' incorporates:
   *  UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S291>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S291>/Add' incorporates:
   *  Gain: '<S291>/Gain'
   *  Gain: '<S291>/Gain1'
   *  Saturate: '<S291>/Saturation'
   */
  rtb_Add_es = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S291>/Switch' incorporates:
   *  Constant: '<S291>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S291>/Sum2' incorporates:
     *  Gain: '<S291>/Gain2'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S291>/Subtract' incorporates:
     *  Constant: '<S291>/Constant'
     */
    rtb_Switch2_p = 1.0 - rtb_Add_es;

    /* Switch: '<S299>/Switch2' incorporates:
     *  Constant: '<S291>/Constant'
     *  RelationalOperator: '<S299>/LowerRelop1'
     *  Sum: '<S291>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_es))) {
      /* Sum: '<S291>/Subtract1' incorporates:
       *  Constant: '<S291>/Constant1'
       */
      rtb_Switch2_p = -1.0 - rtb_Add_es;

      /* Switch: '<S299>/Switch' incorporates:
       *  Constant: '<S291>/Constant1'
       *  RelationalOperator: '<S299>/UpperRelop'
       *  Sum: '<S291>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_es))) {
        rtb_Switch2_p = rtb_Hypot_b;
      }

      /* End of Switch: '<S299>/Switch' */
    }

    /* End of Switch: '<S299>/Switch2' */

    /* Saturate: '<S291>/Saturation1' */
    if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_p;
    }

    /* End of Saturate: '<S291>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S291>/Switch' */

  /* Sum: '<S291>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_es + rtb_Hypot_b;

  /* Saturate: '<S291>/Saturation2' */
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

  /* End of Saturate: '<S291>/Saturation2' */

  /* Sum: '<S307>/Add1' incorporates:
   *  Constant: '<S307>/Constant3'
   *  Constant: '<S307>/Constant4'
   *  Math: '<S307>/Math Function'
   *  Sum: '<S307>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S309>/Sum1' incorporates:
   *  Constant: '<S294>/Constant2'
   *  Product: '<S309>/Product'
   *  Sum: '<S309>/Sum'
   *  UnitDelay: '<S309>/Unit Delay1'
   */
  rtb_Add_es = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S294>/Product' incorporates:
   *  Constant: '<S294>/Constant3'
   */
  rtb_Switch2_p = rtb_Add_es * Steering_Motor_Control_D;

  /* Sum: '<S308>/Diff' incorporates:
   *  UnitDelay: '<S308>/UD'
   *
   * Block description for '<S308>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S308>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_p - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S294>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S294>/Add' incorporates:
   *  Gain: '<S294>/Gain1'
   *  Saturate: '<S294>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S294>/Subtract' incorporates:
   *  Constant: '<S294>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S294>/Sum2' incorporates:
   *  Gain: '<S294>/Gain2'
   *  UnitDelay: '<S294>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S310>/Switch2' incorporates:
   *  RelationalOperator: '<S310>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S294>/Constant1'
     *  RelationalOperator: '<S310>/UpperRelop'
     *  Sum: '<S294>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S310>/Switch' */
  }

  /* End of Switch: '<S310>/Switch2' */

  /* Saturate: '<S294>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S294>/Saturation1' */

  /* Sum: '<S294>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S294>/Saturation2' */
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

  /* End of Saturate: '<S294>/Saturation2' */

  /* Switch: '<S404>/Switch' */
  if (!rtb_AND1) {
    /* Switch: '<S404>/Switch' incorporates:
     *  Fcn: '<S405>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S404>/Switch' */

  /* Trigonometry: '<S324>/Cos4' incorporates:
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Cos4'
   */
  rtb_Subtract_lm = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S324>/Sin5' incorporates:
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S324>/Sin4' incorporates:
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S324>/Cos5' incorporates:
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S324>/Subtract1' incorporates:
   *  Product: '<S324>/Product2'
   *  Product: '<S324>/Product3'
   *  Trigonometry: '<S324>/Cos4'
   *  Trigonometry: '<S324>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_lm * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S324>/Subtract' incorporates:
   *  Product: '<S324>/Product'
   *  Product: '<S324>/Product1'
   *  Trigonometry: '<S324>/Cos4'
   *  Trigonometry: '<S324>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_lm * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S324>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S324>/Switch' incorporates:
   *  Constant: '<S324>/Constant'
   *  Constant: '<S324>/Constant1'
   *  Constant: '<S325>/Constant'
   *  Product: '<S324>/Divide'
   *  Product: '<S324>/Divide1'
   *  RelationalOperator: '<S325>/Compare'
   *  Switch: '<S324>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Switch2_g /= rtb_Init;
    rtb_Init = rtb_uDLookupTable_l / rtb_Init;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S324>/Switch' */

  /* Product: '<S389>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Add_cv;

  /* Switch: '<S313>/Speed_Switch' incorporates:
   *  Abs: '<S313>/Abs'
   *  Constant: '<S321>/Constant'
   *  RelationalOperator: '<S321>/Compare'
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Atan1'
   *  Trigonometry: '<S324>/Atan1'
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S323>/Subtract1' incorporates:
     *  Product: '<S323>/Product2'
     *  Product: '<S323>/Product3'
     *  UnaryMinus: '<S313>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S323>/Subtract' incorporates:
     *  Product: '<S323>/Product'
     *  Product: '<S323>/Product1'
     */
    rtb_Subtract_lm = (rtb_Subtract_lm * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S323>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_lm, rtb_Switch2_g);

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     *  Constant: '<S323>/Constant1'
     *  Constant: '<S326>/Constant'
     *  Product: '<S323>/Divide'
     *  Product: '<S323>/Divide1'
     *  RelationalOperator: '<S326>/Compare'
     *  Switch: '<S323>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_lm /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_lm = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S323>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_lm);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S316>/Product2' incorporates:
   *  Constant: '<S316>/Constant'
   *  Switch: '<S313>/Speed_Switch'
   */
  rtb_Add_cv = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S311>/Sign' */
  if (rtIsNaN(rtb_Add_cv)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Add_cv < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Add_cv > 0.0);
  }

  /* Signum: '<S311>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S314>/Add' incorporates:
   *  Sum: '<S315>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S266>/Product' incorporates:
   *  Abs: '<S311>/Abs'
   *  Abs: '<S314>/Abs'
   *  Constant: '<S317>/Constant'
   *  Constant: '<S327>/Constant3'
   *  Constant: '<S327>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S311>/OR'
   *  Lookup_n-D: '<S314>/1-D Lookup Table'
   *  Math: '<S327>/Math Function'
   *  RelationalOperator: '<S311>/Equal1'
   *  RelationalOperator: '<S317>/Compare'
   *  Signum: '<S311>/Sign'
   *  Signum: '<S311>/Sign1'
   *  Sum: '<S314>/Add'
   *  Sum: '<S327>/Add1'
   *  Sum: '<S327>/Add2'
   */
  rtb_Add_cv = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Add_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S312>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_Add_cv - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S319>/Sum1' incorporates:
   *  Constant: '<S312>/Constant2'
   *  Product: '<S319>/Product'
   *  Sum: '<S319>/Sum'
   *  UnitDelay: '<S319>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S312>/Product' incorporates:
   *  Constant: '<S312>/Constant3'
   */
  rtb_Subtract_lm = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S318>/Diff' incorporates:
   *  UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_lm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S312>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S312>/Add' incorporates:
   *  Gain: '<S312>/Gain'
   *  Gain: '<S312>/Gain1'
   *  Saturate: '<S312>/Saturation'
   */
  rtb_Add_cv = ((Drive_Motor_Control_FF * rtb_Add_cv) + (Drive_Motor_Control_P *
    rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S312>/Switch' incorporates:
   *  Constant: '<S312>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S312>/Sum2' incorporates:
     *  Gain: '<S312>/Gain2'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S312>/Subtract' incorporates:
     *  Constant: '<S312>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_Add_cv;

    /* Switch: '<S320>/Switch2' incorporates:
     *  Constant: '<S312>/Constant'
     *  RelationalOperator: '<S320>/LowerRelop1'
     *  Sum: '<S312>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_Add_cv))) {
      /* Sum: '<S312>/Subtract1' incorporates:
       *  Constant: '<S312>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_Add_cv;

      /* Switch: '<S320>/Switch' incorporates:
       *  Constant: '<S312>/Constant1'
       *  RelationalOperator: '<S320>/UpperRelop'
       *  Sum: '<S312>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_Add_cv))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S320>/Switch' */
    }

    /* End of Switch: '<S320>/Switch2' */

    /* Saturate: '<S312>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S312>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S312>/Switch' */

  /* Sum: '<S312>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_cv + rtb_Integral_hv;

  /* Saturate: '<S312>/Saturation2' */
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

  /* End of Saturate: '<S312>/Saturation2' */

  /* Sum: '<S328>/Add1' incorporates:
   *  Constant: '<S328>/Constant3'
   *  Constant: '<S328>/Constant4'
   *  Math: '<S328>/Math Function'
   *  Sum: '<S328>/Add2'
   */
  rtb_Add_cv = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S330>/Sum1' incorporates:
   *  Constant: '<S315>/Constant2'
   *  Product: '<S330>/Product'
   *  Sum: '<S330>/Sum'
   *  UnitDelay: '<S330>/Unit Delay1'
   */
  rtb_Sum1_m = ((rtb_Add_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S315>/Product' incorporates:
   *  Constant: '<S315>/Constant3'
   */
  rtb_Product_lf = rtb_Sum1_m * Steering_Motor_Control_D;

  /* Sum: '<S329>/Diff' incorporates:
   *  UnitDelay: '<S329>/UD'
   *
   * Block description for '<S329>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S329>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S315>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S315>/Add' incorporates:
   *  Gain: '<S315>/Gain1'
   *  Saturate: '<S315>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_cv) + rtb_Minus_k_idx_0;

  /* Sum: '<S315>/Subtract' incorporates:
   *  Constant: '<S315>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S315>/Sum2' incorporates:
   *  Gain: '<S315>/Gain2'
   *  UnitDelay: '<S315>/Unit Delay'
   */
  rtb_Add_cv = (Steering_Motor_Control_I * rtb_Add_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S331>/Switch2' incorporates:
   *  Constant: '<S315>/Constant'
   *  RelationalOperator: '<S331>/LowerRelop1'
   *  Sum: '<S315>/Subtract'
   */
  if (!(rtb_Add_cv > (1.0 - rtb_Init))) {
    /* Sum: '<S315>/Subtract1' incorporates:
     *  Constant: '<S315>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S331>/Switch' incorporates:
     *  Constant: '<S315>/Constant1'
     *  RelationalOperator: '<S331>/UpperRelop'
     *  Sum: '<S315>/Subtract1'
     */
    if (!(rtb_Add_cv < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S331>/Switch' */
  }

  /* End of Switch: '<S331>/Switch2' */

  /* Saturate: '<S315>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S315>/Saturation1' */

  /* Sum: '<S315>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S315>/Saturation2' */
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

  /* End of Saturate: '<S315>/Saturation2' */

  /* Sum: '<S349>/Add1' incorporates:
   *  Constant: '<S349>/Constant3'
   *  Constant: '<S349>/Constant4'
   *  Math: '<S349>/Math Function'
   *  Sum: '<S349>/Add2'
   */
  rtb_Add_cv = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S351>/Sum1' incorporates:
   *  Constant: '<S336>/Constant2'
   *  Product: '<S351>/Product'
   *  Sum: '<S351>/Sum'
   *  UnitDelay: '<S351>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Add_cv -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S336>/Product' incorporates:
   *  Constant: '<S336>/Constant3'
   */
  rtb_Product_pz = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S350>/Diff' incorporates:
   *  UnitDelay: '<S350>/UD'
   *
   * Block description for '<S350>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S350>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S336>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S336>/Add' incorporates:
   *  Gain: '<S336>/Gain1'
   *  Saturate: '<S336>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_cv) + rtb_Minus_k_idx_0;

  /* Sum: '<S336>/Subtract' incorporates:
   *  Constant: '<S336>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S336>/Sum2' incorporates:
   *  Gain: '<S336>/Gain2'
   *  UnitDelay: '<S336>/Unit Delay'
   */
  rtb_Add_cv = (Steering_Motor_Control_I * rtb_Add_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S352>/Switch2' incorporates:
   *  Constant: '<S336>/Constant'
   *  RelationalOperator: '<S352>/LowerRelop1'
   *  Sum: '<S336>/Subtract'
   */
  if (!(rtb_Add_cv > (1.0 - rtb_Init))) {
    /* Sum: '<S336>/Subtract1' incorporates:
     *  Constant: '<S336>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S352>/Switch' incorporates:
     *  Constant: '<S336>/Constant1'
     *  RelationalOperator: '<S352>/UpperRelop'
     *  Sum: '<S336>/Subtract1'
     */
    if (!(rtb_Add_cv < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S352>/Switch' */
  }

  /* End of Switch: '<S352>/Switch2' */

  /* Saturate: '<S336>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S336>/Saturation1' */

  /* Sum: '<S336>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S336>/Saturation2' */
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

  /* End of Saturate: '<S336>/Saturation2' */

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
   *  Constant: '<S91>/Constant'
   *  Logic: '<S12>/AND'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S91>/Compare'
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
   *  Constant: '<S92>/Constant'
   *  RelationalOperator: '<S92>/Compare'
   */
  rtb_Compare_m3 = (rtb_Compare_m3 ||
                    (Code_Gen_Model_B.Elevator_Height_Desired_merge == 0.0));

  /* Gain: '<S94>/Gain1' */
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

  /* Switch: '<S94>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S94>/Switch1' incorporates:
     *  UnitDelay: '<S103>/Delay Input1'
     *
     * Block description for '<S103>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S94>/Switch' incorporates:
       *  Constant: '<S94>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S94>/Sum2' incorporates:
       *  Gain: '<S94>/Gain2'
       *  UnitDelay: '<S94>/Unit Delay'
       */
      rtb_Add_cv = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S94>/Subtract' incorporates:
       *  Constant: '<S94>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S104>/Switch2' incorporates:
       *  RelationalOperator: '<S104>/LowerRelop1'
       */
      if (!(rtb_Add_cv > rtb_Switch2_g)) {
        /* Sum: '<S94>/Subtract1' incorporates:
         *  Constant: '<S94>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S104>/Switch' incorporates:
         *  RelationalOperator: '<S104>/UpperRelop'
         */
        if (!(rtb_Add_cv < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Add_cv;
        }

        /* End of Switch: '<S104>/Switch' */
      }

      /* End of Switch: '<S104>/Switch2' */

      /* Saturate: '<S94>/Saturation1' */
      if (rtb_Switch2_g > Elevator_Int_UL) {
        /* Switch: '<S94>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_g < Elevator_Int_LL) {
        /* Switch: '<S94>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S94>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_g;
      }

      /* End of Saturate: '<S94>/Saturation1' */
    }

    /* End of Switch: '<S94>/Switch1' */
  } else {
    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S94>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S94>/Switch' */

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
       *  Constant: '<S90>/Constant'
       *  RelationalOperator: '<S90>/Compare'
       */
      if (fabs(Code_Gen_Model_B.Elevator_Error) <= Elevator_Error_Bottom_Disable)
      {
        rtb_Add_cv = Elevator_Bottom_DC;
      } else {
        rtb_Add_cv = Elevator_Total_LL;
      }

      /* End of Switch: '<S12>/Switch5' */
    } else {
      /* Sum: '<S94>/Add1' */
      rtb_Switch2_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S94>/Saturation2' */
      if (rtb_Switch2_g > Elevator_Total_UL) {
        rtb_Switch2_g = Elevator_Total_UL;
      } else if (rtb_Switch2_g < Elevator_Total_LL) {
        rtb_Switch2_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S94>/Saturation2' */

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

      /* Switch: '<S95>/Switch2' incorporates:
       *  RelationalOperator: '<S95>/LowerRelop1'
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

        /* Switch: '<S95>/Switch' incorporates:
         *  RelationalOperator: '<S95>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_Add_cv)) {
          rtb_Add_cv = rtb_Switch2_g;
        }

        /* End of Switch: '<S95>/Switch' */
      }

      /* End of Switch: '<S95>/Switch2' */
    }

    /* End of Switch: '<S12>/Switch4' */
  } else {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* UnitDelay: '<S93>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S93>/Abs' incorporates:
   *  Sum: '<S93>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_cv);

  /* Signum: '<S93>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S93>/Sign1' */
  if (rtIsNaN(rtb_Add_cv)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Add_cv < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Add_cv > 0.0);
  }

  /* Product: '<S93>/Product1' incorporates:
   *  Signum: '<S93>/Sign1'
   *  Signum: '<S93>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S93>/Switch' incorporates:
   *  Constant: '<S93>/Constant'
   *  Constant: '<S96>/Constant'
   *  Constant: '<S97>/Constant'
   *  Logic: '<S93>/or'
   *  Product: '<S93>/Product1'
   *  RelationalOperator: '<S96>/Compare'
   *  RelationalOperator: '<S97>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S93>/Switch' */

  /* RelationalOperator: '<S98>/Compare' incorporates:
   *  Constant: '<S98>/Constant'
   */
  rtb_Compare_m3 = (rtb_Add_cv == 0.0);

  /* Switch: '<S93>/Switch5' */
  if (rtb_Compare_m3) {
    /* SignalConversion generated from: '<S93>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S93>/Constant4'
     *  Constant: '<S93>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S93>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S93>/Constant2'
     *  Constant: '<S93>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S93>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S93>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S93>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S93>/Constant10'
     *  Constant: '<S93>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S93>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S93>/Constant7'
     *  Constant: '<S93>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S93>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S93>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S93>/Switch5' */

  /* RelationalOperator: '<S99>/Compare' incorporates:
   *  Constant: '<S99>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_cv > 0.0);

  /* Switch: '<S93>/Switch1' incorporates:
   *  Switch: '<S93>/Switch3'
   */
  if (rtb_Compare_m3) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S93>/Switch3' incorporates:
     *  Constant: '<S93>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S93>/Product' incorporates:
   *  Switch: '<S93>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S102>/Init' incorporates:
   *  UnitDelay: '<S102>/FixPt Unit Delay1'
   *  UnitDelay: '<S102>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Add_cv;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S102>/Init' */

  /* Sum: '<S100>/Sum1' */
  rtb_Add_cv -= rtb_Init;

  /* Switch: '<S101>/Switch2' incorporates:
   *  RelationalOperator: '<S101>/LowerRelop1'
   */
  if (!(rtb_Add_cv > rtb_Switch2_g)) {
    /* Switch: '<S93>/Switch2' incorporates:
     *  Constant: '<S93>/Constant1'
     *  Constant: '<S93>/Constant3'
     *  Switch: '<S93>/Switch4'
     *  UnaryMinus: '<S93>/Unary Minus1'
     */
    if (rtb_Compare_m3) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S93>/Switch4' incorporates:
       *  Constant: '<S93>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S93>/Product2' incorporates:
     *  Switch: '<S93>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S101>/Switch' incorporates:
     *  RelationalOperator: '<S101>/UpperRelop'
     */
    if (!(rtb_Add_cv < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S101>/Switch' */
  }

  /* End of Switch: '<S101>/Switch2' */

  /* Sum: '<S100>/Sum' */
  rtb_Switch5_a = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   */
  rtb_Compare_m3 = ((Code_Gen_Model_B.Elevator_Height_Measured <
                     Elevator_Height_Coral_Arm_Low_Thresh) &&
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                     Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S8>/Logical Operator4' incorporates:
   *  Constant: '<S73>/Constant'
   *  Constant: '<S74>/Constant'
   *  RelationalOperator: '<S73>/Compare'
   *  RelationalOperator: '<S74>/Compare'
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

  /* Switch: '<S77>/Switch2' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S77>/LowerRelop1'
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

    /* Switch: '<S77>/Switch' incorporates:
     *  RelationalOperator: '<S77>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge < rtb_Add_cv)) {
      rtb_Add_cv = Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S77>/Switch' */
  }

  /* End of Switch: '<S77>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Add_cv -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S76>/Gain1' */
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

  /* Switch: '<S76>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S76>/Switch1' incorporates:
     *  UnitDelay: '<S85>/Delay Input1'
     *
     * Block description for '<S85>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S76>/Switch' incorporates:
       *  Constant: '<S76>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S76>/Sum2' incorporates:
       *  Gain: '<S76>/Gain2'
       *  UnitDelay: '<S76>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S76>/Subtract' */
      rtb_Switch2_fx = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S86>/Switch2' incorporates:
       *  RelationalOperator: '<S86>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_fx)) {
        /* Sum: '<S76>/Subtract1' */
        rtb_Switch2_fx = rtb_Add_cv - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S86>/Switch' incorporates:
         *  RelationalOperator: '<S86>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_fx)) {
          rtb_Switch2_fx = rtb_Init;
        }

        /* End of Switch: '<S86>/Switch' */
      }

      /* End of Switch: '<S86>/Switch2' */

      /* Saturate: '<S76>/Saturation1' */
      if (rtb_Switch2_fx > Coral_Arm_Int_UL) {
        /* Switch: '<S76>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_fx < Coral_Arm_Int_LL) {
        /* Switch: '<S76>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S76>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_fx;
      }

      /* End of Saturate: '<S76>/Saturation1' */
    }

    /* End of Switch: '<S76>/Switch1' */
  } else {
    /* Switch: '<S76>/Switch' incorporates:
     *  Constant: '<S76>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S76>/Switch' */

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
      /* Sum: '<S76>/Add1' incorporates:
       *  Switch: '<S8>/Switch3'
       */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S87>/Switch2' incorporates:
       *  RelationalOperator: '<S87>/LowerRelop1'
       *  RelationalOperator: '<S87>/UpperRelop'
       *  Switch: '<S87>/Switch'
       *  Switch: '<S8>/Switch3'
       */
      if (rtb_Init > rtb_Switch2_g) {
        rtb_Add_cv = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_Add_cv)) {
        rtb_Add_cv = rtb_Init;
      }

      /* End of Switch: '<S87>/Switch2' */
    }

    /* End of Switch: '<S8>/Switch1' */
  } else {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S75>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S75>/Abs' incorporates:
   *  Sum: '<S75>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_cv);

  /* Signum: '<S75>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S75>/Sign1' */
  if (rtIsNaN(rtb_Add_cv)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Add_cv < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Add_cv > 0.0);
  }

  /* Product: '<S75>/Product1' incorporates:
   *  Signum: '<S75>/Sign1'
   *  Signum: '<S75>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S75>/Switch' incorporates:
   *  Constant: '<S75>/Constant'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S79>/Constant'
   *  Logic: '<S75>/or'
   *  Product: '<S75>/Product1'
   *  RelationalOperator: '<S78>/Compare'
   *  RelationalOperator: '<S79>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_cv = 0.0;
  }

  /* End of Switch: '<S75>/Switch' */

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  rtb_Compare_m3 = (rtb_Add_cv == 0.0);

  /* Switch: '<S75>/Switch5' */
  if (rtb_Compare_m3) {
    /* SignalConversion generated from: '<S75>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S75>/Constant4'
     *  Constant: '<S75>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S75>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S75>/Constant2'
     *  Constant: '<S75>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S75>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S75>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S75>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S75>/Constant10'
     *  Constant: '<S75>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S75>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S75>/Constant7'
     *  Constant: '<S75>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S75>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S75>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S75>/Switch5' */

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  rtb_Compare_oq = (rtb_Add_cv > 0.0);

  /* Switch: '<S75>/Switch1' incorporates:
   *  Switch: '<S75>/Switch3'
   */
  if (rtb_Compare_m3) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_Compare_oq) {
    /* Switch: '<S75>/Switch3' incorporates:
     *  Constant: '<S75>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S75>/Product' incorporates:
   *  Switch: '<S75>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_fx;

  /* Switch: '<S84>/Init' incorporates:
   *  UnitDelay: '<S84>/FixPt Unit Delay1'
   *  UnitDelay: '<S84>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Add_cv;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S84>/Init' */

  /* Sum: '<S82>/Sum1' */
  rtb_Add_cv -= rtb_Init;

  /* Switch: '<S83>/Switch2' incorporates:
   *  RelationalOperator: '<S83>/LowerRelop1'
   */
  if (!(rtb_Add_cv > rtb_Switch2_g)) {
    /* Switch: '<S75>/Switch2' incorporates:
     *  Constant: '<S75>/Constant1'
     *  Constant: '<S75>/Constant3'
     *  Switch: '<S75>/Switch4'
     *  UnaryMinus: '<S75>/Unary Minus1'
     */
    if (rtb_Compare_m3) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Compare_oq) {
      /* Switch: '<S75>/Switch4' incorporates:
       *  Constant: '<S75>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S75>/Product2' incorporates:
     *  Switch: '<S75>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_fx;

    /* Switch: '<S83>/Switch' incorporates:
     *  RelationalOperator: '<S83>/UpperRelop'
     */
    if (!(rtb_Add_cv < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_cv;
    }

    /* End of Switch: '<S83>/Switch' */
  }

  /* End of Switch: '<S83>/Switch2' */

  /* Sum: '<S82>/Sum' */
  rtb_Add_cv = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Add_cv;

  /* RelationalOperator: '<S129>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
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

  /* RelationalOperator: '<S111>/Compare' incorporates:
   *  Constant: '<S111>/Constant'
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
     *  Constant: '<S108>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S108>/Compare'
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

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
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
   *  Constant: '<S109>/Constant'
   *  Constant: '<S110>/Constant'
   *  Constant: '<S14>/Constant11'
   *  Inport: '<Root>/Actuator_Revs'
   *  RelationalOperator: '<S109>/Compare'
   *  RelationalOperator: '<S110>/Compare'
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

  /* Gain: '<S196>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S197>/Compare' incorporates:
   *  Constant: '<S196>/Constant'
   *  Constant: '<S197>/Constant'
   */
  rtb_Compare_m3 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S196>/Switch1' incorporates:
   *  UnitDelay: '<S196>/Unit Delay1'
   */
  if (rtb_Compare_m3) {
    rtb_Switch2_g = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S196>/Switch1' */

  /* Sum: '<S196>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_g;

  /* Gain: '<S196>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S196>/Switch' incorporates:
   *  UnitDelay: '<S196>/Unit Delay'
   */
  if (rtb_Compare_m3) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S196>/Switch' */

  /* Sum: '<S196>/Subtract' */
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

  /* Update for UnitDelay: '<S188>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S189>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S190>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S191>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S191>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S130>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S130>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S131>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S132>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S132>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S113>/Delay Input1' incorporates:
   *  Constant: '<S15>/Constant3'
   *
   * Block description for '<S113>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S15>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S105>/Delay Input1'
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_bd = Code_Gen_Model_B.Out_h;

  /* Update for UnitDelay: '<S106>/Delay Input1'
   *
   * Block description for '<S106>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = Code_Gen_Model_B.Out;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg;

  /* Update for UnitDelay: '<S107>/Delay Input1'
   *
   * Block description for '<S107>/Delay Input1':
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

  /* Update for Delay: '<S133>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S153>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S133>/A'
   *  Delay: '<S133>/MemoryX'
   */
  rtb_Switch1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
    + Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S133>/MemoryX' incorporates:
   *  Constant: '<S133>/B'
   *  Product: '<S153>/A[k]*xhat[k|k-1]'
   *  Product: '<S153>/B[k]*u[k]'
   *  Sum: '<S153>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch1) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle_merge) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S187>/UD'
   *
   * Block description for '<S187>/UD':
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

  /* Update for UnitDelay: '<S364>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S364>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S386>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S385>/UD'
   *
   * Block description for '<S385>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Abs1;

  /* Update for UnitDelay: '<S383>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2_gl;

  /* Update for UnitDelay: '<S366>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S381>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S381>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S381>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S365>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Product2_a;

  /* Update for UnitDelay: '<S374>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S374>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S374>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Product2_a;

  /* Update for UnitDelay: '<S340>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Subtract_b2;

  /* Update for UnitDelay: '<S339>/UD'
   *
   * Block description for '<S339>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Abs2_p;

  /* Update for UnitDelay: '<S333>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_DeadZone;

  /* Update for UnitDelay: '<S277>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Add_h5;

  /* Update for UnitDelay: '<S270>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S288>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_p4;

  /* Update for UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_m;

  /* Update for UnitDelay: '<S273>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S298>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_kl;

  /* Update for UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S291>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S309>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_es;

  /* Update for UnitDelay: '<S308>/UD'
   *
   * Block description for '<S308>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_p;

  /* Update for UnitDelay: '<S294>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S319>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_lm;

  /* Update for UnitDelay: '<S312>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S330>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_m;

  /* Update for UnitDelay: '<S329>/UD'
   *
   * Block description for '<S329>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S315>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S351>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S350>/UD'
   *
   * Block description for '<S350>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_pz;

  /* Update for UnitDelay: '<S336>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S103>/Delay Input1'
   *
   * Block description for '<S103>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S93>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S102>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S102>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S102>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S75>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Add_cv;

  /* Update for UnitDelay: '<S84>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S84>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S84>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Add_cv;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gln = rtb_Compare_oq;

  /* Update for UnitDelay: '<S14>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kb = rtb_AND1;

  /* Update for UnitDelay: '<S14>/Unit Delay2' */
  Code_Gen_Model_DW.UnitDelay2_DSTATE_k = rtb_AND4;

  /* Update for UnitDelay: '<S196>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_g;

  /* Update for UnitDelay: '<S196>/Unit Delay' */
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
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for Delay: '<S133>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S364>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S381>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S374>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S102>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S84>/FixPt Unit Delay2' */
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
    /* InitializeConditions for UnitDelay: '<S454>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* SystemInitialize for Chart: '<S416>/Reefscape_Chart' */
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
    /* Start for If: '<S205>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S201>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S205>/Robot_Index_Is_Valid' */
    /* Start for If: '<S208>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S208>/Circle_Check_Valid' */
    /* Start for If: '<S210>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S208>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S205>/Robot_Index_Is_Valid' */
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
