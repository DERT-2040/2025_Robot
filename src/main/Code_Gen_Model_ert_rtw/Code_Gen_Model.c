/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.383
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Mar 26 22:31:19 2025
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
#define C_IN_Path_to_Coral_Station_1_v3 ((uint8_T)7U)
#define C_IN_Wait_at_Coral_Station_1_v2 ((uint8_T)18U)
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)3U)
#define Code_Gen_IN_Back_Up_from_Reef_3 ((uint8_T)4U)
#define Code_Gen_M_IN_Path_to_Processor ((uint8_T)7U)
#define Code_Gen_M_IN_Path_to_Reef_2_v2 ((uint8_T)12U)
#define Code_Gen_M_IN_Wait_for_Teleop_m ((uint8_T)20U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)14U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)15U)
#define Code_Gen_Mod_IN_Score_at_Reef_3 ((uint8_T)16U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)11U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)10U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)11U)
#define Code_Gen_Mode_IN_Path_to_Reef_3 ((uint8_T)13U)
#define Code_Gen_Model_IN_Back         ((uint8_T)1U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Drive        ((uint8_T)1U)
#define Code_Gen_Model_IN_End_early    ((uint8_T)6U)
#define Code_Gen_Model_IN_End_early_j  ((uint8_T)5U)
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
#define Code_IN_Path_to_Coral_Station_1 ((uint8_T)6U)
#define Code_IN_Path_to_Coral_Station_2 ((uint8_T)8U)
#define Code_IN_Path_to_Coral_Station_3 ((uint8_T)9U)
#define Code_IN_Wait_at_Coral_Station_1 ((uint8_T)17U)
#define Code_IN_Wait_at_Coral_Station_2 ((uint8_T)19U)
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)3U)
#define IN_Drive_Backward_from_Processo ((uint8_T)4U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)5U)

/* Exported block parameters */
real_T AT_CS_L_Angle_Blue = 2.1991;    /* Variable: AT_CS_L_Angle_Blue
                                        * Referenced by: '<S421>/Constant14'
                                        */
real_T AT_CS_L_Angle_Red = -0.94248;   /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S421>/Constant13'
                                        */
real_T AT_CS_L_X_Blue = 1.0751;        /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S421>/Constant9'
                                        */
real_T AT_CS_L_X_Red = 16.4733;        /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S421>/Constant5'
                                        */
real_T AT_CS_L_Y_Blue = 7.0882;        /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S421>/Constant28'
                                        */
real_T AT_CS_L_Y_Red = 0.96356;        /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S421>/Constant27'
                                        */
real_T AT_CS_R_Angle_Blue = -2.1991;   /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S421>/Constant12'
                                        */
real_T AT_CS_R_Angle_Red = 0.94248;    /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S421>/Constant11'
                                        */
real_T AT_CS_R_X_Blue = 1.0751;        /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S421>/Constant4'
                                        */
real_T AT_CS_R_X_Red = 16.4733;        /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S421>/Constant17'
                                        */
real_T AT_CS_R_Y_Blue = 0.96356;       /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S421>/Constant26'
                                        */
real_T AT_CS_R_Y_Red = 7.0882;         /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S421>/Constant3'
                                        */
real_T AT_Cage_L_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                              * Referenced by: '<S421>/Constant55'
                                              */
real_T AT_Cage_L_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_L_Finish_Angle_Red
                                         * Referenced by: '<S421>/Constant54'
                                         */
real_T AT_Cage_L_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_L_Finish_X_Blue
                                         * Referenced by: '<S421>/Constant39'
                                         */
real_T AT_Cage_L_Finish_X_Red = 8.7803;/* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S421>/Constant2'
                                        */
real_T AT_Cage_L_Finish_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Finish_Y_Blue
                                         * Referenced by: '<S421>/Constant43'
                                         */
real_T AT_Cage_L_Finish_Y_Red = 0.79229;/* Variable: AT_Cage_L_Finish_Y_Red
                                         * Referenced by: '<S421>/Constant42'
                                         */
real_T AT_Cage_L_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Start_Angle_Blue
                                             * Referenced by: '<S421>/Constant49'
                                             */
real_T AT_Cage_L_Start_Angle_Red = 0.0;/* Variable: AT_Cage_L_Start_Angle_Red
                                        * Referenced by: '<S421>/Constant48'
                                        */
real_T AT_Cage_L_Start_X_Blue = 9.5301;/* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S421>/Constant7'
                                        */
real_T AT_Cage_L_Start_X_Red = 8.0183; /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S421>/Constant15'
                                        */
real_T AT_Cage_L_Start_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S421>/Constant32'
                                        */
real_T AT_Cage_L_Start_Y_Red = 0.79229;/* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S421>/Constant25'
                                        */
real_T AT_Cage_M_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                              * Referenced by: '<S421>/Constant53'
                                              */
real_T AT_Cage_M_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_M_Finish_Angle_Red
                                         * Referenced by: '<S421>/Constant52'
                                         */
real_T AT_Cage_M_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_M_Finish_X_Blue
                                         * Referenced by: '<S421>/Constant34'
                                         */
real_T AT_Cage_M_Finish_X_Red = 8.7803;/* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S421>/Constant35'
                                        */
real_T AT_Cage_M_Finish_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Finish_Y_Blue
                                         * Referenced by: '<S421>/Constant41'
                                         */
real_T AT_Cage_M_Finish_Y_Red = 1.8829;/* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S421>/Constant44'
                                        */
real_T AT_Cage_M_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Start_Angle_Blue
                                             * Referenced by: '<S421>/Constant47'
                                             */
real_T AT_Cage_M_Start_Angle_Red = 0.0;/* Variable: AT_Cage_M_Start_Angle_Red
                                        * Referenced by: '<S421>/Constant46'
                                        */
real_T AT_Cage_M_Start_X_Blue = 9.5301;/* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S421>/Constant20'
                                        */
real_T AT_Cage_M_Start_X_Red = 8.0183; /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S421>/Constant24'
                                        */
real_T AT_Cage_M_Start_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S421>/Constant22'
                                        */
real_T AT_Cage_M_Start_Y_Red = 1.8829; /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S421>/Constant33'
                                        */
real_T AT_Cage_R_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                              * Referenced by: '<S421>/Constant51'
                                              */
real_T AT_Cage_R_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_R_Finish_Angle_Red
                                         * Referenced by: '<S421>/Constant56'
                                         */
real_T AT_Cage_R_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_R_Finish_X_Blue
                                         * Referenced by: '<S421>/Constant36'
                                         */
real_T AT_Cage_R_Finish_X_Red = 8.7803;/* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S421>/Constant38'
                                        */
real_T AT_Cage_R_Finish_Y_Blue = 5.079;/* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S421>/Constant45'
                                        */
real_T AT_Cage_R_Finish_Y_Red = 2.9735;/* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S421>/Constant40'
                                        */
real_T AT_Cage_R_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Start_Angle_Blue
                                             * Referenced by: '<S421>/Constant1'
                                             */
real_T AT_Cage_R_Start_Angle_Red = 0.0;/* Variable: AT_Cage_R_Start_Angle_Red
                                        * Referenced by: '<S421>/Constant50'
                                        */
real_T AT_Cage_R_Start_X_Blue = 9.5301;/* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S421>/Constant29'
                                        */
real_T AT_Cage_R_Start_X_Red = 8.0183; /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S421>/Constant31'
                                        */
real_T AT_Cage_R_Start_Y_Blue = 5.079; /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S421>/Constant6'
                                        */
real_T AT_Cage_R_Start_Y_Red = 2.9735; /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S421>/Constant16'
                                        */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S428>/Constant'
                                      *   '<S36>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S435>/Constant'
                                          *   '<S436>/Constant'
                                          *   '<S43>/Constant'
                                          *   '<S44>/Constant'
                                          */
real_T AT_Max_Error_Angle = 0.75;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S434>/Constant'
                                        *   '<S42>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.5;          /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S432>/Constant'
                                        *   '<S433>/Constant'
                                        *   '<S40>/Constant'
                                        *   '<S41>/Constant'
                                        */
real_T AT_On_Target_Time = 0.25;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T AT_Processor_Angle_Blue = -1.5708;/* Variable: AT_Processor_Angle_Blue
                                          * Referenced by: '<S421>/Constant10'
                                          */
real_T AT_Processor_Angle_Red = 1.5708;/* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S421>/Constant8'
                                        */
real_T AT_Processor_X_Blue = 11.5608;  /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S421>/Constant18'
                                        */
real_T AT_Processor_X_Red = 5.9875;    /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S421>/Constant19'
                                        */
real_T AT_Processor_Y_Blue = 7.4714;   /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S421>/Constant21'
                                        */
real_T AT_Processor_Y_Red = 0.58039;   /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S421>/Constant23'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S422>/Constant7'
                                        *   '<S29>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S422>/Constant6'
                                        *   '<S29>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S422>/Constant3'
                                        *   '<S29>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S422>/Constant4'
                                        *   '<S29>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.0;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S422>/Constant'
                                        *   '<S29>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S422>/Constant5'
                                        *   '<S29>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S422>/Constant1'
                                        *   '<S29>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by:
                                        *   '<S422>/Constant2'
                                        *   '<S29>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S33>/Constant4'
                                      *   '<S444>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S33>/Constant10'
                                        *   '<S444>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S445>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.2;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S33>/Gain1'
                                *   '<S445>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S445>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.5;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S33>/Constant8'
                                   *   '<S445>/Constant8'
                                   */
real_T Actuator_DC = 0.5;              /* Variable: Actuator_DC
                                        * Referenced by: '<S14>/Constant6'
                                        */
real_T Actuator_Rev_Startup_Range = 10.0;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S108>/Constant'
                                          */
real_T Actuator_Rev_Target = 90.0;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S109>/Constant'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
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
                                      * Referenced by: '<S459>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S455>/Constant'
                                        *   '<S455>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S459>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S455>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -2.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S424>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S424>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 60.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 60.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S424>/Reefscape_Chart'
                                       *   '<S31>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S424>/Reefscape_Chart'
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
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S424>/Reefscape_Chart'
                                             *   '<S31>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
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
                                        *   '<S424>/Reefscape_Chart'
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
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S277>/Constant3'
                                        *   '<S298>/Constant3'
                                        *   '<S319>/Constant3'
                                        *   '<S340>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S277>/Constant2'
                                   *   '<S298>/Constant2'
                                   *   '<S319>/Constant2'
                                   *   '<S340>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S277>/Saturation'
                                        *   '<S298>/Saturation'
                                        *   '<S319>/Saturation'
                                        *   '<S340>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S277>/Saturation'
                                        *   '<S298>/Saturation'
                                        *   '<S319>/Saturation'
                                        *   '<S340>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S277>/Gain'
                                            *   '<S298>/Gain'
                                            *   '<S319>/Gain'
                                            *   '<S340>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S277>/Gain2'
                                        *   '<S298>/Gain2'
                                        *   '<S319>/Gain2'
                                        *   '<S340>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S277>/Saturation1'
                                         *   '<S298>/Saturation1'
                                         *   '<S319>/Saturation1'
                                         *   '<S340>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S277>/Saturation1'
                                        *   '<S298>/Saturation1'
                                        *   '<S319>/Saturation1'
                                        *   '<S340>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S277>/Gain1'
                                        *   '<S298>/Gain1'
                                        *   '<S319>/Gain1'
                                        *   '<S340>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S282>/Constant'
                            *   '<S303>/Constant'
                            *   '<S324>/Constant'
                            *   '<S345>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S12>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S92>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
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
                                          *   '<S424>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S424>/Reefscape_Chart'
                                         *   '<S31>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S424>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S70>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.2;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S424>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 15.0;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S90>/Constant'
                                     *   '<S424>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 12.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 5.5;       /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = -0.5;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 13.5;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 7.5; /* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 27.5;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.5;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S424>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.875;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 14.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.6;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
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
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S424>/Reefscape_Chart'
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
                                        *   '<S424>/Reefscape_Chart'
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
                                        * Referenced by: '<S203>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S262>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S262>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S209>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S222>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S262>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S373>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S373>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S373>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S373>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S373>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S373>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S390>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S390>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S390>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S390>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S389>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S390>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S390>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S390>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S390>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S390>/Constant1'
                                   *   '<S390>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S390>/Constant'
                                   *   '<S390>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S280>/Constant3'
                                        *   '<S301>/Constant3'
                                        *   '<S322>/Constant3'
                                        *   '<S343>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S280>/Constant2'
                                *   '<S301>/Constant2'
                                *   '<S322>/Constant2'
                                *   '<S343>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S280>/Saturation'
                                           *   '<S301>/Saturation'
                                           *   '<S322>/Saturation'
                                           *   '<S343>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S280>/Saturation'
                                          *   '<S301>/Saturation'
                                          *   '<S322>/Saturation'
                                          *   '<S343>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S280>/Gain2'
                                         *   '<S301>/Gain2'
                                         *   '<S322>/Gain2'
                                         *   '<S343>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S280>/Saturation1'
                                             *   '<S301>/Saturation1'
                                             *   '<S322>/Saturation1'
                                             *   '<S343>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S280>/Saturation1'
                                            *   '<S301>/Saturation1'
                                            *   '<S322>/Saturation1'
                                            *   '<S343>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S280>/Gain1'
                                        *   '<S301>/Gain1'
                                        *   '<S322>/Gain1'
                                        *   '<S343>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S372>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S372>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S372>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S372>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S372>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S372>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S444>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S444>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S425>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S425>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S425>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S360>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S360>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S360>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S360>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S360>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S360>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S445>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S444>/Dead Zone'
                                        *   '<S445>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S444>/Dead Zone'
                                        *   '<S445>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.3;            /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S14>/Constant2'
                                        */
real_T Winch_Rev_Target = 30.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S107>/Constant'
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
static void Code_Gen_Model_Path_to_Reef_1(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, boolean_T
  *Path_Enable);
static void Code_Gen_Model_Path_to_Reef_2(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable);
static void Code_Gen_Mode_Path_to_Reef_2_v2(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable);
static void Code_Gen_Model_Path_to_Reef_3(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable);
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, boolean_T *Path_Enable, const uint8_T *Switch6, const
  uint8_T *Switch9);

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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
        *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
        *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
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
 *    '<S424>/Reefscape_Chart'
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
 *    '<S424>/Reefscape_Chart'
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
 *    '<S424>/Reefscape_Chart'
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
static void Code_Gen_Model_Path_to_Reef_1(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, boolean_T
  *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 1U;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
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
}

/* Function for Chart: '<S28>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Path_to_Reef_2(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 6U;
  *Path_Enable = true;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
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
}

/* Function for Chart: '<S28>/Reefscape_Auto_Steps' */
static void Code_Gen_Mode_Path_to_Reef_2_v2(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 22U;
  *Path_Enable = true;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
  if (Code_Gen_Model_DW.is_Path_to_Reef_2_v2 == Code_Gen_Model_IN_Back) {
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Model_IN_End_early_j;
      Code_Gen_Model_B.Auto_Step_ID = 23U;
      *Path_Enable = false;
    }

    /* case IN_L1: */
  } else if (Code_Gen_Model_B.UnitDelay2 >= 2.1) {
    Code_Gen_Model_B.Gamepad_B1_A_out = false;
    Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_Back;
    Code_Gen_Model_B.Gamepad_Back_out = true;
  }
}

/* Function for Chart: '<S28>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Path_to_Reef_3(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 11U;
  *Path_Enable = true;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
  if (Code_Gen_Model_DW.is_Path_to_Reef_3 == Code_Gen_Model_IN_Set_L4_h) {
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 12U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Right_i = true;
    }

    /* case IN_Timer_to_L4: */
  } else if (Code_Gen_Model_DW.timer >= Auto_Path2_Delay_to_L4_Time) {
    Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Model_IN_Set_L4_h;
    Code_Gen_Model_B.Gamepad_B4_Y_out = true;
  } else {
    Code_Gen_Model_DW.timer += 0.02;
  }
}

