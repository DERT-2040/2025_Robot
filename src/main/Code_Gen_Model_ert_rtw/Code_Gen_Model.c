/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.361
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 21 15:40:52 2025
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

/* Named constants for Chart: '<S29>/Reefscape_Chart' */
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
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Off_Target   ((uint8_T)1U)
#define Code_Gen_Model_IN_On_Target    ((uint8_T)2U)
#define Code_Gen_Model_IN_Start        ((uint8_T)9U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)6U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)6U)

/* Named constants for Chart: '<S20>/Chart' */
#define Code_Gen_M_IN_NO_ACTIVE_CHILD_g ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S26>/Reefscape_Auto_Steps' */
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)1U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_3 ((uint8_T)3U)
#define Code_Gen_M_IN_Wait_for_Teleop_m ((uint8_T)16U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)11U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)12U)
#define Code_Gen_Mod_IN_Score_at_Reef_3 ((uint8_T)13U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)9U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)8U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)9U)
#define Code_Gen_Mode_IN_Path_to_Reef_3 ((uint8_T)10U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Drive        ((uint8_T)1U)
#define Code_Gen_Model_IN_Path_to_Reef ((uint8_T)6U)
#define Code_Gen_Model_IN_Score_at_Reef ((uint8_T)8U)
#define Code_Gen_Model_IN_Set_L4       ((uint8_T)2U)
#define Code_Gen_Model_IN_Set_L4_h     ((uint8_T)1U)
#define Code_Gen_Model_IN_Timer_to_L4  ((uint8_T)2U)
#define Code_Gen__IN_Path_to_Start_Line ((uint8_T)7U)
#define Code_IN_Adjust_Height_for_Algae ((uint8_T)1U)
#define Code_IN_Path_to_Coral_Station_1 ((uint8_T)4U)
#define Code_IN_Path_to_Coral_Station_2 ((uint8_T)6U)
#define Code_IN_Path_to_Coral_Station_3 ((uint8_T)7U)
#define Code_IN_Wait_at_Coral_Station_1 ((uint8_T)14U)
#define Code_IN_Wait_at_Coral_Station_2 ((uint8_T)15U)
#define IN_Back_Up_from_Reef_Coral_Sc_o ((uint8_T)3U)
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)4U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)5U)
#define IN_Path_to_Coral_Station_1_end_ ((uint8_T)5U)

/* Exported block parameters */
real_T AT_CS_L_Angle_Blue = 2.1991;    /* Variable: AT_CS_L_Angle_Blue
                                        * Referenced by: '<S417>/Constant14'
                                        */
real_T AT_CS_L_Angle_Red = -0.94248;   /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S417>/Constant13'
                                        */
real_T AT_CS_L_X_Blue = 1.0751;        /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S417>/Constant9'
                                        */
real_T AT_CS_L_X_Red = 16.4733;        /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S417>/Constant5'
                                        */
real_T AT_CS_L_Y_Blue = 7.0882;        /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S417>/Constant28'
                                        */
real_T AT_CS_L_Y_Red = 0.96356;        /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S417>/Constant27'
                                        */
real_T AT_CS_R_Angle_Blue = -2.1991;   /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S417>/Constant12'
                                        */
real_T AT_CS_R_Angle_Red = 0.94248;    /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S417>/Constant11'
                                        */
real_T AT_CS_R_X_Blue = 1.0751;        /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S417>/Constant4'
                                        */
real_T AT_CS_R_X_Red = 16.4733;        /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S417>/Constant17'
                                        */
real_T AT_CS_R_Y_Blue = 0.96356;       /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S417>/Constant26'
                                        */
real_T AT_CS_R_Y_Red = 7.0882;         /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S417>/Constant3'
                                        */
real_T AT_Cage_L_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                              * Referenced by: '<S417>/Constant55'
                                              */
real_T AT_Cage_L_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_L_Finish_Angle_Red
                                         * Referenced by: '<S417>/Constant54'
                                         */
real_T AT_Cage_L_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_L_Finish_X_Blue
                                         * Referenced by: '<S417>/Constant39'
                                         */
real_T AT_Cage_L_Finish_X_Red = 8.7803;/* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S417>/Constant2'
                                        */
real_T AT_Cage_L_Finish_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Finish_Y_Blue
                                         * Referenced by: '<S417>/Constant43'
                                         */
real_T AT_Cage_L_Finish_Y_Red = 0.79229;/* Variable: AT_Cage_L_Finish_Y_Red
                                         * Referenced by: '<S417>/Constant42'
                                         */
real_T AT_Cage_L_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Start_Angle_Blue
                                             * Referenced by: '<S417>/Constant49'
                                             */
real_T AT_Cage_L_Start_Angle_Red = 0.0;/* Variable: AT_Cage_L_Start_Angle_Red
                                        * Referenced by: '<S417>/Constant48'
                                        */
real_T AT_Cage_L_Start_X_Blue = 9.5301;/* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S417>/Constant7'
                                        */
real_T AT_Cage_L_Start_X_Red = 8.0183; /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S417>/Constant15'
                                        */
real_T AT_Cage_L_Start_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S417>/Constant32'
                                        */
real_T AT_Cage_L_Start_Y_Red = 0.79229;/* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S417>/Constant25'
                                        */
real_T AT_Cage_M_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                              * Referenced by: '<S417>/Constant53'
                                              */
real_T AT_Cage_M_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_M_Finish_Angle_Red
                                         * Referenced by: '<S417>/Constant52'
                                         */
real_T AT_Cage_M_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_M_Finish_X_Blue
                                         * Referenced by: '<S417>/Constant34'
                                         */
real_T AT_Cage_M_Finish_X_Red = 8.7803;/* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S417>/Constant35'
                                        */
real_T AT_Cage_M_Finish_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Finish_Y_Blue
                                         * Referenced by: '<S417>/Constant41'
                                         */
real_T AT_Cage_M_Finish_Y_Red = 1.8829;/* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S417>/Constant44'
                                        */
real_T AT_Cage_M_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Start_Angle_Blue
                                             * Referenced by: '<S417>/Constant47'
                                             */
real_T AT_Cage_M_Start_Angle_Red = 0.0;/* Variable: AT_Cage_M_Start_Angle_Red
                                        * Referenced by: '<S417>/Constant46'
                                        */
real_T AT_Cage_M_Start_X_Blue = 9.5301;/* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S417>/Constant20'
                                        */
real_T AT_Cage_M_Start_X_Red = 8.0183; /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S417>/Constant24'
                                        */
real_T AT_Cage_M_Start_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S417>/Constant22'
                                        */
real_T AT_Cage_M_Start_Y_Red = 1.8829; /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S417>/Constant33'
                                        */
real_T AT_Cage_R_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                              * Referenced by: '<S417>/Constant51'
                                              */
real_T AT_Cage_R_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_R_Finish_Angle_Red
                                         * Referenced by: '<S417>/Constant56'
                                         */
real_T AT_Cage_R_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_R_Finish_X_Blue
                                         * Referenced by: '<S417>/Constant36'
                                         */
real_T AT_Cage_R_Finish_X_Red = 8.7803;/* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S417>/Constant38'
                                        */
real_T AT_Cage_R_Finish_Y_Blue = 5.079;/* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S417>/Constant45'
                                        */
real_T AT_Cage_R_Finish_Y_Red = 2.9735;/* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S417>/Constant40'
                                        */
real_T AT_Cage_R_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Start_Angle_Blue
                                             * Referenced by: '<S417>/Constant1'
                                             */
real_T AT_Cage_R_Start_Angle_Red = 0.0;/* Variable: AT_Cage_R_Start_Angle_Red
                                        * Referenced by: '<S417>/Constant50'
                                        */
real_T AT_Cage_R_Start_X_Blue = 9.5301;/* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S417>/Constant29'
                                        */
real_T AT_Cage_R_Start_X_Red = 8.0183; /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S417>/Constant31'
                                        */
real_T AT_Cage_R_Start_Y_Blue = 5.079; /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S417>/Constant6'
                                        */
real_T AT_Cage_R_Start_Y_Red = 2.9735; /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S417>/Constant16'
                                        */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S424>/Constant'
                                      *   '<S34>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S431>/Constant'
                                          *   '<S432>/Constant'
                                          *   '<S41>/Constant'
                                          *   '<S42>/Constant'
                                          */
real_T AT_Max_Error_Angle = 0.5;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S430>/Constant'
                                        *   '<S40>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.5;          /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S428>/Constant'
                                        *   '<S429>/Constant'
                                        *   '<S38>/Constant'
                                        *   '<S39>/Constant'
                                        */
real_T AT_On_Target_Time = 0.5;        /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T AT_Processor_Angle_Blue = -1.5708;/* Variable: AT_Processor_Angle_Blue
                                          * Referenced by: '<S417>/Constant10'
                                          */
real_T AT_Processor_Angle_Red = 1.5708;/* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S417>/Constant8'
                                        */
real_T AT_Processor_X_Blue = 11.5608;  /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S417>/Constant18'
                                        */
real_T AT_Processor_X_Red = 5.9875;    /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S417>/Constant19'
                                        */
real_T AT_Processor_Y_Blue = 7.4714;   /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S417>/Constant21'
                                        */
real_T AT_Processor_Y_Red = 0.58039;   /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S417>/Constant23'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S418>/Constant7'
                                        *   '<S27>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S418>/Constant6'
                                        *   '<S27>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S418>/Constant3'
                                        *   '<S27>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S418>/Constant4'
                                        *   '<S27>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.0;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S418>/Constant'
                                        *   '<S27>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S418>/Constant5'
                                        *   '<S27>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S418>/Constant1'
                                        *   '<S27>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by:
                                        *   '<S418>/Constant2'
                                        *   '<S27>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S31>/Constant4'
                                      *   '<S440>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S31>/Constant10'
                                        *   '<S440>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S441>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.2;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S31>/Gain1'
                                *   '<S441>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S441>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.5;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S31>/Constant8'
                                   *   '<S441>/Constant8'
                                   */
real_T Actuator_DC = 0.5;              /* Variable: Actuator_DC
                                        * Referenced by: '<S12>/Constant6'
                                        */
real_T Actuator_Rev_Startup_Range = 10.0;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S104>/Constant'
                                          */
real_T Actuator_Rev_Target = 90.0;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S105>/Constant'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Auto_Algae_Height_Time = 0.5;   /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Backup_Time_Reef = 1.0;    /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Path1_Delay_to_L4_Time = 1.0;/* Variable: Auto_Path1_Delay_to_L4_Time
                                          * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Path2_Delay_to_L4_Time = 1.0;/* Variable: Auto_Path2_Delay_to_L4_Time
                                          * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Speed_Algae = 0.2;         /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Coral = 0.5;         /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Reef = 0.5;          /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Starting_Position = 1.0;   /* Variable: Auto_Starting_Position
                                        * Referenced by: '<S26>/Constant1'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S455>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S451>/Constant'
                                        *   '<S451>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S455>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S451>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -1.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S420>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S420>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 60.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 60.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S420>/Reefscape_Chart'
                                       *   '<S29>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S420>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_Neg_Threshold = -86.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S69>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 80.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S70>/Constant'
                                       *   '<S71>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S420>/Reefscape_Chart'
                                             *   '<S29>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.033333; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S72>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.0005;    /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S73>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.005;    /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S73>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S73>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.025;      /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S73>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.025;       /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S73>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
real_T Coral_Detect_Distance = 150.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S273>/Constant3'
                                        *   '<S294>/Constant3'
                                        *   '<S315>/Constant3'
                                        *   '<S336>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S273>/Constant2'
                                   *   '<S294>/Constant2'
                                   *   '<S315>/Constant2'
                                   *   '<S336>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S273>/Saturation'
                                        *   '<S294>/Saturation'
                                        *   '<S315>/Saturation'
                                        *   '<S336>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S273>/Saturation'
                                        *   '<S294>/Saturation'
                                        *   '<S315>/Saturation'
                                        *   '<S336>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S273>/Gain'
                                            *   '<S294>/Gain'
                                            *   '<S315>/Gain'
                                            *   '<S336>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S273>/Gain2'
                                        *   '<S294>/Gain2'
                                        *   '<S315>/Gain2'
                                        *   '<S336>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S273>/Saturation1'
                                         *   '<S294>/Saturation1'
                                         *   '<S315>/Saturation1'
                                         *   '<S336>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S273>/Saturation1'
                                        *   '<S294>/Saturation1'
                                        *   '<S315>/Saturation1'
                                        *   '<S336>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S273>/Gain1'
                                        *   '<S294>/Gain1'
                                        *   '<S315>/Gain1'
                                        *   '<S336>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S278>/Constant'
                            *   '<S299>/Constant'
                            *   '<S320>/Constant'
                            *   '<S341>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S10>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S88>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S85>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S10>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S89>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S89>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 20.5;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S420>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S420>/Reefscape_Chart'
                                         *   '<S29>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S420>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S68>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.1;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S420>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 15.0;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S12>/Constant5'
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S86>/Constant'
                                     *   '<S420>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 12.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 5.5;       /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = -0.5;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 13.5;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 7.5; /* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 27.5;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.5;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S420>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.875;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S11>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 14.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.6;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 30.0;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S11>/Constant1'
                                         *   '<S11>/Constant3'
                                         */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S10>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S89>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S89>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S89>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S420>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S11>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S10>/Constant8'
                                        *   '<S89>/Constant1'
                                        *   '<S89>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S89>/Constant'
                                        *   '<S89>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 180.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S13>/Constant2'
                                       *   '<S13>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S13>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S16>/Constant1'
                                        *   '<S16>/Constant2'
                                        */
real_T Limelight_Tag_Angle_Offset = 0.0;/* Variable: Limelight_Tag_Angle_Offset
                                         * Referenced by: '<S17>/Constant2'
                                         */
real_T Limelight_Tag_X_Offset = -0.28; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S17>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = -0.28; /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S17>/Constant1'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S19>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S199>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S258>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S258>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S205>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S218>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S258>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S369>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S369>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S369>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S369>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S369>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S369>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S386>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S386>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S386>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S386>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S385>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S386>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S386>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S386>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S386>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S386>/Constant1'
                                   *   '<S386>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S386>/Constant'
                                   *   '<S386>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S276>/Constant3'
                                        *   '<S297>/Constant3'
                                        *   '<S318>/Constant3'
                                        *   '<S339>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S276>/Constant2'
                                *   '<S297>/Constant2'
                                *   '<S318>/Constant2'
                                *   '<S339>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S276>/Saturation'
                                           *   '<S297>/Saturation'
                                           *   '<S318>/Saturation'
                                           *   '<S339>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S276>/Saturation'
                                          *   '<S297>/Saturation'
                                          *   '<S318>/Saturation'
                                          *   '<S339>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S276>/Gain2'
                                         *   '<S297>/Gain2'
                                         *   '<S318>/Gain2'
                                         *   '<S339>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S276>/Saturation1'
                                             *   '<S297>/Saturation1'
                                             *   '<S318>/Saturation1'
                                             *   '<S339>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S276>/Saturation1'
                                            *   '<S297>/Saturation1'
                                            *   '<S318>/Saturation1'
                                            *   '<S339>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S276>/Gain1'
                                        *   '<S297>/Gain1'
                                        *   '<S318>/Gain1'
                                        *   '<S339>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S368>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S368>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S368>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S368>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S368>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S368>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S440>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S440>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S421>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S421>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S421>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S356>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S356>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S356>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S356>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S356>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S356>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S441>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S440>/Dead Zone'
                                        *   '<S441>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S440>/Dead Zone'
                                        *   '<S441>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.3;            /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S12>/Constant2'
                                        */
real_T Winch_Rev_Target = 30.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S103>/Constant'
                                        */