/* Function for Chart: '<S28>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, boolean_T *Path_Enable, const uint8_T *Switch6, const
  uint8_T *Switch9)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_Model_IN_Back:
    Code_Gen_Model_B.Gamepad_Back_out = false;
    Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Model_IN_End_early_j;
    Code_Gen_Model_B.Auto_Step_ID = 23U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    break;

   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 4U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Start_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 8U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Model_IN_Back;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 13U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_3;
      Code_Gen_Model_B.Auto_Step_ID = 14U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch9;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Gen_Model_IN_End_early_j:
    Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
    Code_Gen_Model_B.Auto_Step_ID = 15U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    break;

   case Code_IN_Path_to_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 4U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 5U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    }
    break;

   case C_IN_Path_to_Coral_Station_1_v3:
    Code_Gen_Model_B.Auto_Step_ID = 20U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
      Code_Gen_Model_B.Auto_Step_ID = 15U;
      *Path_Enable = false;
    }
    break;

   case Code_IN_Path_to_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_2;
      Code_Gen_Model_B.Auto_Step_ID = 10U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    }
    break;

   case Code_IN_Path_to_Coral_Station_3:
    Code_Gen_Model_B.Auto_Step_ID = 14U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
      Code_Gen_Model_B.Auto_Step_ID = 15U;
      *Path_Enable = false;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_1:
    Code_Gen_Model_Path_to_Reef_1(Robot_Reached_Destination, MultiportSwitch,
      Path_Enable);
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_2:
    Code_Gen_Model_Path_to_Reef_2(Robot_Reached_Destination, Path_Enable);
    break;

   case Code_Gen_M_IN_Path_to_Reef_2_v2:
    Code_Gen_Mode_Path_to_Reef_2_v2(Robot_Reached_Destination, Path_Enable);
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_3:
    Code_Gen_Model_Path_to_Reef_3(Robot_Reached_Destination, Path_Enable);
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 2U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_B.UnitDelay1) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 3U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 7U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_B.UnitDelay1) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 8U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 12U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_B.UnitDelay1) {
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 13U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 5U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 6U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   case C_IN_Wait_at_Coral_Station_1_v2:
    Code_Gen_Model_B.Auto_Step_ID = 21U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Path_to_Reef_2_v2;
      Code_Gen_Model_B.Auto_Step_ID = 22U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_L1_g;
      Code_Gen_Model_B.Gamepad_B1_A_out = true;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 10U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 11U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 15U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
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
  real_T rtb_Add_c;
  real_T rtb_Add_fn;
  real_T rtb_Add_ju;
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
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product_lf;
  real_T rtb_Product_pz;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Rotationmatrixfromlocalto_3;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_d4;
  real_T rtb_Subtract_fc;
  real_T rtb_Subtract_hf;
  real_T rtb_Sum1_m;
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Switch1;
  real_T rtb_Switch1_j1;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_pb;
  real_T rtb_Switch2_pt;
  real_T rtb_Switch5_a;
  real_T rtb_UnitDelay3;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s234_iter;
  uint16_T s259_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch;
  uint8_T MultiportSwitch1;
  uint8_T Switch6;
  uint8_T Switch9;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T Coral_Score;
  boolean_T Robot_Reached_Destination;
  boolean_T exitg1;
  boolean_T rtb_AND2_k;
  boolean_T rtb_AT_CS_Left_Red_Active;
  boolean_T rtb_AT_CS_Right_Blue_Active;
  boolean_T rtb_AT_CS_Right_Red_Active;
  boolean_T rtb_AT_Cage_Left_Finish_Blue_Ac;
  boolean_T rtb_AT_Cage_Left_Finish_Red_Act;
  boolean_T rtb_AT_Cage_Middle_Finish_Blue_;
  boolean_T rtb_AT_Cage_Middle_Finish_Red_A;
  boolean_T rtb_AT_Cage_Right_Finish_Blue_A;
  boolean_T rtb_AT_Cage_Right_Finish_Red_Ac;
  boolean_T rtb_AT_Processor_Blue_Active;
  boolean_T rtb_AT_Processor_Red_Active;
  boolean_T rtb_Compare_m3;
  boolean_T rtb_Disable_Wheels;
  boolean_T rtb_Enable_Wheels;
  boolean_T rtb_FixPtRelationalOperator_m;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_LogicalOperator1_h;
  boolean_T rtb_Reset_Wheel_Offsets;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S267>/Add1' incorporates:
   *  Constant: '<S267>/Constant3'
   *  Constant: '<S267>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S267>/Math Function'
   *  Sum: '<S24>/Add'
   *  Sum: '<S267>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S195>/Diff'
   *  UnitDelay: '<S195>/UD'
   *
   * Block description for '<S195>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S195>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S268>/Add1' incorporates:
   *  Constant: '<S268>/Constant3'
   *  Constant: '<S268>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S268>/Math Function'
   *  Sum: '<S24>/Add1'
   *  Sum: '<S268>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S196>/Diff'
   *  UnitDelay: '<S196>/UD'
   *
   * Block description for '<S196>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S196>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S269>/Add1' incorporates:
   *  Constant: '<S269>/Constant3'
   *  Constant: '<S269>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S269>/Math Function'
   *  Sum: '<S24>/Add2'
   *  Sum: '<S269>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product2' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S197>/Diff'
   *  UnitDelay: '<S197>/UD'
   *
   * Block description for '<S197>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S197>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S270>/Add1' incorporates:
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Gain: '<S24>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S270>/Math Function'
   *  Sum: '<S24>/Add3'
   *  Sum: '<S270>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S21>/Product3' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S198>/Diff'
   *  UnitDelay: '<S198>/UD'
   *
   * Block description for '<S198>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S198>/UD':
   *
   *  Store in Global RAM
   */
  rtb_UnitDelay3 = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* SignalConversion generated from: '<S21>/Product7' incorporates:
   *  Fcn: '<S199>/r->x'
   *  Fcn: '<S199>/theta->y'
   *  Fcn: '<S200>/r->x'
   *  Fcn: '<S200>/theta->y'
   *  Fcn: '<S201>/r->x'
   *  Fcn: '<S201>/theta->y'
   *  Fcn: '<S202>/r->x'
   *  Fcn: '<S202>/theta->y'
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
  rtb_TmpSignalConversionAtProduc[6] = rtb_UnitDelay3 * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_UnitDelay3 * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S140>/Reshapey' incorporates:
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

  /* Delay: '<S140>/MemoryX' incorporates:
   *  Constant: '<S140>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S15>/Switch1' incorporates:
   *  Constant: '<S15>/Constant2'
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
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
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

  /* Gain: '<S111>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch1_j1 = 0.0;
  } else {
    rtb_Switch1_j1 = 3.1415926535897931;
  }

  /* End of Switch: '<S15>/Switch' */

  /* Sum: '<S15>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch1_j1;

  /* Trigonometry: '<S21>/Trigonometric Function' */
  rtb_UnitDelay3 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S21>/Trigonometric Function1' */
  rtb_Switch2_g = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S21>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_UnitDelay3;
  rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_g;

  /* SignalConversion generated from: '<S21>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S21>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -rtb_Switch2_g;
  rtb_Rotationmatrixfromlocalto_3 = rtb_UnitDelay3;

  /* Sum: '<S194>/Diff' incorporates:
   *  UnitDelay: '<S194>/UD'
   *
   * Block description for '<S194>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S194>/UD':
   *
   *  Store in Global RAM
   */
  rtb_UnitDelay3 = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S21>/Subtract2' incorporates:
   *  Constant: '<S21>/Constant3'
   *  Gain: '<S21>/Gain7'
   *  Math: '<S21>/Square'
   */
  rtb_Switch2_g = 1.0 - ((rtb_UnitDelay3 * rtb_UnitDelay3) * 0.16666666666666666);

  /* Gain: '<S21>/Gain6' */
  rtb_UnitDelay3 *= 0.5;

  /* Product: '<S21>/Product7' incorporates:
   *  Constant: '<S21>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    rtb_Num_Segments = 0;
    for (s234_iter = 0; s234_iter < 8; s234_iter++) {
      rtb_Minus_k_idx_0 +=
        Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s234_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S21>/Product7' */

  /* Product: '<S21>/Product6' incorporates:
   *  SignalConversion generated from: '<S21>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S21>/Unary Minus2'
   */
  rtb_Coral_Wheel_DutyCycle_merge = (rtb_Switch2_g * tmp[0]) + ((-rtb_UnitDelay3)
    * tmp[1]);
  rtb_Algae_Wheel_Outside_DutyCyc = (rtb_UnitDelay3 * tmp[0]) + (rtb_Switch2_g *
    tmp[1]);

  /* Product: '<S21>/Product6' incorporates:
   *  Concatenate: '<S21>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Coral_Wheel_DutyCycle_merge) + (rtb_Rotationmatrixfromlocalto_2 *
    rtb_Algae_Wheel_Outside_DutyCyc);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 *
    rtb_Coral_Wheel_DutyCycle_merge) + (rtb_Rotationmatrixfromlocalto_3 *
    rtb_Algae_Wheel_Outside_DutyCyc);

  /* Outputs for Enabled SubSystem: '<S167>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S193>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S160>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S191>/Enable'
   */
  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S18>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S191>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S140>/C'
     *  Delay: '<S140>/MemoryX'
     *  Product: '<S193>/Product'
     */
    rtb_Abs1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Abs1;

    /* Sum: '<S191>/Sum' incorporates:
     *  Constant: '<S140>/D'
     *  Product: '<S191>/C[k]*xhat[k|k-1]'
     *  Product: '<S191>/D[k]*u[k]'
     *  Sum: '<S191>/Add1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[0] -
      (rtb_Coral_Wheel_DutyCycle_merge + rtb_Abs1);

    /* Product: '<S191>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S140>/C'
     *  Delay: '<S140>/MemoryX'
     *  Product: '<S193>/Product'
     */
    rtb_Abs1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Abs1;

    /* Sum: '<S191>/Sum' incorporates:
     *  Constant: '<S140>/D'
     *  Product: '<S191>/C[k]*xhat[k|k-1]'
     *  Product: '<S191>/D[k]*u[k]'
     *  Sum: '<S191>/Add1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Reshapey[1] -
      (rtb_Coral_Wheel_DutyCycle_merge + rtb_Abs1);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S191>/Product3' incorporates:
     *  Constant: '<S141>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_2) + (-2.0601714451538746E-17 *
      rtb_Coral_Wheel_DutyCycle_merge);

    /* Sum: '<S193>/Add1' incorporates:
     *  Product: '<S193>/Product'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S191>/Product3' incorporates:
     *  Constant: '<S141>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_2) + (0.095124921972504 *
      rtb_Coral_Wheel_DutyCycle_merge);

    /* Sum: '<S193>/Add1' incorporates:
     *  Product: '<S193>/Product'
     */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S193>/Product2' incorporates:
     *  Constant: '<S141>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (5.9896845167210271E-17 *
      rtb_Coral_Wheel_DutyCycle_merge);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (0.095124921972503981 *
      rtb_Coral_Wheel_DutyCycle_merge);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S191>/Product3' incorporates:
       *  Outport: '<S191>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S193>/Product2' incorporates:
       *  Outport: '<S193>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S18>/AND' */
  /* End of Outputs for SubSystem: '<S160>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S167>/Enabled Subsystem' */

  /* Sum: '<S167>/Add' incorporates:
   *  Delay: '<S140>/MemoryX'
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

  /* RelationalOperator: '<S137>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S137>/Delay Input1'
   *
   * Block description for '<S137>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S138>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S138>/Delay Input1'
   *
   * Block description for '<S138>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S139>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S139>/Delay Input1'
   *
   * Block description for '<S139>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

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

  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S130>/Constant'
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

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S129>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Coral_Station_Left = (Code_Gen_Model_U.Joystick_Right_B3 !=
    0.0);

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Coral_Station_Right = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Processor = (Code_Gen_Model_U.Joystick_Right_B2 != 0.0);

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Inport: '<Root>/Joystick_Right_B7'
   */
  Code_Gen_Model_B.Cage_Left_Start = (Code_Gen_Model_U.Joystick_Right_B7 != 0.0);

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   *  Inport: '<Root>/Joystick_Right_B6'
   */
  Code_Gen_Model_B.Cage_Middle_Start = (Code_Gen_Model_U.Joystick_Right_B6 !=
    0.0);

  /* RelationalOperator: '<S131>/Compare' incorporates:
   *  Constant: '<S131>/Constant'
   *  Inport: '<Root>/Joystick_Right_B5'
   */
  Code_Gen_Model_B.Cage_Right_Start = (Code_Gen_Model_U.Joystick_Right_B5 != 0.0);

  /* RelationalOperator: '<S132>/Compare' incorporates:
   *  Constant: '<S132>/Constant'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Cage_Left_Finish = (Code_Gen_Model_U.Joystick_Right_B8 != 0.0);

  /* RelationalOperator: '<S133>/Compare' incorporates:
   *  Constant: '<S133>/Constant'
   *  Inport: '<Root>/Joystick_Right_B9'
   */
  Code_Gen_Model_B.Cage_Middle_Finish = (Code_Gen_Model_U.Joystick_Right_B9 !=
    0.0);

  /* RelationalOperator: '<S134>/Compare' incorporates:
   *  Constant: '<S134>/Constant'
   *  Inport: '<Root>/Joystick_Right_B10'
   */
  Code_Gen_Model_B.Cage_Right_Finish = (Code_Gen_Model_U.Joystick_Right_B10 !=
    0.0);

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
       Code_Gen_Model_DW.DelayInput1_DSTATE_b)) {
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
    rtb_Enable_Wheels = false;

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
    rtb_Swerve_Motors_Disabled = true;

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
    Robot_Reached_Destination = false;

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
       *  UnitDelay: '<S60>/Delay Input1'
       *  UnitDelay: '<S61>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S65>/Delay Input1'
       *  UnitDelay: '<S67>/Delay Input1'
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
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_B.Align_Center_b = false;
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_B.Gamepad_RT_out = false;
      Code_Gen_Model_B.Gamepad_POV_Down_o = false;
      Code_Gen_Model_B.Gamepad_POV_Left_d = false;
      Code_Gen_Model_B.Spline_Enable = false;
      Code_Gen_Model_B.Path_ID = 0U;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
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
     *  Switch: '<S30>/Switch11'
     *  Switch: '<S30>/Switch8'
     *  Switch: '<S30>/Switch9'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S30>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S30>/Switch10'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S30>/Constant20'
         */
        Switch6 = 3U;

        /* Switch: '<S30>/Switch9' incorporates:
         *  Constant: '<S30>/Constant24'
         */
        Switch9 = 4U;
      } else {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S30>/Constant21'
         */
        Switch6 = 17U;

        /* Switch: '<S30>/Switch9' incorporates:
         *  Constant: '<S30>/Constant25'
         */
        Switch9 = 18U;
      }

      /* End of Switch: '<S30>/Switch7' */
    } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S30>/Switch8' incorporates:
       *  Constant: '<S30>/Constant22'
       *  Switch: '<S30>/Switch6'
       */
      Switch6 = 7U;

      /* Switch: '<S30>/Switch11' incorporates:
       *  Constant: '<S30>/Constant26'
       *  Switch: '<S30>/Switch9'
       */
      Switch9 = 8U;
    } else {
      /* Switch: '<S30>/Switch6' incorporates:
       *  Constant: '<S30>/Constant23'
       *  Switch: '<S30>/Switch8'
       */
      Switch6 = 13U;

      /* Switch: '<S30>/Switch9' incorporates:
       *  Constant: '<S30>/Constant27'
       *  Switch: '<S30>/Switch11'
       */
      Switch9 = 14U;
    }

    /* End of Switch: '<S30>/Switch6' */

    /* UnitDelay: '<S28>/Unit Delay1' */
    Code_Gen_Model_B.UnitDelay1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_p;

    /* UnitDelay: '<S28>/Unit Delay2' */
    Code_Gen_Model_B.UnitDelay2 = Code_Gen_Model_DW.UnitDelay2_DSTATE;

    /* Chart: '<S28>/Reefscape_Auto_Steps' incorporates:
     *  Constant: '<S28>/Constant1'
     *  UnitDelay: '<S17>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c6_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 1U;
      if ((Auto_Starting_Position == 1.0) || (Auto_Starting_Position == 3.0)) {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Mode_IN_Left_and_Right;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 1U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Start_l;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
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
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.timer >= Auto_Algae_Height_Time) {
          Code_Gen_Model_B.Gamepad_POV_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
          Code_Gen_Model_B.Auto_Step_ID = 105U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Algae;
          Code_Gen_Model_B.Align_Center_b = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Scor:
        Code_Gen_Model_B.Auto_Step_ID = 103U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_IN_Adjust_Height_for_Algae;
          Code_Gen_Model_B.Auto_Step_ID = 104U;
          Code_Gen_Model_B.Translation_Speed_k = 0.0;
          Code_Gen_Model_B.Translation_Angle_c = 0.0;
          Code_Gen_Model_B.Gamepad_POV_Left_d = true;
          Code_Gen_Model_DW.timer = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Collect_:
        Code_Gen_Model_B.Auto_Step_ID = 106U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_Path_to_Processor;
          Code_Gen_Model_B.Auto_Step_ID = 107U;

          /* Merge: '<S20>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          Code_Gen_Model_B.Path_ID = MultiportSwitch1;
          Code_Gen_Model_B.Gamepad_POV_Down_o = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Processo:
        Code_Gen_Model_B.Auto_Step_ID = 109U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Processor;
        Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Processor) {
          Code_Gen_Model_B.Gamepad_Back_out = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 110U;
          Code_Gen_Model_B.Translation_Speed_k = 0.0;
          Code_Gen_Model_B.Translation_Angle_c = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Code_Gen_Model_B.Auto_Step_ID = 105U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Algae;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Compare_f) {
          Code_Gen_Model_B.Align_Center_b = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Collect_;
          Code_Gen_Model_B.Auto_Step_ID = 106U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_End_early:
        Code_Gen_Model_B.Gamepad_Back_out = false;
        Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
        Code_Gen_Model_B.Auto_Step_ID = 110U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        break;

       case Code_Gen_M_IN_Path_to_Processor:
        Code_Gen_Model_B.Auto_Step_ID = 107U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.Gamepad_POV_Down_o = false;
          Code_Gen_Model_DW.is_Center = Code_Gen__IN_Score_at_Processor;
          Code_Gen_Model_B.Auto_Step_ID = 108U;

          /* Merge: '<S20>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          Code_Gen_Model_B.Translation_Speed_k = 0.0;
          Code_Gen_Model_B.Translation_Angle_c = 0.0;
          Code_Gen_Model_B.Gamepad_RT_out = true;
        }
        break;

       case Code_Gen_Model_IN_Path_to_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
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
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (!Compare_f) {
          Code_Gen_Model_B.Gamepad_RT_out = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Processo;
          Code_Gen_Model_B.Auto_Step_ID = 109U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Processor;
          Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
          Code_Gen_Model_B.Gamepad_Back_out = true;
        }
        break;

       case Code_Gen_Model_IN_Score_at_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 102U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_B.UnitDelay1) {
          Code_Gen_Model_B.Align_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Back_Up_from_Reef_Coral_Scor;
          Code_Gen_Model_B.Auto_Step_ID = 103U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       default:
        /* case IN_Wait_for_Teleop: */
        Code_Gen_Model_B.Auto_Step_ID = 110U;

        /* Merge: '<S20>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        break;
      }
    } else {
      /* Merge: '<S20>/Merge7' incorporates:
       *  UnitDelay: '<S17>/Unit Delay'
       */
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
        &MultiportSwitch, &MultiportSwitch1, &Code_Gen_Model_B.Spline_Enable,
        &Switch6, &Switch9);
    }

    /* End of Chart: '<S28>/Reefscape_Auto_Steps' */

    /* Selector: '<S28>/Selector' incorporates:
     *  Constant: '<S28>/Constant'
     *  Merge: '<S20>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s234_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s234_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s234_iter];
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
     *  RelationalOperator: '<S60>/FixPt Relational Operator'
     *  RelationalOperator: '<S61>/FixPt Relational Operator'
     *  RelationalOperator: '<S62>/FixPt Relational Operator'
     *  RelationalOperator: '<S63>/FixPt Relational Operator'
     *  RelationalOperator: '<S64>/FixPt Relational Operator'
     *  RelationalOperator: '<S65>/FixPt Relational Operator'
     *  RelationalOperator: '<S66>/FixPt Relational Operator'
     *  RelationalOperator: '<S67>/FixPt Relational Operator'
     *  UnitDelay: '<S28>/Unit Delay'
     *  UnitDelay: '<S55>/Delay Input1'
     *  UnitDelay: '<S57>/Delay Input1'
     *  UnitDelay: '<S58>/Delay Input1'
     *  UnitDelay: '<S60>/Delay Input1'
     *  UnitDelay: '<S61>/Delay Input1'
     *  UnitDelay: '<S62>/Delay Input1'
     *  UnitDelay: '<S65>/Delay Input1'
     *  UnitDelay: '<S67>/Delay Input1'
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
      Code_Gen_Model_B.Gamepad_POV_Down_o) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left_d) > ((int32_T)
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
     *  Switch: '<S29>/Switch1'
     *  Switch: '<S29>/Switch4'
     *  Switch: '<S29>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left_d) {
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right_i) {
      /* Switch: '<S29>/Switch1' incorporates:
       *  Constant: '<S29>/Constant2'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Coral_Level_j == 1)) {
      /* Switch: '<S29>/Switch4' incorporates:
       *  Constant: '<S29>/Constant3'
       *  Switch: '<S29>/Switch1'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S29>/Switch6' incorporates:
       *  Constant: '<S29>/Constant6'
       *  Switch: '<S29>/Switch1'
       *  Switch: '<S29>/Switch4'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S29>/Switch4' incorporates:
       *  Switch: '<S29>/Switch1'
       *  UnitDelay: '<S29>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S29>/Switch' */

    /* Sum: '<S29>/Subtract1' */
    rtb_Abs1 = rtb_Rotationmatrixfromlocalto_2 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S28>/Signal Copy6' */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Y = rtb_Abs1;

    /* Switch: '<S29>/Switch2' incorporates:
     *  Constant: '<S29>/Constant4'
     *  Constant: '<S38>/Constant'
     *  Logic: '<S29>/AND2'
     *  RelationalOperator: '<S38>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center_b) && (Code_Gen_Model_B.Set_Coral_Level_j
         == 1)) {
      rtb_Switch2_ji = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S29>/OR' */
      Robot_Reached_Destination = ((Code_Gen_Model_B.Align_Left_d) ||
        (Code_Gen_Model_B.Align_Right_i));

      /* Switch: '<S29>/Switch3' incorporates:
       *  Constant: '<S29>/Constant'
       *  Constant: '<S34>/Constant'
       *  Constant: '<S35>/Constant'
       *  Constant: '<S37>/Constant'
       *  Constant: '<S51>/Constant'
       *  Logic: '<S29>/AND3'
       *  Logic: '<S29>/Logical Operator5'
       *  Logic: '<S29>/Logical Operator6'
       *  Logic: '<S29>/OR1'
       *  RelationalOperator: '<S34>/Compare'
       *  RelationalOperator: '<S35>/Compare'
       *  RelationalOperator: '<S37>/Compare'
       *  RelationalOperator: '<S51>/Compare'
       *  Switch: '<S29>/Switch5'
       *  Switch: '<S29>/Switch7'
       */
      if (Robot_Reached_Destination && ((Code_Gen_Model_B.Set_Coral_Level_j == 2)
           || (Code_Gen_Model_B.Set_Coral_Level_j == 3))) {
        rtb_Switch2_ji = AT_Reef_Target_L2_L3_X;
      } else if (Robot_Reached_Destination &&
                 (Code_Gen_Model_B.Set_Coral_Level_j == 4)) {
        /* Switch: '<S29>/Switch5' incorporates:
         *  Constant: '<S29>/Constant5'
         */
        rtb_Switch2_ji = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center_b) &&
                 (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
        /* Switch: '<S29>/Switch7' incorporates:
         *  Constant: '<S29>/Constant7'
         *  Switch: '<S29>/Switch5'
         */
        rtb_Switch2_ji = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S29>/Switch5' incorporates:
         *  UnitDelay: '<S29>/Unit Delay'
         */
        rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
      }

      /* End of Switch: '<S29>/Switch3' */
    }

    /* End of Switch: '<S29>/Switch2' */

    /* Sum: '<S29>/Subtract' */
    rtb_Subtract_d4 = rtb_Switch2_ji -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S28>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus1'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_X = -rtb_Subtract_d4;

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
    Robot_Reached_Destination =
      (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
          (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
         (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
        ((Code_Gen_Model_B.Set_Coral_Level_j != 0) ||
         (Code_Gen_Model_B.Set_Algae_Level_p != 0))) &&
       (((Code_Gen_Model_B.Align_Left_d) || (Code_Gen_Model_B.Align_Right_i)) ||
        (Code_Gen_Model_B.Align_Center_b)));

    /* SignalConversion: '<S28>/Signal Copy1' */
    Code_Gen_Model_B.Auto_AT_Relative_Enable = Robot_Reached_Destination;

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
      rtb_Rotationmatrixfromlocalto_3 =
        Code_Gen_Model_B.Auto_AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S69>/Switch2' incorporates:
       *  Constant: '<S33>/Constant10'
       *  RelationalOperator: '<S69>/LowerRelop1'
       *  RelationalOperator: '<S69>/UpperRelop'
       *  Switch: '<S69>/Switch'
       *  UnaryMinus: '<S33>/Unary Minus'
       */
      if (rtb_Rotationmatrixfromlocalto_3 > AT_Steering_Speed_Max) {
        /* Merge: '<S20>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Rotationmatrixfromlocalto_3 < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S69>/Switch' incorporates:
         *  Merge: '<S20>/Merge2'
         *  UnaryMinus: '<S33>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S20>/Merge2' incorporates:
         *  Switch: '<S69>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Rotationmatrixfromlocalto_3;
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
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_B.Translation_Angle_c;

      /* Merge: '<S20>/Merge2' incorporates:
       *  Constant: '<S33>/Constant2'
       */
      Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S20>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.Translation_Speed_k;
    }

    /* End of Switch: '<S33>/Switch2' */

    /* Abs: '<S29>/Abs2' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_3 = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S29>/Abs' incorporates:
     *  UnaryMinus: '<S29>/Unary Minus1'
     */
    rtb_Subtract_d4 = fabs(-rtb_Subtract_d4);

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
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Robot_Reached_Destination
      && (rtb_Subtract_d4 <= AT_Integral_Enable_Error_XY)) && (rtb_Abs1 <=
      AT_Integral_Enable_Error_XY)) && (rtb_Rotationmatrixfromlocalto_3 <=
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
    Code_Gen_Model_B.Auto_AT_On_Target = (((Robot_Reached_Destination &&
      (rtb_Subtract_d4 <= AT_Max_Error_XY)) && (rtb_Abs1 <= AT_Max_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_3 <= AT_Max_Error_Angle));

    /* SignalConversion: '<S28>/Signal Copy9' */
    Robot_Reached_Destination = Code_Gen_Model_B.Auto_AT_On_Target;

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
    rtb_Enable_Wheels = false;

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
    rtb_Swerve_Motors_Disabled = false;

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
    Code_Gen_Model_DW.DelayInput1_DSTATE_bd = false;

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

    /* Update for UnitDelay: '<S57>/Delay Input1'
     *
     * Block description for '<S57>/Delay Input1':
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

    /* Update for UnitDelay: '<S64>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant13'
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
      Code_Gen_Model_B.Gamepad_POV_Down_o;

    /* Update for UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_d;

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
    Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_Switch2_ji;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S26>/Unit Delay'
       *  UnitDelay: '<S421>/Unit Delay1'
       *  UnitDelay: '<S422>/Unit Delay'
       *  UnitDelay: '<S422>/Unit Delay1'
       *  UnitDelay: '<S444>/Unit Delay1'
       *  UnitDelay: '<S444>/Unit Delay2'
       *  UnitDelay: '<S444>/Unit Delay3'
       *  UnitDelay: '<S444>/Unit Delay4'
       *  UnitDelay: '<S447>/Delay Input1'
       *  UnitDelay: '<S448>/Delay Input1'
       *  UnitDelay: '<S449>/Delay Input1'
       *  UnitDelay: '<S450>/Delay Input1'
       *  UnitDelay: '<S451>/Delay Input1'
       *  UnitDelay: '<S452>/Delay Input1'
       *  UnitDelay: '<S458>/Unit Delay'
       *  UnitDelay: '<S458>/Unit Delay1'
       *  UnitDelay: '<S462>/FixPt Unit Delay1'
       *  UnitDelay: '<S462>/FixPt Unit Delay2'
       *  UnitDelay: '<S465>/Delay Input1'
       *  UnitDelay: '<S466>/Delay Input1'
       *  UnitDelay: '<S467>/Delay Input1'
       *  UnitDelay: '<S468>/Delay Input1'
       *  UnitDelay: '<S469>/Delay Input1'
       *  UnitDelay: '<S470>/Delay Input1'
       *  UnitDelay: '<S471>/Delay Input1'
       *  UnitDelay: '<S472>/Delay Input1'
       *  UnitDelay: '<S473>/Delay Input1'
       *  UnitDelay: '<S474>/Delay Input1'
       *  UnitDelay: '<S475>/Delay Input1'
       *  UnitDelay: '<S476>/Delay Input1'
       *  UnitDelay: '<S477>/Delay Input1'
       *
       * Block description for '<S447>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S448>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S449>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S450>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S451>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S452>/Delay Input1':
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
       *
       * Block description for '<S471>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S472>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S473>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S474>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S475>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S476>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S477>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
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
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ia = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_kq = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE_l = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S424>/Reefscape_Chart'
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
        &Coral_Score, &Code_Gen_Model_DW.sf_Reefscape_Chart_n);

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

    /* Logic: '<S421>/Logical Operator8' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Cage_Left_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Enable_Wheels = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S421>/Logical Operator9' */
    rtb_Disable_Wheels = ((Code_Gen_Model_B.Cage_Left_Start) &&
                          rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator7' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Reset_Wheel_Offsets = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator12' */
    rtb_Compare_m3 = ((Code_Gen_Model_B.Cage_Middle_Start) && rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator13' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Cage_Right_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator14' */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Cage_Right_Start) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator19' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Left_Finish_Blue_Ac = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator20' */
    rtb_AT_Cage_Left_Finish_Red_Act = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator18' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Middle_Finish_Blue_ = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator15' */
    rtb_AT_Cage_Middle_Finish_Red_A = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator16' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Finish_Blue_A = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator17' */
    rtb_AT_Cage_Right_Finish_Red_Ac = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator6' */
    rtb_AT_Processor_Red_Active = ((Code_Gen_Model_B.Processor) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator5' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Processor_Blue_Active = ((Code_Gen_Model_B.Processor) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator4' */
    rtb_AT_CS_Right_Red_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator1' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_CS_Right_Blue_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S421>/Logical Operator3' */
    rtb_AT_CS_Left_Red_Active = ((Code_Gen_Model_B.Coral_Station_Left) &&
      rtb_Enable_Wheels);

    /* Logic: '<S421>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Enable_Wheels = ((Code_Gen_Model_B.Coral_Station_Left) &&
                         (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Switch: '<S421>/Switch2' incorporates:
     *  Switch: '<S421>/Switch1'
     *  Switch: '<S421>/Switch10'
     *  Switch: '<S421>/Switch12'
     *  Switch: '<S421>/Switch13'
     *  Switch: '<S421>/Switch14'
     *  Switch: '<S421>/Switch16'
     *  Switch: '<S421>/Switch19'
     *  Switch: '<S421>/Switch20'
     *  Switch: '<S421>/Switch21'
     *  Switch: '<S421>/Switch22'
     *  Switch: '<S421>/Switch24'
     *  Switch: '<S421>/Switch3'
     *  Switch: '<S421>/Switch30'
     *  Switch: '<S421>/Switch4'
     */
    if (rtb_Enable_Wheels) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant9'
       *  Sum: '<S421>/Add17'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant28'
       *  Sum: '<S421>/Add23'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant5'
       *  Sum: '<S421>/Add16'
       *  Switch: '<S421>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant27'
       *  Sum: '<S421>/Add22'
       *  Switch: '<S421>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant4'
       *  Sum: '<S421>/Add10'
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant26'
       *  Sum: '<S421>/Add12'
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant17'
       *  Sum: '<S421>/Add11'
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch12'
       *  Switch: '<S421>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant3'
       *  Sum: '<S421>/Add13'
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch20'
       *  Switch: '<S421>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant18'
       *  Sum: '<S421>/Add14'
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch12'
       *  Switch: '<S421>/Switch13'
       *  Switch: '<S421>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant21'
       *  Sum: '<S421>/Add20'
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch20'
       *  Switch: '<S421>/Switch21'
       *  Switch: '<S421>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant19'
       *  Sum: '<S421>/Add15'
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch12'
       *  Switch: '<S421>/Switch13'
       *  Switch: '<S421>/Switch14'
       *  Switch: '<S421>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant23'
       *  Sum: '<S421>/Add21'
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch20'
       *  Switch: '<S421>/Switch21'
       *  Switch: '<S421>/Switch22'
       *  Switch: '<S421>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant7'
       *  Sum: '<S421>/Add1'
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch12'
       *  Switch: '<S421>/Switch13'
       *  Switch: '<S421>/Switch14'
       *  Switch: '<S421>/Switch16'
       *  Switch: '<S421>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant32'
       *  Sum: '<S421>/Add24'
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch20'
       *  Switch: '<S421>/Switch21'
       *  Switch: '<S421>/Switch22'
       *  Switch: '<S421>/Switch24'
       *  Switch: '<S421>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Disable_Wheels) {
      /* Switch: '<S421>/Switch2' incorporates:
       *  Constant: '<S421>/Constant15'
       *  Sum: '<S421>/Add2'
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch10'
       *  Switch: '<S421>/Switch12'
       *  Switch: '<S421>/Switch13'
       *  Switch: '<S421>/Switch14'
       *  Switch: '<S421>/Switch16'
       *  Switch: '<S421>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S421>/Switch4' incorporates:
       *  Constant: '<S421>/Constant25'
       *  Sum: '<S421>/Add19'
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch20'
       *  Switch: '<S421>/Switch21'
       *  Switch: '<S421>/Switch22'
       *  Switch: '<S421>/Switch24'
       *  Switch: '<S421>/Switch29'
       *  Switch: '<S421>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S421>/Switch11' incorporates:
       *  Switch: '<S421>/Switch1'
       *  Switch: '<S421>/Switch10'
       *  Switch: '<S421>/Switch12'
       *  Switch: '<S421>/Switch13'
       *  Switch: '<S421>/Switch14'
       *  Switch: '<S421>/Switch16'
       *  Switch: '<S421>/Switch3'
       */
      if (rtb_Reset_Wheel_Offsets) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant20'
         *  Sum: '<S421>/Add3'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_Compare_m3) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant24'
         *  Sum: '<S421>/Add4'
         *  Switch: '<S421>/Switch17'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_Is_Absolute_Steering) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant29'
         *  Sum: '<S421>/Add5'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant31'
         *  Sum: '<S421>/Add6'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant39'
         *  Sum: '<S421>/Add25'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant2'
         *  Sum: '<S421>/Add26'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch31'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant34'
         *  Sum: '<S421>/Add27'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch31'
         *  Switch: '<S421>/Switch32'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant35'
         *  Sum: '<S421>/Add28'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch31'
         *  Switch: '<S421>/Switch32'
         *  Switch: '<S421>/Switch33'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant36'
         *  Sum: '<S421>/Add29'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch31'
         *  Switch: '<S421>/Switch32'
         *  Switch: '<S421>/Switch33'
         *  Switch: '<S421>/Switch34'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant38'
         *  Sum: '<S421>/Add30'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch31'
         *  Switch: '<S421>/Switch32'
         *  Switch: '<S421>/Switch33'
         *  Switch: '<S421>/Switch34'
         *  Switch: '<S421>/Switch35'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S421>/Constant37'
         *  Switch: '<S421>/Switch17'
         *  Switch: '<S421>/Switch18'
         *  Switch: '<S421>/Switch23'
         *  Switch: '<S421>/Switch31'
         *  Switch: '<S421>/Switch32'
         *  Switch: '<S421>/Switch33'
         *  Switch: '<S421>/Switch34'
         *  Switch: '<S421>/Switch35'
         *  Switch: '<S421>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = 0.0;
      }

      /* End of Switch: '<S421>/Switch11' */

      /* Switch: '<S421>/Switch25' incorporates:
       *  Switch: '<S421>/Switch19'
       *  Switch: '<S421>/Switch20'
       *  Switch: '<S421>/Switch21'
       *  Switch: '<S421>/Switch22'
       *  Switch: '<S421>/Switch24'
       *  Switch: '<S421>/Switch26'
       *  Switch: '<S421>/Switch27'
       *  Switch: '<S421>/Switch28'
       *  Switch: '<S421>/Switch29'
       *  Switch: '<S421>/Switch30'
       *  Switch: '<S421>/Switch37'
       *  Switch: '<S421>/Switch38'
       *  Switch: '<S421>/Switch39'
       *  Switch: '<S421>/Switch40'
       *  Switch: '<S421>/Switch41'
       *  Switch: '<S421>/Switch42'
       */
      if (rtb_Reset_Wheel_Offsets) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant22'
         *  Sum: '<S421>/Add7'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_Compare_m3) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant33'
         *  Sum: '<S421>/Add8'
         *  Switch: '<S421>/Switch26'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_Is_Absolute_Steering) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant6'
         *  Sum: '<S421>/Add9'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant16'
         *  Sum: '<S421>/Add18'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant43'
         *  Sum: '<S421>/Add33'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant42'
         *  Sum: '<S421>/Add32'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch41'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant41'
         *  Sum: '<S421>/Add34'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch37'
         *  Switch: '<S421>/Switch41'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant44'
         *  Sum: '<S421>/Add35'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch37'
         *  Switch: '<S421>/Switch38'
         *  Switch: '<S421>/Switch41'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant45'
         *  Sum: '<S421>/Add36'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch37'
         *  Switch: '<S421>/Switch38'
         *  Switch: '<S421>/Switch39'
         *  Switch: '<S421>/Switch41'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant40'
         *  Sum: '<S421>/Add31'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch37'
         *  Switch: '<S421>/Switch38'
         *  Switch: '<S421>/Switch39'
         *  Switch: '<S421>/Switch40'
         *  Switch: '<S421>/Switch41'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S421>/Constant30'
         *  Switch: '<S421>/Switch26'
         *  Switch: '<S421>/Switch27'
         *  Switch: '<S421>/Switch28'
         *  Switch: '<S421>/Switch37'
         *  Switch: '<S421>/Switch38'
         *  Switch: '<S421>/Switch39'
         *  Switch: '<S421>/Switch40'
         *  Switch: '<S421>/Switch41'
         *  Switch: '<S421>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = 0.0;
      }

      /* End of Switch: '<S421>/Switch25' */
    }

    /* End of Switch: '<S421>/Switch2' */

    /* Switch: '<S458>/Switch1' incorporates:
     *  Constant: '<S463>/Constant'
     *  Constant: '<S464>/Constant'
     *  Logic: '<S458>/AND'
     *  RelationalOperator: '<S463>/Compare'
     *  RelationalOperator: '<S464>/Compare'
     *  Switch: '<S458>/Switch2'
     *  UnitDelay: '<S458>/Unit Delay'
     *  UnitDelay: '<S458>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Abs1 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Abs1 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S458>/Switch1' */

    /* Lookup_n-D: '<S445>/Modulation_Drv' incorporates:
     *  Math: '<S445>/Magnitude'
     */
    rtb_Rotationmatrixfromlocalto_0 = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S456>/Compare' incorporates:
     *  Constant: '<S456>/Constant'
     */
    Robot_Reached_Destination = (rtb_Rotationmatrixfromlocalto_0 == 0.0);

    /* DeadZone: '<S424>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* DeadZone: '<S424>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      rtb_Switch2_pb = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      rtb_Switch2_pb = 0.0;
    } else {
      rtb_Switch2_pb = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* SignalConversion generated from: '<S26>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S424>/Reefscape_Chart'
     *  Constant: '<S26>/Constant'
     *  DeadZone: '<S424>/Dead Zone'
     *  DeadZone: '<S424>/Dead Zone1'
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
     *  RelationalOperator: '<S465>/FixPt Relational Operator'
     *  RelationalOperator: '<S466>/FixPt Relational Operator'
     *  RelationalOperator: '<S467>/FixPt Relational Operator'
     *  RelationalOperator: '<S468>/FixPt Relational Operator'
     *  RelationalOperator: '<S469>/FixPt Relational Operator'
     *  RelationalOperator: '<S470>/FixPt Relational Operator'
     *  RelationalOperator: '<S471>/FixPt Relational Operator'
     *  RelationalOperator: '<S472>/FixPt Relational Operator'
     *  RelationalOperator: '<S473>/FixPt Relational Operator'
     *  RelationalOperator: '<S474>/FixPt Relational Operator'
     *  RelationalOperator: '<S475>/FixPt Relational Operator'
     *  RelationalOperator: '<S476>/FixPt Relational Operator'
     *  RelationalOperator: '<S477>/FixPt Relational Operator'
     *  UnitDelay: '<S26>/Unit Delay'
     *  UnitDelay: '<S465>/Delay Input1'
     *  UnitDelay: '<S466>/Delay Input1'
     *  UnitDelay: '<S467>/Delay Input1'
     *  UnitDelay: '<S468>/Delay Input1'
     *  UnitDelay: '<S469>/Delay Input1'
     *  UnitDelay: '<S470>/Delay Input1'
     *  UnitDelay: '<S471>/Delay Input1'
     *  UnitDelay: '<S472>/Delay Input1'
     *  UnitDelay: '<S473>/Delay Input1'
     *  UnitDelay: '<S474>/Delay Input1'
     *  UnitDelay: '<S475>/Delay Input1'
     *  UnitDelay: '<S476>/Delay Input1'
     *  UnitDelay: '<S477>/Delay Input1'
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
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S473>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S474>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S475>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S476>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S477>/Delay Input1':
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
      Code_Gen_Model_DW.DelayInput1_DSTATE_p), (Code_Gen_Model_U.Gamepad_LT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_o), (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Up) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_f)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5)), (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a)), rtb_Minus_k_idx_0,
      rtb_Switch2_pb, Code_Gen_Model_B.Elevator_Height_Measured,
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
      &Coral_Score, &Code_Gen_Model_DW.sf_Reefscape_Chart_n);

    /* Logic: '<S422>/Logical Operator3' incorporates:
     *  Logic: '<S422>/OR'
     *  Switch: '<S422>/Switch2'
     */
    Compare_f = ((Code_Gen_Model_B.Align_Left) || (Code_Gen_Model_B.Align_Right));

    /* Logic: '<S422>/Logical Operator1' incorporates:
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Constant: '<S439>/Constant'
     *  Constant: '<S440>/Constant'
     *  Constant: '<S441>/Constant'
     *  Logic: '<S422>/Logical Operator2'
     *  Logic: '<S422>/Logical Operator3'
     *  Logic: '<S422>/Logical Operator4'
     *  Logic: '<S422>/NOT'
     *  RelationalOperator: '<S437>/Compare'
     *  RelationalOperator: '<S438>/Compare'
     *  RelationalOperator: '<S439>/Compare'
     *  RelationalOperator: '<S440>/Compare'
     *  RelationalOperator: '<S441>/Compare'
     */
    rtb_AND2_k = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) || (
      !(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                    (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                   ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
                    (Code_Gen_Model_B.Set_Algae_Level != 0))) && (Compare_f ||
      (Code_Gen_Model_B.Align_Center)));

    /* SignalConversion: '<S26>/Signal Copy6' */
    Code_Gen_Model_B.AT_Relative_Error_Enable = rtb_AND2_k;

    /* DeadZone: '<S445>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S445>/Dead Zone' */

    /* Logic: '<S445>/Logical Operator' incorporates:
     *  Constant: '<S457>/Constant'
     *  RelationalOperator: '<S457>/Compare'
     */
    Compare = ((rtb_DeadZone != 0.0) && Robot_Reached_Destination);

    /* Logic: '<S445>/Logical Operator1' */
    rtb_LogicalOperator1_h = ((Code_Gen_Model_B.AT_Relative_Error_Enable) ||
      Compare);

    /* Switch: '<S422>/Switch' incorporates:
     *  Constant: '<S422>/Constant1'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S442>/Constant'
     *  Logic: '<S422>/AND'
     *  Logic: '<S422>/AND1'
     *  RelationalOperator: '<S431>/Compare'
     *  RelationalOperator: '<S442>/Compare'
     *  Switch: '<S422>/Switch1'
     *  Switch: '<S422>/Switch4'
     *  Switch: '<S422>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch2_ji = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S422>/Switch1' incorporates:
       *  Constant: '<S422>/Constant2'
       */
      rtb_Switch2_ji = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S422>/Switch4' incorporates:
       *  Constant: '<S422>/Constant3'
       *  Switch: '<S422>/Switch1'
       */
      rtb_Switch2_ji = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S422>/Switch6' incorporates:
       *  Constant: '<S422>/Constant6'
       *  Switch: '<S422>/Switch1'
       *  Switch: '<S422>/Switch4'
       */
      rtb_Switch2_ji = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S422>/Switch4' incorporates:
       *  Switch: '<S422>/Switch1'
       *  UnitDelay: '<S422>/Unit Delay1'
       */
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S422>/Switch' */

    /* Sum: '<S422>/Subtract1' */
    rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_ji -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S26>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Rotationmatrixfromlocalto_1;

    /* Switch: '<S422>/Switch2' incorporates:
     *  Constant: '<S422>/Constant4'
     *  Constant: '<S426>/Constant'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Constant: '<S443>/Constant'
     *  Logic: '<S422>/AND2'
     *  Logic: '<S422>/AND3'
     *  Logic: '<S422>/Logical Operator5'
     *  Logic: '<S422>/Logical Operator6'
     *  Logic: '<S422>/OR1'
     *  RelationalOperator: '<S426>/Compare'
     *  RelationalOperator: '<S427>/Compare'
     *  RelationalOperator: '<S429>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     *  RelationalOperator: '<S443>/Compare'
     *  Switch: '<S422>/Switch3'
     *  Switch: '<S422>/Switch5'
     *  Switch: '<S422>/Switch7'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Subtract_d4 = AT_Reef_Target_L1_X;
    } else if (Compare_f && ((Code_Gen_Model_B.Set_Coral_Level == 2) ||
                (Code_Gen_Model_B.Set_Coral_Level == 3))) {
      /* Switch: '<S422>/Switch3' incorporates:
       *  Constant: '<S422>/Constant'
       */
      rtb_Subtract_d4 = AT_Reef_Target_L2_L3_X;
    } else if (Compare_f && (Code_Gen_Model_B.Set_Coral_Level == 4)) {
      /* Switch: '<S422>/Switch5' incorporates:
       *  Constant: '<S422>/Constant5'
       *  Switch: '<S422>/Switch3'
       */
      rtb_Subtract_d4 = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S422>/Switch7' incorporates:
       *  Constant: '<S422>/Constant7'
       *  Switch: '<S422>/Switch3'
       *  Switch: '<S422>/Switch5'
       */
      rtb_Subtract_d4 = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S422>/Switch5' incorporates:
       *  Switch: '<S422>/Switch3'
       *  UnitDelay: '<S422>/Unit Delay'
       */
      rtb_Subtract_d4 = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
    }

    /* Sum: '<S422>/Subtract' */
    rtb_Subtract_hf = rtb_Subtract_d4 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S26>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S422>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X = -rtb_Subtract_hf;

    /* Switch: '<S445>/Switch9' incorporates:
     *  Switch: '<S445>/Switch4'
     */
    if (rtb_LogicalOperator1_h) {
      /* Switch: '<S445>/Switch1' */
      if (Compare) {
        /* Signum: '<S445>/Sign' */
        if (rtIsNaN(rtb_DeadZone)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_DeadZone < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_DeadZone > 0.0);
        }

        /* Switch: '<S445>/Switch5' incorporates:
         *  Constant: '<S445>/Constant3'
         *  Constant: '<S445>/Constant4'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_pb = -1.5707963267948966;
        } else {
          rtb_Switch2_pb = 0.0;
        }

        /* Merge: '<S20>/Merge3' incorporates:
         *  Gain: '<S445>/Gain3'
         *  Signum: '<S445>/Sign'
         *  Sum: '<S445>/Add'
         *  Switch: '<S445>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_pb;
      } else {
        /* Merge: '<S20>/Merge3' incorporates:
         *  Trigonometry: '<S445>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S445>/Switch1' */
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S445>/Switch6' incorporates:
       *  Constant: '<S445>/Constant'
       *  Constant: '<S445>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S445>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_0 = 0.0;
      } else {
        rtb_Minus_k_idx_0 = 3.1415926535897931;
      }

      /* Merge: '<S20>/Merge3' incorporates:
       *  Sum: '<S445>/Add1'
       *  Switch: '<S445>/Switch4'
       *  Switch: '<S445>/Switch6'
       *  Trigonometry: '<S445>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Field_Error_Y, Code_Gen_Model_B.AT_Field_Error_X) +
        rtb_Minus_k_idx_0;
    } else {
      /* Merge: '<S20>/Merge3' incorporates:
       *  Switch: '<S445>/Switch4'
       *  Trigonometry: '<S445>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_2, rtb_Abs1);
    }

    /* End of Switch: '<S445>/Switch9' */

    /* Switch: '<S455>/Switch1' incorporates:
     *  Constant: '<S455>/Constant'
     *  Constant: '<S455>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_UnitDelay3 = Boost_Trigger_High_Speed;
    } else {
      rtb_UnitDelay3 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S455>/Switch1' */

    /* Switch: '<S462>/Init' incorporates:
     *  UnitDelay: '<S462>/FixPt Unit Delay1'
     *  UnitDelay: '<S462>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Coral_Wheel_DutyCycle_merge = rtb_UnitDelay3;
    } else {
      rtb_Coral_Wheel_DutyCycle_merge =
        Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S462>/Init' */

    /* Sum: '<S460>/Sum1' */
    rtb_Rotationmatrixfromlocalto_3 = rtb_UnitDelay3 -
      rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S461>/Switch2' incorporates:
     *  Constant: '<S459>/Constant1'
     *  Constant: '<S459>/Constant3'
     *  RelationalOperator: '<S461>/LowerRelop1'
     *  RelationalOperator: '<S461>/UpperRelop'
     *  Switch: '<S461>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_3 > Boost_Trigger_Increasing_Limit) {
      rtb_Rotationmatrixfromlocalto_3 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Rotationmatrixfromlocalto_3 < Boost_Trigger_Decreasing_Limit)
    {
      /* Switch: '<S461>/Switch' incorporates:
       *  Constant: '<S459>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_3 = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S460>/Sum' incorporates:
     *  Switch: '<S461>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_3 += rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S445>/Switch8' incorporates:
     *  Switch: '<S445>/Switch2'
     */
    if (rtb_LogicalOperator1_h) {
      /* Switch: '<S445>/Switch' */
      if (Compare) {
        /* Merge: '<S20>/Merge4' incorporates:
         *  Gain: '<S445>/Gain'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_DeadZone;
      } else {
        /* Merge: '<S20>/Merge4' incorporates:
         *  Constant: '<S445>/Constant8'
         *  Gain: '<S445>/Gain1'
         *  Math: '<S445>/Magnitude2'
         *  MinMax: '<S445>/Min1'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S445>/Switch' */
    } else if (Robot_Reached_Destination) {
      /* Merge: '<S20>/Merge4' incorporates:
       *  Constant: '<S445>/Constant5'
       *  Gain: '<S445>/Gain2'
       *  Math: '<S445>/Magnitude1'
       *  MinMax: '<S445>/Min'
       *  Switch: '<S445>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Field_Error_X, Code_Gen_Model_B.AT_Field_Error_Y));
    } else {
      /* Product: '<S455>/Product' incorporates:
       *  Switch: '<S445>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_0 *
        rtb_Rotationmatrixfromlocalto_3;

      /* Saturate: '<S455>/Saturation' incorporates:
       *  Switch: '<S445>/Switch2'
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

      /* End of Saturate: '<S455>/Saturation' */
    }

    /* End of Switch: '<S445>/Switch8' */

    /* Abs: '<S422>/Abs' incorporates:
     *  UnaryMinus: '<S422>/Unary Minus1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = fabs(-rtb_Subtract_hf);

    /* Abs: '<S422>/Abs1' */
    rtb_Rotationmatrixfromlocalto_1 = fabs(rtb_Rotationmatrixfromlocalto_1);

    /* Abs: '<S422>/Abs2' incorporates:
     *  UnaryMinus: '<S422>/Unary Minus'
     */
    rtb_UnitDelay3 = fabs(-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* SignalConversion: '<S26>/Signal Copy10' incorporates:
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Logic: '<S422>/Logical Operator'
     *  RelationalOperator: '<S432>/Compare'
     *  RelationalOperator: '<S433>/Compare'
     *  RelationalOperator: '<S434>/Compare'
     */
    Code_Gen_Model_B.Teleop_AT_On_Target = (((rtb_AND2_k &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Max_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_1 <= AT_Max_Error_XY)) && (rtb_UnitDelay3 <=
      AT_Max_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy11' */
    Robot_Reached_Destination = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Merge: '<S20>/Merge23' incorporates:
     *  Constant: '<S428>/Constant'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  Logic: '<S422>/Logical Operator7'
     *  RelationalOperator: '<S428>/Compare'
     *  RelationalOperator: '<S435>/Compare'
     *  RelationalOperator: '<S436>/Compare'
     *  SignalConversion: '<S26>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((rtb_AND2_k &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_1 <= AT_Integral_Enable_Error_XY)) &&
      (rtb_UnitDelay3 <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S422>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S444>/Switch' incorporates:
     *  Constant: '<S444>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S444>/Product2' incorporates:
       *  Constant: '<S444>/Constant4'
       */
      rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.AT_Relative_Error_Angle
        * AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S454>/Switch2' incorporates:
       *  Constant: '<S444>/Constant10'
       *  RelationalOperator: '<S454>/LowerRelop1'
       *  RelationalOperator: '<S454>/UpperRelop'
       *  Switch: '<S454>/Switch'
       *  UnaryMinus: '<S444>/Unary Minus'
       */
      if (rtb_Coral_Wheel_DutyCycle_merge > AT_Steering_Speed_Max) {
        rtb_Coral_Wheel_DutyCycle_merge = AT_Steering_Speed_Max;
      } else if (rtb_Coral_Wheel_DutyCycle_merge < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S454>/Switch' incorporates:
         *  UnaryMinus: '<S444>/Unary Minus'
         */
        rtb_Coral_Wheel_DutyCycle_merge = -AT_Steering_Speed_Max;
      }

      /* End of Switch: '<S454>/Switch2' */
    } else {
      rtb_Coral_Wheel_DutyCycle_merge = 0.0;
    }

    /* End of Switch: '<S444>/Switch' */

    /* DeadZone: '<S444>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S444>/Add' incorporates:
     *  Constant: '<S444>/Constant'
     *  Constant: '<S444>/Constant1'
     *  DeadZone: '<S444>/Dead Zone'
     *  Lookup_n-D: '<S444>/Modulation_Str_Y_Rel'
     *  Product: '<S444>/Product'
     *  Product: '<S444>/Product1'
     *  SignalConversion: '<S16>/Signal Copy5'
     */
    rtb_Coral_Wheel_DutyCycle_merge += (look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (rtb_Minus_k_idx_0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S446>/Compare' incorporates:
     *  Constant: '<S446>/Constant'
     */
    Compare = (rtb_Coral_Wheel_DutyCycle_merge == 0.0);

    /* Logic: '<S421>/Logical Operator11' */
    Compare_f = ((((((Code_Gen_Model_B.Coral_Station_Left) ||
                     (Code_Gen_Model_B.Coral_Station_Right)) ||
                    (Code_Gen_Model_B.Processor)) ||
                   (Code_Gen_Model_B.Cage_Left_Start)) ||
                  (Code_Gen_Model_B.Cage_Middle_Start)) ||
                 (Code_Gen_Model_B.Cage_Right_Start));

    /* RelationalOperator: '<S451>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S451>/Delay Input1'
     *
     * Block description for '<S451>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (((int32_T)Compare_f) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft));

    /* Logic: '<S444>/AND2' incorporates:
     *  RelationalOperator: '<S447>/FixPt Relational Operator'
     *  RelationalOperator: '<S448>/FixPt Relational Operator'
     *  RelationalOperator: '<S449>/FixPt Relational Operator'
     *  RelationalOperator: '<S450>/FixPt Relational Operator'
     *  UnitDelay: '<S447>/Delay Input1'
     *  UnitDelay: '<S448>/Delay Input1'
     *  UnitDelay: '<S449>/Delay Input1'
     *  UnitDelay: '<S450>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S448>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S449>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S450>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S444>/AND1' incorporates:
     *  Logic: '<S444>/AND3'
     *  Logic: '<S444>/AND7'
     *  UnitDelay: '<S444>/Unit Delay2'
     */
    Coral_Score = ((Compare && (!rtb_FixPtRelationalOperator_m)) && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Logic: '<S444>/AND4' incorporates:
     *  Logic: '<S444>/AND5'
     *  Logic: '<S444>/AND8'
     *  UnitDelay: '<S444>/Unit Delay4'
     */
    rtb_AND2_k = ((Compare && (!rtb_AND2_k)) && (rtb_FixPtRelationalOperator_m ||
      (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S444>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (Coral_Score || rtb_AND2_k);

    /* Switch: '<S444>/Switch8' incorporates:
     *  Constant: '<S453>/Constant'
     *  Logic: '<S444>/AND9'
     *  RelationalOperator: '<S452>/FixPt Relational Operator'
     *  RelationalOperator: '<S453>/Compare'
     *  UnitDelay: '<S22>/Unit Delay'
     *  UnitDelay: '<S452>/Delay Input1'
     *
     * Block description for '<S452>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)Compare) >
          ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S444>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S444>/Switch8' incorporates:
       *  UnitDelay: '<S444>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S444>/Switch8' */

    /* Switch: '<S444>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S444>/Switch2' incorporates:
       *  Constant: '<S444>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S444>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S444>/Switch2' */

    /* Switch: '<S421>/Switch15' incorporates:
     *  Switch: '<S421>/Switch43'
     *  Switch: '<S421>/Switch44'
     *  Switch: '<S421>/Switch45'
     *  Switch: '<S421>/Switch46'
     *  Switch: '<S421>/Switch47'
     *  Switch: '<S421>/Switch48'
     *  Switch: '<S421>/Switch49'
     *  Switch: '<S421>/Switch5'
     *  Switch: '<S421>/Switch50'
     *  Switch: '<S421>/Switch51'
     *  Switch: '<S421>/Switch52'
     *  Switch: '<S421>/Switch53'
     *  Switch: '<S421>/Switch54'
     *  Switch: '<S421>/Switch6'
     *  Switch: '<S421>/Switch7'
     *  Switch: '<S421>/Switch8'
     *  Switch: '<S421>/Switch9'
     */
    if (rtb_Enable_Wheels) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant14'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Blue;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant13'
       *  Switch: '<S421>/Switch5'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Red;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant12'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Blue;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant11'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Red;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant10'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Blue;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant8'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Red;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant49'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Blue;
    } else if (rtb_Disable_Wheels) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant48'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Red;
    } else if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant47'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Blue;
    } else if (rtb_Compare_m3) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant46'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Red;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant1'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Blue;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant50'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Red;
    } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant55'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant54'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch50'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant53'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch50'
       *  Switch: '<S421>/Switch51'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Constant: '<S421>/Constant52'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch50'
       *  Switch: '<S421>/Switch51'
       *  Switch: '<S421>/Switch52'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
      /* Switch: '<S421>/Switch53' incorporates:
       *  Constant: '<S421>/Constant51'
       *  Switch: '<S421>/Switch15'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch50'
       *  Switch: '<S421>/Switch51'
       *  Switch: '<S421>/Switch52'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
      /* Switch: '<S421>/Switch54' incorporates:
       *  Constant: '<S421>/Constant56'
       *  Switch: '<S421>/Switch15'
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch50'
       *  Switch: '<S421>/Switch51'
       *  Switch: '<S421>/Switch52'
       *  Switch: '<S421>/Switch53'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Red;
    } else {
      /* Switch: '<S421>/Switch15' incorporates:
       *  Switch: '<S421>/Switch43'
       *  Switch: '<S421>/Switch44'
       *  Switch: '<S421>/Switch45'
       *  Switch: '<S421>/Switch46'
       *  Switch: '<S421>/Switch47'
       *  Switch: '<S421>/Switch48'
       *  Switch: '<S421>/Switch49'
       *  Switch: '<S421>/Switch5'
       *  Switch: '<S421>/Switch50'
       *  Switch: '<S421>/Switch51'
       *  Switch: '<S421>/Switch52'
       *  Switch: '<S421>/Switch6'
       *  Switch: '<S421>/Switch7'
       *  Switch: '<S421>/Switch8'
       *  Switch: '<S421>/Switch9'
       *  UnitDelay: '<S421>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle =
        Code_Gen_Model_DW.UnitDelay1_DSTATE_e1;
    }

    /* End of Switch: '<S421>/Switch15' */

    /* Switch: '<S444>/Switch4' incorporates:
     *  Constant: '<S444>/Constant5'
     *  Switch: '<S444>/Switch1'
     *  Switch: '<S444>/Switch5'
     *  Switch: '<S444>/Switch6'
     *  Switch: '<S444>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Rotationmatrixfromlocalto_1 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S444>/Switch5' incorporates:
       *  Constant: '<S444>/Constant6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S444>/Switch6' incorporates:
       *  Constant: '<S444>/Constant7'
       *  Switch: '<S444>/Switch5'
       */
      rtb_Rotationmatrixfromlocalto_1 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S444>/Switch7' incorporates:
       *  Constant: '<S444>/Constant8'
       *  Switch: '<S444>/Switch5'
       *  Switch: '<S444>/Switch6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 4.71238898038469;
    } else if (rtb_AND2_k) {
      /* Switch: '<S444>/Switch1' incorporates:
       *  Switch: '<S444>/Switch5'
       *  Switch: '<S444>/Switch6'
       *  Switch: '<S444>/Switch7'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.AT_Field_Target_Angle;
    } else {
      /* Switch: '<S444>/Switch6' incorporates:
       *  Switch: '<S444>/Switch5'
       *  Switch: '<S444>/Switch7'
       *  UnitDelay: '<S444>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S444>/Switch4' */

    /* Switch: '<S444>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S444>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Rotationmatrixfromlocalto_1;
    } else {
      /* Switch: '<S444>/Switch3' incorporates:
       *  Constant: '<S444>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S444>/Switch3' */

    /* Merge: '<S20>/Merge1' incorporates:
     *  Sum: '<S444>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Switch: '<S425>/Switch1' incorporates:
     *  Constant: '<S425>/Constant5'
     *  Constant: '<S425>/Constant7'
     *  Constant: '<S425>/Constant8'
     *  DataTypeConversion: '<S425>/Data Type Conversion'
     *  DataTypeConversion: '<S425>/Data Type Conversion1'
     *  Switch: '<S425>/Switch'
     *  Switch: '<S445>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Steering = Compare;
      rtb_Is_Absolute_Translation_g = !rtb_LogicalOperator1_h;
    }

    /* End of Switch: '<S425>/Switch1' */

    /* Merge: '<S20>/Merge2' incorporates:
     *  SignalConversion: '<S444>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Coral_Wheel_DutyCycle_merge;

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
     *  Constant: '<S424>/Constant5'
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
    rtb_Enable_Wheels = false;

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
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S458>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Abs1;

    /* Update for UnitDelay: '<S465>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S466>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S470>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S471>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S472>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S467>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S473>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S473>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S476>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S476>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S477>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S477>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S474>/Delay Input1'
     *
     * Block description for '<S474>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S475>/Delay Input1'
     *
     * Block description for '<S475>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S468>/Delay Input1'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S469>/Delay Input1'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S422>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S422>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Subtract_d4;

    /* Update for UnitDelay: '<S462>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S462>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S462>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Rotationmatrixfromlocalto_3;

    /* Update for UnitDelay: '<S452>/Delay Input1'
     *
     * Block description for '<S452>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = Compare;

    /* Update for UnitDelay: '<S451>/Delay Input1'
     *
     * Block description for '<S451>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = Compare_f;

    /* Update for UnitDelay: '<S447>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S448>/Delay Input1'
     *
     * Block description for '<S448>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S449>/Delay Input1'
     *
     * Block description for '<S449>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S450>/Delay Input1'
     *
     * Block description for '<S450>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S444>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = Coral_Score;

    /* Update for UnitDelay: '<S444>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND2_k;

    /* Update for UnitDelay: '<S444>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S421>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 =
      Code_Gen_Model_B.AT_Field_Target_Angle;

    /* Update for UnitDelay: '<S444>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Rotationmatrixfromlocalto_1;

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
      rtb_Swerve_Motors_Disabled = true;
    } else {
      rtb_Swerve_Motors_Disabled = ((!Code_Gen_Model_B.Button_Enable_Wheels) &&
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
    Robot_Reached_Destination = false;

    /* SignalConversion: '<S27>/Signal Copy' */
    rtb_Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* SignalConversion: '<S27>/Signal Copy2' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* SignalConversion: '<S27>/Signal Copy1' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S23>/If' incorporates:
   *  Constant: '<S259>/Constant'
   *  Logic: '<S259>/AND'
   *  MATLAB Function: '<S209>/Find closest index to curve'
   *  Product: '<S259>/Product'
   *  RelationalOperator: '<S259>/Relational Operator'
   *  RelationalOperator: '<S259>/Relational Operator1'
   *  Selector: '<S259>/Selector'
   *  Selector: '<S259>/Selector1'
   *  Selector: '<S260>/Selector'
   *  Sum: '<S259>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S212>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S215>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S217>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S212>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S23>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* InitializeConditions for If: '<S23>/If' incorporates:
       *  UnitDelay: '<S207>/Unit Delay'
       *  UnitDelay: '<S208>/Unit Delay'
       *  UnitDelay: '<S210>/Unit Delay'
       *  UnitDelay: '<S210>/Unit Delay1'
       *  UnitDelay: '<S260>/Unit Delay'
       *  UnitDelay: '<S260>/Unit Delay1'
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
     *  ActionPort: '<S207>/Action Port'
     */
    /* Selector: '<S208>/Selector1' incorporates:
     *  Merge: '<S20>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S208>/Selector1' */

    /* Lookup_n-D: '<S207>/Capture Radius' incorporates:
     *  UnitDelay: '<S207>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled9,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S208>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S208>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S212>/If' incorporates:
     *  RelationalOperator: '<S212>/ '
     *  UnitDelay: '<S208>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S215>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S217>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S212>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S215>/Action Port'
       */
      /* InitializeConditions for If: '<S212>/If' incorporates:
       *  UnitDelay: '<S215>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S212>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S212>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S215>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S215>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S218>/Action Port'
       */
      /* If: '<S215>/If' incorporates:
       *  Selector: '<S208>/Selector1'
       *  Selector: '<S215>/Selector'
       *  Selector: '<S218>/Selector'
       */
      rtb_Rotationmatrixfromlocalto_1 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S215>/Increment_If_Rectangle_Check' */

      /* Sum: '<S215>/Minus' incorporates:
       *  Concatenate: '<S208>/Matrix Concatenate2'
       *  Selector: '<S215>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Rotationmatrixfromlocalto_1;

      /* Outputs for IfAction SubSystem: '<S215>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S218>/Action Port'
       */
      /* If: '<S215>/If' incorporates:
       *  Selector: '<S208>/Selector1'
       *  Selector: '<S215>/Selector'
       *  Selector: '<S218>/Selector'
       *  Sum: '<S215>/Minus'
       */
      rtb_Subtract_d4 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S215>/Increment_If_Rectangle_Check' */

      /* Sum: '<S215>/Minus' incorporates:
       *  Concatenate: '<S208>/Matrix Concatenate2'
       *  Selector: '<S215>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Subtract_d4;

      /* Math: '<S215>/Hypot' */
      rtb_Abs1 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S215>/Equal' */
      Compare_f = (Code_Gen_Model_B.Spline_Num_Poses ==
                   Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S215>/Switch' incorporates:
       *  Logic: '<S215>/AND'
       *  Logic: '<S215>/OR'
       *  RelationalOperator: '<S215>/Relational Operator'
       *  UnitDelay: '<S215>/Unit Delay'
       */
      Compare = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Abs1 <=
        rtb_Rotationmatrixfromlocalto_2) && Compare_f));

      /* If: '<S215>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!Compare) {
        if (!Compare_f) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S217>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S215>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S217>/Action Port'
         */
        /* If: '<S217>/If' incorporates:
         *  RelationalOperator: '<S217>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S217>/Is_Last_Point' incorporates:
           *  ActionPort: '<S220>/Action Port'
           */
          /* InitializeConditions for If: '<S217>/If' incorporates:
           *  UnitDelay: '<S220>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S217>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S217>/Is_Last_Point' incorporates:
           *  ActionPort: '<S220>/Action Port'
           */
          /* Switch: '<S220>/Switch' incorporates:
           *  Constant: '<S222>/Constant'
           *  Logic: '<S220>/OR'
           *  RelationalOperator: '<S222>/Compare'
           *  UnitDelay: '<S220>/Unit Delay'
           */
          rtb_Is_Absolute_Steering = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Abs1 <= Spline_Stop_Radius));

          /* If: '<S220>/If' */
          if (rtb_Is_Absolute_Steering) {
            /* Outputs for IfAction SubSystem: '<S220>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S223>/Action Port'
             */
            /* Merge: '<S212>/Merge2' incorporates:
             *  Constant: '<S223>/Constant'
             *  SignalConversion generated from: '<S223>/Robot_Reached_Destination'
             */
            Compare_f = true;

            /* SignalConversion generated from: '<S223>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S223>/Constant1'
             */
            Coral_Score = false;

            /* End of Outputs for SubSystem: '<S220>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S220>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S224>/Action Port'
             */
            /* Merge: '<S212>/Merge2' incorporates:
             *  Constant: '<S224>/Constant'
             *  SignalConversion generated from: '<S224>/Robot_Reached_Destination'
             */
            Compare_f = false;

            /* SignalConversion generated from: '<S224>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S224>/Constant1'
             */
            Coral_Score = true;

            /* End of Outputs for SubSystem: '<S220>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S220>/If' */

          /* Merge: '<S212>/Merge4' incorporates:
           *  SignalConversion: '<S220>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S220>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Is_Absolute_Steering;

          /* End of Outputs for SubSystem: '<S217>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S217>/Increment_Search' incorporates:
           *  ActionPort: '<S219>/Action Port'
           */
          /* Merge: '<S212>/Merge2' incorporates:
           *  Constant: '<S219>/Constant'
           *  SignalConversion generated from: '<S219>/Robot_Reached_Destination'
           */
          Compare_f = false;

          /* SignalConversion generated from: '<S219>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S219>/Constant1'
           */
          Coral_Score = false;

          /* Merge: '<S212>/Merge4' incorporates:
           *  Constant: '<S221>/FixPt Constant'
           *  SignalConversion: '<S219>/Signal Copy'
           *  Sum: '<S221>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S217>/Increment_Search' */
        }

        /* End of If: '<S217>/If' */
        /* End of Outputs for SubSystem: '<S215>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S215>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S218>/Action Port'
         */
        /* Sum: '<S225>/FixPt Sum1' incorporates:
         *  Constant: '<S225>/FixPt Constant'
         */
        rtb_Abs1 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S218>/Selector1' incorporates:
         *  Selector: '<S208>/Selector1'
         */
        rtb_Switch2_g = rtb_Ref_Poses[((int32_T)rtb_Abs1) - 1];

        /* Sum: '<S226>/Subtract' incorporates:
         *  Selector: '<S218>/Selector1'
         *  Sum: '<S226>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_g - rtb_Rotationmatrixfromlocalto_1;

        /* Selector: '<S218>/Selector1' incorporates:
         *  Selector: '<S208>/Selector1'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Ref_Poses[((int32_T)rtb_Abs1) + 9];

        /* Sum: '<S226>/Subtract' incorporates:
         *  Selector: '<S218>/Selector1'
         *  Sum: '<S226>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_3 - rtb_Subtract_d4;

        /* Math: '<S226>/Hypot' */
        rtb_Switch2_ji = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S226>/Divide' */
        rtb_Abs1 = rtb_Minus_n[1];

        /* UnaryMinus: '<S226>/Unary Minus' */
        rtb_UnitDelay3 = rtb_Minus_n[0];

        /* Product: '<S226>/Product' incorporates:
         *  Product: '<S226>/Divide'
         *  UnaryMinus: '<S226>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Abs1 / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;
        rtb_Minus_n[1] = ((-rtb_UnitDelay3) / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;

        /* Sum: '<S226>/Add1' incorporates:
         *  Sum: '<S226>/Add2'
         *  Sum: '<S226>/Minus'
         */
        rtb_UnitDelay3 = rtb_Switch2_g - rtb_Minus_n[0];

        /* Sum: '<S226>/Minus4' incorporates:
         *  Sum: '<S226>/Add2'
         *  Sum: '<S226>/Minus'
         */
        rtb_Switch2_g = (rtb_Switch2_g + rtb_Minus_n[0]) - rtb_UnitDelay3;

        /* Sum: '<S226>/Minus5' incorporates:
         *  Concatenate: '<S208>/Matrix Concatenate2'
         *  Sum: '<S226>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_UnitDelay3;

        /* Sum: '<S226>/Add' incorporates:
         *  Sum: '<S226>/Add2'
         *  Sum: '<S226>/Minus1'
         */
        rtb_Abs1 = rtb_Rotationmatrixfromlocalto_1 - rtb_Minus_n[0];

        /* Sum: '<S226>/Minus' incorporates:
         *  Sum: '<S226>/Minus1'
         */
        rtb_UnitDelay3 -= rtb_Abs1;

        /* DotProduct: '<S226>/Dot Product' incorporates:
         *  Concatenate: '<S208>/Matrix Concatenate2'
         *  Sum: '<S226>/Minus'
         *  Sum: '<S226>/Minus1'
         *  Sum: '<S226>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Reshapey[0] - rtb_Abs1) * rtb_UnitDelay3;

        /* DotProduct: '<S226>/Dot Product1' incorporates:
         *  Sum: '<S226>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_1 = rtb_UnitDelay3 * rtb_UnitDelay3;

        /* DotProduct: '<S226>/Dot Product2' incorporates:
         *  Sum: '<S226>/Minus4'
         *  Sum: '<S226>/Minus5'
         */
        rtb_Minus_k_idx_0 = rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S226>/Dot Product3' incorporates:
         *  Sum: '<S226>/Minus4'
         */
        rtb_Init = rtb_Switch2_g * rtb_Switch2_g;

        /* Sum: '<S226>/Add1' incorporates:
         *  Sum: '<S226>/Add2'
         *  Sum: '<S226>/Minus'
         */
        rtb_UnitDelay3 = rtb_Rotationmatrixfromlocalto_3 - rtb_Minus_n[1];

        /* Sum: '<S226>/Minus4' incorporates:
         *  Sum: '<S226>/Add2'
         *  Sum: '<S226>/Minus'
         */
        rtb_Switch2_g = (rtb_Rotationmatrixfromlocalto_3 + rtb_Minus_n[1]) -
          rtb_UnitDelay3;

        /* Sum: '<S226>/Minus5' incorporates:
         *  Concatenate: '<S208>/Matrix Concatenate2'
         *  Sum: '<S226>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_UnitDelay3;

        /* Sum: '<S226>/Add' incorporates:
         *  Sum: '<S226>/Add2'
         *  Sum: '<S226>/Minus1'
         */
        rtb_Abs1 = rtb_Subtract_d4 - rtb_Minus_n[1];

        /* Sum: '<S226>/Minus' incorporates:
         *  Sum: '<S226>/Minus1'
         */
        rtb_UnitDelay3 -= rtb_Abs1;

        /* DotProduct: '<S226>/Dot Product' incorporates:
         *  Concatenate: '<S208>/Matrix Concatenate2'
         *  Sum: '<S226>/Minus'
         *  Sum: '<S226>/Minus1'
         *  Sum: '<S226>/Minus5'
         */
        rtb_Switch2_ji += (rtb_Reshapey[1] - rtb_Abs1) * rtb_UnitDelay3;

        /* RelationalOperator: '<S227>/Compare' incorporates:
         *  Constant: '<S227>/Constant'
         */
        Compare_f = (rtb_Switch2_ji >= 0.0);

        /* RelationalOperator: '<S226>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S226>/Dot Product1'
         *  Sum: '<S226>/Minus'
         */
        Coral_Score = (rtb_Switch2_ji <= ((rtb_UnitDelay3 * rtb_UnitDelay3) +
          rtb_Rotationmatrixfromlocalto_1));

        /* DotProduct: '<S226>/Dot Product2' incorporates:
         *  Sum: '<S226>/Minus4'
         *  Sum: '<S226>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_0) +
          rtb_Minus_k_idx_0;

        /* Merge: '<S212>/Merge4' incorporates:
         *  Constant: '<S228>/Constant'
         *  DataTypeConversion: '<S218>/Data Type Conversion'
         *  DotProduct: '<S226>/Dot Product3'
         *  Logic: '<S226>/AND'
         *  RelationalOperator: '<S226>/LessThanOrEqual1'
         *  RelationalOperator: '<S228>/Compare'
         *  Sum: '<S218>/Add'
         *  Sum: '<S226>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)(((Compare_f &&
          Coral_Score) && (rtb_Switch2_ji >= 0.0)) && (rtb_Switch2_ji <=
          ((rtb_Switch2_g * rtb_Switch2_g) + rtb_Init)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S212>/Merge2' incorporates:
         *  Constant: '<S218>/Constant2'
         *  SignalConversion generated from: '<S218>/Robot_Reached_Destination'
         */
        Compare_f = false;

        /* SignalConversion generated from: '<S218>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S218>/Constant1'
         */
        Coral_Score = false;

        /* End of Outputs for SubSystem: '<S215>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S215>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        /* Merge: '<S212>/Merge2' incorporates:
         *  Constant: '<S216>/Constant2'
         *  SignalConversion generated from: '<S216>/Robot_Reached_Destination'
         */
        Compare_f = false;

        /* SignalConversion generated from: '<S216>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S216>/Constant1'
         */
        Coral_Score = false;

        /* Merge: '<S212>/Merge4' incorporates:
         *  SignalConversion generated from: '<S216>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S215>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S212>/Merge1' incorporates:
       *  Constant: '<S215>/Constant'
       *  SignalConversion generated from: '<S215>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S215>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = Compare;

      /* End of Outputs for SubSystem: '<S212>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S212>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S214>/Action Port'
       */
      /* Merge: '<S212>/Merge1' incorporates:
       *  Constant: '<S214>/Constant'
       *  SignalConversion generated from: '<S214>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S212>/Merge2' incorporates:
       *  Constant: '<S214>/Constant1'
       *  SignalConversion generated from: '<S214>/Robot_Reached_Destination'
       */
      Compare_f = false;

      /* SignalConversion generated from: '<S214>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S214>/Constant2'
       */
      Coral_Score = false;

      /* Merge: '<S212>/Merge4' incorporates:
       *  SignalConversion generated from: '<S214>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S212>/Escape_Auto_Driving' */
    }

    /* End of If: '<S212>/If' */

    /* If: '<S208>/If1' */
    if (!Coral_Score) {
      /* Outputs for IfAction SubSystem: '<S208>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S213>/Action Port'
       */
      /* Bias: '<S229>/Add Constant' incorporates:
       *  Bias: '<S229>/Bias'
       *  Sum: '<S229>/Subtract'
       */
      rtb_Abs1 = ((Code_Gen_Model_B.Spline_Num_Poses -
                   Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S229>/Selector4' incorporates:
       *  Bias: '<S229>/Bias1'
       *  Constant: '<S231>/FixPt Constant'
       *  Sum: '<S231>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S229>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S229>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S229>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S229>/Selector5' incorporates:
       *  Concatenate: '<S229>/Matrix Concatenate'
       *  Gain: '<S233>/Gain'
       *  Selector: '<S208>/Selector1'
       *  Selector: '<S229>/Selector2'
       *  Selector: '<S229>/Selector3'
       *  Sum: '<S233>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s234_iter = 0; s234_iter <= rtb_Bias1_p; s234_iter++) {
          rtb_Selector5[s234_iter + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[s234_iter + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S229>/Matrix Concatenate' incorporates:
       *  Bias: '<S229>/Add Constant1'
       *  Gain: '<S232>/Gain'
       *  Selector: '<S208>/Selector1'
       *  Selector: '<S229>/Selector'
       *  Selector: '<S229>/Selector1'
       *  Selector: '<S229>/Selector5'
       *  Sum: '<S232>/Subtract'
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

      /* Selector: '<S229>/Selector4' */
      s234_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s234_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S229>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S229>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S229>/Assignment' incorporates:
       *  Concatenate: '<S229>/Matrix Concatenate'
       *  Selector: '<S229>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s234_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S230>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S234>/While Iterator'
       */
      s234_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s234_iter + 1];
        rtb_Minus_n[0] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s234_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s234_iter] - rtb_Assignment[s234_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s234_iter];
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s234_iter + 13];
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s234_iter + 11];
        rtb_UnitDelay3 = rtb_Assignment[s234_iter + 12];
        rtb_Add2_f[1] = rtb_UnitDelay3 - rtb_Assignment[s234_iter + 14];
        rtb_DeadZone = rtb_Rotationmatrixfromlocalto_1 - rtb_UnitDelay3;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch2_ji = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Subtract_d4 = rt_powd_snf(rtb_Switch2_ji, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Switch2_ji, 3.0);
          rtb_Rotationmatrixfromlocalto_3 = (rtb_Switch2_ji - (2.0 *
            rtb_Subtract_d4)) + rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_1 = rtb_Subtract_d4 -
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Subtract_d4) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_Switch2_g = ((((rtb_Minus_n[0] * rtb_Rotationmatrixfromlocalto_3)
                             + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s234_iter];
          rtb_Init = ((((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_3) +
                        (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1)) * 0.0)
                      + (rtb_DeadZone * rtb_Rotationmatrixfromlocalto_0)) +
            rtb_UnitDelay3;
          rtb_Rotationmatrixfromlocalto_3 = ((3.0 * rtb_Subtract_d4) - (4.0 *
            rtb_Switch2_ji)) + 1.0;
          rtb_Rotationmatrixfromlocalto_1 = (2.0 * rtb_Switch2_ji) - (3.0 *
            rtb_Subtract_d4);
          rtb_Subtract_d4 = (rtb_Switch2_ji - rtb_Subtract_d4) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Minus_n[0] *
            rtb_Rotationmatrixfromlocalto_3) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_1)) * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Subtract_d4);
          rtb_Subtract_hf = (((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_3)
                              + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1))
                             * 0.0) + (rtb_DeadZone * rtb_Subtract_d4);
          rtb_Subtract_d4 = (6.0 * rtb_Switch2_ji) - 4.0;
          rtb_Rotationmatrixfromlocalto_3 = (-6.0 * rtb_Switch2_ji) + 2.0;
          rtb_Switch2_ji = (-12.0 * rtb_Switch2_ji) + 6.0;
          rtb_Rotationmatrixfromlocalto_1 = (((rtb_Minus_n[0] * rtb_Subtract_d4)
            + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_3)) * 0.0) +
            (rtb_Minus_k_idx_0 * rtb_Switch2_ji);
          rtb_Rotationmatrixfromlocalto_3 = (((rtb_Minus_n[1] * rtb_Subtract_d4)
            + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_3)) * 0.0) +
            (rtb_DeadZone * rtb_Switch2_ji);
          rtb_Subtract_d4 = rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Subtract_hf), 3.0);
          rtb_Switch2_ji = fmax(1.0E-10, rtb_Subtract_d4);
          Code_Gen_Model_DW.Relay_Mode = ((rtb_Subtract_d4 >=
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

          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs
            ((rtb_Rotationmatrixfromlocalto_0 * rtb_Rotationmatrixfromlocalto_3)
             - (rtb_Rotationmatrixfromlocalto_1 * rtb_Subtract_hf)) /
            (rtb_Switch2_ji * ((real_T)i));
        }

        if (s234_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s234_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_ji = rtb_Abs1 - ((real_T)s234_iter);
        rtb_Num_Segments = s234_iter;
        s234_iter++;
      } while ((rtb_Switch2_ji >= 4.0) && (s234_iter <= 3));

      /* End of Outputs for SubSystem: '<S230>/Sampling_Loop' */

      /* SignalConversion generated from: '<S213>/Position_and_Curvature' incorporates:
       *  Assignment: '<S234>/Assignment'
       *  Merge: '<S208>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S208>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S208>/If Action Subsystem' incorporates:
       *  ActionPort: '<S211>/Action Port'
       */
      /* Product: '<S211>/Product' incorporates:
       *  Selector: '<S208>/Selector'
       *  Selector: '<S208>/Selector1'
       */
      rtb_Switch2_ji = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S211>/Product1' incorporates:
       *  Selector: '<S208>/Selector'
       *  Selector: '<S208>/Selector1'
       */
      rtb_Abs1 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S211>/Product' incorporates:
         *  Constant: '<S211>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_ji;

        /* Product: '<S211>/Product1' incorporates:
         *  Constant: '<S211>/Constant2'
         *  Product: '<S211>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Abs1;
      }

      /* Assignment: '<S211>/Assignment' incorporates:
       *  Concatenate: '<S211>/Matrix Concatenate'
       *  Merge: '<S208>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S211>/Assignment' */

      /* SignalConversion generated from: '<S211>/Num_Segments' incorporates:
       *  Constant: '<S211>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S208>/If Action Subsystem' */
    }

    /* End of If: '<S208>/If1' */

    /* Concatenate: '<S209>/Matrix Concatenate' incorporates:
     *  Merge: '<S208>/Merge'
     *  Selector: '<S209>/Selector'
     *  Selector: '<S209>/Selector1'
     *  Selector: '<S209>/Selector3'
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

    /* End of Concatenate: '<S209>/Matrix Concatenate' */

    /* MATLAB Function: '<S209>/Distance Along Curve' incorporates:
     *  Concatenate: '<S209>/Matrix Concatenate'
     *  Selector: '<S209>/Selector4'
     *  Selector: '<S209>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s234_iter = 0; s234_iter < 149; s234_iter++) {
      /* Outputs for Iterator SubSystem: '<S230>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S234>/While Iterator'
       */
      rtb_Assignment_d[s234_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s234_iter + 1] -
         rtb_MatrixConcatenate_o[s234_iter], rtb_MatrixConcatenate_o[s234_iter +
         151] - rtb_MatrixConcatenate_o[s234_iter + 150]) +
        rtb_Assignment_d[s234_iter];

      /* End of Outputs for SubSystem: '<S230>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S209>/Distance Along Curve' */

    /* MATLAB Function: '<S209>/Find closest index to curve' incorporates:
     *  Concatenate: '<S209>/Matrix Concatenate'
     *  Selector: '<S209>/Selector4'
     *  Selector: '<S209>/Selector5'
     *  Selector: '<S260>/Selector'
     */
    for (s234_iter = 0; s234_iter < 150; s234_iter++) {
      /* Outputs for Iterator SubSystem: '<S230>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S234>/While Iterator'
       */
      distance_from_robot[s234_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s234_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s234_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S230>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s234_iter = 1;
    } else {
      s234_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s234_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s234_iter == 0) {
      rtb_Abs1 = distance_from_robot[0];
    } else {
      rtb_Abs1 = distance_from_robot[s234_iter - 1];
      for (rtb_Bias1_p = s234_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_ji = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Abs1 > rtb_Switch2_ji) {
          rtb_Abs1 = rtb_Switch2_ji;
        }
      }
    }

    s234_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s234_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Abs1) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S260>/Selector' incorporates:
     *  Constant: '<S260>/Constant'
     *  MATLAB Function: '<S209>/Find closest index to curve'
     *  MinMax: '<S260>/Min'
     */
    rtb_Switch2_ji = rtb_Assignment_d[((int32_T)fmin(50.0, s234_iter)) - 1];

    /* If: '<S260>/If' incorporates:
     *  RelationalOperator: '<S260>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S260>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S263>/Action Port'
       */
      /* SignalConversion generated from: '<S263>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S265>/FixPt Sum1' incorporates:
       *  Constant: '<S265>/FixPt Constant'
       */
      rtb_Abs1 = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S263>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S20>/Merge8'
       *  Selector: '<S263>/Selector11'
       *  Selector: '<S263>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Abs1) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S263>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S20>/Merge8'
       *  Selector: '<S263>/Selector1'
       *  Selector: '<S263>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Abs1) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S263>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S263>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Abs1), &rtb_Minus_n[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S263>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S263>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S263>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S260>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S260>/Latch' incorporates:
       *  ActionPort: '<S264>/Action Port'
       */
      /* SignalConversion generated from: '<S264>/In1' incorporates:
       *  UnitDelay: '<S260>/Unit Delay1'
       */
      rtb_Abs1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S264>/In2' incorporates:
       *  UnitDelay: '<S260>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S260>/Latch' */
    }

    /* End of If: '<S260>/If' */

    /* MinMax: '<S207>/Min' incorporates:
     *  Lookup_n-D: '<S207>/Lookahead Distance'
     *  UnitDelay: '<S207>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Rotationmatrixfromlocalto_2,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled9,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S209>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S259>/While Iterator'
     */
    s259_iter = 1U;
    Compare = true;
    while (Compare && (s259_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S209>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S259>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s259_iter;
      Compare = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                  (rtb_Assignment_d[s234_iter - 1] +
                   rtb_Rotationmatrixfromlocalto_2)) &&
                 (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) *
        50.0)));
      s259_iter++;
    }

    /* End of Outputs for SubSystem: '<S209>/Find first index that meets distance target' */

    /* Switch: '<S262>/Switch' incorporates:
     *  Concatenate: '<S209>/Matrix Concatenate'
     *  Constant: '<S209>/Constant'
     *  Constant: '<S259>/Constant'
     *  Constant: '<S262>/Constant'
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S262>/Constant2'
     *  Constant: '<S262>/Constant3'
     *  Logic: '<S259>/AND'
     *  MATLAB Function: '<S209>/Find closest index to curve'
     *  Math: '<S262>/Hypot'
     *  Merge: '<S20>/Merge8'
     *  MinMax: '<S262>/Max'
     *  MinMax: '<S262>/Min'
     *  MinMax: '<S262>/Min1'
     *  Product: '<S259>/Product'
     *  Product: '<S262>/Divide'
     *  Product: '<S262>/Product'
     *  Product: '<S262>/Product1'
     *  RelationalOperator: '<S209>/Relational Operator'
     *  RelationalOperator: '<S259>/Relational Operator'
     *  RelationalOperator: '<S259>/Relational Operator1'
     *  Selector: '<S209>/Selector10'
     *  Selector: '<S209>/Selector7'
     *  Selector: '<S209>/Selector8'
     *  Selector: '<S209>/Selector9'
     *  Selector: '<S259>/Selector'
     *  Selector: '<S259>/Selector1'
     *  Selector: '<S260>/Selector'
     *  Sqrt: '<S262>/Sqrt'
     *  Sum: '<S209>/Subtract'
     *  Sum: '<S259>/Add'
     *  Sum: '<S262>/Subtract'
     *  Sum: '<S262>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_2 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses
        [9] - Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Abs1 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5))));
    } else {
      rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Abs1 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5)));
    }

    /* End of Switch: '<S262>/Switch' */

    /* Logic: '<S210>/OR' */
    Coral_Score = (Compare_f || (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S210>/Switch1' incorporates:
     *  Switch: '<S210>/Switch'
     *  UnitDelay: '<S210>/Unit Delay'
     */
    if (Coral_Score) {
      /* Merge: '<S23>/Merge2' incorporates:
       *  Constant: '<S210>/Constant3'
       *  SignalConversion: '<S210>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S23>/Merge2' incorporates:
       *  SignalConversion: '<S210>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_2;
      rtb_Switch2_ji = rtb_Merge1;
    }

    /* End of Switch: '<S210>/Switch1' */

    /* Merge: '<S23>/Merge' incorporates:
     *  SignalConversion: '<S210>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch2_ji;

    /* Selector: '<S209>/Selector6' incorporates:
     *  Concatenate: '<S209>/Matrix Concatenate'
     *  Selector: '<S209>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S209>/Selector2' incorporates:
     *  Concatenate: '<S209>/Matrix Concatenate'
     *  Selector: '<S209>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S210>/Switch2' incorporates:
     *  Sum: '<S266>/Subtract'
     *  Sum: '<S266>/Subtract1'
     *  Trigonometry: '<S266>/Atan2'
     *  UnitDelay: '<S210>/Unit Delay1'
     */
    if (Coral_Score) {
      rtb_Subtract_d4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Subtract_d4 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S210>/Switch2' */

    /* Merge: '<S23>/Merge3' incorporates:
     *  SignalConversion: '<S210>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Subtract_d4;

    /* Merge: '<S23>/Merge7' incorporates:
     *  SignalConversion: '<S207>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = Compare_f;

    /* Merge: '<S23>/Merge1' incorporates:
     *  Constant: '<S210>/Constant2'
     *  SignalConversion generated from: '<S207>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S23>/Merge4' incorporates:
     *  Constant: '<S210>/Constant5'
     *  SignalConversion generated from: '<S207>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S23>/Merge5' incorporates:
     *  Constant: '<S210>/Constant6'
     *  SignalConversion generated from: '<S207>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S23>/Merge8' incorporates:
     *  SignalConversion generated from: '<S207>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S208>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S207>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S260>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Abs1;

    /* Update for UnitDelay: '<S260>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S210>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S210>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Subtract_d4;

    /* End of Outputs for SubSystem: '<S23>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/Pass Through' incorporates:
     *  ActionPort: '<S206>/Action Port'
     */
    /* Merge: '<S23>/Merge7' incorporates:
     *  Constant: '<S206>/Constant'
     *  SignalConversion generated from: '<S206>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S23>/Merge' incorporates:
     *  SignalConversion generated from: '<S206>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S23>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S23>/Merge2' incorporates:
     *  SignalConversion generated from: '<S206>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S23>/Merge3' incorporates:
     *  SignalConversion generated from: '<S206>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S23>/Merge4' incorporates:
     *  SignalConversion generated from: '<S206>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S23>/Merge5' incorporates:
     *  SignalConversion generated from: '<S206>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S23>/Merge8' incorporates:
     *  SignalConversion generated from: '<S206>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S23>/Pass Through' */
  }

  /* End of If: '<S23>/If' */

  /* Signum: '<S360>/Sign2' incorporates:
   *  UnitDelay: '<S360>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S360>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S360>/Product1' incorporates:
   *  Signum: '<S360>/Sign1'
   *  Signum: '<S360>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_pb;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S360>/Switch' incorporates:
   *  Constant: '<S360>/Constant'
   *  Constant: '<S365>/Constant'
   *  Constant: '<S366>/Constant'
   *  Logic: '<S360>/or'
   *  Product: '<S360>/Product1'
   *  RelationalOperator: '<S365>/Compare'
   *  RelationalOperator: '<S366>/Compare'
   *  UnitDelay: '<S360>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S360>/Switch' */

  /* Switch: '<S371>/Init' incorporates:
   *  UnitDelay: '<S371>/FixPt Unit Delay1'
   *  UnitDelay: '<S371>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S371>/Init' */

  /* RelationalOperator: '<S367>/Compare' incorporates:
   *  Constant: '<S367>/Constant'
   */
  Compare = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S368>/Compare' incorporates:
   *  Constant: '<S368>/Constant'
   */
  Compare_f = (rtb_Switch2_g > 0.0);

  /* Abs: '<S360>/Abs' incorporates:
   *  Sum: '<S360>/Subtract'
   *  UnitDelay: '<S360>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S360>/Switch5' incorporates:
   *  Constant: '<S360>/Constant1'
   *  Switch: '<S360>/Switch1'
   *  UnaryMinus: '<S360>/Unary Minus'
   */
  if (Compare) {
    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S360>/Constant4'
     *  Constant: '<S360>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S360>/Constant2'
     *  Constant: '<S360>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S360>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S360>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S360>/Constant10'
     *  Constant: '<S360>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S360>/Constant7'
     *  Constant: '<S360>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S360>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S360>/Lookup Table Dynamic1'
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

    /* Switch: '<S360>/Switch3' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Constant: '<S360>/Constant3'
     *  UnaryMinus: '<S360>/Unary Minus'
     */
    if (Compare_f) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S360>/Switch3' */
  }

  /* End of Switch: '<S360>/Switch5' */

  /* Product: '<S360>/Product' incorporates:
   *  Switch: '<S360>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S369>/Sum1' */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S370>/Switch2' incorporates:
   *  RelationalOperator: '<S370>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_2 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S360>/Switch2' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Switch: '<S360>/Switch4'
     */
    if (Compare) {
      rtb_Abs1 = Translation_Speed_Rate_Limit_Dec;
    } else if (Compare_f) {
      /* Switch: '<S360>/Switch4' incorporates:
       *  Constant: '<S360>/Constant1'
       */
      rtb_Abs1 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S360>/Switch4' incorporates:
       *  Constant: '<S360>/Constant3'
       *  UnaryMinus: '<S360>/Unary Minus1'
       */
      rtb_Abs1 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S360>/Switch2' */

    /* Product: '<S360>/Product2' */
    rtb_Abs1 *= rtb_Merge1;

    /* Switch: '<S370>/Switch' incorporates:
     *  RelationalOperator: '<S370>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_2 < rtb_Abs1) {
      rtb_Optimized_Module_Angle = rtb_Abs1;
    } else {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_2;
    }

    /* End of Switch: '<S370>/Switch' */
  }

  /* End of Switch: '<S370>/Switch2' */

  /* Sum: '<S369>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S363>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S363>/Switch' incorporates:
     *  Constant: '<S395>/Constant3'
     *  Constant: '<S395>/Constant4'
     *  Math: '<S395>/Math Function'
     *  Sum: '<S363>/Subtract'
     *  Sum: '<S395>/Add1'
     *  Sum: '<S395>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S363>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S363>/Switch' */

  /* Sum: '<S391>/Add1' incorporates:
   *  Constant: '<S391>/Constant3'
   *  Constant: '<S391>/Constant4'
   *  Math: '<S391>/Math Function'
   *  Sum: '<S390>/Sum'
   *  Sum: '<S391>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S393>/Sum1' incorporates:
   *  Constant: '<S390>/Constant2'
   *  Product: '<S393>/Product'
   *  Sum: '<S393>/Sum'
   *  UnitDelay: '<S393>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S390>/Product' incorporates:
   *  Constant: '<S390>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S392>/Diff' incorporates:
   *  UnitDelay: '<S392>/UD'
   *
   * Block description for '<S392>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S392>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_2 -
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S390>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S390>/Add' incorporates:
   *  Gain: '<S390>/Gain1'
   *  Saturate: '<S390>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S390>/Subtract' incorporates:
   *  Constant: '<S390>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S390>/Sum2' incorporates:
   *  Gain: '<S390>/Gain2'
   *  UnitDelay: '<S390>/Unit Delay'
   */
  rtb_Abs1 = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S394>/Switch2' incorporates:
   *  RelationalOperator: '<S394>/LowerRelop1'
   */
  if (!(rtb_Abs1 > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S390>/Subtract1' incorporates:
     *  Constant: '<S390>/Constant1'
     */
    rtb_Subtract_d4 = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S394>/Switch' incorporates:
     *  RelationalOperator: '<S394>/UpperRelop'
     */
    if (rtb_Abs1 < rtb_Subtract_d4) {
      rtb_Optimized_Module_Angle = rtb_Subtract_d4;
    } else {
      rtb_Optimized_Module_Angle = rtb_Abs1;
    }

    /* End of Switch: '<S394>/Switch' */
  }

  /* End of Switch: '<S394>/Switch2' */

  /* Saturate: '<S390>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Abs1 = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Abs1 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Abs1 = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S390>/Saturation1' */

  /* Sum: '<S390>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Abs1;

  /* Saturate: '<S390>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S390>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S390>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S390>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S390>/Saturation2' */

  /* Switch: '<S374>/Switch' incorporates:
   *  Abs: '<S374>/Abs'
   *  Constant: '<S374>/Constant'
   *  Constant: '<S389>/Constant'
   *  RelationalOperator: '<S389>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S374>/Switch' */

  /* Signum: '<S373>/Sign2' incorporates:
   *  UnitDelay: '<S373>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S373>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (rtb_Init > 0.0);
  }

  /* Product: '<S373>/Product1' incorporates:
   *  Signum: '<S373>/Sign1'
   *  Signum: '<S373>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_pb;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S373>/Switch' incorporates:
   *  Constant: '<S373>/Constant'
   *  Constant: '<S382>/Constant'
   *  Constant: '<S383>/Constant'
   *  Logic: '<S373>/or'
   *  Product: '<S373>/Product1'
   *  RelationalOperator: '<S382>/Compare'
   *  RelationalOperator: '<S383>/Compare'
   *  UnitDelay: '<S373>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S373>/Switch' */

  /* Switch: '<S388>/Init' incorporates:
   *  UnitDelay: '<S388>/FixPt Unit Delay1'
   *  UnitDelay: '<S388>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Subtract_d4 = rtb_uDLookupTable_l;
  } else {
    rtb_Subtract_d4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S388>/Init' */

  /* RelationalOperator: '<S384>/Compare' incorporates:
   *  Constant: '<S384>/Constant'
   */
  Compare = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S385>/Compare' incorporates:
   *  Constant: '<S385>/Constant'
   */
  Compare_f = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S373>/Abs' incorporates:
   *  Sum: '<S373>/Subtract'
   *  UnitDelay: '<S373>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_3 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d -
    rtb_Init);

  /* Switch: '<S373>/Switch1' incorporates:
   *  Constant: '<S373>/Constant1'
   *  Switch: '<S373>/Switch3'
   *  Switch: '<S373>/Switch5'
   *  UnaryMinus: '<S373>/Unary Minus'
   */
  if (Compare) {
    rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S373>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S373>/Constant1'
     *  Constant: '<S373>/Constant4'
     *  Constant: '<S373>/Constant6'
     *  UnaryMinus: '<S373>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S373>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S373>/Constant2'
     *  Constant: '<S373>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S373>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S373>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_3, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_3 = rtb_LookupTableDynamic;
  } else {
    if (Compare_f) {
      /* Switch: '<S373>/Switch3' incorporates:
       *  Constant: '<S373>/Constant3'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S373>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S373>/Constant1'
     *  Constant: '<S373>/Constant10'
     *  Constant: '<S373>/Constant8'
     *  UnaryMinus: '<S373>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S373>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S373>/Constant7'
     *  Constant: '<S373>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S373>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S373>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_3, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_3 = rtb_LookupTableDynamic1;
  }

  /* End of Switch: '<S373>/Switch1' */

  /* Product: '<S373>/Product' */
  rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S386>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_uDLookupTable_l - rtb_Subtract_d4;

  /* Switch: '<S387>/Switch2' incorporates:
   *  RelationalOperator: '<S387>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_ji)) {
    /* Switch: '<S373>/Switch2' incorporates:
     *  Constant: '<S373>/Constant1'
     *  Switch: '<S373>/Switch4'
     */
    if (Compare) {
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (Compare_f) {
      /* Switch: '<S373>/Switch4' incorporates:
       *  Constant: '<S373>/Constant1'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S373>/Switch4' incorporates:
       *  Constant: '<S373>/Constant3'
       *  UnaryMinus: '<S373>/Unary Minus1'
       */
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S373>/Switch2' */

    /* Product: '<S373>/Product2' */
    rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_3;

    /* Switch: '<S387>/Switch' incorporates:
     *  RelationalOperator: '<S387>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S387>/Switch' */
  }

  /* End of Switch: '<S387>/Switch2' */

  /* Sum: '<S386>/Sum' */
  rtb_Switch2_ji += rtb_Subtract_d4;

  /* Signum: '<S372>/Sign2' incorporates:
   *  UnitDelay: '<S372>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S372>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S372>/Product1' incorporates:
   *  Signum: '<S372>/Sign1'
   *  Signum: '<S372>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_pb;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S372>/Switch' incorporates:
   *  Constant: '<S372>/Constant'
   *  Constant: '<S375>/Constant'
   *  Constant: '<S376>/Constant'
   *  Logic: '<S372>/or'
   *  Product: '<S372>/Product1'
   *  RelationalOperator: '<S375>/Compare'
   *  RelationalOperator: '<S376>/Compare'
   *  UnitDelay: '<S372>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S372>/Switch' */

  /* Switch: '<S381>/Init' incorporates:
   *  UnitDelay: '<S381>/FixPt Unit Delay1'
   *  UnitDelay: '<S381>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S381>/Init' */

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  Compare = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S378>/Compare' incorporates:
   *  Constant: '<S378>/Constant'
   */
  Compare_f = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S372>/Abs' incorporates:
   *  Sum: '<S372>/Subtract'
   *  UnitDelay: '<S372>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_3 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S372>/Switch5' incorporates:
   *  Constant: '<S372>/Constant1'
   *  Switch: '<S372>/Switch1'
   *  UnaryMinus: '<S372>/Unary Minus'
   */
  if (Compare) {
    /* SignalConversion generated from: '<S372>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S372>/Constant4'
     *  Constant: '<S372>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S372>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S372>/Constant2'
     *  Constant: '<S372>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S372>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S372>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_3, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_3 = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S372>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S372>/Constant10'
     *  Constant: '<S372>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S372>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S372>/Constant7'
     *  Constant: '<S372>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S372>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S372>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_3, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_3 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S372>/Switch3' incorporates:
     *  Constant: '<S372>/Constant1'
     *  Constant: '<S372>/Constant3'
     *  UnaryMinus: '<S372>/Unary Minus'
     */
    if (Compare_f) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S372>/Switch3' */
  }

  /* End of Switch: '<S372>/Switch5' */

  /* Product: '<S372>/Product' incorporates:
   *  Switch: '<S372>/Switch1'
   */
  rtb_Subtract_d4 = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S379>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Optimized_Module_Angle -
    rtb_uDLookupTable_l;

  /* Switch: '<S380>/Switch2' incorporates:
   *  RelationalOperator: '<S380>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Subtract_d4)) {
    /* Switch: '<S372>/Switch2' incorporates:
     *  Constant: '<S372>/Constant1'
     *  Constant: '<S372>/Constant3'
     *  Switch: '<S372>/Switch4'
     *  UnaryMinus: '<S372>/Unary Minus1'
     */
    if (Compare) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (Compare_f) {
      /* Switch: '<S372>/Switch4' incorporates:
       *  Constant: '<S372>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S372>/Product2' incorporates:
     *  Switch: '<S372>/Switch2'
     */
    rtb_Subtract_d4 = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_3;

    /* Switch: '<S380>/Switch' incorporates:
     *  RelationalOperator: '<S380>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Subtract_d4)) {
      rtb_Subtract_d4 = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S380>/Switch' */
  }

  /* End of Switch: '<S380>/Switch2' */

  /* Sum: '<S379>/Sum' */
  rtb_Subtract_d4 += rtb_uDLookupTable_l;

  /* Switch: '<S362>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S362>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S362>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Subtract_d4;
  }

  /* End of Switch: '<S362>/Switch' */

  /* Fcn: '<S403>/r->x' incorporates:
   *  Fcn: '<S408>/r->x'
   *  Fcn: '<S413>/r->x'
   *  Fcn: '<S418>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S397>/Add' incorporates:
   *  Fcn: '<S403>/r->x'
   *  Fcn: '<S404>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;

  /* Fcn: '<S403>/theta->y' incorporates:
   *  Fcn: '<S408>/theta->y'
   *  Fcn: '<S413>/theta->y'
   *  Fcn: '<S418>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_3 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S397>/Add' incorporates:
   *  Fcn: '<S403>/theta->y'
   *  Fcn: '<S404>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S398>/Add' incorporates:
   *  Fcn: '<S409>/r->x'
   *  Fcn: '<S409>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S399>/Add' incorporates:
   *  Fcn: '<S414>/r->x'
   *  Fcn: '<S414>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S400>/Add' incorporates:
   *  Fcn: '<S419>/r->x'
   *  Fcn: '<S419>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_DeadZone = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                  (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Fcn: '<S417>/x->r' */
  rtb_UnitDelay3 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_DeadZone);

  /* RelationalOperator: '<S420>/Compare' incorporates:
   *  Constant: '<S420>/Constant'
   */
  Compare = (rtb_UnitDelay3 == 0.0);

  /* Switch: '<S416>/Switch1' */
  if (Compare) {
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S416>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_UnitDelay3;
  }

  /* End of Switch: '<S416>/Switch1' */

  /* Fcn: '<S402>/x->r' */
  rtb_UnitDelay3 = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S405>/Compare' incorporates:
   *  Constant: '<S405>/Constant'
   */
  Compare_f = (rtb_UnitDelay3 == 0.0);

  /* Switch: '<S401>/Switch1' */
  if (Compare_f) {
    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S401>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S401>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_UnitDelay3;
  }

  /* End of Switch: '<S401>/Switch1' */

  /* Fcn: '<S407>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S410>/Compare' incorporates:
   *  Constant: '<S410>/Constant'
   */
  Coral_Score = (rtb_Switch2_g == 0.0);

  /* Switch: '<S406>/Switch1' */
  if (Coral_Score) {
    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S406>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S406>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S406>/Switch1' */

  /* Fcn: '<S412>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S415>/Compare' incorporates:
   *  Constant: '<S415>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init == 0.0);

  /* Switch: '<S411>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S411>/Switch1' incorporates:
     *  Constant: '<S411>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S411>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S411>/Switch1' */

  /* Product: '<S396>/Divide' incorporates:
   *  Abs: '<S396>/Abs'
   *  Abs: '<S396>/Abs1'
   *  Abs: '<S396>/Abs2'
   *  Abs: '<S396>/Abs3'
   *  Constant: '<S396>/Constant'
   *  MinMax: '<S396>/Max'
   */
  rtb_UnitDelay3 = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S396>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_UnitDelay3;

  /* Switch: '<S416>/Switch' */
  if (!Compare) {
    /* Switch: '<S416>/Switch' incorporates:
     *  Fcn: '<S417>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_DeadZone,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S416>/Switch' */

  /* Trigonometry: '<S352>/Cos4' incorporates:
   *  Switch: '<S341>/Angle_Switch'
   *  Trigonometry: '<S351>/Cos4'
   */
  rtb_Subtract_fc = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S352>/Sin5' incorporates:
   *  UnaryMinus: '<S350>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S352>/Sin4' incorporates:
   *  Switch: '<S341>/Angle_Switch'
   *  Trigonometry: '<S351>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_3 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S352>/Cos5' incorporates:
   *  UnaryMinus: '<S350>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S352>/Subtract1' incorporates:
   *  Product: '<S352>/Product2'
   *  Product: '<S352>/Product3'
   *  Trigonometry: '<S352>/Cos4'
   *  Trigonometry: '<S352>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_fc *
    rtb_Optimized_Module_Angle) + (rtb_Rotationmatrixfromlocalto_3 * rtb_Init);

  /* Sum: '<S352>/Subtract' incorporates:
   *  Product: '<S352>/Product'
   *  Product: '<S352>/Product1'
   *  Trigonometry: '<S352>/Cos4'
   *  Trigonometry: '<S352>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_0 = (rtb_Subtract_fc * rtb_Init) -
    (rtb_Rotationmatrixfromlocalto_3 * rtb_Optimized_Module_Angle);

  /* Math: '<S352>/Hypot' */
  rtb_DeadZone = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
    rtb_Rotationmatrixfromlocalto_1);

  /* Switch: '<S352>/Switch' incorporates:
   *  Constant: '<S352>/Constant'
   *  Constant: '<S352>/Constant1'
   *  Constant: '<S353>/Constant'
   *  Product: '<S352>/Divide'
   *  Product: '<S352>/Divide1'
   *  RelationalOperator: '<S353>/Compare'
   *  Switch: '<S352>/Switch1'
   */
  if (rtb_DeadZone > 1.0E-6) {
    rtb_Switch2_g = rtb_Rotationmatrixfromlocalto_1 / rtb_DeadZone;
    rtb_Init = rtb_Rotationmatrixfromlocalto_0 / rtb_DeadZone;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S352>/Switch' */

  /* Switch: '<S341>/Speed_Switch' incorporates:
   *  Abs: '<S341>/Abs'
   *  Constant: '<S349>/Constant'
   *  RelationalOperator: '<S349>/Compare'
   *  Switch: '<S341>/Angle_Switch'
   *  Trigonometry: '<S351>/Atan1'
   *  Trigonometry: '<S352>/Atan1'
   *  UnaryMinus: '<S341>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S351>/Subtract1' incorporates:
     *  Product: '<S351>/Product2'
     *  Product: '<S351>/Product3'
     *  UnaryMinus: '<S341>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_fc *
      Code_Gen_Model_ConstB.Sin5_c) + (rtb_Rotationmatrixfromlocalto_3 *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S351>/Subtract' incorporates:
     *  Product: '<S351>/Product'
     *  Product: '<S351>/Product1'
     */
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Subtract_fc *
      Code_Gen_Model_ConstB.Cos5_b) - (rtb_Rotationmatrixfromlocalto_3 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S351>/Hypot' */
    rtb_Rotationmatrixfromlocalto_3 = rt_hypotd_snf
      (rtb_Rotationmatrixfromlocalto_0, rtb_Rotationmatrixfromlocalto_1);

    /* Switch: '<S351>/Switch1' incorporates:
     *  Constant: '<S351>/Constant'
     *  Constant: '<S351>/Constant1'
     *  Constant: '<S354>/Constant'
     *  Product: '<S351>/Divide'
     *  Product: '<S351>/Divide1'
     *  RelationalOperator: '<S354>/Compare'
     *  Switch: '<S351>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_3 > 1.0E-6) {
      rtb_Rotationmatrixfromlocalto_0 /= rtb_Rotationmatrixfromlocalto_3;
      rtb_Rotationmatrixfromlocalto_3 = rtb_Rotationmatrixfromlocalto_1 /
        rtb_Rotationmatrixfromlocalto_3;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = 1.0;
      rtb_Rotationmatrixfromlocalto_3 = 0.0;
    }

    /* End of Switch: '<S351>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Rotationmatrixfromlocalto_3,
      rtb_Rotationmatrixfromlocalto_0);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S344>/Product2' incorporates:
   *  Constant: '<S344>/Constant'
   *  Switch: '<S341>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S339>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S339>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S342>/Add' incorporates:
   *  Sum: '<S343>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S274>/Product' incorporates:
   *  Abs: '<S339>/Abs'
   *  Abs: '<S342>/Abs'
   *  Constant: '<S345>/Constant'
   *  Constant: '<S355>/Constant3'
   *  Constant: '<S355>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S339>/OR'
   *  Lookup_n-D: '<S342>/1-D Lookup Table'
   *  Math: '<S355>/Math Function'
   *  RelationalOperator: '<S339>/Equal1'
   *  RelationalOperator: '<S345>/Compare'
   *  Signum: '<S339>/Sign'
   *  Signum: '<S339>/Sign1'
   *  Sum: '<S342>/Add'
   *  Sum: '<S355>/Add1'
   *  Sum: '<S355>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_pb) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled34, Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S340>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_g -
    Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S347>/Sum1' incorporates:
   *  Constant: '<S340>/Constant2'
   *  Product: '<S347>/Product'
   *  Sum: '<S347>/Sum'
   *  UnitDelay: '<S347>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_3 = ((rtb_Rotationmatrixfromlocalto_0 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S340>/Product' incorporates:
   *  Constant: '<S340>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Rotationmatrixfromlocalto_3 *
    Drive_Motor_Control_D;

  /* Sum: '<S346>/Diff' incorporates:
   *  UnitDelay: '<S346>/UD'
   *
   * Block description for '<S346>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S346>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
    Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S340>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S340>/Add' incorporates:
   *  Gain: '<S340>/Gain'
   *  Gain: '<S340>/Gain1'
   *  Saturate: '<S340>/Saturation'
   */
  rtb_DeadZone = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                  (Drive_Motor_Control_P * rtb_Rotationmatrixfromlocalto_0)) +
    rtb_Minus_k_idx_0;

  /* Switch: '<S340>/Switch' incorporates:
   *  Constant: '<S340>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S340>/Sum2' incorporates:
     *  Gain: '<S340>/Gain2'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_0 = (Drive_Motor_Control_I *
      rtb_Rotationmatrixfromlocalto_0) + Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S340>/Subtract' incorporates:
     *  Constant: '<S340>/Constant'
     */
    rtb_Subtract_hf = 1.0 - rtb_DeadZone;

    /* Switch: '<S348>/Switch2' incorporates:
     *  Constant: '<S340>/Constant'
     *  RelationalOperator: '<S348>/LowerRelop1'
     *  Sum: '<S340>/Subtract'
     */
    if (!(rtb_Rotationmatrixfromlocalto_0 > (1.0 - rtb_DeadZone))) {
      /* Sum: '<S340>/Subtract1' incorporates:
       *  Constant: '<S340>/Constant1'
       */
      rtb_Subtract_hf = -1.0 - rtb_DeadZone;

      /* Switch: '<S348>/Switch' incorporates:
       *  Constant: '<S340>/Constant1'
       *  RelationalOperator: '<S348>/UpperRelop'
       *  Sum: '<S340>/Subtract1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_0 < (-1.0 - rtb_DeadZone))) {
        rtb_Subtract_hf = rtb_Rotationmatrixfromlocalto_0;
      }

      /* End of Switch: '<S348>/Switch' */
    }

    /* End of Switch: '<S348>/Switch2' */

    /* Saturate: '<S340>/Saturation1' */
    if (rtb_Subtract_hf > Drive_Motor_Control_I_UL) {
      rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_I_UL;
    } else if (rtb_Subtract_hf < Drive_Motor_Control_I_LL) {
      rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = rtb_Subtract_hf;
    }

    /* End of Saturate: '<S340>/Saturation1' */
  } else {
    rtb_Rotationmatrixfromlocalto_0 = 0.0;
  }

  /* End of Switch: '<S340>/Switch' */

  /* Sum: '<S340>/Add1' */
  rtb_Minus_k_idx_0 = rtb_DeadZone + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S340>/Saturation2' */
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

  /* End of Saturate: '<S340>/Saturation2' */

  /* Switch: '<S401>/Switch' */
  if (!Compare_f) {
    /* Switch: '<S401>/Switch' incorporates:
     *  Fcn: '<S402>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S401>/Switch' */

  /* Trigonometry: '<S289>/Cos4' incorporates:
   *  Switch: '<S278>/Angle_Switch'
   *  Trigonometry: '<S288>/Cos4'
   */
  rtb_Subtract_fc = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S289>/Sin5' incorporates:
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S289>/Sin4' incorporates:
   *  Switch: '<S278>/Angle_Switch'
   *  Trigonometry: '<S288>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S289>/Cos5' incorporates:
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S289>/Subtract1' incorporates:
   *  Product: '<S289>/Product2'
   *  Product: '<S289>/Product3'
   *  Trigonometry: '<S289>/Cos4'
   *  Trigonometry: '<S289>/Sin4'
   */
  rtb_DeadZone = (rtb_Subtract_fc * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S289>/Subtract' incorporates:
   *  Product: '<S289>/Product'
   *  Product: '<S289>/Product1'
   *  Trigonometry: '<S289>/Cos4'
   *  Trigonometry: '<S289>/Sin4'
   */
  rtb_Subtract_hf = (rtb_Subtract_fc * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S289>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract_hf, rtb_DeadZone);

  /* Switch: '<S289>/Switch' incorporates:
   *  Constant: '<S289>/Constant'
   *  Constant: '<S289>/Constant1'
   *  Constant: '<S290>/Constant'
   *  Product: '<S289>/Divide'
   *  Product: '<S289>/Divide1'
   *  RelationalOperator: '<S290>/Compare'
   *  Switch: '<S289>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_DeadZone / rtb_Hypot_g5;
    rtb_Init = rtb_Subtract_hf / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S289>/Switch' */

  /* Product: '<S396>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_UnitDelay3;

  /* Switch: '<S278>/Speed_Switch' incorporates:
   *  Abs: '<S278>/Abs'
   *  Constant: '<S286>/Constant'
   *  RelationalOperator: '<S286>/Compare'
   *  Switch: '<S278>/Angle_Switch'
   *  Trigonometry: '<S288>/Atan1'
   *  Trigonometry: '<S289>/Atan1'
   *  UnaryMinus: '<S278>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S288>/Subtract1' incorporates:
     *  Product: '<S288>/Product2'
     *  Product: '<S288>/Product3'
     *  UnaryMinus: '<S278>/Unary Minus'
     */
    rtb_DeadZone = (rtb_Subtract_fc * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S288>/Subtract' incorporates:
     *  Product: '<S288>/Product'
     *  Product: '<S288>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_fc * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S288>/Hypot' */
    rtb_Subtract_hf = rt_hypotd_snf(rtb_Hypot_g5, rtb_DeadZone);

    /* Switch: '<S288>/Switch1' incorporates:
     *  Constant: '<S288>/Constant'
     *  Constant: '<S288>/Constant1'
     *  Constant: '<S291>/Constant'
     *  Product: '<S288>/Divide'
     *  Product: '<S288>/Divide1'
     *  RelationalOperator: '<S291>/Compare'
     *  Switch: '<S288>/Switch'
     */
    if (rtb_Subtract_hf > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract_hf;
      rtb_DeadZone /= rtb_Subtract_hf;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_DeadZone = 0.0;
    }

    /* End of Switch: '<S288>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_DeadZone, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S281>/Product2' incorporates:
   *  Constant: '<S281>/Constant'
   *  Switch: '<S278>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S276>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S276>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S279>/Add' incorporates:
   *  Sum: '<S280>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S271>/Product' incorporates:
   *  Abs: '<S276>/Abs'
   *  Abs: '<S279>/Abs'
   *  Constant: '<S282>/Constant'
   *  Constant: '<S292>/Constant3'
   *  Constant: '<S292>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S276>/OR'
   *  Lookup_n-D: '<S279>/1-D Lookup Table'
   *  Math: '<S292>/Math Function'
   *  RelationalOperator: '<S276>/Equal1'
   *  RelationalOperator: '<S282>/Compare'
   *  Signum: '<S276>/Sign'
   *  Signum: '<S276>/Sign1'
   *  Sum: '<S279>/Add'
   *  Sum: '<S292>/Add1'
   *  Sum: '<S292>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_pb) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S277>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S284>/Sum1' incorporates:
   *  Constant: '<S277>/Constant2'
   *  Product: '<S284>/Product'
   *  Sum: '<S284>/Sum'
   *  UnitDelay: '<S284>/Unit Delay1'
   */
  rtb_DeadZone = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                  Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S277>/Product' incorporates:
   *  Constant: '<S277>/Constant3'
   */
  rtb_Subtract_hf = rtb_DeadZone * Drive_Motor_Control_D;

  /* Sum: '<S283>/Diff' incorporates:
   *  UnitDelay: '<S283>/UD'
   *
   * Block description for '<S283>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S283>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_hf - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S277>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Gain: '<S277>/Gain'
   *  Gain: '<S277>/Gain1'
   *  Saturate: '<S277>/Saturation'
   */
  rtb_Add_ju = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S277>/Switch' incorporates:
   *  Constant: '<S277>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S277>/Sum2' incorporates:
     *  Gain: '<S277>/Gain2'
     *  UnitDelay: '<S277>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S277>/Subtract' incorporates:
     *  Constant: '<S277>/Constant'
     */
    rtb_Switch2_pt = 1.0 - rtb_Add_ju;

    /* Switch: '<S285>/Switch2' incorporates:
     *  Constant: '<S277>/Constant'
     *  RelationalOperator: '<S285>/LowerRelop1'
     *  Sum: '<S277>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ju))) {
      /* Sum: '<S277>/Subtract1' incorporates:
       *  Constant: '<S277>/Constant1'
       */
      rtb_Switch2_pt = -1.0 - rtb_Add_ju;

      /* Switch: '<S285>/Switch' incorporates:
       *  Constant: '<S277>/Constant1'
       *  RelationalOperator: '<S285>/UpperRelop'
       *  Sum: '<S277>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_ju))) {
        rtb_Switch2_pt = rtb_Hypot_g5;
      }

      /* End of Switch: '<S285>/Switch' */
    }

    /* End of Switch: '<S285>/Switch2' */

    /* Saturate: '<S277>/Saturation1' */
    if (rtb_Switch2_pt > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_pt < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_pt;
    }

    /* End of Saturate: '<S277>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S277>/Switch' */

  /* Sum: '<S277>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ju + rtb_Hypot_g5;

  /* Saturate: '<S277>/Saturation2' */
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

  /* End of Saturate: '<S277>/Saturation2' */

  /* Sum: '<S293>/Add1' incorporates:
   *  Constant: '<S293>/Constant3'
   *  Constant: '<S293>/Constant4'
   *  Math: '<S293>/Math Function'
   *  Sum: '<S293>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S295>/Sum1' incorporates:
   *  Constant: '<S280>/Constant2'
   *  Product: '<S295>/Product'
   *  Sum: '<S295>/Sum'
   *  UnitDelay: '<S295>/Unit Delay1'
   */
  rtb_Add_ju = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S280>/Product' incorporates:
   *  Constant: '<S280>/Constant3'
   */
  rtb_Switch2_pt = rtb_Add_ju * Steering_Motor_Control_D;

  /* Sum: '<S294>/Diff' incorporates:
   *  UnitDelay: '<S294>/UD'
   *
   * Block description for '<S294>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S294>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_pt - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S280>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S280>/Add' incorporates:
   *  Gain: '<S280>/Gain1'
   *  Saturate: '<S280>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S280>/Subtract' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_fn;

  /* Sum: '<S280>/Sum2' incorporates:
   *  Gain: '<S280>/Gain2'
   *  UnitDelay: '<S280>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S296>/Switch2' incorporates:
   *  RelationalOperator: '<S296>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S280>/Constant1'
     *  RelationalOperator: '<S296>/UpperRelop'
     *  Sum: '<S280>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Init = -1.0 - rtb_Add_fn;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S296>/Switch' */
  }

  /* End of Switch: '<S296>/Switch2' */

  /* Saturate: '<S280>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S280>/Saturation1' */

  /* Sum: '<S280>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S280>/Saturation2' */
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

  /* End of Saturate: '<S280>/Saturation2' */

  /* Switch: '<S406>/Switch' */
  if (!Coral_Score) {
    /* Switch: '<S406>/Switch' incorporates:
     *  Fcn: '<S407>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S406>/Switch' */

  /* Trigonometry: '<S310>/Cos4' incorporates:
   *  Switch: '<S299>/Angle_Switch'
   *  Trigonometry: '<S309>/Cos4'
   */
  rtb_Subtract_fc = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S310>/Sin5' incorporates:
   *  UnaryMinus: '<S308>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S310>/Sin4' incorporates:
   *  Switch: '<S299>/Angle_Switch'
   *  Trigonometry: '<S309>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S310>/Cos5' incorporates:
   *  UnaryMinus: '<S308>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S310>/Subtract1' incorporates:
   *  Product: '<S310>/Product2'
   *  Product: '<S310>/Product3'
   *  Trigonometry: '<S310>/Cos4'
   *  Trigonometry: '<S310>/Sin4'
   */
  rtb_Add_fn = (rtb_Subtract_fc * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S310>/Subtract' incorporates:
   *  Product: '<S310>/Product'
   *  Product: '<S310>/Product1'
   *  Trigonometry: '<S310>/Cos4'
   *  Trigonometry: '<S310>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_fc * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S310>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_fn);

  /* Switch: '<S310>/Switch' incorporates:
   *  Constant: '<S310>/Constant'
   *  Constant: '<S310>/Constant1'
   *  Constant: '<S311>/Constant'
   *  Product: '<S310>/Divide'
   *  Product: '<S310>/Divide1'
   *  RelationalOperator: '<S311>/Compare'
   *  Switch: '<S310>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_fn / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S310>/Switch' */

  /* Product: '<S396>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_UnitDelay3;

  /* Switch: '<S299>/Speed_Switch' incorporates:
   *  Abs: '<S299>/Abs'
   *  Constant: '<S307>/Constant'
   *  RelationalOperator: '<S307>/Compare'
   *  Switch: '<S299>/Angle_Switch'
   *  Trigonometry: '<S309>/Atan1'
   *  Trigonometry: '<S310>/Atan1'
   *  UnaryMinus: '<S299>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S309>/Subtract1' incorporates:
     *  Product: '<S309>/Product2'
     *  Product: '<S309>/Product3'
     *  UnaryMinus: '<S299>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Subtract_fc * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S309>/Subtract' incorporates:
     *  Product: '<S309>/Product'
     *  Product: '<S309>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_fc * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S309>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_fn);

    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S309>/Constant1'
     *  Constant: '<S312>/Constant'
     *  Product: '<S309>/Divide'
     *  Product: '<S309>/Divide1'
     *  RelationalOperator: '<S312>/Compare'
     *  Switch: '<S309>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_fn /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S309>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S302>/Product2' incorporates:
   *  Constant: '<S302>/Constant'
   *  Switch: '<S299>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S297>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S297>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S300>/Add' incorporates:
   *  Sum: '<S301>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S272>/Product' incorporates:
   *  Abs: '<S297>/Abs'
   *  Abs: '<S300>/Abs'
   *  Constant: '<S303>/Constant'
   *  Constant: '<S313>/Constant3'
   *  Constant: '<S313>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S297>/OR'
   *  Lookup_n-D: '<S300>/1-D Lookup Table'
   *  Math: '<S313>/Math Function'
   *  RelationalOperator: '<S297>/Equal1'
   *  RelationalOperator: '<S303>/Compare'
   *  Signum: '<S297>/Sign'
   *  Signum: '<S297>/Sign1'
   *  Sum: '<S300>/Add'
   *  Sum: '<S313>/Add1'
   *  Sum: '<S313>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_pb) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S298>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S305>/Sum1' incorporates:
   *  Constant: '<S298>/Constant2'
   *  Product: '<S305>/Product'
   *  Sum: '<S305>/Sum'
   *  UnitDelay: '<S305>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S298>/Product' incorporates:
   *  Constant: '<S298>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_fn * Drive_Motor_Control_D;

  /* Sum: '<S304>/Diff' incorporates:
   *  UnitDelay: '<S304>/UD'
   *
   * Block description for '<S304>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S304>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S298>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S298>/Add' incorporates:
   *  Gain: '<S298>/Gain'
   *  Gain: '<S298>/Gain1'
   *  Saturate: '<S298>/Saturation'
   */
  rtb_Add_c = ((Drive_Motor_Control_FF * rtb_Switch2_g) + (Drive_Motor_Control_P
    * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S298>/Switch' incorporates:
   *  Constant: '<S298>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S298>/Sum2' incorporates:
     *  Gain: '<S298>/Gain2'
     *  UnitDelay: '<S298>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S298>/Subtract' incorporates:
     *  Constant: '<S298>/Constant'
     */
    rtb_Switch2_e = 1.0 - rtb_Add_c;

    /* Switch: '<S306>/Switch2' incorporates:
     *  Constant: '<S298>/Constant'
     *  RelationalOperator: '<S306>/LowerRelop1'
     *  Sum: '<S298>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_c))) {
      /* Sum: '<S298>/Subtract1' incorporates:
       *  Constant: '<S298>/Constant1'
       */
      rtb_Switch2_e = -1.0 - rtb_Add_c;

      /* Switch: '<S306>/Switch' incorporates:
       *  Constant: '<S298>/Constant1'
       *  RelationalOperator: '<S306>/UpperRelop'
       *  Sum: '<S298>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_c))) {
        rtb_Switch2_e = rtb_Hypot_b;
      }

      /* End of Switch: '<S306>/Switch' */
    }

    /* End of Switch: '<S306>/Switch2' */

    /* Saturate: '<S298>/Saturation1' */
    if (rtb_Switch2_e > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_e < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_e;
    }

    /* End of Saturate: '<S298>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S298>/Switch' */

  /* Sum: '<S298>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_c + rtb_Hypot_b;

  /* Saturate: '<S298>/Saturation2' */
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

  /* End of Saturate: '<S298>/Saturation2' */

  /* Sum: '<S314>/Add1' incorporates:
   *  Constant: '<S314>/Constant3'
   *  Constant: '<S314>/Constant4'
   *  Math: '<S314>/Math Function'
   *  Sum: '<S314>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S316>/Sum1' incorporates:
   *  Constant: '<S301>/Constant2'
   *  Product: '<S316>/Product'
   *  Sum: '<S316>/Sum'
   *  UnitDelay: '<S316>/Unit Delay1'
   */
  rtb_Add_c = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
               Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S301>/Product' incorporates:
   *  Constant: '<S301>/Constant3'
   */
  rtb_Switch2_e = rtb_Add_c * Steering_Motor_Control_D;

  /* Sum: '<S315>/Diff' incorporates:
   *  UnitDelay: '<S315>/UD'
   *
   * Block description for '<S315>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S315>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_e - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S301>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S301>/Add' incorporates:
   *  Gain: '<S301>/Gain1'
   *  Saturate: '<S301>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S301>/Subtract' incorporates:
   *  Constant: '<S301>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S301>/Sum2' incorporates:
   *  Gain: '<S301>/Gain2'
   *  UnitDelay: '<S301>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S317>/Switch2' incorporates:
   *  RelationalOperator: '<S317>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S317>/Switch' incorporates:
     *  Constant: '<S301>/Constant1'
     *  RelationalOperator: '<S317>/UpperRelop'
     *  Sum: '<S301>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S317>/Switch' */
  }

  /* End of Switch: '<S317>/Switch2' */

  /* Saturate: '<S301>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S301>/Saturation1' */

  /* Sum: '<S301>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S301>/Saturation2' */
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

  /* End of Saturate: '<S301>/Saturation2' */

  /* Switch: '<S411>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S411>/Switch' incorporates:
     *  Fcn: '<S412>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S411>/Switch' */

  /* Trigonometry: '<S331>/Cos4' incorporates:
   *  Switch: '<S320>/Angle_Switch'
   *  Trigonometry: '<S330>/Cos4'
   */
  rtb_Subtract_fc = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S331>/Sin5' incorporates:
   *  UnaryMinus: '<S329>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S331>/Sin4' incorporates:
   *  Switch: '<S320>/Angle_Switch'
   *  Trigonometry: '<S330>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S331>/Cos5' incorporates:
   *  UnaryMinus: '<S329>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S331>/Subtract1' incorporates:
   *  Product: '<S331>/Product2'
   *  Product: '<S331>/Product3'
   *  Trigonometry: '<S331>/Cos4'
   *  Trigonometry: '<S331>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_fc * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S331>/Subtract' incorporates:
   *  Product: '<S331>/Product'
   *  Product: '<S331>/Product1'
   *  Trigonometry: '<S331>/Cos4'
   *  Trigonometry: '<S331>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_fc * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S331>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S331>/Switch' incorporates:
   *  Constant: '<S331>/Constant'
   *  Constant: '<S331>/Constant1'
   *  Constant: '<S332>/Constant'
   *  Product: '<S331>/Divide'
   *  Product: '<S331>/Divide1'
   *  RelationalOperator: '<S332>/Compare'
   *  Switch: '<S331>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Switch2_g /= rtb_Init;
    rtb_Init = rtb_uDLookupTable_l / rtb_Init;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S331>/Switch' */

  /* Product: '<S396>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_UnitDelay3;

  /* Switch: '<S320>/Speed_Switch' incorporates:
   *  Abs: '<S320>/Abs'
   *  Constant: '<S328>/Constant'
   *  RelationalOperator: '<S328>/Compare'
   *  Switch: '<S320>/Angle_Switch'
   *  Trigonometry: '<S330>/Atan1'
   *  Trigonometry: '<S331>/Atan1'
   *  UnaryMinus: '<S320>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S330>/Subtract1' incorporates:
     *  Product: '<S330>/Product2'
     *  Product: '<S330>/Product3'
     *  UnaryMinus: '<S320>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_fc * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S330>/Subtract' incorporates:
     *  Product: '<S330>/Product'
     *  Product: '<S330>/Product1'
     */
    rtb_Subtract_fc = (rtb_Subtract_fc * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S330>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_fc, rtb_Switch2_g);

    /* Switch: '<S330>/Switch1' incorporates:
     *  Constant: '<S330>/Constant'
     *  Constant: '<S330>/Constant1'
     *  Constant: '<S333>/Constant'
     *  Product: '<S330>/Divide'
     *  Product: '<S330>/Divide1'
     *  RelationalOperator: '<S333>/Compare'
     *  Switch: '<S330>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_fc /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_fc = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S330>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_fc);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S323>/Product2' incorporates:
   *  Constant: '<S323>/Constant'
   *  Switch: '<S320>/Speed_Switch'
   */
  rtb_UnitDelay3 = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S318>/Sign' */
  if (rtIsNaN(rtb_UnitDelay3)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_UnitDelay3 < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_UnitDelay3 > 0.0);
  }

  /* Signum: '<S318>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S321>/Add' incorporates:
   *  Sum: '<S322>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S273>/Product' incorporates:
   *  Abs: '<S318>/Abs'
   *  Abs: '<S321>/Abs'
   *  Constant: '<S324>/Constant'
   *  Constant: '<S334>/Constant3'
   *  Constant: '<S334>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S318>/OR'
   *  Lookup_n-D: '<S321>/1-D Lookup Table'
   *  Math: '<S334>/Math Function'
   *  RelationalOperator: '<S318>/Equal1'
   *  RelationalOperator: '<S324>/Compare'
   *  Signum: '<S318>/Sign'
   *  Signum: '<S318>/Sign1'
   *  Sum: '<S321>/Add'
   *  Sum: '<S334>/Add1'
   *  Sum: '<S334>/Add2'
   */
  rtb_UnitDelay3 = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_pb) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_UnitDelay3) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_Init + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
                  Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S319>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_UnitDelay3 - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S326>/Sum1' incorporates:
   *  Constant: '<S319>/Constant2'
   *  Product: '<S326>/Product'
   *  Sum: '<S326>/Sum'
   *  UnitDelay: '<S326>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S319>/Product' incorporates:
   *  Constant: '<S319>/Constant3'
   */
  rtb_Subtract_fc = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S325>/Diff' incorporates:
   *  UnitDelay: '<S325>/UD'
   *
   * Block description for '<S325>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S325>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_fc - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S319>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S319>/Add' incorporates:
   *  Gain: '<S319>/Gain'
   *  Gain: '<S319>/Gain1'
   *  Saturate: '<S319>/Saturation'
   */
  rtb_UnitDelay3 = ((Drive_Motor_Control_FF * rtb_UnitDelay3) +
                    (Drive_Motor_Control_P * rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S319>/Switch' incorporates:
   *  Constant: '<S319>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S319>/Sum2' incorporates:
     *  Gain: '<S319>/Gain2'
     *  UnitDelay: '<S319>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S319>/Subtract' incorporates:
     *  Constant: '<S319>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_UnitDelay3;

    /* Switch: '<S327>/Switch2' incorporates:
     *  Constant: '<S319>/Constant'
     *  RelationalOperator: '<S327>/LowerRelop1'
     *  Sum: '<S319>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_UnitDelay3))) {
      /* Sum: '<S319>/Subtract1' incorporates:
       *  Constant: '<S319>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_UnitDelay3;

      /* Switch: '<S327>/Switch' incorporates:
       *  Constant: '<S319>/Constant1'
       *  RelationalOperator: '<S327>/UpperRelop'
       *  Sum: '<S319>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_UnitDelay3))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S327>/Switch' */
    }

    /* End of Switch: '<S327>/Switch2' */

    /* Saturate: '<S319>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S319>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S319>/Switch' */

  /* Sum: '<S319>/Add1' */
  rtb_Minus_k_idx_0 = rtb_UnitDelay3 + rtb_Integral_hv;

  /* Saturate: '<S319>/Saturation2' */
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

  /* End of Saturate: '<S319>/Saturation2' */

  /* Sum: '<S335>/Add1' incorporates:
   *  Constant: '<S335>/Constant3'
   *  Constant: '<S335>/Constant4'
   *  Math: '<S335>/Math Function'
   *  Sum: '<S335>/Add2'
   */
  rtb_UnitDelay3 = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S337>/Sum1' incorporates:
   *  Constant: '<S322>/Constant2'
   *  Product: '<S337>/Product'
   *  Sum: '<S337>/Sum'
   *  UnitDelay: '<S337>/Unit Delay1'
   */
  rtb_Sum1_m = ((rtb_UnitDelay3 - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S322>/Product' incorporates:
   *  Constant: '<S322>/Constant3'
   */
  rtb_Product_lf = rtb_Sum1_m * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S322>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S322>/Add' incorporates:
   *  Gain: '<S322>/Gain1'
   *  Saturate: '<S322>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_UnitDelay3) + rtb_Minus_k_idx_0;

  /* Sum: '<S322>/Subtract' incorporates:
   *  Constant: '<S322>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S322>/Sum2' incorporates:
   *  Gain: '<S322>/Gain2'
   *  UnitDelay: '<S322>/Unit Delay'
   */
  rtb_UnitDelay3 = (Steering_Motor_Control_I * rtb_UnitDelay3) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S338>/Switch2' incorporates:
   *  Constant: '<S322>/Constant'
   *  RelationalOperator: '<S338>/LowerRelop1'
   *  Sum: '<S322>/Subtract'
   */
  if (!(rtb_UnitDelay3 > (1.0 - rtb_Init))) {
    /* Sum: '<S322>/Subtract1' incorporates:
     *  Constant: '<S322>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S338>/Switch' incorporates:
     *  Constant: '<S322>/Constant1'
     *  RelationalOperator: '<S338>/UpperRelop'
     *  Sum: '<S322>/Subtract1'
     */
    if (!(rtb_UnitDelay3 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_UnitDelay3;
    }

    /* End of Switch: '<S338>/Switch' */
  }

  /* End of Switch: '<S338>/Switch2' */

  /* Saturate: '<S322>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S322>/Saturation1' */

  /* Sum: '<S322>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S322>/Saturation2' */
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

  /* End of Saturate: '<S322>/Saturation2' */

  /* Sum: '<S356>/Add1' incorporates:
   *  Constant: '<S356>/Constant3'
   *  Constant: '<S356>/Constant4'
   *  Math: '<S356>/Math Function'
   *  Sum: '<S356>/Add2'
   */
  rtb_UnitDelay3 = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S358>/Sum1' incorporates:
   *  Constant: '<S343>/Constant2'
   *  Product: '<S358>/Product'
   *  Sum: '<S358>/Sum'
   *  UnitDelay: '<S358>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_UnitDelay3 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S343>/Product' incorporates:
   *  Constant: '<S343>/Constant3'
   */
  rtb_Product_pz = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S357>/Diff' incorporates:
   *  UnitDelay: '<S357>/UD'
   *
   * Block description for '<S357>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S357>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S343>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S343>/Add' incorporates:
   *  Gain: '<S343>/Gain1'
   *  Saturate: '<S343>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_UnitDelay3) + rtb_Minus_k_idx_0;

  /* Sum: '<S343>/Subtract' incorporates:
   *  Constant: '<S343>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S343>/Sum2' incorporates:
   *  Gain: '<S343>/Gain2'
   *  UnitDelay: '<S343>/Unit Delay'
   */
  rtb_UnitDelay3 = (Steering_Motor_Control_I * rtb_UnitDelay3) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S359>/Switch2' incorporates:
   *  Constant: '<S343>/Constant'
   *  RelationalOperator: '<S359>/LowerRelop1'
   *  Sum: '<S343>/Subtract'
   */
  if (!(rtb_UnitDelay3 > (1.0 - rtb_Init))) {
    /* Sum: '<S343>/Subtract1' incorporates:
     *  Constant: '<S343>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S359>/Switch' incorporates:
     *  Constant: '<S343>/Constant1'
     *  RelationalOperator: '<S359>/UpperRelop'
     *  Sum: '<S343>/Subtract1'
     */
    if (!(rtb_UnitDelay3 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_UnitDelay3;
    }

    /* End of Switch: '<S359>/Switch' */
  }

  /* End of Switch: '<S359>/Switch2' */

  /* Saturate: '<S343>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S343>/Saturation1' */

  /* Sum: '<S343>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S343>/Saturation2' */
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

  /* End of Saturate: '<S343>/Saturation2' */

  /* MinMax: '<S12>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S12>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S12>/Range of Motion Protection Limit1'
   *  Merge: '<S20>/Merge13'
   */
  rtb_UnitDelay3 = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired_merge,
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
  if ((Code_Gen_Model_B.Elevator_Height_Desired_merge < rtb_UnitDelay3) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S12>/Add' incorporates:
   *  Sum: '<S12>/Subtract'
   *  Switch: '<S12>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_UnitDelay3 -
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
  Compare = (((!rtb_Compare_m3) &&
              (Code_Gen_Model_B.Reefscape_Motors_Enable_merge)) &&
             ((!Code_Gen_Model_B.Out) && (!Code_Gen_Model_B.Out_h)));

  /* Switch: '<S93>/Switch' */
  if (Compare) {
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
      rtb_UnitDelay3 = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S93>/Subtract' incorporates:
       *  Constant: '<S93>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S103>/Switch2' incorporates:
       *  RelationalOperator: '<S103>/LowerRelop1'
       */
      if (!(rtb_UnitDelay3 > rtb_Switch2_g)) {
        /* Sum: '<S93>/Subtract1' incorporates:
         *  Constant: '<S93>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S103>/Switch' incorporates:
         *  RelationalOperator: '<S103>/UpperRelop'
         */
        if (!(rtb_UnitDelay3 < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_UnitDelay3;
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
        rtb_UnitDelay3 = Elevator_Bottom_DC;
      } else {
        rtb_UnitDelay3 = Elevator_Total_LL;
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
        rtb_UnitDelay3 = Elevator_Hold_at_Top_DC;
      } else {
        rtb_UnitDelay3 = 1.0;
      }

      /* End of Switch: '<S12>/Switch1' */

      /* Switch: '<S94>/Switch2' incorporates:
       *  RelationalOperator: '<S94>/LowerRelop1'
       */
      if (!(rtb_Switch2_g > rtb_UnitDelay3)) {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S12>/Constant3'
         *  Constant: '<S12>/Constant4'
         */
        if (Code_Gen_Model_B.Out_h) {
          rtb_UnitDelay3 = 0.0;
        } else {
          rtb_UnitDelay3 = -1.0;
        }

        /* End of Switch: '<S12>/Switch' */

        /* Switch: '<S94>/Switch' incorporates:
         *  RelationalOperator: '<S94>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_UnitDelay3)) {
          rtb_UnitDelay3 = rtb_Switch2_g;
        }

        /* End of Switch: '<S94>/Switch' */
      }

      /* End of Switch: '<S94>/Switch2' */
    }

    /* End of Switch: '<S12>/Switch4' */
  } else {
    rtb_UnitDelay3 = 0.0;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* UnitDelay: '<S92>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S92>/Abs' incorporates:
   *  Sum: '<S92>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_UnitDelay3);

  /* Signum: '<S92>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S92>/Sign1' */
  if (rtIsNaN(rtb_UnitDelay3)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (rtb_UnitDelay3 < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (rtb_UnitDelay3 > 0.0);
  }

  /* Product: '<S92>/Product1' incorporates:
   *  Signum: '<S92>/Sign1'
   *  Signum: '<S92>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_pb;
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
    rtb_UnitDelay3 = 0.0;
  }

  /* End of Switch: '<S92>/Switch' */

  /* RelationalOperator: '<S97>/Compare' incorporates:
   *  Constant: '<S97>/Constant'
   */
  rtb_Compare_m3 = (rtb_UnitDelay3 == 0.0);

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
  Compare_f = (rtb_UnitDelay3 > 0.0);

  /* Switch: '<S92>/Switch1' incorporates:
   *  Switch: '<S92>/Switch3'
   */
  if (rtb_Compare_m3) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (Compare_f) {
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
    rtb_Init = rtb_UnitDelay3;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S101>/Init' */

  /* Sum: '<S99>/Sum1' */
  rtb_UnitDelay3 -= rtb_Init;

  /* Switch: '<S100>/Switch2' incorporates:
   *  RelationalOperator: '<S100>/LowerRelop1'
   */
  if (!(rtb_UnitDelay3 > rtb_Switch2_g)) {
    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S92>/Constant1'
     *  Constant: '<S92>/Constant3'
     *  Switch: '<S92>/Switch4'
     *  UnaryMinus: '<S92>/Unary Minus1'
     */
    if (rtb_Compare_m3) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (Compare_f) {
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
    if (!(rtb_UnitDelay3 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_UnitDelay3;
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
  Coral_Score = ((Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge >
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
    rtb_UnitDelay3 = 90.0;
  } else {
    /* Lookup_n-D: '<S8>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S13>/Switch'
     */
    rtb_UnitDelay3 = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S76>/Switch' incorporates:
     *  RelationalOperator: '<S76>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge < rtb_UnitDelay3)) {
      rtb_UnitDelay3 = Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S76>/Switch' */
  }

  /* End of Switch: '<S76>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_UnitDelay3 -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S75>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S8>/Logical Operator2' incorporates:
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator3'
   */
  Compare_f = (((!Coral_Score) && (!rtb_Compare_m3)) &&
               (Code_Gen_Model_B.Reefscape_Motors_Enable_merge));

  /* Lookup_n-D: '<S8>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_UnitDelay3 = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S75>/Switch' */
  if (Compare_f) {
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
      rtb_Switch2_pb = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S85>/Switch2' incorporates:
       *  RelationalOperator: '<S85>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_pb)) {
        /* Sum: '<S75>/Subtract1' */
        rtb_Switch2_pb = rtb_UnitDelay3 -
          Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S85>/Switch' incorporates:
         *  RelationalOperator: '<S85>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_pb)) {
          rtb_Switch2_pb = rtb_Init;
        }

        /* End of Switch: '<S85>/Switch' */
      }

      /* End of Switch: '<S85>/Switch2' */

      /* Saturate: '<S75>/Saturation1' */
      if (rtb_Switch2_pb > Coral_Arm_Int_UL) {
        /* Switch: '<S75>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_pb < Coral_Arm_Int_LL) {
        /* Switch: '<S75>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S75>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_pb;
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
      rtb_UnitDelay3 = Coral_Arm_Neg90_DC;
    } else if (Coral_Score) {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant1'
       */
      rtb_UnitDelay3 = Coral_Arm_Pos90_DC;
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
        rtb_UnitDelay3 = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_UnitDelay3)) {
        rtb_UnitDelay3 = rtb_Init;
      }

      /* End of Switch: '<S86>/Switch2' */
    }

    /* End of Switch: '<S8>/Switch1' */
  } else {
    rtb_UnitDelay3 = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S74>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S74>/Abs' incorporates:
   *  Sum: '<S74>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_UnitDelay3);

  /* Signum: '<S74>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S74>/Sign1' */
  if (rtIsNaN(rtb_UnitDelay3)) {
    rtb_Switch2_pb = (rtNaN);
  } else if (rtb_UnitDelay3 < 0.0) {
    rtb_Switch2_pb = -1.0;
  } else {
    rtb_Switch2_pb = (rtb_UnitDelay3 > 0.0);
  }

  /* Product: '<S74>/Product1' incorporates:
   *  Signum: '<S74>/Sign1'
   *  Signum: '<S74>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_pb;
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
    rtb_UnitDelay3 = 0.0;
  }

  /* End of Switch: '<S74>/Switch' */

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  rtb_Compare_m3 = (rtb_UnitDelay3 == 0.0);

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
    rtb_Switch2_pb = rtb_LookupTableDynamic_n;
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
    rtb_Switch2_pb = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S74>/Switch5' */

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  Coral_Score = (rtb_UnitDelay3 > 0.0);

  /* Switch: '<S74>/Switch1' incorporates:
   *  Switch: '<S74>/Switch3'
   */
  if (rtb_Compare_m3) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (Coral_Score) {
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
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_pb;

  /* Switch: '<S83>/Init' incorporates:
   *  UnitDelay: '<S83>/FixPt Unit Delay1'
   *  UnitDelay: '<S83>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_UnitDelay3;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S83>/Init' */

  /* Sum: '<S81>/Sum1' */
  rtb_UnitDelay3 -= rtb_Init;

  /* Switch: '<S82>/Switch2' incorporates:
   *  RelationalOperator: '<S82>/LowerRelop1'
   */
  if (!(rtb_UnitDelay3 > rtb_Switch2_g)) {
    /* Switch: '<S74>/Switch2' incorporates:
     *  Constant: '<S74>/Constant1'
     *  Constant: '<S74>/Constant3'
     *  Switch: '<S74>/Switch4'
     *  UnaryMinus: '<S74>/Unary Minus1'
     */
    if (rtb_Compare_m3) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (Coral_Score) {
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
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_pb;

    /* Switch: '<S82>/Switch' incorporates:
     *  RelationalOperator: '<S82>/UpperRelop'
     */
    if (!(rtb_UnitDelay3 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_UnitDelay3;
    }

    /* End of Switch: '<S82>/Switch' */
  }

  /* End of Switch: '<S82>/Switch2' */

  /* Sum: '<S81>/Sum' */
  rtb_UnitDelay3 = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_UnitDelay3;

  /* RelationalOperator: '<S136>/Compare' incorporates:
   *  Constant: '<S136>/Constant'
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
  rtb_Is_Absolute_Steering = (MultiportSwitch == 0);

  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Constant: '<S14>/Constant5'
   *  Logic: '<S14>/Logical Operator2'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  rtb_Is_Absolute_Translation_g =
    ((Code_Gen_Model_B.Reefscape_Motors_Enable_merge) &&
     (Code_Gen_Model_B.Elevator_Height_Desired_merge == Elevator_Height_End_Game));

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant8'
   *  Logic: '<S14>/Logical Operator3'
   *  Switch: '<S14>/Switch6'
   *  UnitDelay: '<S14>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation_g && (Code_Gen_Model_B.Winch_Cmd)) {
    Coral_Score = true;
  } else {
    Coral_Score = ((!rtb_Is_Absolute_Steering) &&
                   (Code_Gen_Model_DW.UnitDelay_DSTATE_gln));
  }

  /* End of Switch: '<S14>/Switch4' */

  /* Switch: '<S14>/Switch' */
  if (Coral_Score) {
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

  /* RelationalOperator: '<S135>/Compare' incorporates:
   *  Constant: '<S135>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Code_Gen_Model_B.Actuator_Cmd = (Code_Gen_Model_U.Joystick_Left_B8 != 0.0);

  /* Switch: '<S14>/Switch5' incorporates:
   *  Constant: '<S14>/Constant9'
   *  Logic: '<S14>/Logical Operator2'
   *  Switch: '<S14>/Switch7'
   *  UnitDelay: '<S14>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation_g && (Code_Gen_Model_B.Actuator_Cmd)) {
    rtb_Is_Absolute_Steering = true;
  } else {
    rtb_Is_Absolute_Steering = ((!rtb_Is_Absolute_Steering) &&
      (Code_Gen_Model_DW.UnitDelay1_DSTATE_kb));
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
    rtb_Is_Absolute_Translation_g = true;
  } else {
    rtb_Is_Absolute_Translation_g = ((!(Code_Gen_Model_U.Actuator_Revs >=
      Actuator_Rev_Target)) && (Code_Gen_Model_DW.UnitDelay2_DSTATE_k));
  }

  /* End of Switch: '<S14>/Switch8' */

  /* Switch: '<S14>/Switch2' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S14>/Switch3' incorporates:
     *  Logic: '<S14>/Logical Operator1'
     */
    if (rtb_Is_Absolute_Translation_g) {
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

  /* Gain: '<S203>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S204>/Compare' incorporates:
   *  Constant: '<S203>/Constant'
   *  Constant: '<S204>/Constant'
   */
  rtb_Compare_m3 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S203>/Switch1' incorporates:
   *  UnitDelay: '<S203>/Unit Delay1'
   */
  if (rtb_Compare_m3) {
    rtb_Switch2_g = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S203>/Switch1' */

  /* Sum: '<S203>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_g;

  /* Gain: '<S203>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S203>/Switch' incorporates:
   *  UnitDelay: '<S203>/Unit Delay'
   */
  if (rtb_Compare_m3) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S203>/Switch' */

  /* Sum: '<S203>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S15>/Gain'
   *  Sum: '<S15>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_Switch1_j1 + rtb_Switch1) *
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
    Code_Gen_Model_Y.CANdle_LED_ID = Robot_Reached_Destination;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_Enable_Wheels;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

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

  /* Update for UnitDelay: '<S195>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S195>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S196>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S196>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S197>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S197>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S198>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S198>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for S-Function (sfix_udelay): '<S18>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S18>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S140>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S160>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S140>/A'
   *  Delay: '<S140>/MemoryX'
   */
  rtb_Switch1_j1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
    + Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S140>/MemoryX' incorporates:
   *  Constant: '<S140>/B'
   *  Product: '<S160>/A[k]*xhat[k|k-1]'
   *  Product: '<S160>/B[k]*u[k]'
   *  Sum: '<S160>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch1_j1) + Code_Gen_Model_B.Product3
    [0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle_merge) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S112>/Delay Input1' incorporates:
   *  Constant: '<S15>/Constant3'
   *
   * Block description for '<S112>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S15>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S194>/UD'
   *
   * Block description for '<S194>/UD':
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

  /* Update for UnitDelay: '<S137>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S137>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S138>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S138>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S139>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S139>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S104>/Delay Input1'
   *
   * Block description for '<S104>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = Code_Gen_Model_B.Out_h;

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

  /* Update for UnitDelay: '<S371>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S371>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S393>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S392>/UD'
   *
   * Block description for '<S392>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S390>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Abs1;

  /* Update for UnitDelay: '<S373>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S388>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S388>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S388>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S372>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Subtract_d4;

  /* Update for UnitDelay: '<S381>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S381>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S381>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Subtract_d4;

  /* Update for UnitDelay: '<S347>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Rotationmatrixfromlocalto_3;

  /* Update for UnitDelay: '<S346>/UD'
   *
   * Block description for '<S346>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S340>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S284>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_DeadZone;

  /* Update for UnitDelay: '<S283>/UD'
   *
   * Block description for '<S283>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Subtract_hf;

  /* Update for UnitDelay: '<S277>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S295>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ju;

  /* Update for UnitDelay: '<S294>/UD'
   *
   * Block description for '<S294>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_pt;

  /* Update for UnitDelay: '<S280>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S305>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_fn;

  /* Update for UnitDelay: '<S304>/UD'
   *
   * Block description for '<S304>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S298>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S316>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_c;

  /* Update for UnitDelay: '<S315>/UD'
   *
   * Block description for '<S315>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_e;

  /* Update for UnitDelay: '<S301>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S326>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S325>/UD'
   *
   * Block description for '<S325>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_fc;

  /* Update for UnitDelay: '<S319>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S337>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_m;

  /* Update for UnitDelay: '<S336>/UD'
   *
   * Block description for '<S336>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S322>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S358>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S357>/UD'
   *
   * Block description for '<S357>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_pz;

  /* Update for UnitDelay: '<S343>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S102>/Delay Input1'
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = Compare;

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
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = Compare_f;

  /* Update for UnitDelay: '<S74>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_UnitDelay3;

  /* Update for UnitDelay: '<S83>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S83>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S83>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_UnitDelay3;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gln = Coral_Score;

  /* Update for UnitDelay: '<S14>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kb = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S14>/Unit Delay2' */
  Code_Gen_Model_DW.UnitDelay2_DSTATE_k = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S203>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_g;

  /* Update for UnitDelay: '<S203>/Unit Delay' */
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

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S23>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S140>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S15>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S371>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S388>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S381>/FixPt Unit Delay2' */
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
    /* InitializeConditions for UnitDelay: '<S462>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* SystemInitialize for Chart: '<S424>/Reefscape_Chart' */
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
    /* Start for If: '<S212>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S208>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S212>/Robot_Index_Is_Valid' */
    /* Start for If: '<S215>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S215>/Circle_Check_Valid' */
    /* Start for If: '<S217>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S215>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S212>/Robot_Index_Is_Valid' */
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