real_T Winch_Spool_DC = 0.3;           /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S12>/Constant1'
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
static void Code__exit_internal_Coral_Eject(boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Level_4_Teleop(boolean_T rtu_Gamepad_RB, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW);
static void Code_Gen_Model_Coral_Eject(boolean_T rtu_Gamepad_Start, boolean_T
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
static void enter_internal_Coral_Score_Posi(boolean_T rtu_Gamepad_B1_A,
  boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T
  rtu_Gamepad_B4_Y, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Code_Gen_M_T *localDW);
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
static void Code_Gen_Model_Path_to_Reef_3(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable);
static void Code_Gen_Model_Left_and_Right(const boolean_T *Compare, const
  boolean_T *Robot_Reached_Destination, const uint8_T *MultiportSwitch,
  boolean_T *Path_Enable, const uint8_T *Switch6, const uint8_T *Switch9);

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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4_Teleop(boolean_T rtu_Gamepad_RB, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  *rty_State_ID = 3.4;
  if ((!rtu_Coral_Limit_Switch) || rtu_Gamepad_RB) {
    localDW->is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
    *rty_State_ID = 3.6;
    *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
    localDW->timer = 0.0;
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject(boolean_T rtu_Gamepad_Start, boolean_T
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
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      Code__exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = C_IN_Elevator_Height_Bottom_pre;
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
      *rty_State_ID = 3.6;
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Coral_Eject = Code_Gen_Model_IN_Stop;
        *rty_State_ID = 3.7;
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
        *rty_State_ID = 3.6;
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
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
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
        *rty_State_ID = 3.6;
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
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
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
        localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
        *rty_State_ID = 3.6;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
        localDW->timer = 0.0;
      } else if (localDW->is_Level_4_Auto == Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (rtu_Coral_Arm_Angle_Measured < Coral_Arm_Angle_L4_Eject_Auto) {
          localDW->is_Level_4_Auto = Code_G_IN_Auto_Lower_Elevator_l;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
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

     default:
      /* case IN_Stop: */
      *rty_State_ID = 3.7;
      *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
        Elevator_Height_Manual_Gain;
      *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
        Coral_Arm_Manual_Gain;
      break;
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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
    Code_Gen_Model_Coral_Eject(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Coral_Limit_Switch,
      rtu_Algae_Limit_Switch, rtu_AT_On_Target, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Coral_Level, rty_Set_Algae_Level,
      rty_Coral_Score, localDW);

    /* case IN_Coral_Score_Position: */
  } else if (((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) ||
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
    if (localDW->Set_L2) {
      localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_2;
      *rty_State_ID = 3.2;
      localDW->is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
      *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    } else if (localDW->Set_L3) {
      localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_3;
      *rty_State_ID = 3.3;
      localDW->is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
      *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    } else if ((localDW->Set_L4) && (rtu_GameState == 2)) {
      localDW->is_Coral_Eject = Code_Gen_Mode_IN_Level_4_Teleop;
      *rty_State_ID = 3.4;
      localDW->is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else if ((localDW->Set_L4) && (rtu_GameState == 1)) {
      localDW->is_Coral_Eject = Code_Gen_Model_IN_Level_4_Auto;
      *rty_State_ID = 3.5;
      localDW->is_Level_4_Auto = Code_Gen_Mode_IN_Auto_Lower_Arm;
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
      *rty_State_ID = 3.6;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
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
      *rty_State_ID = 2.3;
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

     case Code_Gen_Model_IN_Level_4:
      *rty_State_ID = 2.4;
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

     default:
      /* case IN_Manual_Adjustment: */
      *rty_State_ID = 2.5;
      if (!rtu_Coral_Limit_Switch) {
        localDW->is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        localDW->is_Coral = Code_Gen_Model_IN_Coral_Eject;
        localDW->is_Coral_Eject = Code_Gen_Model_IN_Eject;
        *rty_State_ID = 3.6;
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S29>/Reefscape_Chart' */
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
    if (((((rtu_GameState == 1) && (localDW->Set_L1)) || (localDW->Set_L2)) ||
         (localDW->Set_L3)) || (localDW->Set_L4)) {
      localDW->is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code_Gen_Model_IN_Coral;
      localDW->is_Coral = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
        rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
        rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
    } else if (rtu_GameState == 2) {
      localDW->is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Code__IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      localDW->is_Elevator_Height_Bottom = Code_Gen_Mod_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
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
 *    '<S29>/Reefscape_Chart'
 *    '<S420>/Reefscape_Chart'
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
 *    '<S29>/Reefscape_Chart'
 *    '<S420>/Reefscape_Chart'
 */
void Code_Gen__Reefscape_Chart_Reset(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Code_Gen_M_T *localDW)
{
  localDW->is_active_c2_Code_Gen_Model = 0U;
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
 *    '<S29>/Reefscape_Chart'
 *    '<S420>/Reefscape_Chart'
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
  /* Chart: '<S29>/Reefscape_Chart' */
  if (localDW->is_active_c2_Code_Gen_Model == 0U) {
    localDW->is_active_c2_Code_Gen_Model = 1U;
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
      if ((rtu_Gamepad_LT || rtu_Gamepad_POV_Left) || rtu_Gamepad_POV_Right) {
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

  /* End of Chart: '<S29>/Reefscape_Chart' */
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

/* Function for Chart: '<S26>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Path_to_Reef_1(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, boolean_T
  *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 1U;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
  if (Code_Gen_Model_DW.is_Path_to_Reef_1 == Code_Gen_Model_IN_Drive) {
    *Path_Enable = true;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 2U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Left_d = true;
    }
  } else {
    /* case IN_Set_L4: */
    *Path_Enable = false;
    if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Drive;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch;
    } else {
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
      Code_Gen_Model_DW.timer += 0.02;
    }
  }
}

/* Function for Chart: '<S26>/Reefscape_Auto_Steps' */
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

/* Function for Chart: '<S26>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Left_and_Right(const boolean_T *Compare, const
  boolean_T *Robot_Reached_Destination, const uint8_T *MultiportSwitch,
  boolean_T *Path_Enable, const uint8_T *Switch6, const uint8_T *Switch9)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = IN_Path_to_Coral_Station_1_end_;
      Code_Gen_Model_B.Auto_Step_ID = 20U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = Code_Gen_Model_B.Switch14;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Back_out = true;
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
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_2;
      Code_Gen_Model_B.Auto_Step_ID = 9U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch9;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Start_out = true;
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
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
    }
    break;

   case IN_Path_to_Coral_Station_1_end_:
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
    if (*Compare) {
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
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

   case Code_IN_Wait_at_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 10U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (*Compare) {
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
  real_T rtb_Add_c;
  real_T rtb_Add_fn;
  real_T rtb_Add_ju;
  real_T rtb_Add_o5;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle_merge;
  real_T rtb_Disable_Wheels;
  real_T rtb_Enable_Wheels;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_hv;
  real_T rtb_Integral_m;
  real_T rtb_Integral_p;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product_lf;
  real_T rtb_Product_pz;
  real_T rtb_Reset_Wheel_Offsets;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Rotationmatrixfromlocalto_3;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_h3;
  real_T rtb_Sum1_m;
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Switch1;
  real_T rtb_Switch1_j1;
  real_T rtb_Switch2_ah;
  real_T rtb_Switch2_az;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_gl;
  real_T rtb_Switch2_i;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_jm;
  real_T rtb_Switch5_a;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s230_iter;
  uint16_T s255_iter;
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
  boolean_T rtb_AND1;
  boolean_T rtb_AT_CS_Left_Red_Active;
  boolean_T rtb_AT_CS_Right_Blue_Active;
  boolean_T rtb_AT_CS_Right_Red_Active;
  boolean_T rtb_AT_Cage_Left_Finish_Blue_Ac;
  boolean_T rtb_AT_Cage_Left_Finish_Red_Act;
  boolean_T rtb_AT_Cage_Middle_Finish_Blue_;
  boolean_T rtb_AT_Cage_Middle_Finish_Red_A;
  boolean_T rtb_AT_Cage_Middle_Start_Red_Ac;
  boolean_T rtb_AT_Cage_Right_Finish_Blue_A;
  boolean_T rtb_AT_Cage_Right_Finish_Red_Ac;
  boolean_T rtb_AT_Cage_Right_Start_Blue_Ac;
  boolean_T rtb_AT_Cage_Right_Start_Red_Act;
  boolean_T rtb_AT_Processor_Blue_Active;
  boolean_T rtb_AT_Processor_Red_Active;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_cid;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_FixPtRelationalOperator_m;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_OR_gh;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S263>/Add1' incorporates:
   *  Constant: '<S263>/Constant3'
   *  Constant: '<S263>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S263>/Math Function'
   *  Sum: '<S22>/Add'
   *  Sum: '<S263>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S264>/Add1' incorporates:
   *  Constant: '<S264>/Constant3'
   *  Constant: '<S264>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S264>/Math Function'
   *  Sum: '<S22>/Add1'
   *  Sum: '<S264>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product1' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S192>/Diff'
   *  UnitDelay: '<S192>/UD'
   *
   * Block description for '<S192>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S192>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S265>/Add1' incorporates:
   *  Constant: '<S265>/Constant3'
   *  Constant: '<S265>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S265>/Math Function'
   *  Sum: '<S22>/Add2'
   *  Sum: '<S265>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product2' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S193>/Diff'
   *  UnitDelay: '<S193>/UD'
   *
   * Block description for '<S193>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S193>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S266>/Add1' incorporates:
   *  Constant: '<S266>/Constant3'
   *  Constant: '<S266>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S266>/Math Function'
   *  Sum: '<S22>/Add3'
   *  Sum: '<S266>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product3' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S194>/Diff'
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
  rtb_Add_o5 = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* SignalConversion generated from: '<S19>/Product7' incorporates:
   *  Fcn: '<S195>/r->x'
   *  Fcn: '<S195>/theta->y'
   *  Fcn: '<S196>/r->x'
   *  Fcn: '<S196>/theta->y'
   *  Fcn: '<S197>/r->x'
   *  Fcn: '<S197>/theta->y'
   *  Fcn: '<S198>/r->x'
   *  Fcn: '<S198>/theta->y'
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
  rtb_TmpSignalConversionAtProduc[6] = rtb_Add_o5 * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Add_o5 * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S136>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S16>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S16>/Tapped Delay1'
   *  Sum: '<S16>/Add'
   *  Sum: '<S16>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Delay: '<S136>/MemoryX' incorporates:
   *  Constant: '<S136>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S13>/Switch1' incorporates:
   *  Constant: '<S13>/Constant2'
   *  Constant: '<S13>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S108>/FixPt Relational Operator'
   *  Sum: '<S13>/Sum'
   *  UnitDelay: '<S108>/Delay Input1'
   *  UnitDelay: '<S13>/Unit Delay1'
   *
   * Block description for '<S108>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Sum: '<S13>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S107>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch1_j1 = 0.0;
  } else {
    rtb_Switch1_j1 = 3.1415926535897931;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Sum: '<S13>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch1_j1;

  /* Trigonometry: '<S19>/Trigonometric Function' */
  rtb_Add_o5 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S19>/Trigonometric Function1' */
  rtb_Switch2_g = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S19>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Add_o5;
  rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_g;

  /* SignalConversion generated from: '<S19>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S19>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -rtb_Switch2_g;
  rtb_Rotationmatrixfromlocalto_3 = rtb_Add_o5;

  /* Sum: '<S190>/Diff' incorporates:
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
  rtb_Add_o5 = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S19>/Subtract2' incorporates:
   *  Constant: '<S19>/Constant3'
   *  Gain: '<S19>/Gain7'
   *  Math: '<S19>/Square'
   */
  rtb_Switch2_g = 1.0 - ((rtb_Add_o5 * rtb_Add_o5) * 0.16666666666666666);

  /* Gain: '<S19>/Gain6' */
  rtb_Add_o5 *= 0.5;

  /* Product: '<S19>/Product7' incorporates:
   *  Constant: '<S19>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    rtb_Num_Segments = 0;
    for (s230_iter = 0; s230_iter < 8; s230_iter++) {
      rtb_Minus_k_idx_0 +=
        Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s230_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S19>/Product7' */

  /* Product: '<S19>/Product6' incorporates:
   *  SignalConversion generated from: '<S19>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S19>/Unary Minus2'
   */
  rtb_Coral_Wheel_DutyCycle_merge = (rtb_Switch2_g * tmp[0]) + ((-rtb_Add_o5) *
    tmp[1]);
  rtb_Algae_Wheel_Outside_DutyCyc = (rtb_Add_o5 * tmp[0]) + (rtb_Switch2_g *
    tmp[1]);

  /* Product: '<S19>/Product6' incorporates:
   *  Concatenate: '<S19>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Coral_Wheel_DutyCycle_merge) + (rtb_Rotationmatrixfromlocalto_2 *
    rtb_Algae_Wheel_Outside_DutyCyc);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 *
    rtb_Coral_Wheel_DutyCycle_merge) + (rtb_Rotationmatrixfromlocalto_3 *
    rtb_Algae_Wheel_Outside_DutyCyc);

  /* Outputs for Enabled SubSystem: '<S163>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S189>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S156>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S187>/Enable'
   */
  /* Logic: '<S16>/AND' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S16>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S187>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S136>/C'
     *  Delay: '<S136>/MemoryX'
     *  Product: '<S189>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_gl;

    /* Sum: '<S187>/Sum' incorporates:
     *  Constant: '<S136>/D'
     *  Product: '<S187>/C[k]*xhat[k|k-1]'
     *  Product: '<S187>/D[k]*u[k]'
     *  Sum: '<S187>/Add1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[0] -
      (rtb_Coral_Wheel_DutyCycle_merge + rtb_Switch2_gl);

    /* Product: '<S187>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S136>/C'
     *  Delay: '<S136>/MemoryX'
     *  Product: '<S189>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_gl;

    /* Sum: '<S187>/Sum' incorporates:
     *  Constant: '<S136>/D'
     *  Product: '<S187>/C[k]*xhat[k|k-1]'
     *  Product: '<S187>/D[k]*u[k]'
     *  Sum: '<S187>/Add1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Reshapey[1] -
      (rtb_Coral_Wheel_DutyCycle_merge + rtb_Switch2_gl);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S187>/Product3' incorporates:
     *  Constant: '<S137>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_2) + (-2.0601714451538746E-17 *
      rtb_Coral_Wheel_DutyCycle_merge);

    /* Sum: '<S189>/Add1' incorporates:
     *  Product: '<S189>/Product'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S187>/Product3' incorporates:
     *  Constant: '<S137>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_2) + (0.095124921972504 *
      rtb_Coral_Wheel_DutyCycle_merge);

    /* Sum: '<S189>/Add1' incorporates:
     *  Product: '<S189>/Product'
     */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S189>/Product2' incorporates:
     *  Constant: '<S137>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (5.9896845167210271E-17 *
      rtb_Coral_Wheel_DutyCycle_merge);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (0.095124921972503981 *
      rtb_Coral_Wheel_DutyCycle_merge);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S187>/Product3' incorporates:
       *  Outport: '<S187>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S189>/Product2' incorporates:
       *  Outport: '<S189>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S16>/AND' */
  /* End of Outputs for SubSystem: '<S156>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S163>/Enabled Subsystem' */

  /* Sum: '<S163>/Add' incorporates:
   *  Delay: '<S136>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S19>/Accumulator2' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S19>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S16>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S16>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S16>/Switch' */

  /* DiscreteIntegrator: '<S19>/Accumulator' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S19>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S16>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S16>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* RelationalOperator: '<S133>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S133>/Delay Input1'
   *
   * Block description for '<S133>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S134>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S134>/Delay Input1'
   *
   * Block description for '<S134>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S135>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S135>/Delay Input1'
   *
   * Block description for '<S135>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

  /* SignalConversion: '<S14>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S14>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S14>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S14>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S14>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Sum: '<S17>/Add' incorporates:
   *  Constant: '<S17>/Constant'
   *  Gain: '<S17>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S17>/Add1' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Gain: '<S17>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S17>/Add2' incorporates:
   *  Constant: '<S17>/Constant2'
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
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Coral_Station_Left = (Code_Gen_Model_U.Joystick_Right_B3 !=
    0.0);

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Coral_Station_Right = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Processor = (Code_Gen_Model_U.Joystick_Right_B2 != 0.0);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   *  Inport: '<Root>/Joystick_Right_B7'
   */
  Code_Gen_Model_B.Cage_Left_Start = (Code_Gen_Model_U.Joystick_Right_B7 != 0.0);

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/Joystick_Right_B6'
   */
  Code_Gen_Model_B.Cage_Middle_Start = (Code_Gen_Model_U.Joystick_Right_B6 !=
    0.0);

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Joystick_Right_B5'
   */
  Code_Gen_Model_B.Cage_Right_Start = (Code_Gen_Model_U.Joystick_Right_B5 != 0.0);

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Cage_Left_Finish = (Code_Gen_Model_U.Joystick_Right_B8 != 0.0);

  /* RelationalOperator: '<S129>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
   *  Inport: '<Root>/Joystick_Right_B9'
   */
  Code_Gen_Model_B.Cage_Middle_Finish = (Code_Gen_Model_U.Joystick_Right_B9 !=
    0.0);

  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S130>/Constant'
   *  Inport: '<Root>/Joystick_Right_B10'
   */
  Code_Gen_Model_B.Cage_Right_Finish = (Code_Gen_Model_U.Joystick_Right_B10 !=
    0.0);

  /* RelationalOperator: '<S109>/Compare' incorporates:
   *  Constant: '<S109>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S111>/Compare' incorporates:
   *  Constant: '<S111>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S112>/Compare' incorporates:
   *  Constant: '<S112>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Right = (Code_Gen_Model_U.Gamepad_POV == 90.0);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* RelationalOperator: '<S5>/Compare' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Compare_pd = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Gain: '<S11>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S11>/Switch1' incorporates:
   *  RelationalOperator: '<S100>/FixPt Relational Operator'
   *  RelationalOperator: '<S101>/FixPt Relational Operator'
   *  RelationalOperator: '<S102>/FixPt Relational Operator'
   *  Switch: '<S11>/Switch2'
   *  Switch: '<S11>/Switch3'
   *  UnitDelay: '<S100>/Delay Input1'
   *  UnitDelay: '<S101>/Delay Input1'
   *  UnitDelay: '<S102>/Delay Input1'
   *  UnitDelay: '<S1>/Unit Delay'
   *
   * Block description for '<S100>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare) < ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_b))
  {
    /* Switch: '<S11>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)rtb_Compare_pd) < ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/Constant1'
     *  Sum: '<S11>/Subtract1'
     *  Switch: '<S11>/Switch2'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_mph) > ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/Constant2'
     *  Sum: '<S11>/Subtract2'
     *  Switch: '<S11>/Switch2'
     *  Switch: '<S11>/Switch3'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Logic: '<S11>/Logical Operator'
   */
  if (rtb_Compare || rtb_Compare_pd) {
    /* Switch: '<S11>/Switch4' */
    if (rtb_Compare) {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S11>/Constant'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S11>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S11>/Switch4' */
  } else {
    /* Switch: '<S11>/Switch' incorporates:
     *  Sum: '<S11>/Subtract'
     */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S11>/Switch' */

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
     *  ActionPort: '<S9>/Action Port'
     */
    /* SignalConversion generated from: '<S9>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S18>/Merge1' incorporates:
     *  Constant: '<S9>/Constant1'
     *  SignalConversion generated from: '<S9>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S18>/Merge2' incorporates:
     *  Constant: '<S9>/Constant2'
     *  SignalConversion generated from: '<S9>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S18>/Merge3' incorporates:
     *  Constant: '<S9>/Constant3'
     *  SignalConversion generated from: '<S9>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S18>/Merge4' incorporates:
     *  Constant: '<S9>/Constant4'
     *  SignalConversion generated from: '<S9>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S9>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S9>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S9>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S18>/Merge7' incorporates:
     *  Constant: '<S9>/Constant7'
     *  SignalConversion generated from: '<S9>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Constant: '<S9>/Constant9'
     *  SignalConversion generated from: '<S9>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S18>/Merge10' incorporates:
     *  Constant: '<S9>/Constant10'
     *  SignalConversion generated from: '<S9>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S9>/Enable_Wheels' incorporates:
     *  Constant: '<S9>/Constant18'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S9>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S9>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S9>/Disable_Wheels' incorporates:
     *  Constant: '<S9>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S9>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S9>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S9>/Constant15'
     *  SignalConversion generated from: '<S9>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S18>/Merge11' incorporates:
     *  Constant: '<S9>/Constant11'
     *  SignalConversion generated from: '<S9>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S18>/Merge13' incorporates:
     *  Constant: '<S9>/Constant16'
     *  SignalConversion generated from: '<S9>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S9>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant17'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S9>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S9>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S18>/Merge21' incorporates:
     *  Constant: '<S9>/Constant21'
     *  SignalConversion generated from: '<S9>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S9>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S9>/Constant22'
     */
    rtb_Compare_cid = false;

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S9>/Constant23'
     *  SignalConversion generated from: '<S9>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S9>/AT_On_Target' incorporates:
     *  Constant: '<S9>/Constant24'
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
       *  UnitDelay: '<S26>/Unit Delay'
       *  UnitDelay: '<S26>/Unit Delay1'
       *  UnitDelay: '<S27>/Unit Delay'
       *  UnitDelay: '<S27>/Unit Delay1'
       *  UnitDelay: '<S55>/Delay Input1'
       *  UnitDelay: '<S56>/Delay Input1'
       *  UnitDelay: '<S59>/Delay Input1'
       *  UnitDelay: '<S60>/Delay Input1'
       *  UnitDelay: '<S63>/Delay Input1'
       *  UnitDelay: '<S64>/Delay Input1'
       *
       * Block description for '<S55>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S56>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S59>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S60>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S63>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S64>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_p = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_os = false;
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
       *  Chart: '<S26>/Reefscape_Auto_Steps'
       *  Chart: '<S29>/Reefscape_Chart'
       *  Merge: '<S18>/Merge7'
       *  SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle'
       */
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_B.Align_Center_b = false;
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_B.Gamepad_LT_out = false;
      Code_Gen_Model_B.Gamepad_POV_Down_o = false;
      Code_Gen_Model_B.Gamepad_POV_Left_d = false;
      Code_Gen_Model_B.Spline_Enable = false;
      Code_Gen_Model_B.Path_ID = 0U;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;

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
    /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
     *  Constant: '<S26>/Constant1'
     */
    switch ((int32_T)Auto_Starting_Position) {
     case 1:
      /* Switch: '<S28>/Switch' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S28>/Multiport Switch1'
       *  Switch: '<S28>/Switch3'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant3'
         */
        MultiportSwitch = 1U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant17'
         */
        MultiportSwitch1 = 2U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant4'
         */
        MultiportSwitch = 15U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant18'
         */
        MultiportSwitch1 = 16U;
      }

      /* End of Switch: '<S28>/Switch' */
      break;

     case 2:
      /* Switch: '<S28>/Switch1' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S28>/Multiport Switch1'
       *  Switch: '<S28>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant6'
         */
        MultiportSwitch = 9U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant19'
         */
        MultiportSwitch1 = 10U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant11'
         */
        MultiportSwitch = 19U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant14'
         */
        MultiportSwitch1 = 20U;
      }

      /* End of Switch: '<S28>/Switch1' */
      break;

     default:
      /* Switch: '<S28>/Switch2' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S28>/Multiport Switch1'
       *  Switch: '<S28>/Switch5'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant13'
         */
        MultiportSwitch = 5U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant16'
         */
        MultiportSwitch1 = 6U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant12'
         */
        MultiportSwitch = 11U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant15'
         */
        MultiportSwitch1 = 12U;
      }

      /* End of Switch: '<S28>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S28>/Multiport Switch' */

    /* Switch: '<S28>/Switch6' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S50>/Constant'
     *  Inport: '<Root>/IsBlueAlliance'
     *  RelationalOperator: '<S50>/Compare'
     *  Switch: '<S28>/Switch11'
     *  Switch: '<S28>/Switch13'
     *  Switch: '<S28>/Switch14'
     *  Switch: '<S28>/Switch8'
     *  Switch: '<S28>/Switch9'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S28>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S28>/Switch10'
       *  Switch: '<S28>/Switch12'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S28>/Switch6' incorporates:
         *  Constant: '<S28>/Constant20'
         */
        Switch6 = 3U;

        /* Switch: '<S28>/Switch9' incorporates:
         *  Constant: '<S28>/Constant24'
         */
        Switch9 = 4U;

        /* Switch: '<S28>/Switch14' incorporates:
         *  Constant: '<S28>/Constant1'
         */
        Code_Gen_Model_B.Switch14 = 21U;
      } else {
        /* Switch: '<S28>/Switch6' incorporates:
         *  Constant: '<S28>/Constant21'
         */
        Switch6 = 17U;

        /* Switch: '<S28>/Switch9' incorporates:
         *  Constant: '<S28>/Constant25'
         */
        Switch9 = 18U;

        /* Switch: '<S28>/Switch14' incorporates:
         *  Constant: '<S28>/Constant2'
         */
        Code_Gen_Model_B.Switch14 = 24U;
      }

      /* End of Switch: '<S28>/Switch7' */
    } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S28>/Switch8' incorporates:
       *  Constant: '<S28>/Constant22'
       *  Switch: '<S28>/Switch6'
       */
      Switch6 = 7U;

      /* Switch: '<S28>/Switch11' incorporates:
       *  Constant: '<S28>/Constant26'
       *  Switch: '<S28>/Switch9'
       */
      Switch9 = 8U;

      /* Switch: '<S28>/Switch13' incorporates:
       *  Constant: '<S28>/Constant5'
       *  Switch: '<S28>/Switch14'
       */
      Code_Gen_Model_B.Switch14 = 22U;
    } else {
      /* Switch: '<S28>/Switch6' incorporates:
       *  Constant: '<S28>/Constant23'
       *  Switch: '<S28>/Switch8'
       */
      Switch6 = 13U;

      /* Switch: '<S28>/Switch9' incorporates:
       *  Constant: '<S28>/Constant27'
       *  Switch: '<S28>/Switch11'
       */
      Switch9 = 14U;

      /* Switch: '<S28>/Switch14' incorporates:
       *  Constant: '<S28>/Constant7'
       *  Switch: '<S28>/Switch13'
       */
      Code_Gen_Model_B.Switch14 = 23U;
    }

    /* End of Switch: '<S28>/Switch6' */

    /* UnitDelay: '<S26>/Unit Delay1' */
    Code_Gen_Model_B.UnitDelay1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_p;

    /* Chart: '<S26>/Reefscape_Auto_Steps' incorporates:
     *  Constant: '<S26>/Constant1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c6_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 1U;
      if ((Auto_Starting_Position == 1.0) || (Auto_Starting_Position == 3.0)) {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Mode_IN_Left_and_Right;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 1U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Set_L4;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Set_L4;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
    } else if (Code_Gen_Model_DW.is_c6_Code_Gen_Model ==
               Code_Gen_Model_IN_Center) {
      switch (Code_Gen_Model_DW.is_Center) {
       case Code_IN_Adjust_Height_for_Algae:
        Code_Gen_Model_B.Auto_Step_ID = 104U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.timer >= Auto_Algae_Height_Time) {
          Code_Gen_Model_B.Gamepad_POV_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
          Code_Gen_Model_B.Auto_Step_ID = 105U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Algae;
          Code_Gen_Model_B.Gamepad_LT_out = true;
          Code_Gen_Model_B.Align_Center_b = true;
          Code_Gen_Model_DW.timer = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Scor:
        Code_Gen_Model_B.Auto_Step_ID = 103U;

        /* Merge: '<S18>/Merge7' */
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

       case IN_Back_Up_from_Reef_Coral_Sc_o:
        Code_Gen_Model_B.Auto_Step_ID = 123U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 108U;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Collect_:
        Code_Gen_Model_B.Auto_Step_ID = 106U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen__IN_Path_to_Start_Line;
          Code_Gen_Model_B.Auto_Step_ID = 107U;

          /* Merge: '<S18>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          Code_Gen_Model_B.Path_ID = MultiportSwitch1;
          Code_Gen_Model_B.Gamepad_POV_Down_o = true;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Code_Gen_Model_B.Auto_Step_ID = 105U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Algae;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Compare_f) {
          Code_Gen_Model_B.Gamepad_LT_out = false;
          Code_Gen_Model_B.Align_Center_b = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Collect_;
          Code_Gen_Model_B.Auto_Step_ID = 106U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
          Code_Gen_Model_DW.timer = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       case Code_Gen_Model_IN_Path_to_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.is_Path_to_Reef == Code_Gen_Model_IN_Drive) {
          /* Merge: '<S18>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_M_IN_NO_ACTIVE_CHILD_g;
            Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Score_at_Reef;
            Code_Gen_Model_B.Auto_Step_ID = 102U;

            /* Merge: '<S18>/Merge7' */
            Code_Gen_Model_B.Spline_Enable = false;
            Code_Gen_Model_B.Align_Left_d = true;
          }
        } else {
          /* Merge: '<S18>/Merge7' */
          /* case IN_Set_L4: */
          Code_Gen_Model_B.Spline_Enable = false;
          if (Code_Gen_Model_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
            Code_Gen_Model_B.Gamepad_B4_Y_out = false;
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Drive;

            /* Merge: '<S18>/Merge7' */
            Code_Gen_Model_B.Spline_Enable = true;
            Code_Gen_Model_B.Path_ID = MultiportSwitch;
          } else {
            Code_Gen_Model_B.Gamepad_B4_Y_out = true;
            Code_Gen_Model_DW.timer += 0.02;
          }
        }
        break;

       case Code_Gen__IN_Path_to_Start_Line:
        Code_Gen_Model_B.Auto_Step_ID = 107U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.Gamepad_POV_Down_o = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 108U;

          /* Merge: '<S18>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          Code_Gen_Model_B.Translation_Speed_k = 0.0;
          Code_Gen_Model_B.Translation_Angle_c = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Score_at_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 102U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_B.UnitDelay1) {
          Code_Gen_Model_B.Align_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Back_Up_from_Reef_Coral_Sc_o;
          Code_Gen_Model_B.Auto_Step_ID = 123U;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       default:
        /* case IN_Wait_for_Teleop: */
        Code_Gen_Model_B.Auto_Step_ID = 108U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        break;
      }
    } else {
      /* Merge: '<S18>/Merge7' incorporates:
       *  UnitDelay: '<S15>/Unit Delay'
       */
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Compare,
        &Code_Gen_Model_DW.UnitDelay_DSTATE_ll, &MultiportSwitch,
        &Code_Gen_Model_B.Spline_Enable, &Switch6, &Switch9);
    }

    /* End of Chart: '<S26>/Reefscape_Auto_Steps' */

    /* Selector: '<S26>/Selector' incorporates:
     *  Constant: '<S26>/Constant'
     *  Merge: '<S18>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s230_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s230_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s230_iter];
      }
    }

    /* End of Selector: '<S26>/Selector' */

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S29>/Reefscape_Chart'
     *  Constant: '<S26>/GameState = 1 is Autos'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  RelationalOperator: '<S53>/FixPt Relational Operator'
     *  RelationalOperator: '<S54>/FixPt Relational Operator'
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
     *  UnitDelay: '<S26>/Unit Delay'
     *  UnitDelay: '<S55>/Delay Input1'
     *  UnitDelay: '<S56>/Delay Input1'
     *  UnitDelay: '<S59>/Delay Input1'
     *  UnitDelay: '<S60>/Delay Input1'
     *  UnitDelay: '<S63>/Delay Input1'
     *  UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_Reefscape_Chart(1, false, false, false, (((int32_T)
      Code_Gen_Model_B.Gamepad_B4_Y_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne)), (((int32_T)
      Code_Gen_Model_B.Gamepad_Start_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff)), (((int32_T)
      Code_Gen_Model_B.Gamepad_Back_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev)), false, (((int32_T)
      Code_Gen_Model_B.Gamepad_LT_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_os)), false, false, (((int32_T)
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

    /* Merge: '<S18>/Merge13' incorporates:
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_cid = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.Coral_Wheel_DC_a;

    /* Merge: '<S18>/Merge11' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired_h;

    /* Merge: '<S18>/Merge21' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_g;

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant1'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S48>/Constant'
     *  Logic: '<S27>/AND'
     *  Logic: '<S27>/AND1'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     *  Switch: '<S27>/Switch1'
     *  Switch: '<S27>/Switch4'
     *  Switch: '<S27>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left_d) {
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right_i) {
      /* Switch: '<S27>/Switch1' incorporates:
       *  Constant: '<S27>/Constant2'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Coral_Level_j == 1)) {
      /* Switch: '<S27>/Switch4' incorporates:
       *  Constant: '<S27>/Constant3'
       *  Switch: '<S27>/Switch1'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S27>/Switch6' incorporates:
       *  Constant: '<S27>/Constant6'
       *  Switch: '<S27>/Switch1'
       *  Switch: '<S27>/Switch4'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S27>/Switch4' incorporates:
       *  Switch: '<S27>/Switch1'
       *  UnitDelay: '<S27>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S27>/Switch' */

    /* Sum: '<S27>/Subtract1' */
    rtb_Enable_Wheels = rtb_Rotationmatrixfromlocalto_2 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S26>/Signal Copy6' */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Y = rtb_Enable_Wheels;

    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S27>/Constant4'
     *  Constant: '<S36>/Constant'
     *  Logic: '<S27>/AND2'
     *  RelationalOperator: '<S36>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center_b) && (Code_Gen_Model_B.Set_Coral_Level_j
         == 1)) {
      rtb_Switch2_gl = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S27>/OR' */
      Robot_Reached_Destination = ((Code_Gen_Model_B.Align_Left_d) ||
        (Code_Gen_Model_B.Align_Right_i));

      /* Switch: '<S27>/Switch3' incorporates:
       *  Constant: '<S27>/Constant'
       *  Constant: '<S32>/Constant'
       *  Constant: '<S33>/Constant'
       *  Constant: '<S35>/Constant'
       *  Constant: '<S49>/Constant'
       *  Logic: '<S27>/AND3'
       *  Logic: '<S27>/Logical Operator5'
       *  Logic: '<S27>/Logical Operator6'
       *  Logic: '<S27>/OR1'
       *  RelationalOperator: '<S32>/Compare'
       *  RelationalOperator: '<S33>/Compare'
       *  RelationalOperator: '<S35>/Compare'
       *  RelationalOperator: '<S49>/Compare'
       *  Switch: '<S27>/Switch5'
       *  Switch: '<S27>/Switch7'
       */
      if (Robot_Reached_Destination && ((Code_Gen_Model_B.Set_Coral_Level_j == 2)
           || (Code_Gen_Model_B.Set_Coral_Level_j == 3))) {
        rtb_Switch2_gl = AT_Reef_Target_L2_L3_X;
      } else if (Robot_Reached_Destination &&
                 (Code_Gen_Model_B.Set_Coral_Level_j == 4)) {
        /* Switch: '<S27>/Switch5' incorporates:
         *  Constant: '<S27>/Constant5'
         */
        rtb_Switch2_gl = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center_b) &&
                 (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
        /* Switch: '<S27>/Switch7' incorporates:
         *  Constant: '<S27>/Constant7'
         *  Switch: '<S27>/Switch5'
         */
        rtb_Switch2_gl = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S27>/Switch5' incorporates:
         *  UnitDelay: '<S27>/Unit Delay'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
      }

      /* End of Switch: '<S27>/Switch3' */
    }

    /* End of Switch: '<S27>/Switch2' */

    /* Sum: '<S27>/Subtract' */
    rtb_Disable_Wheels = rtb_Switch2_gl -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S26>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus1'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_X = -rtb_Disable_Wheels;

    /* Logic: '<S27>/Logical Operator1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Logic: '<S27>/Logical Operator2'
     *  Logic: '<S27>/Logical Operator3'
     *  Logic: '<S27>/Logical Operator4'
     *  Logic: '<S27>/NOT'
     *  RelationalOperator: '<S43>/Compare'
     *  RelationalOperator: '<S44>/Compare'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     *  RelationalOperator: '<S47>/Compare'
     */
    Robot_Reached_Destination =
      (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
          (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
         (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
        ((Code_Gen_Model_B.Set_Coral_Level_j != 0) ||
         (Code_Gen_Model_B.Set_Algae_Level_p != 0))) &&
       (((Code_Gen_Model_B.Align_Left_d) || (Code_Gen_Model_B.Align_Right_i)) ||
        (Code_Gen_Model_B.Align_Center_b)));

    /* SignalConversion: '<S26>/Signal Copy1' */
    Code_Gen_Model_B.Auto_AT_Relative_Enable = Robot_Reached_Destination;

    /* SignalConversion: '<S26>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S31>/Switch2' incorporates:
     *  Switch: '<S31>/Switch'
     *  Switch: '<S31>/Switch1'
     */
    if (Code_Gen_Model_B.Auto_AT_Relative_Enable) {
      /* Merge: '<S18>/Merge3' incorporates:
       *  Trigonometry: '<S31>/Atan3'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.Auto_AT_Relative_Error_Y,
         Code_Gen_Model_B.Auto_AT_Relative_Error_X);

      /* Product: '<S31>/Product2' incorporates:
       *  Constant: '<S31>/Constant4'
       */
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Auto_AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S67>/Switch2' incorporates:
       *  Constant: '<S31>/Constant10'
       *  RelationalOperator: '<S67>/LowerRelop1'
       *  RelationalOperator: '<S67>/UpperRelop'
       *  Switch: '<S67>/Switch'
       *  UnaryMinus: '<S31>/Unary Minus'
       */
      if (rtb_Reset_Wheel_Offsets > AT_Steering_Speed_Max) {
        /* Merge: '<S18>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Reset_Wheel_Offsets < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S67>/Switch' incorporates:
         *  Merge: '<S18>/Merge2'
         *  UnaryMinus: '<S31>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S18>/Merge2' incorporates:
         *  Switch: '<S67>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Reset_Wheel_Offsets;
      }

      /* End of Switch: '<S67>/Switch2' */

      /* Merge: '<S18>/Merge4' incorporates:
       *  Constant: '<S31>/Constant8'
       *  Gain: '<S31>/Gain1'
       *  Math: '<S31>/Magnitude2'
       *  MinMax: '<S31>/Min1'
       */
      Code_Gen_Model_B.Translation_Speed = fmin
        (AT_Translation_Speed_Max_Relative, AT_Translation_Control_Gain_Relative
         * rt_hypotd_snf(Code_Gen_Model_B.Auto_AT_Relative_Error_X,
                         Code_Gen_Model_B.Auto_AT_Relative_Error_Y));
    } else {
      /* Merge: '<S18>/Merge3' */
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_B.Translation_Angle_c;

      /* Merge: '<S18>/Merge2' incorporates:
       *  Constant: '<S31>/Constant2'
       */
      Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S18>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.Translation_Speed_k;
    }

    /* End of Switch: '<S31>/Switch2' */

    /* Abs: '<S27>/Abs2' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus'
     */
    rtb_Reset_Wheel_Offsets = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S27>/Abs' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus1'
     */
    rtb_Disable_Wheels = fabs(-rtb_Disable_Wheels);

    /* Abs: '<S27>/Abs1' */
    rtb_Enable_Wheels = fabs(rtb_Enable_Wheels);

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S34>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Logic: '<S27>/Logical Operator7'
     *  RelationalOperator: '<S34>/Compare'
     *  RelationalOperator: '<S41>/Compare'
     *  RelationalOperator: '<S42>/Compare'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Robot_Reached_Destination
      && (rtb_Disable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Reset_Wheel_Offsets <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy8' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Logic: '<S27>/Logical Operator'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S40>/Compare'
     */
    Code_Gen_Model_B.Auto_AT_On_Target = (((Robot_Reached_Destination &&
      (rtb_Disable_Wheels <= AT_Max_Error_XY)) && (rtb_Enable_Wheels <=
      AT_Max_Error_XY)) && (rtb_Reset_Wheel_Offsets <= AT_Max_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy9' */
    Robot_Reached_Destination = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Lookup_n-D: '<S26>/1-D Lookup Table'
     */
    Code_Gen_Model_B.Spline_Num_Poses =
      Code_Gen_Model_ConstP.uDLookupTable_tableData[plook_u32u8_evencka
      (Code_Gen_Model_B.Path_ID, 1U, 1U, 23U)];

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S29>/Constant5'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S18>/Merge1' incorporates:
     *  Constant: '<S31>/Constant1'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S31>/Constant3'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S31>/Constant5'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S18>/Merge10' incorporates:
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

    /* Update for UnitDelay: '<S26>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_p = Code_Gen_Model_B.Coral_Score_j;

    /* Update for UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ne = Code_Gen_Model_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S53>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant3'
     *
     * Block description for '<S53>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_l = false;

    /* Update for UnitDelay: '<S54>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant4'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bd = false;

    /* Update for UnitDelay: '<S58>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant6'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_au = false;

    /* Update for UnitDelay: '<S60>/Delay Input1'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ff = Code_Gen_Model_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S55>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ev = Code_Gen_Model_B.Gamepad_Back_out;

    /* Update for UnitDelay: '<S61>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant17'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_os = Code_Gen_Model_B.Gamepad_LT_out;

    /* Update for UnitDelay: '<S65>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant12'
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = false;

    /* Update for UnitDelay: '<S62>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant13'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b3 =
      Code_Gen_Model_B.Gamepad_POV_Down_o;

    /* Update for UnitDelay: '<S56>/Delay Input1'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_d;

    /* Update for UnitDelay: '<S57>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant14'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_mu = false;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Update for UnitDelay: '<S27>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_Switch2_gl;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S24>/Unit Delay'
       *  UnitDelay: '<S417>/Unit Delay1'
       *  UnitDelay: '<S418>/Unit Delay'
       *  UnitDelay: '<S418>/Unit Delay1'
       *  UnitDelay: '<S440>/Unit Delay1'
       *  UnitDelay: '<S440>/Unit Delay2'
       *  UnitDelay: '<S440>/Unit Delay3'
       *  UnitDelay: '<S440>/Unit Delay4'
       *  UnitDelay: '<S443>/Delay Input1'
       *  UnitDelay: '<S444>/Delay Input1'
       *  UnitDelay: '<S445>/Delay Input1'
       *  UnitDelay: '<S446>/Delay Input1'
       *  UnitDelay: '<S447>/Delay Input1'
       *  UnitDelay: '<S448>/Delay Input1'
       *  UnitDelay: '<S454>/Unit Delay'
       *  UnitDelay: '<S454>/Unit Delay1'
       *  UnitDelay: '<S458>/FixPt Unit Delay1'
       *  UnitDelay: '<S458>/FixPt Unit Delay2'
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
       *  UnitDelay: '<S471>/Delay Input1'
       *  UnitDelay: '<S472>/Delay Input1'
       *  UnitDelay: '<S473>/Delay Input1'
       *
       * Block description for '<S443>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S444>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S445>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S446>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S447>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S448>/Delay Input1':
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
       *  ActionPort: '<S24>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S420>/Reefscape_Chart'
       *  SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle'
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
     *  ActionPort: '<S24>/Action Port'
     */
    /* SignalConversion generated from: '<S24>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Logic: '<S417>/Logical Operator8' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Cage_Left_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_cid = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S417>/Logical Operator9' */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Cage_Left_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator7' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator12' */
    rtb_AT_Cage_Middle_Start_Red_Ac = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator13' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Start_Blue_Ac = ((Code_Gen_Model_B.Cage_Right_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator14' */
    rtb_AT_Cage_Right_Start_Red_Act = ((Code_Gen_Model_B.Cage_Right_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator19' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Left_Finish_Blue_Ac = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator20' */
    rtb_AT_Cage_Left_Finish_Red_Act = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator18' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Middle_Finish_Blue_ = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator15' */
    rtb_AT_Cage_Middle_Finish_Red_A = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator16' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Finish_Blue_A = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator17' */
    rtb_AT_Cage_Right_Finish_Red_Ac = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator6' */
    rtb_AT_Processor_Red_Active = ((Code_Gen_Model_B.Processor) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator5' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Processor_Blue_Active = ((Code_Gen_Model_B.Processor) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator4' */
    rtb_AT_CS_Right_Red_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator1' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_CS_Right_Blue_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S417>/Logical Operator3' */
    rtb_AT_CS_Left_Red_Active = ((Code_Gen_Model_B.Coral_Station_Left) &&
      rtb_Compare_cid);

    /* Logic: '<S417>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_cid = ((Code_Gen_Model_B.Coral_Station_Left) &&
                       (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Switch: '<S417>/Switch2' incorporates:
     *  Switch: '<S417>/Switch1'
     *  Switch: '<S417>/Switch10'
     *  Switch: '<S417>/Switch12'
     *  Switch: '<S417>/Switch13'
     *  Switch: '<S417>/Switch14'
     *  Switch: '<S417>/Switch16'
     *  Switch: '<S417>/Switch19'
     *  Switch: '<S417>/Switch20'
     *  Switch: '<S417>/Switch21'
     *  Switch: '<S417>/Switch22'
     *  Switch: '<S417>/Switch24'
     *  Switch: '<S417>/Switch3'
     *  Switch: '<S417>/Switch30'
     *  Switch: '<S417>/Switch4'
     */
    if (rtb_Compare_cid) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant9'
       *  Sum: '<S417>/Add17'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant28'
       *  Sum: '<S417>/Add23'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant5'
       *  Sum: '<S417>/Add16'
       *  Switch: '<S417>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant27'
       *  Sum: '<S417>/Add22'
       *  Switch: '<S417>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant4'
       *  Sum: '<S417>/Add10'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant26'
       *  Sum: '<S417>/Add12'
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant17'
       *  Sum: '<S417>/Add11'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch12'
       *  Switch: '<S417>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant3'
       *  Sum: '<S417>/Add13'
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch20'
       *  Switch: '<S417>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant18'
       *  Sum: '<S417>/Add14'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch12'
       *  Switch: '<S417>/Switch13'
       *  Switch: '<S417>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant21'
       *  Sum: '<S417>/Add20'
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch20'
       *  Switch: '<S417>/Switch21'
       *  Switch: '<S417>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant19'
       *  Sum: '<S417>/Add15'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch12'
       *  Switch: '<S417>/Switch13'
       *  Switch: '<S417>/Switch14'
       *  Switch: '<S417>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant23'
       *  Sum: '<S417>/Add21'
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch20'
       *  Switch: '<S417>/Switch21'
       *  Switch: '<S417>/Switch22'
       *  Switch: '<S417>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant7'
       *  Sum: '<S417>/Add1'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch12'
       *  Switch: '<S417>/Switch13'
       *  Switch: '<S417>/Switch14'
       *  Switch: '<S417>/Switch16'
       *  Switch: '<S417>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant32'
       *  Sum: '<S417>/Add24'
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch20'
       *  Switch: '<S417>/Switch21'
       *  Switch: '<S417>/Switch22'
       *  Switch: '<S417>/Switch24'
       *  Switch: '<S417>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S417>/Switch2' incorporates:
       *  Constant: '<S417>/Constant15'
       *  Sum: '<S417>/Add2'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch10'
       *  Switch: '<S417>/Switch12'
       *  Switch: '<S417>/Switch13'
       *  Switch: '<S417>/Switch14'
       *  Switch: '<S417>/Switch16'
       *  Switch: '<S417>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant25'
       *  Sum: '<S417>/Add19'
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch20'
       *  Switch: '<S417>/Switch21'
       *  Switch: '<S417>/Switch22'
       *  Switch: '<S417>/Switch24'
       *  Switch: '<S417>/Switch29'
       *  Switch: '<S417>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S417>/Switch11' incorporates:
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch10'
       *  Switch: '<S417>/Switch12'
       *  Switch: '<S417>/Switch13'
       *  Switch: '<S417>/Switch14'
       *  Switch: '<S417>/Switch16'
       *  Switch: '<S417>/Switch3'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant20'
         *  Sum: '<S417>/Add3'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant24'
         *  Sum: '<S417>/Add4'
         *  Switch: '<S417>/Switch17'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant29'
         *  Sum: '<S417>/Add5'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant31'
         *  Sum: '<S417>/Add6'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant39'
         *  Sum: '<S417>/Add25'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant2'
         *  Sum: '<S417>/Add26'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch31'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant34'
         *  Sum: '<S417>/Add27'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch31'
         *  Switch: '<S417>/Switch32'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant35'
         *  Sum: '<S417>/Add28'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch31'
         *  Switch: '<S417>/Switch32'
         *  Switch: '<S417>/Switch33'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant36'
         *  Sum: '<S417>/Add29'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch31'
         *  Switch: '<S417>/Switch32'
         *  Switch: '<S417>/Switch33'
         *  Switch: '<S417>/Switch34'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant38'
         *  Sum: '<S417>/Add30'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch31'
         *  Switch: '<S417>/Switch32'
         *  Switch: '<S417>/Switch33'
         *  Switch: '<S417>/Switch34'
         *  Switch: '<S417>/Switch35'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else {
        /* Switch: '<S417>/Switch2' incorporates:
         *  Constant: '<S417>/Constant37'
         *  Switch: '<S417>/Switch17'
         *  Switch: '<S417>/Switch18'
         *  Switch: '<S417>/Switch23'
         *  Switch: '<S417>/Switch31'
         *  Switch: '<S417>/Switch32'
         *  Switch: '<S417>/Switch33'
         *  Switch: '<S417>/Switch34'
         *  Switch: '<S417>/Switch35'
         *  Switch: '<S417>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = 0.0;
      }

      /* End of Switch: '<S417>/Switch11' */

      /* Switch: '<S417>/Switch25' incorporates:
       *  Switch: '<S417>/Switch19'
       *  Switch: '<S417>/Switch20'
       *  Switch: '<S417>/Switch21'
       *  Switch: '<S417>/Switch22'
       *  Switch: '<S417>/Switch24'
       *  Switch: '<S417>/Switch26'
       *  Switch: '<S417>/Switch27'
       *  Switch: '<S417>/Switch28'
       *  Switch: '<S417>/Switch29'
       *  Switch: '<S417>/Switch30'
       *  Switch: '<S417>/Switch37'
       *  Switch: '<S417>/Switch38'
       *  Switch: '<S417>/Switch39'
       *  Switch: '<S417>/Switch40'
       *  Switch: '<S417>/Switch41'
       *  Switch: '<S417>/Switch42'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant22'
         *  Sum: '<S417>/Add7'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant33'
         *  Sum: '<S417>/Add8'
         *  Switch: '<S417>/Switch26'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant6'
         *  Sum: '<S417>/Add9'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant16'
         *  Sum: '<S417>/Add18'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant43'
         *  Sum: '<S417>/Add33'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant42'
         *  Sum: '<S417>/Add32'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch41'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant41'
         *  Sum: '<S417>/Add34'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch37'
         *  Switch: '<S417>/Switch41'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant44'
         *  Sum: '<S417>/Add35'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch37'
         *  Switch: '<S417>/Switch38'
         *  Switch: '<S417>/Switch41'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant45'
         *  Sum: '<S417>/Add36'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch37'
         *  Switch: '<S417>/Switch38'
         *  Switch: '<S417>/Switch39'
         *  Switch: '<S417>/Switch41'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant40'
         *  Sum: '<S417>/Add31'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch37'
         *  Switch: '<S417>/Switch38'
         *  Switch: '<S417>/Switch39'
         *  Switch: '<S417>/Switch40'
         *  Switch: '<S417>/Switch41'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else {
        /* Switch: '<S417>/Switch4' incorporates:
         *  Constant: '<S417>/Constant30'
         *  Switch: '<S417>/Switch26'
         *  Switch: '<S417>/Switch27'
         *  Switch: '<S417>/Switch28'
         *  Switch: '<S417>/Switch37'
         *  Switch: '<S417>/Switch38'
         *  Switch: '<S417>/Switch39'
         *  Switch: '<S417>/Switch40'
         *  Switch: '<S417>/Switch41'
         *  Switch: '<S417>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = 0.0;
      }

      /* End of Switch: '<S417>/Switch25' */
    }

    /* End of Switch: '<S417>/Switch2' */

    /* Logic: '<S454>/AND' incorporates:
     *  Constant: '<S459>/Constant'
     *  Constant: '<S460>/Constant'
     *  RelationalOperator: '<S459>/Compare'
     *  RelationalOperator: '<S460>/Compare'
     */
    Coral_Score = ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
                   (Code_Gen_Model_B.Drive_Joystick_Y == 0.0));

    /* Switch: '<S454>/Switch1' incorporates:
     *  Switch: '<S454>/Switch2'
     *  UnitDelay: '<S454>/Unit Delay'
     *  UnitDelay: '<S454>/Unit Delay1'
     */
    if (Coral_Score) {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_gl = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S454>/Switch1' */

    /* Lookup_n-D: '<S441>/Modulation_Drv' incorporates:
     *  Math: '<S441>/Magnitude'
     */
    rtb_Disable_Wheels = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S452>/Compare' incorporates:
     *  Constant: '<S452>/Constant'
     */
    Robot_Reached_Destination = (rtb_Disable_Wheels == 0.0);

    /* DeadZone: '<S420>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* DeadZone: '<S420>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      rtb_Switch2_i = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      rtb_Switch2_i = 0.0;
    } else {
      rtb_Switch2_i = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S420>/Reefscape_Chart'
     *  Constant: '<S24>/Constant'
     *  DeadZone: '<S420>/Dead Zone'
     *  DeadZone: '<S420>/Dead Zone1'
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
     *  RelationalOperator: '<S471>/FixPt Relational Operator'
     *  RelationalOperator: '<S472>/FixPt Relational Operator'
     *  RelationalOperator: '<S473>/FixPt Relational Operator'
     *  UnitDelay: '<S24>/Unit Delay'
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
     *  UnitDelay: '<S471>/Delay Input1'
     *  UnitDelay: '<S472>/Delay Input1'
     *  UnitDelay: '<S473>/Delay Input1'
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
      Code_Gen_Model_DW.DelayInput1_DSTATE_a)), rtb_Minus_k_idx_0, rtb_Switch2_i,
      Code_Gen_Model_B.Elevator_Height_Measured,
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

    /* Logic: '<S418>/Logical Operator3' incorporates:
     *  Logic: '<S418>/OR'
     *  Switch: '<S418>/Switch2'
     */
    rtb_OR_gh = ((Code_Gen_Model_B.Align_Left) || (Code_Gen_Model_B.Align_Right));

    /* Logic: '<S418>/Logical Operator1' incorporates:
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  Constant: '<S437>/Constant'
     *  Logic: '<S418>/Logical Operator2'
     *  Logic: '<S418>/Logical Operator3'
     *  Logic: '<S418>/Logical Operator4'
     *  Logic: '<S418>/NOT'
     *  RelationalOperator: '<S433>/Compare'
     *  RelationalOperator: '<S434>/Compare'
     *  RelationalOperator: '<S435>/Compare'
     *  RelationalOperator: '<S436>/Compare'
     *  RelationalOperator: '<S437>/Compare'
     */
    Coral_Score = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
                      (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                     (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0)))
                    && ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
                        (Code_Gen_Model_B.Set_Algae_Level != 0))) && (rtb_OR_gh ||
      (Code_Gen_Model_B.Align_Center)));

    /* SignalConversion: '<S24>/Signal Copy6' */
    Code_Gen_Model_B.AT_Relative_Error_Enable = Coral_Score;

    /* DeadZone: '<S441>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Reset_Wheel_Offsets = 0.0;
    } else {
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S441>/Dead Zone' */

    /* Logic: '<S441>/Logical Operator' incorporates:
     *  Constant: '<S453>/Constant'
     *  RelationalOperator: '<S453>/Compare'
     */
    Compare_f = ((rtb_Reset_Wheel_Offsets != 0.0) && Robot_Reached_Destination);

    /* Logic: '<S441>/Logical Operator1' */
    Compare = ((Code_Gen_Model_B.AT_Relative_Error_Enable) || Compare_f);

    /* Switch: '<S418>/Switch' incorporates:
     *  Constant: '<S418>/Constant1'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S438>/Constant'
     *  Logic: '<S418>/AND'
     *  Logic: '<S418>/AND1'
     *  RelationalOperator: '<S427>/Compare'
     *  RelationalOperator: '<S438>/Compare'
     *  Switch: '<S418>/Switch1'
     *  Switch: '<S418>/Switch4'
     *  Switch: '<S418>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch2_ji = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S418>/Switch1' incorporates:
       *  Constant: '<S418>/Constant2'
       */
      rtb_Switch2_ji = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S418>/Switch4' incorporates:
       *  Constant: '<S418>/Constant3'
       *  Switch: '<S418>/Switch1'
       */
      rtb_Switch2_ji = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S418>/Switch6' incorporates:
       *  Constant: '<S418>/Constant6'
       *  Switch: '<S418>/Switch1'
       *  Switch: '<S418>/Switch4'
       */
      rtb_Switch2_ji = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S418>/Switch4' incorporates:
       *  Switch: '<S418>/Switch1'
       *  UnitDelay: '<S418>/Unit Delay1'
       */
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S418>/Switch' */

    /* Sum: '<S418>/Subtract1' */
    rtb_Enable_Wheels = rtb_Switch2_ji -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S24>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Enable_Wheels;

    /* Switch: '<S418>/Switch2' incorporates:
     *  Constant: '<S418>/Constant4'
     *  Constant: '<S422>/Constant'
     *  Constant: '<S423>/Constant'
     *  Constant: '<S425>/Constant'
     *  Constant: '<S426>/Constant'
     *  Constant: '<S439>/Constant'
     *  Logic: '<S418>/AND2'
     *  Logic: '<S418>/AND3'
     *  Logic: '<S418>/Logical Operator5'
     *  Logic: '<S418>/Logical Operator6'
     *  Logic: '<S418>/OR1'
     *  RelationalOperator: '<S422>/Compare'
     *  RelationalOperator: '<S423>/Compare'
     *  RelationalOperator: '<S425>/Compare'
     *  RelationalOperator: '<S426>/Compare'
     *  RelationalOperator: '<S439>/Compare'
     *  Switch: '<S418>/Switch3'
     *  Switch: '<S418>/Switch5'
     *  Switch: '<S418>/Switch7'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Switch2_jm = AT_Reef_Target_L1_X;
    } else if (rtb_OR_gh && ((Code_Gen_Model_B.Set_Coral_Level == 2) ||
                (Code_Gen_Model_B.Set_Coral_Level == 3))) {
      /* Switch: '<S418>/Switch3' incorporates:
       *  Constant: '<S418>/Constant'
       */
      rtb_Switch2_jm = AT_Reef_Target_L2_L3_X;
    } else if (rtb_OR_gh && (Code_Gen_Model_B.Set_Coral_Level == 4)) {
      /* Switch: '<S418>/Switch5' incorporates:
       *  Constant: '<S418>/Constant5'
       *  Switch: '<S418>/Switch3'
       */
      rtb_Switch2_jm = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S418>/Switch7' incorporates:
       *  Constant: '<S418>/Constant7'
       *  Switch: '<S418>/Switch3'
       *  Switch: '<S418>/Switch5'
       */
      rtb_Switch2_jm = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S418>/Switch5' incorporates:
       *  Switch: '<S418>/Switch3'
       *  UnitDelay: '<S418>/Unit Delay'
       */
      rtb_Switch2_jm = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
    }

    /* Sum: '<S418>/Subtract' */
    rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_jm -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S24>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S418>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X =
      -rtb_Rotationmatrixfromlocalto_1;

    /* Switch: '<S441>/Switch9' incorporates:
     *  Switch: '<S441>/Switch4'
     */
    if (Compare) {
      /* Switch: '<S441>/Switch1' */
      if (Compare_f) {
        /* Signum: '<S441>/Sign' */
        if (rtIsNaN(rtb_Reset_Wheel_Offsets)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_Reset_Wheel_Offsets < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_Reset_Wheel_Offsets > 0.0);
        }

        /* Switch: '<S441>/Switch5' incorporates:
         *  Constant: '<S441>/Constant3'
         *  Constant: '<S441>/Constant4'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_i = -1.5707963267948966;
        } else {
          rtb_Switch2_i = 0.0;
        }

        /* Merge: '<S18>/Merge3' incorporates:
         *  Gain: '<S441>/Gain3'
         *  Signum: '<S441>/Sign'
         *  Sum: '<S441>/Add'
         *  Switch: '<S441>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_i;
      } else {
        /* Merge: '<S18>/Merge3' incorporates:
         *  Trigonometry: '<S441>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S441>/Switch1' */
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S441>/Switch6' incorporates:
       *  Constant: '<S441>/Constant'
       *  Constant: '<S441>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S441>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_0 = 0.0;
      } else {
        rtb_Minus_k_idx_0 = 3.1415926535897931;
      }

      /* Merge: '<S18>/Merge3' incorporates:
       *  Sum: '<S441>/Add1'
       *  Switch: '<S441>/Switch4'
       *  Switch: '<S441>/Switch6'
       *  Trigonometry: '<S441>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Field_Error_Y, Code_Gen_Model_B.AT_Field_Error_X) +
        rtb_Minus_k_idx_0;
    } else {
      /* Merge: '<S18>/Merge3' incorporates:
       *  Switch: '<S441>/Switch4'
       *  Trigonometry: '<S441>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_2, rtb_Switch2_gl);
    }

    /* End of Switch: '<S441>/Switch9' */

    /* Switch: '<S451>/Switch1' incorporates:
     *  Constant: '<S451>/Constant'
     *  Constant: '<S451>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Rotationmatrixfromlocalto_0 = Boost_Trigger_High_Speed;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S451>/Switch1' */

    /* Switch: '<S458>/Init' incorporates:
     *  UnitDelay: '<S458>/FixPt Unit Delay1'
     *  UnitDelay: '<S458>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Coral_Wheel_DutyCycle_merge = rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_Coral_Wheel_DutyCycle_merge =
        Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S458>/Init' */

    /* Sum: '<S456>/Sum1' */
    rtb_Rotationmatrixfromlocalto_3 = rtb_Rotationmatrixfromlocalto_0 -
      rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S457>/Switch2' incorporates:
     *  Constant: '<S455>/Constant1'
     *  Constant: '<S455>/Constant3'
     *  RelationalOperator: '<S457>/LowerRelop1'
     *  RelationalOperator: '<S457>/UpperRelop'
     *  Switch: '<S457>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_3 > Boost_Trigger_Increasing_Limit) {
      rtb_Rotationmatrixfromlocalto_3 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Rotationmatrixfromlocalto_3 < Boost_Trigger_Decreasing_Limit)
    {
      /* Switch: '<S457>/Switch' incorporates:
       *  Constant: '<S455>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_3 = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S456>/Sum' incorporates:
     *  Switch: '<S457>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_3 += rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S441>/Switch8' incorporates:
     *  Switch: '<S441>/Switch2'
     */
    if (Compare) {
      /* Switch: '<S441>/Switch' */
      if (Compare_f) {
        /* Merge: '<S18>/Merge4' incorporates:
         *  Gain: '<S441>/Gain'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_Reset_Wheel_Offsets;
      } else {
        /* Merge: '<S18>/Merge4' incorporates:
         *  Constant: '<S441>/Constant8'
         *  Gain: '<S441>/Gain1'
         *  Math: '<S441>/Magnitude2'
         *  MinMax: '<S441>/Min1'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S441>/Switch' */
    } else if (Robot_Reached_Destination) {
      /* Merge: '<S18>/Merge4' incorporates:
       *  Constant: '<S441>/Constant5'
       *  Gain: '<S441>/Gain2'
       *  Math: '<S441>/Magnitude1'
       *  MinMax: '<S441>/Min'
       *  Switch: '<S441>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Field_Error_X, Code_Gen_Model_B.AT_Field_Error_Y));
    } else {
      /* Product: '<S451>/Product' incorporates:
       *  Switch: '<S441>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Disable_Wheels * rtb_Rotationmatrixfromlocalto_3;

      /* Saturate: '<S451>/Saturation' incorporates:
       *  Switch: '<S441>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S18>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S18>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S18>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S451>/Saturation' */
    }

    /* End of Switch: '<S441>/Switch8' */

    /* Abs: '<S418>/Abs' incorporates:
     *  UnaryMinus: '<S418>/Unary Minus1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = fabs(-rtb_Rotationmatrixfromlocalto_1);

    /* Abs: '<S418>/Abs1' */
    rtb_Enable_Wheels = fabs(rtb_Enable_Wheels);

    /* Abs: '<S418>/Abs2' incorporates:
     *  UnaryMinus: '<S418>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_0 = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* SignalConversion: '<S24>/Signal Copy10' incorporates:
     *  Constant: '<S428>/Constant'
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Logic: '<S418>/Logical Operator'
     *  RelationalOperator: '<S428>/Compare'
     *  RelationalOperator: '<S429>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     */
    Code_Gen_Model_B.Teleop_AT_On_Target = (((Coral_Score &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Max_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Max_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_0 <= AT_Max_Error_Angle));

    /* SignalConversion: '<S24>/Signal Copy11' */
    Robot_Reached_Destination = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S424>/Constant'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Logic: '<S418>/Logical Operator7'
     *  RelationalOperator: '<S424>/Compare'
     *  RelationalOperator: '<S431>/Compare'
     *  RelationalOperator: '<S432>/Compare'
     *  SignalConversion: '<S24>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Coral_Score &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_0 <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S24>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S418>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S440>/Switch' incorporates:
     *  Constant: '<S440>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S440>/Product2' incorporates:
       *  Constant: '<S440>/Constant4'
       */
      rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.AT_Relative_Error_Angle
        * AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S450>/Switch2' incorporates:
       *  Constant: '<S440>/Constant10'
       *  RelationalOperator: '<S450>/LowerRelop1'
       *  RelationalOperator: '<S450>/UpperRelop'
       *  Switch: '<S450>/Switch'
       *  UnaryMinus: '<S440>/Unary Minus'
       */
      if (rtb_Coral_Wheel_DutyCycle_merge > AT_Steering_Speed_Max) {
        rtb_Coral_Wheel_DutyCycle_merge = AT_Steering_Speed_Max;
      } else if (rtb_Coral_Wheel_DutyCycle_merge < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S450>/Switch' incorporates:
         *  UnaryMinus: '<S440>/Unary Minus'
         */
        rtb_Coral_Wheel_DutyCycle_merge = -AT_Steering_Speed_Max;
      }

      /* End of Switch: '<S450>/Switch2' */
    } else {
      rtb_Coral_Wheel_DutyCycle_merge = 0.0;
    }

    /* End of Switch: '<S440>/Switch' */

    /* DeadZone: '<S440>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S440>/Add' incorporates:
     *  Constant: '<S440>/Constant'
     *  Constant: '<S440>/Constant1'
     *  DeadZone: '<S440>/Dead Zone'
     *  Lookup_n-D: '<S440>/Modulation_Str_Y_Rel'
     *  Product: '<S440>/Product'
     *  Product: '<S440>/Product1'
     *  SignalConversion: '<S14>/Signal Copy5'
     */
    rtb_Coral_Wheel_DutyCycle_merge += (look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (rtb_Minus_k_idx_0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S442>/Compare' incorporates:
     *  Constant: '<S442>/Constant'
     */
    Compare_f = (rtb_Coral_Wheel_DutyCycle_merge == 0.0);

    /* Logic: '<S417>/Logical Operator11' */
    rtb_OR_gh = ((((((Code_Gen_Model_B.Coral_Station_Left) ||
                     (Code_Gen_Model_B.Coral_Station_Right)) ||
                    (Code_Gen_Model_B.Processor)) ||
                   (Code_Gen_Model_B.Cage_Left_Start)) ||
                  (Code_Gen_Model_B.Cage_Middle_Start)) ||
                 (Code_Gen_Model_B.Cage_Right_Start));

    /* RelationalOperator: '<S447>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S447>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (((int32_T)rtb_OR_gh) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft));

    /* Logic: '<S440>/AND2' incorporates:
     *  RelationalOperator: '<S443>/FixPt Relational Operator'
     *  RelationalOperator: '<S444>/FixPt Relational Operator'
     *  RelationalOperator: '<S445>/FixPt Relational Operator'
     *  RelationalOperator: '<S446>/FixPt Relational Operator'
     *  UnitDelay: '<S443>/Delay Input1'
     *  UnitDelay: '<S444>/Delay Input1'
     *  UnitDelay: '<S445>/Delay Input1'
     *  UnitDelay: '<S446>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S445>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S446>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Coral_Score = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S440>/AND1' incorporates:
     *  Logic: '<S440>/AND3'
     *  Logic: '<S440>/AND7'
     *  UnitDelay: '<S440>/Unit Delay2'
     */
    rtb_AND1 = ((Compare_f && (!rtb_FixPtRelationalOperator_m)) && (Coral_Score ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Logic: '<S440>/AND4' incorporates:
     *  Logic: '<S440>/AND5'
     *  Logic: '<S440>/AND8'
     *  UnitDelay: '<S440>/Unit Delay4'
     */
    Coral_Score = ((Compare_f && (!Coral_Score)) &&
                   (rtb_FixPtRelationalOperator_m ||
                    (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S440>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 || Coral_Score);

    /* Switch: '<S440>/Switch8' incorporates:
     *  Constant: '<S449>/Constant'
     *  Logic: '<S440>/AND9'
     *  RelationalOperator: '<S448>/FixPt Relational Operator'
     *  RelationalOperator: '<S449>/Compare'
     *  UnitDelay: '<S20>/Unit Delay'
     *  UnitDelay: '<S448>/Delay Input1'
     *
     * Block description for '<S448>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)Compare_f) >
          ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S440>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S440>/Switch8' incorporates:
       *  UnitDelay: '<S440>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S440>/Switch8' */

    /* Switch: '<S440>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S440>/Switch2' incorporates:
       *  Constant: '<S440>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S440>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S440>/Switch2' */

    /* Switch: '<S417>/Switch15' incorporates:
     *  Switch: '<S417>/Switch43'
     *  Switch: '<S417>/Switch44'
     *  Switch: '<S417>/Switch45'
     *  Switch: '<S417>/Switch46'
     *  Switch: '<S417>/Switch47'
     *  Switch: '<S417>/Switch48'
     *  Switch: '<S417>/Switch49'
     *  Switch: '<S417>/Switch5'
     *  Switch: '<S417>/Switch50'
     *  Switch: '<S417>/Switch51'
     *  Switch: '<S417>/Switch52'
     *  Switch: '<S417>/Switch53'
     *  Switch: '<S417>/Switch54'
     *  Switch: '<S417>/Switch6'
     *  Switch: '<S417>/Switch7'
     *  Switch: '<S417>/Switch8'
     *  Switch: '<S417>/Switch9'
     */
    if (rtb_Compare_cid) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant14'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Blue;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant13'
       *  Switch: '<S417>/Switch5'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Red;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant12'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Blue;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant11'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Red;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant10'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Blue;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant8'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Red;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant49'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Blue;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant48'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Red;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant47'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant46'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Red;
    } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant1'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Start_Red_Act) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant50'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Red;
    } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant55'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant54'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch50'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant53'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch50'
       *  Switch: '<S417>/Switch51'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Constant: '<S417>/Constant52'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch50'
       *  Switch: '<S417>/Switch51'
       *  Switch: '<S417>/Switch52'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
      /* Switch: '<S417>/Switch53' incorporates:
       *  Constant: '<S417>/Constant51'
       *  Switch: '<S417>/Switch15'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch50'
       *  Switch: '<S417>/Switch51'
       *  Switch: '<S417>/Switch52'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
      /* Switch: '<S417>/Switch54' incorporates:
       *  Constant: '<S417>/Constant56'
       *  Switch: '<S417>/Switch15'
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch50'
       *  Switch: '<S417>/Switch51'
       *  Switch: '<S417>/Switch52'
       *  Switch: '<S417>/Switch53'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Red;
    } else {
      /* Switch: '<S417>/Switch15' incorporates:
       *  Switch: '<S417>/Switch43'
       *  Switch: '<S417>/Switch44'
       *  Switch: '<S417>/Switch45'
       *  Switch: '<S417>/Switch46'
       *  Switch: '<S417>/Switch47'
       *  Switch: '<S417>/Switch48'
       *  Switch: '<S417>/Switch49'
       *  Switch: '<S417>/Switch5'
       *  Switch: '<S417>/Switch50'
       *  Switch: '<S417>/Switch51'
       *  Switch: '<S417>/Switch52'
       *  Switch: '<S417>/Switch6'
       *  Switch: '<S417>/Switch7'
       *  Switch: '<S417>/Switch8'
       *  Switch: '<S417>/Switch9'
       *  UnitDelay: '<S417>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle =
        Code_Gen_Model_DW.UnitDelay1_DSTATE_e1;
    }

    /* End of Switch: '<S417>/Switch15' */

    /* Switch: '<S440>/Switch4' incorporates:
     *  Constant: '<S440>/Constant5'
     *  Switch: '<S440>/Switch1'
     *  Switch: '<S440>/Switch5'
     *  Switch: '<S440>/Switch6'
     *  Switch: '<S440>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Rotationmatrixfromlocalto_1 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S440>/Switch5' incorporates:
       *  Constant: '<S440>/Constant6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S440>/Switch6' incorporates:
       *  Constant: '<S440>/Constant7'
       *  Switch: '<S440>/Switch5'
       */
      rtb_Rotationmatrixfromlocalto_1 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S440>/Switch7' incorporates:
       *  Constant: '<S440>/Constant8'
       *  Switch: '<S440>/Switch5'
       *  Switch: '<S440>/Switch6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 4.71238898038469;
    } else if (Coral_Score) {
      /* Switch: '<S440>/Switch1' incorporates:
       *  Switch: '<S440>/Switch5'
       *  Switch: '<S440>/Switch6'
       *  Switch: '<S440>/Switch7'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.AT_Field_Target_Angle;
    } else {
      /* Switch: '<S440>/Switch6' incorporates:
       *  Switch: '<S440>/Switch5'
       *  Switch: '<S440>/Switch7'
       *  UnitDelay: '<S440>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S440>/Switch4' */

    /* Switch: '<S440>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S440>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Rotationmatrixfromlocalto_1;
    } else {
      /* Switch: '<S440>/Switch3' incorporates:
       *  Constant: '<S440>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S440>/Switch3' */

    /* Merge: '<S18>/Merge1' incorporates:
     *  Sum: '<S440>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Switch: '<S421>/Switch1' incorporates:
     *  Constant: '<S421>/Constant5'
     *  Constant: '<S421>/Constant7'
     *  Constant: '<S421>/Constant8'
     *  DataTypeConversion: '<S421>/Data Type Conversion'
     *  DataTypeConversion: '<S421>/Data Type Conversion1'
     *  Switch: '<S421>/Switch'
     *  Switch: '<S441>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Steering = Compare_f;
      rtb_Is_Absolute_Translation_g = !Compare;
    }

    /* End of Switch: '<S421>/Switch1' */

    /* Merge: '<S18>/Merge2' incorporates:
     *  SignalConversion: '<S440>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Coral_Wheel_DutyCycle_merge;

    /* Merge: '<S18>/Merge13' incorporates:
     *  SignalConversion generated from: '<S24>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired;

    /* SignalConversion generated from: '<S24>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_cid = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S24>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S18>/Merge11' incorporates:
     *  SignalConversion generated from: '<S24>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired;

    /* Merge: '<S18>/Merge21' incorporates:
     *  SignalConversion generated from: '<S24>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S420>/Constant5'
     *  SignalConversion generated from: '<S24>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S18>/Merge7' incorporates:
     *  Constant: '<S24>/Constant3'
     *  SignalConversion generated from: '<S24>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Constant: '<S24>/Constant9'
     *  SignalConversion generated from: '<S24>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S18>/Merge10' incorporates:
     *  Constant: '<S24>/Constant1'
     *  SignalConversion generated from: '<S24>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S24>/Enable_Wheels' incorporates:
     *  Constant: '<S24>/Constant6'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S24>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S24>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S24>/Disable_Wheels' incorporates:
     *  Constant: '<S24>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S24>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S24>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S454>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S454>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S461>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S462>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S466>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S467>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S468>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S463>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S469>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S472>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S473>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S473>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S470>/Delay Input1'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S471>/Delay Input1'
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S464>/Delay Input1'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S465>/Delay Input1'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S418>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S418>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Switch2_jm;

    /* Update for UnitDelay: '<S458>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S458>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S458>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Rotationmatrixfromlocalto_3;

    /* Update for UnitDelay: '<S448>/Delay Input1'
     *
     * Block description for '<S448>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = Compare_f;

    /* Update for UnitDelay: '<S447>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = rtb_OR_gh;

    /* Update for UnitDelay: '<S443>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S444>/Delay Input1'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S445>/Delay Input1'
     *
     * Block description for '<S445>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S446>/Delay Input1'
     *
     * Block description for '<S446>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S440>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND1;

    /* Update for UnitDelay: '<S440>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = Coral_Score;

    /* Update for UnitDelay: '<S440>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S417>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 =
      Code_Gen_Model_B.AT_Field_Target_Angle;

    /* Update for UnitDelay: '<S440>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Rotationmatrixfromlocalto_1;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S25>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* SignalConversion generated from: '<S25>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S18>/Merge1' incorporates:
     *  Constant: '<S25>/Constant1'
     *  SignalConversion generated from: '<S25>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S18>/Merge2' incorporates:
     *  Constant: '<S25>/Constant2'
     *  SignalConversion generated from: '<S25>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S18>/Merge3' incorporates:
     *  Constant: '<S25>/Constant3'
     *  SignalConversion generated from: '<S25>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S18>/Merge4' incorporates:
     *  Constant: '<S25>/Constant4'
     *  SignalConversion generated from: '<S25>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S25>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S25>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S25>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S25>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S18>/Merge7' incorporates:
     *  Constant: '<S25>/Constant7'
     *  SignalConversion generated from: '<S25>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Constant: '<S25>/Constant9'
     *  SignalConversion generated from: '<S25>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S18>/Merge10' incorporates:
     *  Constant: '<S25>/Constant12'
     *  SignalConversion generated from: '<S25>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S25>/Constant14'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S25>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (Code_Gen_Model_B.Button_Enable_Wheels) {
      /* Switch: '<S25>/Switch1' incorporates:
       *  Constant: '<S25>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S25>/Switch' */

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S25>/Constant11'
     *  SignalConversion generated from: '<S25>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S18>/Merge11' incorporates:
     *  Constant: '<S25>/Constant10'
     *  SignalConversion generated from: '<S25>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S18>/Merge13' incorporates:
     *  Constant: '<S25>/Constant15'
     *  SignalConversion generated from: '<S25>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S25>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S25>/Constant16'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S25>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S25>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S25>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S25>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S18>/Merge21' incorporates:
     *  Constant: '<S25>/Constant19'
     *  SignalConversion generated from: '<S25>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S25>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S25>/Constant20'
     */
    rtb_Compare_cid = false;

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S25>/Constant21'
     *  SignalConversion generated from: '<S25>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S25>/AT_On_Target' incorporates:
     *  Constant: '<S25>/Constant23'
     */
    Robot_Reached_Destination = false;

    /* DataTypeConversion: '<S25>/Cast To Boolean1' */
    rtb_Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* DataTypeConversion: '<S25>/Cast To Boolean3' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* DataTypeConversion: '<S25>/Cast To Boolean2' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S21>/If' incorporates:
   *  Constant: '<S255>/Constant'
   *  Logic: '<S255>/AND'
   *  MATLAB Function: '<S205>/Find closest index to curve'
   *  Product: '<S255>/Product'
   *  RelationalOperator: '<S255>/Relational Operator'
   *  RelationalOperator: '<S255>/Relational Operator1'
   *  Selector: '<S255>/Selector'
   *  Selector: '<S255>/Selector1'
   *  Selector: '<S256>/Selector'
   *  Sum: '<S255>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S208>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S211>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S213>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S208>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S21>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S203>/Action Port'
       */
      /* InitializeConditions for If: '<S21>/If' incorporates:
       *  UnitDelay: '<S203>/Unit Delay'
       *  UnitDelay: '<S204>/Unit Delay'
       *  UnitDelay: '<S206>/Unit Delay'
       *  UnitDelay: '<S206>/Unit Delay1'
       *  UnitDelay: '<S256>/Unit Delay'
       *  UnitDelay: '<S256>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S21>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S21>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S203>/Action Port'
     */
    /* Selector: '<S204>/Selector1' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S204>/Selector1' */

    /* Lookup_n-D: '<S203>/Capture Radius' incorporates:
     *  UnitDelay: '<S203>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S204>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S204>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S208>/If' incorporates:
     *  RelationalOperator: '<S208>/ '
     *  UnitDelay: '<S204>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S211>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S213>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S208>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S211>/Action Port'
       */
      /* InitializeConditions for If: '<S208>/If' incorporates:
       *  UnitDelay: '<S211>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S208>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S208>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S211>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S211>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S214>/Action Port'
       */
      /* If: '<S211>/If' incorporates:
       *  Selector: '<S204>/Selector1'
       *  Selector: '<S211>/Selector'
       *  Selector: '<S214>/Selector'
       */
      rtb_Rotationmatrixfromlocalto_1 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S211>/Increment_If_Rectangle_Check' */

      /* Sum: '<S211>/Minus' incorporates:
       *  Concatenate: '<S204>/Matrix Concatenate2'
       *  Selector: '<S211>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Rotationmatrixfromlocalto_1;

      /* Outputs for IfAction SubSystem: '<S211>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S214>/Action Port'
       */
      /* If: '<S211>/If' incorporates:
       *  Selector: '<S204>/Selector1'
       *  Selector: '<S211>/Selector'
       *  Selector: '<S214>/Selector'
       *  Sum: '<S211>/Minus'
       */
      rtb_Switch2_jm = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S211>/Increment_If_Rectangle_Check' */

      /* Sum: '<S211>/Minus' incorporates:
       *  Concatenate: '<S204>/Matrix Concatenate2'
       *  Selector: '<S211>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2_jm;

      /* Math: '<S211>/Hypot' */
      rtb_Switch2_gl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S211>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S211>/Switch' incorporates:
       *  Logic: '<S211>/AND'
       *  Logic: '<S211>/OR'
       *  RelationalOperator: '<S211>/Relational Operator'
       *  UnitDelay: '<S211>/Unit Delay'
       */
      rtb_Is_Absolute_Steering = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch2_gl <= rtb_Rotationmatrixfromlocalto_2) &&
         rtb_Is_Absolute_Translation_g));

      /* If: '<S211>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Steering) {
        if (!rtb_Is_Absolute_Translation_g) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S213>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S211>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S213>/Action Port'
         */
        /* If: '<S213>/If' incorporates:
         *  RelationalOperator: '<S213>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S213>/Is_Last_Point' incorporates:
           *  ActionPort: '<S216>/Action Port'
           */
          /* InitializeConditions for If: '<S213>/If' incorporates:
           *  UnitDelay: '<S216>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S213>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S213>/Is_Last_Point' incorporates:
           *  ActionPort: '<S216>/Action Port'
           */
          /* Switch: '<S216>/Switch' incorporates:
           *  Constant: '<S218>/Constant'
           *  Logic: '<S216>/OR'
           *  RelationalOperator: '<S218>/Compare'
           *  UnitDelay: '<S216>/Unit Delay'
           */
          rtb_AT_Cage_Right_Start_Blue_Ac =
            ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) || (rtb_Switch2_gl <=
              Spline_Stop_Radius));

          /* If: '<S216>/If' */
          if (rtb_AT_Cage_Right_Start_Blue_Ac) {
            /* Outputs for IfAction SubSystem: '<S216>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S219>/Action Port'
             */
            /* Merge: '<S208>/Merge2' incorporates:
             *  Constant: '<S219>/Constant'
             *  SignalConversion generated from: '<S219>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S219>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S219>/Constant1'
             */
            rtb_AT_Cage_Middle_Start_Red_Ac = false;

            /* End of Outputs for SubSystem: '<S216>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S216>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S220>/Action Port'
             */
            /* Merge: '<S208>/Merge2' incorporates:
             *  Constant: '<S220>/Constant'
             *  SignalConversion generated from: '<S220>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S220>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S220>/Constant1'
             */
            rtb_AT_Cage_Middle_Start_Red_Ac = true;

            /* End of Outputs for SubSystem: '<S216>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S216>/If' */

          /* Merge: '<S208>/Merge4' incorporates:
           *  SignalConversion: '<S216>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S216>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Cage_Right_Start_Blue_Ac;

          /* End of Outputs for SubSystem: '<S213>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S213>/Increment_Search' incorporates:
           *  ActionPort: '<S215>/Action Port'
           */
          /* Merge: '<S208>/Merge2' incorporates:
           *  Constant: '<S215>/Constant'
           *  SignalConversion generated from: '<S215>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S215>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S215>/Constant1'
           */
          rtb_AT_Cage_Middle_Start_Red_Ac = false;

          /* Merge: '<S208>/Merge4' incorporates:
           *  Constant: '<S217>/FixPt Constant'
           *  SignalConversion: '<S215>/Signal Copy'
           *  Sum: '<S217>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S213>/Increment_Search' */
        }

        /* End of If: '<S213>/If' */
        /* End of Outputs for SubSystem: '<S211>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S211>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S214>/Action Port'
         */
        /* Sum: '<S221>/FixPt Sum1' incorporates:
         *  Constant: '<S221>/FixPt Constant'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S214>/Selector1' incorporates:
         *  Selector: '<S204>/Selector1'
         */
        rtb_Switch2_g = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) - 1];

        /* Sum: '<S222>/Subtract' incorporates:
         *  Selector: '<S214>/Selector1'
         *  Sum: '<S222>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_g - rtb_Rotationmatrixfromlocalto_1;

        /* Selector: '<S214>/Selector1' incorporates:
         *  Selector: '<S204>/Selector1'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl)
          + 9];

        /* Sum: '<S222>/Subtract' incorporates:
         *  Selector: '<S214>/Selector1'
         *  Sum: '<S222>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_3 - rtb_Switch2_jm;

        /* Math: '<S222>/Hypot' */
        rtb_Switch2_ji = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S222>/Divide' */
        rtb_Switch2_gl = rtb_Minus_n[1];

        /* UnaryMinus: '<S222>/Unary Minus' */
        rtb_Add_o5 = rtb_Minus_n[0];

        /* Product: '<S222>/Product' incorporates:
         *  Product: '<S222>/Divide'
         *  UnaryMinus: '<S222>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2_gl / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;
        rtb_Minus_n[1] = ((-rtb_Add_o5) / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;

        /* Sum: '<S222>/Add1' incorporates:
         *  Sum: '<S222>/Add2'
         *  Sum: '<S222>/Minus'
         */
        rtb_Add_o5 = rtb_Switch2_g - rtb_Minus_n[0];

        /* Sum: '<S222>/Minus4' incorporates:
         *  Sum: '<S222>/Add2'
         *  Sum: '<S222>/Minus'
         */
        rtb_Switch2_g = (rtb_Switch2_g + rtb_Minus_n[0]) - rtb_Add_o5;

        /* Sum: '<S222>/Minus5' incorporates:
         *  Concatenate: '<S204>/Matrix Concatenate2'
         *  Sum: '<S222>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Add_o5;

        /* Sum: '<S222>/Add' incorporates:
         *  Sum: '<S222>/Add2'
         *  Sum: '<S222>/Minus1'
         */
        rtb_Switch2_gl = rtb_Rotationmatrixfromlocalto_1 - rtb_Minus_n[0];

        /* Sum: '<S222>/Minus' incorporates:
         *  Sum: '<S222>/Minus1'
         */
        rtb_Add_o5 -= rtb_Switch2_gl;

        /* DotProduct: '<S222>/Dot Product' incorporates:
         *  Concatenate: '<S204>/Matrix Concatenate2'
         *  Sum: '<S222>/Minus'
         *  Sum: '<S222>/Minus1'
         *  Sum: '<S222>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Reshapey[0] - rtb_Switch2_gl) * rtb_Add_o5;

        /* DotProduct: '<S222>/Dot Product1' incorporates:
         *  Sum: '<S222>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_1 = rtb_Add_o5 * rtb_Add_o5;

        /* DotProduct: '<S222>/Dot Product2' incorporates:
         *  Sum: '<S222>/Minus4'
         *  Sum: '<S222>/Minus5'
         */
        rtb_Minus_k_idx_0 = rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S222>/Dot Product3' incorporates:
         *  Sum: '<S222>/Minus4'
         */
        rtb_Init = rtb_Switch2_g * rtb_Switch2_g;

        /* Sum: '<S222>/Add1' incorporates:
         *  Sum: '<S222>/Add2'
         *  Sum: '<S222>/Minus'
         */
        rtb_Add_o5 = rtb_Rotationmatrixfromlocalto_3 - rtb_Minus_n[1];

        /* Sum: '<S222>/Minus4' incorporates:
         *  Sum: '<S222>/Add2'
         *  Sum: '<S222>/Minus'
         */
        rtb_Switch2_g = (rtb_Rotationmatrixfromlocalto_3 + rtb_Minus_n[1]) -
          rtb_Add_o5;

        /* Sum: '<S222>/Minus5' incorporates:
         *  Concatenate: '<S204>/Matrix Concatenate2'
         *  Sum: '<S222>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Add_o5;

        /* Sum: '<S222>/Add' incorporates:
         *  Sum: '<S222>/Add2'
         *  Sum: '<S222>/Minus1'
         */
        rtb_Switch2_gl = rtb_Switch2_jm - rtb_Minus_n[1];

        /* Sum: '<S222>/Minus' incorporates:
         *  Sum: '<S222>/Minus1'
         */
        rtb_Add_o5 -= rtb_Switch2_gl;

        /* DotProduct: '<S222>/Dot Product' incorporates:
         *  Concatenate: '<S204>/Matrix Concatenate2'
         *  Sum: '<S222>/Minus'
         *  Sum: '<S222>/Minus1'
         *  Sum: '<S222>/Minus5'
         */
        rtb_Switch2_ji += (rtb_Reshapey[1] - rtb_Switch2_gl) * rtb_Add_o5;

        /* RelationalOperator: '<S223>/Compare' incorporates:
         *  Constant: '<S223>/Constant'
         */
        rtb_Is_Absolute_Translation_g = (rtb_Switch2_ji >= 0.0);

        /* RelationalOperator: '<S222>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S222>/Dot Product1'
         *  Sum: '<S222>/Minus'
         */
        rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Switch2_ji <= ((rtb_Add_o5 *
          rtb_Add_o5) + rtb_Rotationmatrixfromlocalto_1));

        /* DotProduct: '<S222>/Dot Product2' incorporates:
         *  Sum: '<S222>/Minus4'
         *  Sum: '<S222>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_0) +
          rtb_Minus_k_idx_0;

        /* Merge: '<S208>/Merge4' incorporates:
         *  Constant: '<S224>/Constant'
         *  DataTypeConversion: '<S214>/Data Type Conversion'
         *  DotProduct: '<S222>/Dot Product3'
         *  Logic: '<S222>/AND'
         *  RelationalOperator: '<S222>/LessThanOrEqual1'
         *  RelationalOperator: '<S224>/Compare'
         *  Sum: '<S214>/Add'
         *  Sum: '<S222>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Translation_g && rtb_AT_Cage_Middle_Start_Red_Ac) &&
            (rtb_Switch2_ji >= 0.0)) && (rtb_Switch2_ji <= ((rtb_Switch2_g *
          rtb_Switch2_g) + rtb_Init)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S208>/Merge2' incorporates:
         *  Constant: '<S214>/Constant2'
         *  SignalConversion generated from: '<S214>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S214>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S214>/Constant1'
         */
        rtb_AT_Cage_Middle_Start_Red_Ac = false;

        /* End of Outputs for SubSystem: '<S211>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S211>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S212>/Action Port'
         */
        /* Merge: '<S208>/Merge2' incorporates:
         *  Constant: '<S212>/Constant2'
         *  SignalConversion generated from: '<S212>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S212>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S212>/Constant1'
         */
        rtb_AT_Cage_Middle_Start_Red_Ac = false;

        /* Merge: '<S208>/Merge4' incorporates:
         *  SignalConversion generated from: '<S212>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S211>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S208>/Merge1' incorporates:
       *  Constant: '<S211>/Constant'
       *  SignalConversion generated from: '<S211>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S211>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Steering;

      /* End of Outputs for SubSystem: '<S208>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S208>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* Merge: '<S208>/Merge1' incorporates:
       *  Constant: '<S210>/Constant'
       *  SignalConversion generated from: '<S210>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S208>/Merge2' incorporates:
       *  Constant: '<S210>/Constant1'
       *  SignalConversion generated from: '<S210>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S210>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S210>/Constant2'
       */
      rtb_AT_Cage_Middle_Start_Red_Ac = false;

      /* Merge: '<S208>/Merge4' incorporates:
       *  SignalConversion generated from: '<S210>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S208>/Escape_Auto_Driving' */
    }

    /* End of If: '<S208>/If' */

    /* If: '<S204>/If1' */
    if (!rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Outputs for IfAction SubSystem: '<S204>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S209>/Action Port'
       */
      /* Bias: '<S225>/Add Constant' incorporates:
       *  Bias: '<S225>/Bias'
       *  Sum: '<S225>/Subtract'
       */
      rtb_Switch2_gl = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S225>/Selector4' incorporates:
       *  Bias: '<S225>/Bias1'
       *  Constant: '<S227>/FixPt Constant'
       *  Sum: '<S227>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S225>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S225>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S225>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S225>/Selector5' incorporates:
       *  Concatenate: '<S225>/Matrix Concatenate'
       *  Gain: '<S229>/Gain'
       *  Selector: '<S204>/Selector1'
       *  Selector: '<S225>/Selector2'
       *  Selector: '<S225>/Selector3'
       *  Sum: '<S229>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s230_iter = 0; s230_iter <= rtb_Bias1_p; s230_iter++) {
          rtb_Selector5[s230_iter + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[s230_iter + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S225>/Matrix Concatenate' incorporates:
       *  Bias: '<S225>/Add Constant1'
       *  Gain: '<S228>/Gain'
       *  Selector: '<S204>/Selector1'
       *  Selector: '<S225>/Selector'
       *  Selector: '<S225>/Selector1'
       *  Selector: '<S225>/Selector5'
       *  Sum: '<S228>/Subtract'
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

      /* Selector: '<S225>/Selector4' */
      s230_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s230_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S225>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S225>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S225>/Assignment' incorporates:
       *  Concatenate: '<S225>/Matrix Concatenate'
       *  Selector: '<S225>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s230_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S226>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S230>/While Iterator'
       */
      s230_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s230_iter + 1];
        rtb_Minus_n[0] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s230_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s230_iter] - rtb_Assignment[s230_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s230_iter];
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s230_iter + 13];
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s230_iter + 11];
        rtb_Add_o5 = rtb_Assignment[s230_iter + 12];
        rtb_Add2_f[1] = rtb_Add_o5 - rtb_Assignment[s230_iter + 14];
        rtb_Minus_k_idx_1 = rtb_Rotationmatrixfromlocalto_1 - rtb_Add_o5;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch2_ji = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2_jm = rt_powd_snf(rtb_Switch2_ji, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Switch2_ji, 3.0);
          rtb_Rotationmatrixfromlocalto_3 = (rtb_Switch2_ji - (2.0 *
            rtb_Switch2_jm)) + rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_jm -
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Switch2_jm) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_Switch2_g = ((((rtb_Minus_n[0] * rtb_Rotationmatrixfromlocalto_3)
                             + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s230_iter];
          rtb_Init = ((((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_3) +
                        (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1)) * 0.0)
                      + (rtb_Minus_k_idx_1 * rtb_Rotationmatrixfromlocalto_0)) +
            rtb_Add_o5;
          rtb_Rotationmatrixfromlocalto_3 = ((3.0 * rtb_Switch2_jm) - (4.0 *
            rtb_Switch2_ji)) + 1.0;
          rtb_Rotationmatrixfromlocalto_1 = (2.0 * rtb_Switch2_ji) - (3.0 *
            rtb_Switch2_jm);
          rtb_Switch2_jm = (rtb_Switch2_ji - rtb_Switch2_jm) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Minus_n[0] *
            rtb_Rotationmatrixfromlocalto_3) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_1)) * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Switch2_jm);
          rtb_Switch2_az = (((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_3)
                             + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_1 * rtb_Switch2_jm);
          rtb_Switch2_jm = (6.0 * rtb_Switch2_ji) - 4.0;
          rtb_Rotationmatrixfromlocalto_3 = (-6.0 * rtb_Switch2_ji) + 2.0;
          rtb_Switch2_ji = (-12.0 * rtb_Switch2_ji) + 6.0;
          rtb_Rotationmatrixfromlocalto_1 = (((rtb_Minus_n[0] * rtb_Switch2_jm)
            + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_3)) * 0.0) +
            (rtb_Minus_k_idx_0 * rtb_Switch2_ji);
          rtb_Rotationmatrixfromlocalto_3 = (((rtb_Minus_n[1] * rtb_Switch2_jm)
            + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_3)) * 0.0) +
            (rtb_Minus_k_idx_1 * rtb_Switch2_ji);
          rtb_Switch2_jm = rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_az), 3.0);
          rtb_Switch2_ji = fmax(1.0E-10, rtb_Switch2_jm);
          Code_Gen_Model_DW.Relay_Mode = ((rtb_Switch2_jm >=
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
             - (rtb_Rotationmatrixfromlocalto_1 * rtb_Switch2_az)) /
            (rtb_Switch2_ji * ((real_T)i));
        }

        if (s230_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s230_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_ji = rtb_Switch2_gl - ((real_T)s230_iter);
        rtb_Num_Segments = s230_iter;
        s230_iter++;
      } while ((rtb_Switch2_ji >= 4.0) && (s230_iter <= 3));

      /* End of Outputs for SubSystem: '<S226>/Sampling_Loop' */

      /* SignalConversion generated from: '<S209>/Position_and_Curvature' incorporates:
       *  Assignment: '<S230>/Assignment'
       *  Merge: '<S204>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S204>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S204>/If Action Subsystem' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* Product: '<S207>/Product' incorporates:
       *  Selector: '<S204>/Selector'
       *  Selector: '<S204>/Selector1'
       */
      rtb_Switch2_ji = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S207>/Product1' incorporates:
       *  Selector: '<S204>/Selector'
       *  Selector: '<S204>/Selector1'
       */
      rtb_Switch2_gl = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S207>/Product' incorporates:
         *  Constant: '<S207>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_ji;

        /* Product: '<S207>/Product1' incorporates:
         *  Constant: '<S207>/Constant2'
         *  Product: '<S207>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2_gl;
      }

      /* Assignment: '<S207>/Assignment' incorporates:
       *  Concatenate: '<S207>/Matrix Concatenate'
       *  Merge: '<S204>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S207>/Assignment' */

      /* SignalConversion generated from: '<S207>/Num_Segments' incorporates:
       *  Constant: '<S207>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S204>/If Action Subsystem' */
    }

    /* End of If: '<S204>/If1' */

    /* Concatenate: '<S205>/Matrix Concatenate' incorporates:
     *  Merge: '<S204>/Merge'
     *  Selector: '<S205>/Selector'
     *  Selector: '<S205>/Selector1'
     *  Selector: '<S205>/Selector3'
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

    /* End of Concatenate: '<S205>/Matrix Concatenate' */

    /* MATLAB Function: '<S205>/Distance Along Curve' incorporates:
     *  Concatenate: '<S205>/Matrix Concatenate'
     *  Selector: '<S205>/Selector4'
     *  Selector: '<S205>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s230_iter = 0; s230_iter < 149; s230_iter++) {
      /* Outputs for Iterator SubSystem: '<S226>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S230>/While Iterator'
       */
      rtb_Assignment_d[s230_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s230_iter + 1] -
         rtb_MatrixConcatenate_o[s230_iter], rtb_MatrixConcatenate_o[s230_iter +
         151] - rtb_MatrixConcatenate_o[s230_iter + 150]) +
        rtb_Assignment_d[s230_iter];

      /* End of Outputs for SubSystem: '<S226>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S205>/Distance Along Curve' */

    /* MATLAB Function: '<S205>/Find closest index to curve' incorporates:
     *  Concatenate: '<S205>/Matrix Concatenate'
     *  Selector: '<S205>/Selector4'
     *  Selector: '<S205>/Selector5'
     *  Selector: '<S256>/Selector'
     */
    for (s230_iter = 0; s230_iter < 150; s230_iter++) {
      /* Outputs for Iterator SubSystem: '<S226>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S230>/While Iterator'
       */
      distance_from_robot[s230_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s230_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s230_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S226>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s230_iter = 1;
    } else {
      s230_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s230_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s230_iter == 0) {
      rtb_Switch2_gl = distance_from_robot[0];
    } else {
      rtb_Switch2_gl = distance_from_robot[s230_iter - 1];
      for (rtb_Bias1_p = s230_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_ji = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2_gl > rtb_Switch2_ji) {
          rtb_Switch2_gl = rtb_Switch2_ji;
        }
      }
    }

    s230_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s230_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2_gl) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S256>/Selector' incorporates:
     *  Constant: '<S256>/Constant'
     *  MATLAB Function: '<S205>/Find closest index to curve'
     *  MinMax: '<S256>/Min'
     */
    rtb_Switch2_ji = rtb_Assignment_d[((int32_T)fmin(50.0, s230_iter)) - 1];

    /* If: '<S256>/If' incorporates:
     *  RelationalOperator: '<S256>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S256>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S259>/Action Port'
       */
      /* SignalConversion generated from: '<S259>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S261>/FixPt Sum1' incorporates:
       *  Constant: '<S261>/FixPt Constant'
       */
      rtb_Switch2_gl = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S259>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S18>/Merge8'
       *  Selector: '<S259>/Selector11'
       *  Selector: '<S259>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S259>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S18>/Merge8'
       *  Selector: '<S259>/Selector1'
       *  Selector: '<S259>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S259>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S259>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2_gl), &rtb_Minus_n[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S259>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S259>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S259>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S256>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S256>/Latch' incorporates:
       *  ActionPort: '<S260>/Action Port'
       */
      /* SignalConversion generated from: '<S260>/In1' incorporates:
       *  UnitDelay: '<S256>/Unit Delay1'
       */
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S260>/In2' incorporates:
       *  UnitDelay: '<S256>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S256>/Latch' */
    }

    /* End of If: '<S256>/If' */

    /* MinMax: '<S203>/Min' incorporates:
     *  Lookup_n-D: '<S203>/Lookahead Distance'
     *  UnitDelay: '<S203>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Rotationmatrixfromlocalto_2,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled8,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S205>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S255>/While Iterator'
     */
    s255_iter = 1U;
    rtb_Is_Absolute_Steering = true;
    while (rtb_Is_Absolute_Steering && (s255_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S205>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S255>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s255_iter;
      rtb_Is_Absolute_Steering =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s230_iter - 1] + rtb_Rotationmatrixfromlocalto_2)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s255_iter++;
    }

    /* End of Outputs for SubSystem: '<S205>/Find first index that meets distance target' */

    /* Switch: '<S258>/Switch' incorporates:
     *  Concatenate: '<S205>/Matrix Concatenate'
     *  Constant: '<S205>/Constant'
     *  Constant: '<S255>/Constant'
     *  Constant: '<S258>/Constant'
     *  Constant: '<S258>/Constant1'
     *  Constant: '<S258>/Constant2'
     *  Constant: '<S258>/Constant3'
     *  Logic: '<S255>/AND'
     *  MATLAB Function: '<S205>/Find closest index to curve'
     *  Math: '<S258>/Hypot'
     *  Merge: '<S18>/Merge8'
     *  MinMax: '<S258>/Max'
     *  MinMax: '<S258>/Min'
     *  MinMax: '<S258>/Min1'
     *  Product: '<S255>/Product'
     *  Product: '<S258>/Divide'
     *  Product: '<S258>/Product'
     *  Product: '<S258>/Product1'
     *  RelationalOperator: '<S205>/Relational Operator'
     *  RelationalOperator: '<S255>/Relational Operator'
     *  RelationalOperator: '<S255>/Relational Operator1'
     *  Selector: '<S205>/Selector10'
     *  Selector: '<S205>/Selector7'
     *  Selector: '<S205>/Selector8'
     *  Selector: '<S205>/Selector9'
     *  Selector: '<S255>/Selector'
     *  Selector: '<S255>/Selector1'
     *  Selector: '<S256>/Selector'
     *  Sqrt: '<S258>/Sqrt'
     *  Sum: '<S205>/Subtract'
     *  Sum: '<S255>/Add'
     *  Sum: '<S258>/Subtract'
     *  Sum: '<S258>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_2 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses
        [9] - Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch2_gl *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5))));
    } else {
      rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Switch2_gl *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5)));
    }

    /* End of Switch: '<S258>/Switch' */

    /* Logic: '<S206>/OR' */
    rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S206>/Switch1' incorporates:
     *  Switch: '<S206>/Switch'
     *  UnitDelay: '<S206>/Unit Delay'
     */
    if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Merge: '<S21>/Merge2' incorporates:
       *  Constant: '<S206>/Constant3'
       *  SignalConversion: '<S206>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S21>/Merge2' incorporates:
       *  SignalConversion: '<S206>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_2;
      rtb_Switch2_ji = rtb_Merge1;
    }

    /* End of Switch: '<S206>/Switch1' */

    /* Merge: '<S21>/Merge' incorporates:
     *  SignalConversion: '<S206>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch2_ji;

    /* Selector: '<S205>/Selector6' incorporates:
     *  Concatenate: '<S205>/Matrix Concatenate'
     *  Selector: '<S205>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S205>/Selector2' incorporates:
     *  Concatenate: '<S205>/Matrix Concatenate'
     *  Selector: '<S205>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S206>/Switch2' incorporates:
     *  Sum: '<S262>/Subtract'
     *  Sum: '<S262>/Subtract1'
     *  Trigonometry: '<S262>/Atan2'
     *  UnitDelay: '<S206>/Unit Delay1'
     */
    if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      rtb_Switch2_jm = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2_jm = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S206>/Switch2' */

    /* Merge: '<S21>/Merge3' incorporates:
     *  SignalConversion: '<S206>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2_jm;

    /* Merge: '<S21>/Merge7' incorporates:
     *  SignalConversion: '<S203>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S21>/Merge1' incorporates:
     *  Constant: '<S206>/Constant2'
     *  SignalConversion generated from: '<S203>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S21>/Merge4' incorporates:
     *  Constant: '<S206>/Constant5'
     *  SignalConversion generated from: '<S203>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S21>/Merge5' incorporates:
     *  Constant: '<S206>/Constant6'
     *  SignalConversion generated from: '<S203>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S21>/Merge8' incorporates:
     *  SignalConversion generated from: '<S203>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S204>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S256>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S256>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S206>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S206>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2_jm;

    /* End of Outputs for SubSystem: '<S21>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/Pass Through' incorporates:
     *  ActionPort: '<S202>/Action Port'
     */
    /* Merge: '<S21>/Merge7' incorporates:
     *  Constant: '<S202>/Constant'
     *  SignalConversion generated from: '<S202>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S21>/Merge' incorporates:
     *  SignalConversion generated from: '<S202>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S21>/Merge1' incorporates:
     *  SignalConversion generated from: '<S202>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S21>/Merge2' incorporates:
     *  SignalConversion generated from: '<S202>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S21>/Merge3' incorporates:
     *  SignalConversion generated from: '<S202>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S21>/Merge4' incorporates:
     *  SignalConversion generated from: '<S202>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S21>/Merge5' incorporates:
     *  SignalConversion generated from: '<S202>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S21>/Merge8' incorporates:
     *  SignalConversion generated from: '<S202>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S21>/Pass Through' */
  }

  /* End of If: '<S21>/If' */

  /* Signum: '<S356>/Sign2' incorporates:
   *  UnitDelay: '<S356>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S356>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S356>/Product1' incorporates:
   *  Signum: '<S356>/Sign1'
   *  Signum: '<S356>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S356>/Switch' incorporates:
   *  Constant: '<S356>/Constant'
   *  Constant: '<S361>/Constant'
   *  Constant: '<S362>/Constant'
   *  Logic: '<S356>/or'
   *  Product: '<S356>/Product1'
   *  RelationalOperator: '<S361>/Compare'
   *  RelationalOperator: '<S362>/Compare'
   *  UnitDelay: '<S356>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S356>/Switch' */

  /* Switch: '<S367>/Init' incorporates:
   *  UnitDelay: '<S367>/FixPt Unit Delay1'
   *  UnitDelay: '<S367>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S367>/Init' */

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_g > 0.0);

  /* Abs: '<S356>/Abs' incorporates:
   *  Sum: '<S356>/Subtract'
   *  UnitDelay: '<S356>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S356>/Switch5' incorporates:
   *  Constant: '<S356>/Constant1'
   *  Switch: '<S356>/Switch1'
   *  UnaryMinus: '<S356>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S356>/Constant4'
     *  Constant: '<S356>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S356>/Constant2'
     *  Constant: '<S356>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S356>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S356>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S356>/Constant10'
     *  Constant: '<S356>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S356>/Constant7'
     *  Constant: '<S356>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S356>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S356>/Lookup Table Dynamic1'
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

    /* Switch: '<S356>/Switch3' incorporates:
     *  Constant: '<S356>/Constant1'
     *  Constant: '<S356>/Constant3'
     *  UnaryMinus: '<S356>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S356>/Switch3' */
  }

  /* End of Switch: '<S356>/Switch5' */

  /* Product: '<S356>/Product' incorporates:
   *  Switch: '<S356>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S365>/Sum1' */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S366>/Switch2' incorporates:
   *  RelationalOperator: '<S366>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_2 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S356>/Switch2' incorporates:
     *  Constant: '<S356>/Constant1'
     *  Switch: '<S356>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S356>/Switch4' incorporates:
       *  Constant: '<S356>/Constant1'
       */
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S356>/Switch4' incorporates:
       *  Constant: '<S356>/Constant3'
       *  UnaryMinus: '<S356>/Unary Minus1'
       */
      rtb_Switch2_gl = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S356>/Switch2' */

    /* Product: '<S356>/Product2' */
    rtb_Switch2_gl *= rtb_Merge1;

    /* Switch: '<S366>/Switch' incorporates:
     *  RelationalOperator: '<S366>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_2 < rtb_Switch2_gl) {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    } else {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_2;
    }

    /* End of Switch: '<S366>/Switch' */
  }

  /* End of Switch: '<S366>/Switch2' */

  /* Sum: '<S365>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S359>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S359>/Switch' incorporates:
     *  Constant: '<S391>/Constant3'
     *  Constant: '<S391>/Constant4'
     *  Math: '<S391>/Math Function'
     *  Sum: '<S359>/Subtract'
     *  Sum: '<S391>/Add1'
     *  Sum: '<S391>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S359>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S359>/Switch' */

  /* Sum: '<S387>/Add1' incorporates:
   *  Constant: '<S387>/Constant3'
   *  Constant: '<S387>/Constant4'
   *  Math: '<S387>/Math Function'
   *  Sum: '<S386>/Sum'
   *  Sum: '<S387>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S389>/Sum1' incorporates:
   *  Constant: '<S386>/Constant2'
   *  Product: '<S389>/Product'
   *  Sum: '<S389>/Sum'
   *  UnitDelay: '<S389>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S386>/Product' incorporates:
   *  Constant: '<S386>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S388>/Diff' incorporates:
   *  UnitDelay: '<S388>/UD'
   *
   * Block description for '<S388>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S388>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_2 -
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S386>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S386>/Add' incorporates:
   *  Gain: '<S386>/Gain1'
   *  Saturate: '<S386>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S386>/Subtract' incorporates:
   *  Constant: '<S386>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S386>/Sum2' incorporates:
   *  Gain: '<S386>/Gain2'
   *  UnitDelay: '<S386>/Unit Delay'
   */
  rtb_Switch2_gl = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S390>/Switch2' incorporates:
   *  RelationalOperator: '<S390>/LowerRelop1'
   */
  if (!(rtb_Switch2_gl > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S386>/Subtract1' incorporates:
     *  Constant: '<S386>/Constant1'
     */
    rtb_Switch2_jm = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S390>/Switch' incorporates:
     *  RelationalOperator: '<S390>/UpperRelop'
     */
    if (rtb_Switch2_gl < rtb_Switch2_jm) {
      rtb_Optimized_Module_Angle = rtb_Switch2_jm;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    }

    /* End of Switch: '<S390>/Switch' */
  }

  /* End of Switch: '<S390>/Switch2' */

  /* Saturate: '<S386>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2_gl = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S386>/Saturation1' */

  /* Sum: '<S386>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Switch2_gl;

  /* Saturate: '<S386>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S386>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S386>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S386>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S386>/Saturation2' */

  /* Switch: '<S370>/Switch' incorporates:
   *  Abs: '<S370>/Abs'
   *  Constant: '<S370>/Constant'
   *  Constant: '<S385>/Constant'
   *  RelationalOperator: '<S385>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S370>/Switch' */

  /* Signum: '<S369>/Sign2' incorporates:
   *  UnitDelay: '<S369>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S369>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Init > 0.0);
  }

  /* Product: '<S369>/Product1' incorporates:
   *  Signum: '<S369>/Sign1'
   *  Signum: '<S369>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S369>/Switch' incorporates:
   *  Constant: '<S369>/Constant'
   *  Constant: '<S378>/Constant'
   *  Constant: '<S379>/Constant'
   *  Logic: '<S369>/or'
   *  Product: '<S369>/Product1'
   *  RelationalOperator: '<S378>/Compare'
   *  RelationalOperator: '<S379>/Compare'
   *  UnitDelay: '<S369>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S369>/Switch' */

  /* Switch: '<S384>/Init' incorporates:
   *  UnitDelay: '<S384>/FixPt Unit Delay1'
   *  UnitDelay: '<S384>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Switch2_jm = rtb_uDLookupTable_l;
  } else {
    rtb_Switch2_jm = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S384>/Init' */

  /* RelationalOperator: '<S380>/Compare' incorporates:
   *  Constant: '<S380>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S381>/Compare' incorporates:
   *  Constant: '<S381>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S369>/Abs' incorporates:
   *  Sum: '<S369>/Subtract'
   *  UnitDelay: '<S369>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_3 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d -
    rtb_Init);

  /* Switch: '<S369>/Switch1' incorporates:
   *  Constant: '<S369>/Constant1'
   *  Switch: '<S369>/Switch3'
   *  Switch: '<S369>/Switch5'
   *  UnaryMinus: '<S369>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S369>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S369>/Constant1'
     *  Constant: '<S369>/Constant4'
     *  Constant: '<S369>/Constant6'
     *  UnaryMinus: '<S369>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S369>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S369>/Constant2'
     *  Constant: '<S369>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S369>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S369>/Lookup Table Dynamic'
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
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S369>/Switch3' incorporates:
       *  Constant: '<S369>/Constant3'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S369>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S369>/Constant1'
     *  Constant: '<S369>/Constant10'
     *  Constant: '<S369>/Constant8'
     *  UnaryMinus: '<S369>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S369>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S369>/Constant7'
     *  Constant: '<S369>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S369>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S369>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S369>/Switch1' */

  /* Product: '<S369>/Product' */
  rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S382>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_uDLookupTable_l - rtb_Switch2_jm;

  /* Switch: '<S383>/Switch2' incorporates:
   *  RelationalOperator: '<S383>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_ji)) {
    /* Switch: '<S369>/Switch2' incorporates:
     *  Constant: '<S369>/Constant1'
     *  Switch: '<S369>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S369>/Switch4' incorporates:
       *  Constant: '<S369>/Constant1'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S369>/Switch4' incorporates:
       *  Constant: '<S369>/Constant3'
       *  UnaryMinus: '<S369>/Unary Minus1'
       */
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S369>/Switch2' */

    /* Product: '<S369>/Product2' */
    rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_3;

    /* Switch: '<S383>/Switch' incorporates:
     *  RelationalOperator: '<S383>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S383>/Switch' */
  }

  /* End of Switch: '<S383>/Switch2' */

  /* Sum: '<S382>/Sum' */
  rtb_Switch2_ji += rtb_Switch2_jm;

  /* Signum: '<S368>/Sign2' incorporates:
   *  UnitDelay: '<S368>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S368>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S368>/Product1' incorporates:
   *  Signum: '<S368>/Sign1'
   *  Signum: '<S368>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S368>/Switch' incorporates:
   *  Constant: '<S368>/Constant'
   *  Constant: '<S371>/Constant'
   *  Constant: '<S372>/Constant'
   *  Logic: '<S368>/or'
   *  Product: '<S368>/Product1'
   *  RelationalOperator: '<S371>/Compare'
   *  RelationalOperator: '<S372>/Compare'
   *  UnitDelay: '<S368>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S368>/Switch' */

  /* Switch: '<S377>/Init' incorporates:
   *  UnitDelay: '<S377>/FixPt Unit Delay1'
   *  UnitDelay: '<S377>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S377>/Init' */

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S374>/Compare' incorporates:
   *  Constant: '<S374>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S368>/Abs' incorporates:
   *  Sum: '<S368>/Subtract'
   *  UnitDelay: '<S368>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_3 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S368>/Switch5' incorporates:
   *  Constant: '<S368>/Constant1'
   *  Switch: '<S368>/Switch1'
   *  UnaryMinus: '<S368>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S368>/Constant4'
     *  Constant: '<S368>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S368>/Constant2'
     *  Constant: '<S368>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S368>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S368>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S368>/Constant10'
     *  Constant: '<S368>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S368>/Constant7'
     *  Constant: '<S368>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S368>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S368>/Lookup Table Dynamic1'
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

    /* Switch: '<S368>/Switch3' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S368>/Constant3'
     *  UnaryMinus: '<S368>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S368>/Switch3' */
  }

  /* End of Switch: '<S368>/Switch5' */

  /* Product: '<S368>/Product' incorporates:
   *  Switch: '<S368>/Switch1'
   */
  rtb_Switch2_jm = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S375>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Optimized_Module_Angle -
    rtb_uDLookupTable_l;

  /* Switch: '<S376>/Switch2' incorporates:
   *  RelationalOperator: '<S376>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_jm)) {
    /* Switch: '<S368>/Switch2' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S368>/Constant3'
     *  Switch: '<S368>/Switch4'
     *  UnaryMinus: '<S368>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S368>/Switch4' incorporates:
       *  Constant: '<S368>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S368>/Product2' incorporates:
     *  Switch: '<S368>/Switch2'
     */
    rtb_Switch2_jm = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_3;

    /* Switch: '<S376>/Switch' incorporates:
     *  RelationalOperator: '<S376>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_jm)) {
      rtb_Switch2_jm = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S376>/Switch' */
  }

  /* End of Switch: '<S376>/Switch2' */

  /* Sum: '<S375>/Sum' */
  rtb_Switch2_jm += rtb_uDLookupTable_l;

  /* Switch: '<S358>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S358>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S358>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_jm;
  }

  /* End of Switch: '<S358>/Switch' */

  /* Fcn: '<S399>/r->x' incorporates:
   *  Fcn: '<S404>/r->x'
   *  Fcn: '<S409>/r->x'
   *  Fcn: '<S414>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S393>/Add' incorporates:
   *  Fcn: '<S399>/r->x'
   *  Fcn: '<S400>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;

  /* Fcn: '<S399>/theta->y' incorporates:
   *  Fcn: '<S404>/theta->y'
   *  Fcn: '<S409>/theta->y'
   *  Fcn: '<S414>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_3 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S393>/Add' incorporates:
   *  Fcn: '<S399>/theta->y'
   *  Fcn: '<S400>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S394>/Add' incorporates:
   *  Fcn: '<S405>/r->x'
   *  Fcn: '<S405>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S395>/Add' incorporates:
   *  Fcn: '<S410>/r->x'
   *  Fcn: '<S410>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S396>/Add' incorporates:
   *  Fcn: '<S415>/r->x'
   *  Fcn: '<S415>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_3;

  /* Fcn: '<S413>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S416>/Compare' incorporates:
   *  Constant: '<S416>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_o5 == 0.0);

  /* Switch: '<S412>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S412>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S412>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S412>/Switch1' */

  /* Fcn: '<S398>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S401>/Compare' incorporates:
   *  Constant: '<S401>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 == 0.0);

  /* Switch: '<S397>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S397>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S397>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S397>/Switch1' */

  /* Fcn: '<S403>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S406>/Compare' incorporates:
   *  Constant: '<S406>/Constant'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Switch2_g == 0.0);

  /* Switch: '<S402>/Switch1' */
  if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S402>/Switch1' incorporates:
     *  Constant: '<S402>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S402>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S402>/Switch1' */

  /* Fcn: '<S408>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S411>/Compare' incorporates:
   *  Constant: '<S411>/Constant'
   */
  rtb_AT_Cage_Right_Start_Blue_Ac = (rtb_Init == 0.0);

  /* Switch: '<S407>/Switch1' */
  if (rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S407>/Switch1' incorporates:
     *  Constant: '<S407>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S407>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S407>/Switch1' */

  /* Product: '<S392>/Divide' incorporates:
   *  Abs: '<S392>/Abs'
   *  Abs: '<S392>/Abs1'
   *  Abs: '<S392>/Abs2'
   *  Abs: '<S392>/Abs3'
   *  Constant: '<S392>/Constant'
   *  MinMax: '<S392>/Max'
   */
  rtb_Add_o5 = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S392>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S412>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S412>/Switch' incorporates:
     *  Fcn: '<S413>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S412>/Switch' */

  /* Trigonometry: '<S348>/Cos4' incorporates:
   *  Switch: '<S337>/Angle_Switch'
   *  Trigonometry: '<S347>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S348>/Sin5' incorporates:
   *  UnaryMinus: '<S346>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S348>/Sin4' incorporates:
   *  Switch: '<S337>/Angle_Switch'
   *  Trigonometry: '<S347>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_3 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S348>/Cos5' incorporates:
   *  UnaryMinus: '<S346>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S348>/Subtract1' incorporates:
   *  Product: '<S348>/Product2'
   *  Product: '<S348>/Product3'
   *  Trigonometry: '<S348>/Cos4'
   *  Trigonometry: '<S348>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_h3 *
    rtb_Optimized_Module_Angle) + (rtb_Rotationmatrixfromlocalto_3 * rtb_Init);

  /* Sum: '<S348>/Subtract' incorporates:
   *  Product: '<S348>/Product'
   *  Product: '<S348>/Product1'
   *  Trigonometry: '<S348>/Cos4'
   *  Trigonometry: '<S348>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_0 = (rtb_Subtract_h3 * rtb_Init) -
    (rtb_Rotationmatrixfromlocalto_3 * rtb_Optimized_Module_Angle);

  /* Math: '<S348>/Hypot' */
  rtb_Minus_k_idx_1 = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
    rtb_Rotationmatrixfromlocalto_1);

  /* Switch: '<S348>/Switch' incorporates:
   *  Constant: '<S348>/Constant'
   *  Constant: '<S348>/Constant1'
   *  Constant: '<S349>/Constant'
   *  Product: '<S348>/Divide'
   *  Product: '<S348>/Divide1'
   *  RelationalOperator: '<S349>/Compare'
   *  Switch: '<S348>/Switch1'
   */
  if (rtb_Minus_k_idx_1 > 1.0E-6) {
    rtb_Switch2_g = rtb_Rotationmatrixfromlocalto_1 / rtb_Minus_k_idx_1;
    rtb_Init = rtb_Rotationmatrixfromlocalto_0 / rtb_Minus_k_idx_1;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S348>/Switch' */

  /* Switch: '<S337>/Speed_Switch' incorporates:
   *  Abs: '<S337>/Abs'
   *  Constant: '<S345>/Constant'
   *  RelationalOperator: '<S345>/Compare'
   *  Switch: '<S337>/Angle_Switch'
   *  Trigonometry: '<S347>/Atan1'
   *  Trigonometry: '<S348>/Atan1'
   *  UnaryMinus: '<S337>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S347>/Subtract1' incorporates:
     *  Product: '<S347>/Product2'
     *  Product: '<S347>/Product3'
     *  UnaryMinus: '<S337>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_h3 *
      Code_Gen_Model_ConstB.Sin5_c) + (rtb_Rotationmatrixfromlocalto_3 *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S347>/Subtract' incorporates:
     *  Product: '<S347>/Product'
     *  Product: '<S347>/Product1'
     */
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Subtract_h3 *
      Code_Gen_Model_ConstB.Cos5_b) - (rtb_Rotationmatrixfromlocalto_3 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S347>/Hypot' */
    rtb_Rotationmatrixfromlocalto_3 = rt_hypotd_snf
      (rtb_Rotationmatrixfromlocalto_0, rtb_Rotationmatrixfromlocalto_1);

    /* Switch: '<S347>/Switch1' incorporates:
     *  Constant: '<S347>/Constant'
     *  Constant: '<S347>/Constant1'
     *  Constant: '<S350>/Constant'
     *  Product: '<S347>/Divide'
     *  Product: '<S347>/Divide1'
     *  RelationalOperator: '<S350>/Compare'
     *  Switch: '<S347>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_3 > 1.0E-6) {
      rtb_Rotationmatrixfromlocalto_0 /= rtb_Rotationmatrixfromlocalto_3;
      rtb_Rotationmatrixfromlocalto_3 = rtb_Rotationmatrixfromlocalto_1 /
        rtb_Rotationmatrixfromlocalto_3;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = 1.0;
      rtb_Rotationmatrixfromlocalto_3 = 0.0;
    }

    /* End of Switch: '<S347>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Rotationmatrixfromlocalto_3,
      rtb_Rotationmatrixfromlocalto_0);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S340>/Product2' incorporates:
   *  Constant: '<S340>/Constant'
   *  Switch: '<S337>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S335>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S335>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S338>/Add' incorporates:
   *  Sum: '<S339>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S270>/Product' incorporates:
   *  Abs: '<S335>/Abs'
   *  Abs: '<S338>/Abs'
   *  Constant: '<S341>/Constant'
   *  Constant: '<S351>/Constant3'
   *  Constant: '<S351>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S335>/OR'
   *  Lookup_n-D: '<S338>/1-D Lookup Table'
   *  Math: '<S351>/Math Function'
   *  RelationalOperator: '<S335>/Equal1'
   *  RelationalOperator: '<S341>/Compare'
   *  Signum: '<S335>/Sign'
   *  Signum: '<S335>/Sign1'
   *  Sum: '<S338>/Add'
   *  Sum: '<S351>/Add1'
   *  Sum: '<S351>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled33, Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S336>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_g -
    Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S343>/Sum1' incorporates:
   *  Constant: '<S336>/Constant2'
   *  Product: '<S343>/Product'
   *  Sum: '<S343>/Sum'
   *  UnitDelay: '<S343>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_3 = ((rtb_Rotationmatrixfromlocalto_0 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S336>/Product' incorporates:
   *  Constant: '<S336>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Rotationmatrixfromlocalto_3 *
    Drive_Motor_Control_D;

  /* Sum: '<S342>/Diff' incorporates:
   *  UnitDelay: '<S342>/UD'
   *
   * Block description for '<S342>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S342>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
    Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S336>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S336>/Add' incorporates:
   *  Gain: '<S336>/Gain'
   *  Gain: '<S336>/Gain1'
   *  Saturate: '<S336>/Saturation'
   */
  rtb_Minus_k_idx_1 = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                       (Drive_Motor_Control_P * rtb_Rotationmatrixfromlocalto_0))
    + rtb_Minus_k_idx_0;

  /* Switch: '<S336>/Switch' incorporates:
   *  Constant: '<S336>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S336>/Sum2' incorporates:
     *  Gain: '<S336>/Gain2'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_0 = (Drive_Motor_Control_I *
      rtb_Rotationmatrixfromlocalto_0) + Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S336>/Subtract' incorporates:
     *  Constant: '<S336>/Constant'
     */
    rtb_Switch2_az = 1.0 - rtb_Minus_k_idx_1;

    /* Switch: '<S344>/Switch2' incorporates:
     *  Constant: '<S336>/Constant'
     *  RelationalOperator: '<S344>/LowerRelop1'
     *  Sum: '<S336>/Subtract'
     */
    if (!(rtb_Rotationmatrixfromlocalto_0 > (1.0 - rtb_Minus_k_idx_1))) {
      /* Sum: '<S336>/Subtract1' incorporates:
       *  Constant: '<S336>/Constant1'
       */
      rtb_Switch2_az = -1.0 - rtb_Minus_k_idx_1;

      /* Switch: '<S344>/Switch' incorporates:
       *  Constant: '<S336>/Constant1'
       *  RelationalOperator: '<S344>/UpperRelop'
       *  Sum: '<S336>/Subtract1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_0 < (-1.0 - rtb_Minus_k_idx_1))) {
        rtb_Switch2_az = rtb_Rotationmatrixfromlocalto_0;
      }

      /* End of Switch: '<S344>/Switch' */
    }

    /* End of Switch: '<S344>/Switch2' */

    /* Saturate: '<S336>/Saturation1' */
    if (rtb_Switch2_az > Drive_Motor_Control_I_UL) {
      rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_az < Drive_Motor_Control_I_LL) {
      rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_az;
    }

    /* End of Saturate: '<S336>/Saturation1' */
  } else {
    rtb_Rotationmatrixfromlocalto_0 = 0.0;
  }

  /* End of Switch: '<S336>/Switch' */

  /* Sum: '<S336>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Minus_k_idx_1 + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S336>/Saturation2' */
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

  /* End of Saturate: '<S336>/Saturation2' */

  /* Switch: '<S397>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S397>/Switch' incorporates:
     *  Fcn: '<S398>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S397>/Switch' */

  /* Trigonometry: '<S285>/Cos4' incorporates:
   *  Switch: '<S274>/Angle_Switch'
   *  Trigonometry: '<S284>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S285>/Sin5' incorporates:
   *  UnaryMinus: '<S283>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S285>/Sin4' incorporates:
   *  Switch: '<S274>/Angle_Switch'
   *  Trigonometry: '<S284>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S285>/Cos5' incorporates:
   *  UnaryMinus: '<S283>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S285>/Subtract1' incorporates:
   *  Product: '<S285>/Product2'
   *  Product: '<S285>/Product3'
   *  Trigonometry: '<S285>/Cos4'
   *  Trigonometry: '<S285>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv
    * rtb_Init);

  /* Sum: '<S285>/Subtract' incorporates:
   *  Product: '<S285>/Product'
   *  Product: '<S285>/Product1'
   *  Trigonometry: '<S285>/Cos4'
   *  Trigonometry: '<S285>/Sin4'
   */
  rtb_Switch2_az = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S285>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Switch2_az, rtb_Minus_k_idx_1);

  /* Switch: '<S285>/Switch' incorporates:
   *  Constant: '<S285>/Constant'
   *  Constant: '<S285>/Constant1'
   *  Constant: '<S286>/Constant'
   *  Product: '<S285>/Divide'
   *  Product: '<S285>/Divide1'
   *  RelationalOperator: '<S286>/Compare'
   *  Switch: '<S285>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_Minus_k_idx_1 / rtb_Hypot_g5;
    rtb_Init = rtb_Switch2_az / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S285>/Switch' */

  /* Product: '<S392>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S274>/Speed_Switch' incorporates:
   *  Abs: '<S274>/Abs'
   *  Constant: '<S282>/Constant'
   *  RelationalOperator: '<S282>/Compare'
   *  Switch: '<S274>/Angle_Switch'
   *  Trigonometry: '<S284>/Atan1'
   *  Trigonometry: '<S285>/Atan1'
   *  UnaryMinus: '<S274>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S284>/Subtract1' incorporates:
     *  Product: '<S284>/Product2'
     *  Product: '<S284>/Product3'
     *  UnaryMinus: '<S274>/Unary Minus'
     */
    rtb_Minus_k_idx_1 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S284>/Subtract' incorporates:
     *  Product: '<S284>/Product'
     *  Product: '<S284>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S284>/Hypot' */
    rtb_Switch2_az = rt_hypotd_snf(rtb_Hypot_g5, rtb_Minus_k_idx_1);

    /* Switch: '<S284>/Switch1' incorporates:
     *  Constant: '<S284>/Constant'
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S287>/Constant'
     *  Product: '<S284>/Divide'
     *  Product: '<S284>/Divide1'
     *  RelationalOperator: '<S287>/Compare'
     *  Switch: '<S284>/Switch'
     */
    if (rtb_Switch2_az > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Switch2_az;
      rtb_Minus_k_idx_1 /= rtb_Switch2_az;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Minus_k_idx_1 = 0.0;
    }

    /* End of Switch: '<S284>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Minus_k_idx_1, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S277>/Product2' incorporates:
   *  Constant: '<S277>/Constant'
   *  Switch: '<S274>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S272>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S272>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S275>/Add' incorporates:
   *  Sum: '<S276>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S267>/Product' incorporates:
   *  Abs: '<S272>/Abs'
   *  Abs: '<S275>/Abs'
   *  Constant: '<S278>/Constant'
   *  Constant: '<S288>/Constant3'
   *  Constant: '<S288>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S272>/OR'
   *  Lookup_n-D: '<S275>/1-D Lookup Table'
   *  Math: '<S288>/Math Function'
   *  RelationalOperator: '<S272>/Equal1'
   *  RelationalOperator: '<S278>/Compare'
   *  Signum: '<S272>/Sign'
   *  Signum: '<S272>/Sign1'
   *  Sum: '<S275>/Add'
   *  Sum: '<S288>/Add1'
   *  Sum: '<S288>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
     Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S273>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S280>/Sum1' incorporates:
   *  Constant: '<S273>/Constant2'
   *  Product: '<S280>/Product'
   *  Sum: '<S280>/Sum'
   *  UnitDelay: '<S280>/Unit Delay1'
   */
  rtb_Minus_k_idx_1 = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                       Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S273>/Product' incorporates:
   *  Constant: '<S273>/Constant3'
   */
  rtb_Switch2_az = rtb_Minus_k_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S279>/Diff' incorporates:
   *  UnitDelay: '<S279>/UD'
   *
   * Block description for '<S279>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S279>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_az - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S273>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S273>/Add' incorporates:
   *  Gain: '<S273>/Gain'
   *  Gain: '<S273>/Gain1'
   *  Saturate: '<S273>/Saturation'
   */
  rtb_Add_ju = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S273>/Switch' incorporates:
   *  Constant: '<S273>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S273>/Sum2' incorporates:
     *  Gain: '<S273>/Gain2'
     *  UnitDelay: '<S273>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S273>/Subtract' incorporates:
     *  Constant: '<S273>/Constant'
     */
    rtb_Switch2_ah = 1.0 - rtb_Add_ju;

    /* Switch: '<S281>/Switch2' incorporates:
     *  Constant: '<S273>/Constant'
     *  RelationalOperator: '<S281>/LowerRelop1'
     *  Sum: '<S273>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ju))) {
      /* Sum: '<S273>/Subtract1' incorporates:
       *  Constant: '<S273>/Constant1'
       */
      rtb_Switch2_ah = -1.0 - rtb_Add_ju;

      /* Switch: '<S281>/Switch' incorporates:
       *  Constant: '<S273>/Constant1'
       *  RelationalOperator: '<S281>/UpperRelop'
       *  Sum: '<S273>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_ju))) {
        rtb_Switch2_ah = rtb_Hypot_g5;
      }

      /* End of Switch: '<S281>/Switch' */
    }

    /* End of Switch: '<S281>/Switch2' */

    /* Saturate: '<S273>/Saturation1' */
    if (rtb_Switch2_ah > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_ah < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_ah;
    }

    /* End of Saturate: '<S273>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S273>/Switch' */

  /* Sum: '<S273>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ju + rtb_Hypot_g5;

  /* Saturate: '<S273>/Saturation2' */
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

  /* End of Saturate: '<S273>/Saturation2' */

  /* Sum: '<S289>/Add1' incorporates:
   *  Constant: '<S289>/Constant3'
   *  Constant: '<S289>/Constant4'
   *  Math: '<S289>/Math Function'
   *  Sum: '<S289>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S291>/Sum1' incorporates:
   *  Constant: '<S276>/Constant2'
   *  Product: '<S291>/Product'
   *  Sum: '<S291>/Sum'
   *  UnitDelay: '<S291>/Unit Delay1'
   */
  rtb_Add_ju = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S276>/Product' incorporates:
   *  Constant: '<S276>/Constant3'
   */
  rtb_Switch2_ah = rtb_Add_ju * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Switch2_ah - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S276>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S276>/Add' incorporates:
   *  Gain: '<S276>/Gain1'
   *  Saturate: '<S276>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S276>/Subtract' incorporates:
   *  Constant: '<S276>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_fn;

  /* Sum: '<S276>/Sum2' incorporates:
   *  Gain: '<S276>/Gain2'
   *  UnitDelay: '<S276>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S292>/Switch2' incorporates:
   *  RelationalOperator: '<S292>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S276>/Constant1'
     *  RelationalOperator: '<S292>/UpperRelop'
     *  Sum: '<S276>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Init = -1.0 - rtb_Add_fn;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S292>/Switch' */
  }

  /* End of Switch: '<S292>/Switch2' */

  /* Saturate: '<S276>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S276>/Saturation1' */

  /* Sum: '<S276>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S276>/Saturation2' */
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

  /* End of Saturate: '<S276>/Saturation2' */

  /* Switch: '<S402>/Switch' */
  if (!rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S402>/Switch' incorporates:
     *  Fcn: '<S403>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S402>/Switch' */

  /* Trigonometry: '<S306>/Cos4' incorporates:
   *  Switch: '<S295>/Angle_Switch'
   *  Trigonometry: '<S305>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S306>/Sin5' incorporates:
   *  UnaryMinus: '<S304>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S306>/Sin4' incorporates:
   *  Switch: '<S295>/Angle_Switch'
   *  Trigonometry: '<S305>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S306>/Cos5' incorporates:
   *  UnaryMinus: '<S304>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S306>/Subtract1' incorporates:
   *  Product: '<S306>/Product2'
   *  Product: '<S306>/Product3'
   *  Trigonometry: '<S306>/Cos4'
   *  Trigonometry: '<S306>/Sin4'
   */
  rtb_Add_fn = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S306>/Subtract' incorporates:
   *  Product: '<S306>/Product'
   *  Product: '<S306>/Product1'
   *  Trigonometry: '<S306>/Cos4'
   *  Trigonometry: '<S306>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S306>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_fn);

  /* Switch: '<S306>/Switch' incorporates:
   *  Constant: '<S306>/Constant'
   *  Constant: '<S306>/Constant1'
   *  Constant: '<S307>/Constant'
   *  Product: '<S306>/Divide'
   *  Product: '<S306>/Divide1'
   *  RelationalOperator: '<S307>/Compare'
   *  Switch: '<S306>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_fn / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S306>/Switch' */

  /* Product: '<S392>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S295>/Speed_Switch' incorporates:
   *  Abs: '<S295>/Abs'
   *  Constant: '<S303>/Constant'
   *  RelationalOperator: '<S303>/Compare'
   *  Switch: '<S295>/Angle_Switch'
   *  Trigonometry: '<S305>/Atan1'
   *  Trigonometry: '<S306>/Atan1'
   *  UnaryMinus: '<S295>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S305>/Subtract1' incorporates:
     *  Product: '<S305>/Product2'
     *  Product: '<S305>/Product3'
     *  UnaryMinus: '<S295>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S305>/Subtract' incorporates:
     *  Product: '<S305>/Product'
     *  Product: '<S305>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S305>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_fn);

    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S305>/Constant'
     *  Constant: '<S305>/Constant1'
     *  Constant: '<S308>/Constant'
     *  Product: '<S305>/Divide'
     *  Product: '<S305>/Divide1'
     *  RelationalOperator: '<S308>/Compare'
     *  Switch: '<S305>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_fn /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S305>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S298>/Product2' incorporates:
   *  Constant: '<S298>/Constant'
   *  Switch: '<S295>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S293>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S293>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S296>/Add' incorporates:
   *  Sum: '<S297>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S268>/Product' incorporates:
   *  Abs: '<S293>/Abs'
   *  Abs: '<S296>/Abs'
   *  Constant: '<S299>/Constant'
   *  Constant: '<S309>/Constant3'
   *  Constant: '<S309>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S293>/OR'
   *  Lookup_n-D: '<S296>/1-D Lookup Table'
   *  Math: '<S309>/Math Function'
   *  RelationalOperator: '<S293>/Equal1'
   *  RelationalOperator: '<S299>/Compare'
   *  Signum: '<S293>/Sign'
   *  Signum: '<S293>/Sign1'
   *  Sum: '<S296>/Add'
   *  Sum: '<S309>/Add1'
   *  Sum: '<S309>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
     Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S294>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S301>/Sum1' incorporates:
   *  Constant: '<S294>/Constant2'
   *  Product: '<S301>/Product'
   *  Sum: '<S301>/Sum'
   *  UnitDelay: '<S301>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S294>/Product' incorporates:
   *  Constant: '<S294>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_fn * Drive_Motor_Control_D;

  /* Sum: '<S300>/Diff' incorporates:
   *  UnitDelay: '<S300>/UD'
   *
   * Block description for '<S300>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S300>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S294>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S294>/Add' incorporates:
   *  Gain: '<S294>/Gain'
   *  Gain: '<S294>/Gain1'
   *  Saturate: '<S294>/Saturation'
   */
  rtb_Add_c = ((Drive_Motor_Control_FF * rtb_Switch2_g) + (Drive_Motor_Control_P
    * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S294>/Switch' incorporates:
   *  Constant: '<S294>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S294>/Sum2' incorporates:
     *  Gain: '<S294>/Gain2'
     *  UnitDelay: '<S294>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S294>/Subtract' incorporates:
     *  Constant: '<S294>/Constant'
     */
    rtb_Switch2_e = 1.0 - rtb_Add_c;

    /* Switch: '<S302>/Switch2' incorporates:
     *  Constant: '<S294>/Constant'
     *  RelationalOperator: '<S302>/LowerRelop1'
     *  Sum: '<S294>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_c))) {
      /* Sum: '<S294>/Subtract1' incorporates:
       *  Constant: '<S294>/Constant1'
       */
      rtb_Switch2_e = -1.0 - rtb_Add_c;

      /* Switch: '<S302>/Switch' incorporates:
       *  Constant: '<S294>/Constant1'
       *  RelationalOperator: '<S302>/UpperRelop'
       *  Sum: '<S294>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_c))) {
        rtb_Switch2_e = rtb_Hypot_b;
      }

      /* End of Switch: '<S302>/Switch' */
    }

    /* End of Switch: '<S302>/Switch2' */

    /* Saturate: '<S294>/Saturation1' */
    if (rtb_Switch2_e > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_e < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_e;
    }

    /* End of Saturate: '<S294>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S294>/Switch' */

  /* Sum: '<S294>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_c + rtb_Hypot_b;

  /* Saturate: '<S294>/Saturation2' */
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

  /* End of Saturate: '<S294>/Saturation2' */

  /* Sum: '<S310>/Add1' incorporates:
   *  Constant: '<S310>/Constant3'
   *  Constant: '<S310>/Constant4'
   *  Math: '<S310>/Math Function'
   *  Sum: '<S310>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S312>/Sum1' incorporates:
   *  Constant: '<S297>/Constant2'
   *  Product: '<S312>/Product'
   *  Sum: '<S312>/Sum'
   *  UnitDelay: '<S312>/Unit Delay1'
   */
  rtb_Add_c = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
               Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S297>/Product' incorporates:
   *  Constant: '<S297>/Constant3'
   */
  rtb_Switch2_e = rtb_Add_c * Steering_Motor_Control_D;

  /* Sum: '<S311>/Diff' incorporates:
   *  UnitDelay: '<S311>/UD'
   *
   * Block description for '<S311>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S311>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_e - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S297>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S297>/Add' incorporates:
   *  Gain: '<S297>/Gain1'
   *  Saturate: '<S297>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S297>/Subtract' incorporates:
   *  Constant: '<S297>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S297>/Sum2' incorporates:
   *  Gain: '<S297>/Gain2'
   *  UnitDelay: '<S297>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S313>/Switch2' incorporates:
   *  RelationalOperator: '<S313>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S313>/Switch' incorporates:
     *  Constant: '<S297>/Constant1'
     *  RelationalOperator: '<S313>/UpperRelop'
     *  Sum: '<S297>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S313>/Switch' */
  }

  /* End of Switch: '<S313>/Switch2' */

  /* Saturate: '<S297>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S297>/Saturation1' */

  /* Sum: '<S297>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S297>/Saturation2' */
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

  /* End of Saturate: '<S297>/Saturation2' */

  /* Switch: '<S407>/Switch' */
  if (!rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S407>/Switch' incorporates:
     *  Fcn: '<S408>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S407>/Switch' */

  /* Trigonometry: '<S327>/Cos4' incorporates:
   *  Switch: '<S316>/Angle_Switch'
   *  Trigonometry: '<S326>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S327>/Sin5' incorporates:
   *  UnaryMinus: '<S325>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S327>/Sin4' incorporates:
   *  Switch: '<S316>/Angle_Switch'
   *  Trigonometry: '<S326>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S327>/Cos5' incorporates:
   *  UnaryMinus: '<S325>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S327>/Subtract1' incorporates:
   *  Product: '<S327>/Product2'
   *  Product: '<S327>/Product3'
   *  Trigonometry: '<S327>/Cos4'
   *  Trigonometry: '<S327>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S327>/Subtract' incorporates:
   *  Product: '<S327>/Product'
   *  Product: '<S327>/Product1'
   *  Trigonometry: '<S327>/Cos4'
   *  Trigonometry: '<S327>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S327>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S327>/Switch' incorporates:
   *  Constant: '<S327>/Constant'
   *  Constant: '<S327>/Constant1'
   *  Constant: '<S328>/Constant'
   *  Product: '<S327>/Divide'
   *  Product: '<S327>/Divide1'
   *  RelationalOperator: '<S328>/Compare'
   *  Switch: '<S327>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Switch2_g /= rtb_Init;
    rtb_Init = rtb_uDLookupTable_l / rtb_Init;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S327>/Switch' */

  /* Product: '<S392>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S316>/Speed_Switch' incorporates:
   *  Abs: '<S316>/Abs'
   *  Constant: '<S324>/Constant'
   *  RelationalOperator: '<S324>/Compare'
   *  Switch: '<S316>/Angle_Switch'
   *  Trigonometry: '<S326>/Atan1'
   *  Trigonometry: '<S327>/Atan1'
   *  UnaryMinus: '<S316>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S326>/Subtract1' incorporates:
     *  Product: '<S326>/Product2'
     *  Product: '<S326>/Product3'
     *  UnaryMinus: '<S316>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S326>/Subtract' incorporates:
     *  Product: '<S326>/Product'
     *  Product: '<S326>/Product1'
     */
    rtb_Subtract_h3 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S326>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_h3, rtb_Switch2_g);

    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S326>/Constant'
     *  Constant: '<S326>/Constant1'
     *  Constant: '<S329>/Constant'
     *  Product: '<S326>/Divide'
     *  Product: '<S326>/Divide1'
     *  RelationalOperator: '<S329>/Compare'
     *  Switch: '<S326>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_h3 /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_h3 = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S326>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_h3);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S319>/Product2' incorporates:
   *  Constant: '<S319>/Constant'
   *  Switch: '<S316>/Speed_Switch'
   */
  rtb_Add_o5 = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S314>/Sign' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Add_o5 > 0.0);
  }

  /* Signum: '<S314>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S317>/Add' incorporates:
   *  Sum: '<S318>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S269>/Product' incorporates:
   *  Abs: '<S314>/Abs'
   *  Abs: '<S317>/Abs'
   *  Constant: '<S320>/Constant'
   *  Constant: '<S330>/Constant3'
   *  Constant: '<S330>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S314>/OR'
   *  Lookup_n-D: '<S317>/1-D Lookup Table'
   *  Math: '<S330>/Math Function'
   *  RelationalOperator: '<S314>/Equal1'
   *  RelationalOperator: '<S320>/Compare'
   *  Signum: '<S314>/Sign'
   *  Signum: '<S314>/Sign1'
   *  Sum: '<S317>/Add'
   *  Sum: '<S330>/Add1'
   *  Sum: '<S330>/Add2'
   */
  rtb_Add_o5 = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Add_o5) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
     Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S315>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_Add_o5 - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S322>/Sum1' incorporates:
   *  Constant: '<S315>/Constant2'
   *  Product: '<S322>/Product'
   *  Sum: '<S322>/Sum'
   *  UnitDelay: '<S322>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S315>/Product' incorporates:
   *  Constant: '<S315>/Constant3'
   */
  rtb_Subtract_h3 = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S321>/Diff' incorporates:
   *  UnitDelay: '<S321>/UD'
   *
   * Block description for '<S321>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S321>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_h3 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S315>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S315>/Add' incorporates:
   *  Gain: '<S315>/Gain'
   *  Gain: '<S315>/Gain1'
   *  Saturate: '<S315>/Saturation'
   */
  rtb_Add_o5 = ((Drive_Motor_Control_FF * rtb_Add_o5) + (Drive_Motor_Control_P *
    rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S315>/Switch' incorporates:
   *  Constant: '<S315>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S315>/Sum2' incorporates:
     *  Gain: '<S315>/Gain2'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S315>/Subtract' incorporates:
     *  Constant: '<S315>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_Add_o5;

    /* Switch: '<S323>/Switch2' incorporates:
     *  Constant: '<S315>/Constant'
     *  RelationalOperator: '<S323>/LowerRelop1'
     *  Sum: '<S315>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_Add_o5))) {
      /* Sum: '<S315>/Subtract1' incorporates:
       *  Constant: '<S315>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_Add_o5;

      /* Switch: '<S323>/Switch' incorporates:
       *  Constant: '<S315>/Constant1'
       *  RelationalOperator: '<S323>/UpperRelop'
       *  Sum: '<S315>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_Add_o5))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S323>/Switch' */
    }

    /* End of Switch: '<S323>/Switch2' */

    /* Saturate: '<S315>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S315>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S315>/Switch' */

  /* Sum: '<S315>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_o5 + rtb_Integral_hv;

  /* Saturate: '<S315>/Saturation2' */
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

  /* End of Saturate: '<S315>/Saturation2' */

  /* Sum: '<S331>/Add1' incorporates:
   *  Constant: '<S331>/Constant3'
   *  Constant: '<S331>/Constant4'
   *  Math: '<S331>/Math Function'
   *  Sum: '<S331>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S333>/Sum1' incorporates:
   *  Constant: '<S318>/Constant2'
   *  Product: '<S333>/Product'
   *  Sum: '<S333>/Sum'
   *  UnitDelay: '<S333>/Unit Delay1'
   */
  rtb_Sum1_m = ((rtb_Add_o5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S318>/Product' incorporates:
   *  Constant: '<S318>/Constant3'
   */
  rtb_Product_lf = rtb_Sum1_m * Steering_Motor_Control_D;

  /* Sum: '<S332>/Diff' incorporates:
   *  UnitDelay: '<S332>/UD'
   *
   * Block description for '<S332>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S332>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S318>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S318>/Add' incorporates:
   *  Gain: '<S318>/Gain1'
   *  Saturate: '<S318>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S318>/Subtract' incorporates:
   *  Constant: '<S318>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S318>/Sum2' incorporates:
   *  Gain: '<S318>/Gain2'
   *  UnitDelay: '<S318>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S334>/Switch2' incorporates:
   *  Constant: '<S318>/Constant'
   *  RelationalOperator: '<S334>/LowerRelop1'
   *  Sum: '<S318>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S318>/Subtract1' incorporates:
     *  Constant: '<S318>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S318>/Constant1'
     *  RelationalOperator: '<S334>/UpperRelop'
     *  Sum: '<S318>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S334>/Switch' */
  }

  /* End of Switch: '<S334>/Switch2' */

  /* Saturate: '<S318>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S318>/Saturation1' */

  /* Sum: '<S318>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S318>/Saturation2' */
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

  /* End of Saturate: '<S318>/Saturation2' */

  /* Sum: '<S352>/Add1' incorporates:
   *  Constant: '<S352>/Constant3'
   *  Constant: '<S352>/Constant4'
   *  Math: '<S352>/Math Function'
   *  Sum: '<S352>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S354>/Sum1' incorporates:
   *  Constant: '<S339>/Constant2'
   *  Product: '<S354>/Product'
   *  Sum: '<S354>/Sum'
   *  UnitDelay: '<S354>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Add_o5 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S339>/Product' incorporates:
   *  Constant: '<S339>/Constant3'
   */
  rtb_Product_pz = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S353>/Diff' incorporates:
   *  UnitDelay: '<S353>/UD'
   *
   * Block description for '<S353>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S353>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S339>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S339>/Add' incorporates:
   *  Gain: '<S339>/Gain1'
   *  Saturate: '<S339>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S339>/Subtract' incorporates:
   *  Constant: '<S339>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S339>/Sum2' incorporates:
   *  Gain: '<S339>/Gain2'
   *  UnitDelay: '<S339>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S355>/Switch2' incorporates:
   *  Constant: '<S339>/Constant'
   *  RelationalOperator: '<S355>/LowerRelop1'
   *  Sum: '<S339>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S339>/Subtract1' incorporates:
     *  Constant: '<S339>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S355>/Switch' incorporates:
     *  Constant: '<S339>/Constant1'
     *  RelationalOperator: '<S355>/UpperRelop'
     *  Sum: '<S339>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S355>/Switch' */
  }

  /* End of Switch: '<S355>/Switch2' */

  /* Saturate: '<S339>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S339>/Saturation1' */

  /* Sum: '<S339>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S339>/Saturation2' */
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

  /* End of Saturate: '<S339>/Saturation2' */

  /* MinMax: '<S10>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S10>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S10>/Range of Motion Protection Limit1'
   *  Merge: '<S18>/Merge13'
   */
  rtb_Add_o5 = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired_merge,
    look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge,
                  Code_Gen_Model_ConstP.pooled35, Code_Gen_Model_ConstP.pooled34,
                  95U)), look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.pooled35, Code_Gen_Model_ConstP.pooled34, 95U));

  /* Switch: '<S10>/Switch3' incorporates:
   *  Abs: '<S10>/Abs1'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant6'
   *  Constant: '<S86>/Constant'
   *  Logic: '<S10>/AND'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S86>/Compare'
   *  UnitDelay: '<S10>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired_merge < rtb_Add_o5) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S10>/Add' incorporates:
   *  Sum: '<S10>/Subtract'
   *  Switch: '<S10>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Add_o5 -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S10>/Logical Operator3' incorporates:
   *  Constant: '<S87>/Constant'
   *  RelationalOperator: '<S87>/Compare'
   */
  rtb_Compare_cid = (rtb_Compare_cid ||
                     (Code_Gen_Model_B.Elevator_Height_Desired_merge == 0.0));

  /* Gain: '<S89>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S10>/Logical Operator' incorporates:
   *  Logic: '<S10>/Logical Operator2'
   *  Logic: '<S10>/NOT'
   *  Logic: '<S10>/NOT2'
   *  Logic: '<S10>/OR'
   */
  rtb_Is_Absolute_Steering = (((!rtb_Compare_cid) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable_merge)) && ((!rtb_Compare_pd) && (
    !rtb_Compare)));

  /* Switch: '<S89>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S89>/Switch1' incorporates:
     *  UnitDelay: '<S98>/Delay Input1'
     *
     * Block description for '<S98>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S89>/Switch' incorporates:
       *  Constant: '<S89>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S89>/Sum2' incorporates:
       *  Gain: '<S89>/Gain2'
       *  UnitDelay: '<S89>/Unit Delay'
       */
      rtb_Add_o5 = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S89>/Subtract' incorporates:
       *  Constant: '<S89>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S99>/Switch2' incorporates:
       *  RelationalOperator: '<S99>/LowerRelop1'
       */
      if (!(rtb_Add_o5 > rtb_Switch2_g)) {
        /* Sum: '<S89>/Subtract1' incorporates:
         *  Constant: '<S89>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S99>/Switch' incorporates:
         *  RelationalOperator: '<S99>/UpperRelop'
         */
        if (!(rtb_Add_o5 < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Add_o5;
        }

        /* End of Switch: '<S99>/Switch' */
      }

      /* End of Switch: '<S99>/Switch2' */

      /* Saturate: '<S89>/Saturation1' */
      if (rtb_Switch2_g > Elevator_Int_UL) {
        /* Switch: '<S89>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_g < Elevator_Int_LL) {
        /* Switch: '<S89>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S89>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_g;
      }

      /* End of Saturate: '<S89>/Saturation1' */
    }

    /* End of Switch: '<S89>/Switch1' */
  } else {
    /* Switch: '<S89>/Switch' incorporates:
     *  Constant: '<S89>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S89>/Switch' */

  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S10>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S10>/Switch4' */
    if (rtb_Compare_cid) {
      /* Switch: '<S10>/Switch5' incorporates:
       *  Abs: '<S10>/Abs'
       *  Constant: '<S10>/Constant7'
       *  Constant: '<S10>/Constant8'
       *  Constant: '<S85>/Constant'
       *  RelationalOperator: '<S85>/Compare'
       */
      if (fabs(Code_Gen_Model_B.Elevator_Error) <= Elevator_Error_Bottom_Disable)
      {
        rtb_Add_o5 = Elevator_Bottom_DC;
      } else {
        rtb_Add_o5 = Elevator_Total_LL;
      }

      /* End of Switch: '<S10>/Switch5' */
    } else {
      /* Sum: '<S89>/Add1' */
      rtb_Switch2_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S89>/Saturation2' */
      if (rtb_Switch2_g > Elevator_Total_UL) {
        rtb_Switch2_g = Elevator_Total_UL;
      } else if (rtb_Switch2_g < Elevator_Total_LL) {
        rtb_Switch2_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S89>/Saturation2' */

      /* Switch: '<S10>/Switch1' incorporates:
       *  Constant: '<S10>/Constant1'
       *  Constant: '<S10>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Add_o5 = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Add_o5 = 1.0;
      }

      /* End of Switch: '<S10>/Switch1' */

      /* Switch: '<S90>/Switch2' incorporates:
       *  RelationalOperator: '<S90>/LowerRelop1'
       */
      if (!(rtb_Switch2_g > rtb_Add_o5)) {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S10>/Constant3'
         *  Constant: '<S10>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Add_o5 = 0.0;
        } else {
          rtb_Add_o5 = -1.0;
        }

        /* End of Switch: '<S10>/Switch' */

        /* Switch: '<S90>/Switch' incorporates:
         *  RelationalOperator: '<S90>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_Add_o5)) {
          rtb_Add_o5 = rtb_Switch2_g;
        }

        /* End of Switch: '<S90>/Switch' */
      }

      /* End of Switch: '<S90>/Switch2' */
    }

    /* End of Switch: '<S10>/Switch4' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S10>/Switch2' */

  /* UnitDelay: '<S88>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S88>/Abs' incorporates:
   *  Sum: '<S88>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S88>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S88>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S88>/Product1' incorporates:
   *  Signum: '<S88>/Sign1'
   *  Signum: '<S88>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S88>/Switch' incorporates:
   *  Constant: '<S88>/Constant'
   *  Constant: '<S91>/Constant'
   *  Constant: '<S92>/Constant'
   *  Logic: '<S88>/or'
   *  Product: '<S88>/Product1'
   *  RelationalOperator: '<S91>/Compare'
   *  RelationalOperator: '<S92>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S88>/Switch' */

  /* RelationalOperator: '<S93>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   */
  rtb_Compare_cid = (rtb_Add_o5 == 0.0);

  /* Switch: '<S88>/Switch5' */
  if (rtb_Compare_cid) {
    /* SignalConversion generated from: '<S88>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S88>/Constant4'
     *  Constant: '<S88>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S88>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S88>/Constant2'
     *  Constant: '<S88>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S88>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S88>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S88>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S88>/Constant10'
     *  Constant: '<S88>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S88>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S88>/Constant7'
     *  Constant: '<S88>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S88>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S88>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S88>/Switch5' */

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Constant: '<S94>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 > 0.0);

  /* Switch: '<S88>/Switch1' incorporates:
   *  Switch: '<S88>/Switch3'
   */
  if (rtb_Compare_cid) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S88>/Switch3' incorporates:
     *  Constant: '<S88>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S88>/Product' incorporates:
   *  Switch: '<S88>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S97>/Init' incorporates:
   *  UnitDelay: '<S97>/FixPt Unit Delay1'
   *  UnitDelay: '<S97>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S97>/Init' */

  /* Sum: '<S95>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S96>/Switch2' incorporates:
   *  RelationalOperator: '<S96>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S88>/Switch2' incorporates:
     *  Constant: '<S88>/Constant1'
     *  Constant: '<S88>/Constant3'
     *  Switch: '<S88>/Switch4'
     *  UnaryMinus: '<S88>/Unary Minus1'
     */
    if (rtb_Compare_cid) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S88>/Switch4' incorporates:
       *  Constant: '<S88>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S88>/Product2' incorporates:
     *  Switch: '<S88>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S96>/Switch' incorporates:
     *  RelationalOperator: '<S96>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S96>/Switch' */
  }

  /* End of Switch: '<S96>/Switch2' */

  /* Sum: '<S95>/Sum' */
  rtb_Switch5_a = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Constant: '<S68>/Constant'
   *  Constant: '<S69>/Constant'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   */
  rtb_Compare_cid = ((Code_Gen_Model_B.Elevator_Height_Measured <
                      Elevator_Height_Coral_Arm_Low_Thresh) &&
                     (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                      Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S8>/Logical Operator4' incorporates:
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac =
    ((Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge >
      Coral_Arm_Angle_Pos_Threshold) &&
     (Code_Gen_Model_B.Coral_Arm_Angle_Measured > Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 2U);

  /* Switch: '<S74>/Switch2' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S74>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge > 90.0) {
    rtb_Add_o5 = 90.0;
  } else {
    /* Lookup_n-D: '<S8>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S11>/Switch'
     */
    rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S74>/Switch' incorporates:
     *  RelationalOperator: '<S74>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge < rtb_Add_o5)) {
      rtb_Add_o5 = Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S74>/Switch' */
  }

  /* End of Switch: '<S74>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Add_o5 -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S73>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S8>/Logical Operator2' incorporates:
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator3'
   */
  rtb_Is_Absolute_Translation_g = (((!rtb_AT_Cage_Middle_Start_Red_Ac) &&
    (!rtb_Compare_cid)) && (Code_Gen_Model_B.Reefscape_Motors_Enable_merge));

  /* Lookup_n-D: '<S8>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S73>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S73>/Switch1' incorporates:
     *  UnitDelay: '<S82>/Delay Input1'
     *
     * Block description for '<S82>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S73>/Switch' incorporates:
       *  Constant: '<S73>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S73>/Sum2' incorporates:
       *  Gain: '<S73>/Gain2'
       *  UnitDelay: '<S73>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S73>/Subtract' */
      rtb_Switch2_i = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S83>/Switch2' incorporates:
       *  RelationalOperator: '<S83>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_i)) {
        /* Sum: '<S73>/Subtract1' */
        rtb_Switch2_i = rtb_Add_o5 - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S83>/Switch' incorporates:
         *  RelationalOperator: '<S83>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_i)) {
          rtb_Switch2_i = rtb_Init;
        }

        /* End of Switch: '<S83>/Switch' */
      }

      /* End of Switch: '<S83>/Switch2' */

      /* Saturate: '<S73>/Saturation1' */
      if (rtb_Switch2_i > Coral_Arm_Int_UL) {
        /* Switch: '<S73>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_i < Coral_Arm_Int_LL) {
        /* Switch: '<S73>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S73>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_i;
      }

      /* End of Saturate: '<S73>/Saturation1' */
    }

    /* End of Switch: '<S73>/Switch1' */
  } else {
    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S73>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S73>/Switch' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Switch: '<S8>/Switch3'
     */
    if (rtb_Compare_cid) {
      rtb_Add_o5 = Coral_Arm_Neg90_DC;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant1'
       */
      rtb_Add_o5 = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S73>/Add1' incorporates:
       *  Switch: '<S8>/Switch3'
       */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S84>/Switch2' incorporates:
       *  RelationalOperator: '<S84>/LowerRelop1'
       *  RelationalOperator: '<S84>/UpperRelop'
       *  Switch: '<S84>/Switch'
       *  Switch: '<S8>/Switch3'
       */
      if (rtb_Init > rtb_Switch2_g) {
        rtb_Add_o5 = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_Add_o5)) {
        rtb_Add_o5 = rtb_Init;
      }

      /* End of Switch: '<S84>/Switch2' */
    }

    /* End of Switch: '<S8>/Switch1' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S72>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S72>/Abs' incorporates:
   *  Sum: '<S72>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S72>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S72>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S72>/Product1' incorporates:
   *  Signum: '<S72>/Sign1'
   *  Signum: '<S72>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S72>/Switch' incorporates:
   *  Constant: '<S72>/Constant'
   *  Constant: '<S75>/Constant'
   *  Constant: '<S76>/Constant'
   *  Logic: '<S72>/or'
   *  Product: '<S72>/Product1'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S72>/Switch' */

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_Compare_cid = (rtb_Add_o5 == 0.0);

  /* Switch: '<S72>/Switch5' */
  if (rtb_Compare_cid) {
    /* SignalConversion generated from: '<S72>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S72>/Constant4'
     *  Constant: '<S72>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S72>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S72>/Constant2'
     *  Constant: '<S72>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S72>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S72>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_i = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S72>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S72>/Constant10'
     *  Constant: '<S72>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S72>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S72>/Constant7'
     *  Constant: '<S72>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S72>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S72>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_i = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S72>/Switch5' */

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Add_o5 > 0.0);

  /* Switch: '<S72>/Switch1' incorporates:
   *  Switch: '<S72>/Switch3'
   */
  if (rtb_Compare_cid) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S72>/Switch3' incorporates:
     *  Constant: '<S72>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S72>/Product' incorporates:
   *  Switch: '<S72>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_i;

  /* Switch: '<S81>/Init' incorporates:
   *  UnitDelay: '<S81>/FixPt Unit Delay1'
   *  UnitDelay: '<S81>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S81>/Init' */

  /* Sum: '<S79>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S80>/Switch2' incorporates:
   *  RelationalOperator: '<S80>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S72>/Switch2' incorporates:
     *  Constant: '<S72>/Constant1'
     *  Constant: '<S72>/Constant3'
     *  Switch: '<S72>/Switch4'
     *  UnaryMinus: '<S72>/Unary Minus1'
     */
    if (rtb_Compare_cid) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S72>/Switch4' incorporates:
       *  Constant: '<S72>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S72>/Product2' incorporates:
     *  Switch: '<S72>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_i;

    /* Switch: '<S80>/Switch' incorporates:
     *  RelationalOperator: '<S80>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S80>/Switch' */
  }

  /* End of Switch: '<S80>/Switch2' */

  /* Sum: '<S79>/Sum' */
  rtb_Add_o5 = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Add_o5;

  /* RelationalOperator: '<S132>/Compare' incorporates:
   *  Constant: '<S132>/Constant'
   *  Inport: '<Root>/Joystick_Left_B5'
   */
  Code_Gen_Model_B.Winch_Cmd = (Code_Gen_Model_U.Joystick_Left_B5 != 0.0);

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
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

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* RelationalOperator: '<S106>/Compare' incorporates:
   *  Constant: '<S106>/Constant'
   */
  rtb_AT_Cage_Right_Start_Blue_Ac = (MultiportSwitch == 0);

  /* Logic: '<S12>/Logical Operator3' incorporates:
   *  Constant: '<S12>/Constant5'
   *  Logic: '<S12>/Logical Operator2'
   *  RelationalOperator: '<S12>/Relational Operator'
   */
  Compare = ((Code_Gen_Model_B.Reefscape_Motors_Enable_merge) &&
             (Code_Gen_Model_B.Elevator_Height_Desired_merge ==
              Elevator_Height_End_Game));

  /* Switch: '<S12>/Switch4' incorporates:
   *  Constant: '<S12>/Constant8'
   *  Logic: '<S12>/Logical Operator3'
   *  Switch: '<S12>/Switch6'
   *  UnitDelay: '<S12>/Unit Delay'
   */
  if (Compare && (Code_Gen_Model_B.Winch_Cmd)) {
    rtb_AT_Cage_Middle_Start_Red_Ac = true;
  } else {
    rtb_AT_Cage_Middle_Start_Red_Ac = ((!rtb_AT_Cage_Right_Start_Blue_Ac) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_gln));
  }

  /* End of Switch: '<S12>/Switch4' */

  /* Switch: '<S12>/Switch' */
  if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S103>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S103>/Compare'
     */
    if (Code_Gen_Model_U.Winch_Revs < Winch_Rev_Target) {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S12>/Constant1'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Spool_DC;
    } else {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S12>/Constant2'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Hold_DC;
    }

    /* End of Switch: '<S12>/Switch1' */
  } else {
    /* Outport: '<Root>/Winch_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant'
     */
    Code_Gen_Model_Y.Winch_DutyCycle = 0.0;
  }

  /* End of Switch: '<S12>/Switch' */

  /* RelationalOperator: '<S131>/Compare' incorporates:
   *  Constant: '<S131>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Code_Gen_Model_B.Actuator_Cmd = (Code_Gen_Model_U.Joystick_Left_B8 != 0.0);

  /* Switch: '<S12>/Switch5' incorporates:
   *  Constant: '<S12>/Constant9'
   *  Logic: '<S12>/Logical Operator2'
   *  Switch: '<S12>/Switch7'
   *  UnitDelay: '<S12>/Unit Delay1'
   */
  if (Compare && (Code_Gen_Model_B.Actuator_Cmd)) {
    rtb_AT_Cage_Right_Start_Blue_Ac = true;
  } else {
    rtb_AT_Cage_Right_Start_Blue_Ac = ((!rtb_AT_Cage_Right_Start_Blue_Ac) &&
      (Code_Gen_Model_DW.UnitDelay1_DSTATE_kb));
  }

  /* End of Switch: '<S12>/Switch5' */

  /* Switch: '<S12>/Switch8' incorporates:
   *  Abs: '<S12>/Abs'
   *  Constant: '<S104>/Constant'
   *  Constant: '<S105>/Constant'
   *  Constant: '<S12>/Constant11'
   *  Inport: '<Root>/Actuator_Revs'
   *  RelationalOperator: '<S104>/Compare'
   *  RelationalOperator: '<S105>/Compare'
   *  UnitDelay: '<S12>/Unit Delay2'
   */
  if (fabs(Code_Gen_Model_U.Actuator_Revs) <= Actuator_Rev_Startup_Range) {
    rtb_AT_Cage_Right_Start_Red_Act = true;
  } else {
    rtb_AT_Cage_Right_Start_Red_Act = ((!(Code_Gen_Model_U.Actuator_Revs >=
      Actuator_Rev_Target)) && (Code_Gen_Model_DW.UnitDelay2_DSTATE));
  }

  /* End of Switch: '<S12>/Switch8' */

  /* Switch: '<S12>/Switch2' */
  if (rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S12>/Switch3' incorporates:
     *  Logic: '<S12>/Logical Operator1'
     */
    if (rtb_AT_Cage_Right_Start_Red_Act) {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S12>/Constant6'
       */
      Code_Gen_Model_Y.Actuator_DutyCycle = Actuator_DC;
    } else {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
    }

    /* End of Switch: '<S12>/Switch3' */
  } else {
    /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant4'
     */
    Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Chart: '<S20>/Chart' */
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

  /* End of Chart: '<S20>/Chart' */

  /* Gain: '<S199>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S200>/Compare' incorporates:
   *  Constant: '<S199>/Constant'
   *  Constant: '<S200>/Constant'
   */
  rtb_Compare_cid = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S199>/Switch1' incorporates:
   *  UnitDelay: '<S199>/Unit Delay1'
   */
  if (rtb_Compare_cid) {
    rtb_Switch2_g = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S199>/Switch1' */

  /* Sum: '<S199>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_g;

  /* Gain: '<S199>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S199>/Switch' incorporates:
   *  UnitDelay: '<S199>/Unit Delay'
   */
  if (rtb_Compare_cid) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S199>/Switch' */

  /* Sum: '<S199>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S13>/Gain'
   *  Sum: '<S13>/Add1'
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

  /* SignalConversion: '<S14>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Update for UnitDelay: '<S191>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S191>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S192>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S192>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S193>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S193>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S194>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S194>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for S-Function (sfix_udelay): '<S16>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S16>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S136>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S156>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S136>/A'
   *  Delay: '<S136>/MemoryX'
   */
  rtb_Switch1_j1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
    + Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S136>/MemoryX' incorporates:
   *  Constant: '<S136>/B'
   *  Product: '<S156>/A[k]*xhat[k|k-1]'
   *  Product: '<S156>/B[k]*u[k]'
   *  Sum: '<S156>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch1_j1) + Code_Gen_Model_B.Product3
    [0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle_merge) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S108>/Delay Input1' incorporates:
   *  Constant: '<S13>/Constant3'
   *
   * Block description for '<S108>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S13>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S190>/UD'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for DiscreteIntegrator: '<S19>/Accumulator2' incorporates:
   *  Constant: '<S19>/Constant'
   *  DiscreteIntegrator: '<S19>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S19>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S19>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S133>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S133>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S134>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S134>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S135>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S135>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S100>/Delay Input1'
   *
   * Block description for '<S100>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S101>/Delay Input1'
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg;

  /* Update for UnitDelay: '<S102>/Delay Input1'
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination_l;

  /* Update for UnitDelay: '<S367>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S367>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S389>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S388>/UD'
   *
   * Block description for '<S388>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S386>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2_gl;

  /* Update for UnitDelay: '<S369>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S384>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S384>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S384>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S368>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_jm;

  /* Update for UnitDelay: '<S377>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S377>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S377>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_jm;

  /* Update for UnitDelay: '<S343>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Rotationmatrixfromlocalto_3;

  /* Update for UnitDelay: '<S342>/UD'
   *
   * Block description for '<S342>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S336>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S280>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S279>/UD'
   *
   * Block description for '<S279>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Switch2_az;

  /* Update for UnitDelay: '<S273>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S291>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ju;

  /* Update for UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_ah;

  /* Update for UnitDelay: '<S276>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S301>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_fn;

  /* Update for UnitDelay: '<S300>/UD'
   *
   * Block description for '<S300>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S294>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S312>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_c;

  /* Update for UnitDelay: '<S311>/UD'
   *
   * Block description for '<S311>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_e;

  /* Update for UnitDelay: '<S297>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S322>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S321>/UD'
   *
   * Block description for '<S321>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_h3;

  /* Update for UnitDelay: '<S315>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S333>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_m;

  /* Update for UnitDelay: '<S332>/UD'
   *
   * Block description for '<S332>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S318>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S354>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S353>/UD'
   *
   * Block description for '<S353>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_pz;

  /* Update for UnitDelay: '<S339>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S98>/Delay Input1'
   *
   * Block description for '<S98>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S97>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S97>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S97>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S72>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Add_o5;

  /* Update for UnitDelay: '<S81>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S81>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S81>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Add_o5;

  /* Update for UnitDelay: '<S12>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gln = rtb_AT_Cage_Middle_Start_Red_Ac;

  /* Update for UnitDelay: '<S12>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kb = rtb_AT_Cage_Right_Start_Blue_Ac;

  /* Update for UnitDelay: '<S12>/Unit Delay2' */
  Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AT_Cage_Right_Start_Red_Act;

  /* Update for UnitDelay: '<S199>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_g;

  /* Update for UnitDelay: '<S199>/Unit Delay' */
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

    /* Start for If: '<S21>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S136>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S19>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S19>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S367>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S384>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S377>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S97>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S81>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S29>/Reefscape_Chart' */
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
    /* InitializeConditions for UnitDelay: '<S458>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* SystemInitialize for Chart: '<S420>/Reefscape_Chart' */
    Code_Gen_M_Reefscape_Chart_Init(&Code_Gen_Model_B.State_ID_Teleop,
      &Code_Gen_Model_B.Elevator_Height_Desired,
      &Code_Gen_Model_B.Coral_Arm_Angle_Desired,
      &Code_Gen_Model_B.Coral_Wheel_DC, &Constant, &Constant1,
      &Code_Gen_Model_B.Elevator_LowerPickup_Reset,
      &Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State,
      &Code_Gen_Model_B.Set_Coral_Level, &Code_Gen_Model_B.Set_Algae_Level,
      &Coral_Score);

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S21>/Spline Path Following Enabled' */
    /* Start for If: '<S208>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S208>/Robot_Index_Is_Valid' */
    /* Start for If: '<S211>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S211>/Circle_Check_Valid' */
    /* Start for If: '<S213>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S211>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S208>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S21>/Spline Path Following Enabled' */
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
