/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.330
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar 13 16:32:00 2025
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

/* Named constants for Chart: '<S19>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S29>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)9U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)7U)
#define Code_Gen_IN_Auto_Lower_Elevator ((uint8_T)1U)
#define Code_Gen_IN_Manual_Adjustment_c ((uint8_T)5U)
#define Code_Gen_M_IN_Algae_Pickup_High ((uint8_T)1U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)2U)
#define Code_Gen_Mo_IN_Algae_Pickup_Low ((uint8_T)2U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Mode_IN_Auto_Lower_Arm ((uint8_T)1U)
#define Code_Gen_Mode_IN_End_Game_Climb ((uint8_T)10U)
#define Code_Gen_Mode_IN_Level_4_Teleop ((uint8_T)5U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Algae_Score  ((uint8_T)3U)
#define Code_Gen_Model_IN_Auto_Start   ((uint8_T)4U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)5U)
#define Code_Gen_Model_IN_Coral_Pickup ((uint8_T)6U)
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
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)11U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)6U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)8U)

/* Named constants for Chart: '<S25>/Reefscape_Auto_Steps' */
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)1U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_3 ((uint8_T)3U)
#define Code_Gen_M_IN_Wait_for_Teleop_m ((uint8_T)14U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)9U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)10U)
#define Code_Gen_Mod_IN_Score_at_Reef_3 ((uint8_T)11U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)8U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)6U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)7U)
#define Code_Gen_Mode_IN_Path_to_Reef_3 ((uint8_T)8U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Path_to_Reef ((uint8_T)5U)
#define Code_Gen_Model_IN_Score_at_Reef ((uint8_T)7U)
#define Code_Gen_Model_IN_Set_L4       ((uint8_T)1U)
#define Code_Gen_Model_IN_Timer_to_L4  ((uint8_T)2U)
#define Code_Gen__IN_Path_to_Start_Line ((uint8_T)6U)
#define Code_IN_Adjust_Height_for_Algae ((uint8_T)1U)
#define Code_IN_Path_to_Coral_Station_1 ((uint8_T)4U)
#define Code_IN_Path_to_Coral_Station_2 ((uint8_T)5U)
#define Code_IN_Wait_at_Coral_Station_1 ((uint8_T)12U)
#define Code_IN_Wait_at_Coral_Station_2 ((uint8_T)13U)
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)3U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)4U)

/* Exported block parameters */
real_T AT_CS_L_Angle_Blue = 2.1991;    /* Variable: AT_CS_L_Angle_Blue
                                        * Referenced by: '<S416>/Constant14'
                                        */
real_T AT_CS_L_Angle_Red = -0.94248;   /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S416>/Constant13'
                                        */
real_T AT_CS_L_X_Blue = 1.0751;        /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S416>/Constant9'
                                        */
real_T AT_CS_L_X_Red = 16.4733;        /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S416>/Constant5'
                                        */
real_T AT_CS_L_Y_Blue = 7.0882;        /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S416>/Constant28'
                                        */
real_T AT_CS_L_Y_Red = 0.96356;        /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S416>/Constant27'
                                        */
real_T AT_CS_R_Angle_Blue = -2.1991;   /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S416>/Constant12'
                                        */
real_T AT_CS_R_Angle_Red = 0.94248;    /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S416>/Constant11'
                                        */
real_T AT_CS_R_X_Blue = 1.0751;        /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S416>/Constant4'
                                        */
real_T AT_CS_R_X_Red = 16.4733;        /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S416>/Constant17'
                                        */
real_T AT_CS_R_Y_Blue = 0.96356;       /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S416>/Constant26'
                                        */
real_T AT_CS_R_Y_Red = 7.0882;         /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S416>/Constant3'
                                        */
real_T AT_Cage_L_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                              * Referenced by: '<S416>/Constant55'
                                              */
real_T AT_Cage_L_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_L_Finish_Angle_Red
                                         * Referenced by: '<S416>/Constant54'
                                         */
real_T AT_Cage_L_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_L_Finish_X_Blue
                                         * Referenced by: '<S416>/Constant39'
                                         */
real_T AT_Cage_L_Finish_X_Red = 8.7803;/* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S416>/Constant2'
                                        */
real_T AT_Cage_L_Finish_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Finish_Y_Blue
                                         * Referenced by: '<S416>/Constant43'
                                         */
real_T AT_Cage_L_Finish_Y_Red = 0.79229;/* Variable: AT_Cage_L_Finish_Y_Red
                                         * Referenced by: '<S416>/Constant42'
                                         */
real_T AT_Cage_L_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Start_Angle_Blue
                                             * Referenced by: '<S416>/Constant49'
                                             */
real_T AT_Cage_L_Start_Angle_Red = 0.0;/* Variable: AT_Cage_L_Start_Angle_Red
                                        * Referenced by: '<S416>/Constant48'
                                        */
real_T AT_Cage_L_Start_X_Blue = 9.5301;/* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S416>/Constant7'
                                        */
real_T AT_Cage_L_Start_X_Red = 8.0183; /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S416>/Constant15'
                                        */
real_T AT_Cage_L_Start_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S416>/Constant32'
                                        */
real_T AT_Cage_L_Start_Y_Red = 0.79229;/* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S416>/Constant25'
                                        */
real_T AT_Cage_M_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                              * Referenced by: '<S416>/Constant53'
                                              */
real_T AT_Cage_M_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_M_Finish_Angle_Red
                                         * Referenced by: '<S416>/Constant52'
                                         */
real_T AT_Cage_M_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_M_Finish_X_Blue
                                         * Referenced by: '<S416>/Constant34'
                                         */
real_T AT_Cage_M_Finish_X_Red = 8.7803;/* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S416>/Constant35'
                                        */
real_T AT_Cage_M_Finish_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Finish_Y_Blue
                                         * Referenced by: '<S416>/Constant41'
                                         */
real_T AT_Cage_M_Finish_Y_Red = 1.8829;/* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S416>/Constant44'
                                        */
real_T AT_Cage_M_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Start_Angle_Blue
                                             * Referenced by: '<S416>/Constant47'
                                             */
real_T AT_Cage_M_Start_Angle_Red = 0.0;/* Variable: AT_Cage_M_Start_Angle_Red
                                        * Referenced by: '<S416>/Constant46'
                                        */
real_T AT_Cage_M_Start_X_Blue = 9.5301;/* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S416>/Constant20'
                                        */
real_T AT_Cage_M_Start_X_Red = 8.0183; /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S416>/Constant24'
                                        */
real_T AT_Cage_M_Start_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S416>/Constant22'
                                        */
real_T AT_Cage_M_Start_Y_Red = 1.8829; /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S416>/Constant33'
                                        */
real_T AT_Cage_R_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                              * Referenced by: '<S416>/Constant51'
                                              */
real_T AT_Cage_R_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_R_Finish_Angle_Red
                                         * Referenced by: '<S416>/Constant56'
                                         */
real_T AT_Cage_R_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_R_Finish_X_Blue
                                         * Referenced by: '<S416>/Constant36'
                                         */
real_T AT_Cage_R_Finish_X_Red = 8.7803;/* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S416>/Constant38'
                                        */
real_T AT_Cage_R_Finish_Y_Blue = 5.079;/* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S416>/Constant45'
                                        */
real_T AT_Cage_R_Finish_Y_Red = 2.9735;/* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S416>/Constant40'
                                        */
real_T AT_Cage_R_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Start_Angle_Blue
                                             * Referenced by: '<S416>/Constant1'
                                             */
real_T AT_Cage_R_Start_Angle_Red = 0.0;/* Variable: AT_Cage_R_Start_Angle_Red
                                        * Referenced by: '<S416>/Constant50'
                                        */
real_T AT_Cage_R_Start_X_Blue = 9.5301;/* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S416>/Constant29'
                                        */
real_T AT_Cage_R_Start_X_Red = 8.0183; /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S416>/Constant31'
                                        */
real_T AT_Cage_R_Start_Y_Blue = 5.079; /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S416>/Constant6'
                                        */
real_T AT_Cage_R_Start_Y_Red = 2.9735; /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S416>/Constant16'
                                        */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S423>/Constant'
                                      *   '<S34>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S430>/Constant'
                                          *   '<S431>/Constant'
                                          *   '<S41>/Constant'
                                          *   '<S42>/Constant'
                                          */
real_T AT_Max_Error_Angle = 1.0;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S429>/Constant'
                                        *   '<S40>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.5;          /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S427>/Constant'
                                        *   '<S428>/Constant'
                                        *   '<S38>/Constant'
                                        *   '<S39>/Constant'
                                        */
real_T AT_On_Target_Time = 0.5;        /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T AT_Processor_Angle_Blue = -1.5708;/* Variable: AT_Processor_Angle_Blue
                                          * Referenced by: '<S416>/Constant10'
                                          */
real_T AT_Processor_Angle_Red = 1.5708;/* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S416>/Constant8'
                                        */
real_T AT_Processor_X_Blue = 11.5608;  /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S416>/Constant18'
                                        */
real_T AT_Processor_X_Red = 5.9875;    /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S416>/Constant19'
                                        */
real_T AT_Processor_Y_Blue = 7.4714;   /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S416>/Constant21'
                                        */
real_T AT_Processor_Y_Red = 0.58039;   /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S416>/Constant23'
                                        */
real_T AT_Reef_Target_Algae_X = 19.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S417>/Constant7'
                                        *   '<S26>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 4.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S417>/Constant6'
                                        *   '<S26>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -2.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S417>/Constant3'
                                        *   '<S26>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 26.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S417>/Constant4'
                                        *   '<S26>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 26.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S417>/Constant'
                                        *   '<S26>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 27.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S417>/Constant5'
                                        *   '<S26>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 5.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S417>/Constant1'
                                        *   '<S26>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -7.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by:
                                        *   '<S417>/Constant2'
                                        *   '<S26>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S31>/Constant4'
                                      *   '<S439>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S31>/Constant10'
                                        *   '<S439>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S440>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.2;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S31>/Gain1'
                                *   '<S440>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S440>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.5;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S31>/Constant8'
                                   *   '<S440>/Constant8'
                                   */
real_T Actuator_Cmd_Gain = 0.06;       /* Variable: Actuator_Cmd_Gain
                                        * Referenced by: '<S11>/Constant3'
                                        */
real_T Actuator_Desired_Max = 6.0;     /* Variable: Actuator_Desired_Max
                                        * Referenced by: '<S11>/Saturation'
                                        */
real_T Actuator_I_Gain = 0.0;          /* Variable: Actuator_I_Gain
                                        * Referenced by: '<S104>/Gain2'
                                        */
real_T Actuator_Int_LL = -0.1;         /* Variable: Actuator_Int_LL
                                        * Referenced by: '<S104>/Saturation1'
                                        */
real_T Actuator_Int_UL = 0.1;          /* Variable: Actuator_Int_UL
                                        * Referenced by: '<S104>/Saturation1'
                                        */
real_T Actuator_MotorRev_to_Inch = 0.23625;/* Variable: Actuator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain2'
                                            */
real_T Actuator_P_Gain = 0.0;          /* Variable: Actuator_P_Gain
                                        * Referenced by: '<S104>/Gain1'
                                        */
real_T Actuator_Total_LL = -0.1;       /* Variable: Actuator_Total_LL
                                        * Referenced by:
                                        *   '<S104>/Constant1'
                                        *   '<S104>/Saturation2'
                                        */
real_T Actuator_Total_UL = 0.3;        /* Variable: Actuator_Total_UL
                                        * Referenced by:
                                        *   '<S104>/Constant'
                                        *   '<S104>/Saturation2'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Auto_Algae_Height_Time = 0.5;   /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Backup_Time_Reef = 1.0;    /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Path1_Delay_to_L4_Time = 1.0;/* Variable: Auto_Path1_Delay_to_L4_Time
                                          * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Path2_Delay_to_L4_Time = 1.0;/* Variable: Auto_Path2_Delay_to_L4_Time
                                          * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Speed_Algae = 0.2;         /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Coral = 0.2;         /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Reef = 0.5;          /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Starting_Position = 2.0;   /* Variable: Auto_Starting_Position
                                        * Referenced by: '<S25>/Constant1'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S454>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S450>/Constant'
                                        *   '<S450>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S454>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S450>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -1.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S419>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S419>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 50.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S419>/Reefscape_Chart'
                                       *   '<S29>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S419>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_Neg_Threshold = -88.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S68>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 110.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S69>/Constant'
                                       *   '<S70>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S419>/Reefscape_Chart'
                                             *   '<S29>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S71>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S72>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S72>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S72>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S7>/Constant1'
                                        */
real_T Coral_Detect_Distance = 60.0;   /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S272>/Constant3'
                                        *   '<S293>/Constant3'
                                        *   '<S314>/Constant3'
                                        *   '<S335>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S272>/Constant2'
                                   *   '<S293>/Constant2'
                                   *   '<S314>/Constant2'
                                   *   '<S335>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S272>/Saturation'
                                        *   '<S293>/Saturation'
                                        *   '<S314>/Saturation'
                                        *   '<S335>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S272>/Saturation'
                                        *   '<S293>/Saturation'
                                        *   '<S314>/Saturation'
                                        *   '<S335>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S272>/Gain'
                                            *   '<S293>/Gain'
                                            *   '<S314>/Gain'
                                            *   '<S335>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S272>/Gain2'
                                        *   '<S293>/Gain2'
                                        *   '<S314>/Gain2'
                                        *   '<S335>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S272>/Saturation1'
                                         *   '<S293>/Saturation1'
                                         *   '<S314>/Saturation1'
                                         *   '<S335>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S272>/Saturation1'
                                        *   '<S293>/Saturation1'
                                        *   '<S314>/Saturation1'
                                        *   '<S335>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S272>/Gain1'
                                        *   '<S293>/Gain1'
                                        *   '<S314>/Gain1'
                                        *   '<S335>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S277>/Constant'
                            *   '<S298>/Constant'
                            *   '<S319>/Constant'
                            *   '<S340>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S87>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S84>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S88>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S88>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 19.5;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S419>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 11.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S419>/Reefscape_Chart'
                                         *   '<S29>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 2.0;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S419>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S67>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.1;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S419>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 10.0;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S11>/Constant5'
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S85>/Constant'
                                     *   '<S419>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = 1.25;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 9.125;/* Variable: Elevator_Height_L3_Eject
                                         * Referenced by:
                                         *   '<S419>/Reefscape_Chart'
                                         *   '<S29>/Reefscape_Chart'
                                         */
real_T Elevator_Height_L4 = 28.0;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 6.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S419>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 6.8;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 12.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
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
                                        * Referenced by: '<S88>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S88>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S88>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S88>/Constant1'
                                        *   '<S88>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S88>/Constant'
                                        *   '<S88>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S12>/Constant2'
                                       *   '<S12>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S12>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S15>/Constant1'
                                        *   '<S15>/Constant2'
                                        */
real_T Limelight_Tag_Angle_Offset = -0.2;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S16>/Constant2'
                                          */
real_T Limelight_Tag_X_Offset = -0.65; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S16>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = 0.21;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S16>/Constant1'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S18>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S198>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S257>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S257>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S204>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S217>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S257>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S368>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S368>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S368>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S368>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S368>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S368>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S385>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S385>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S385>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S385>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S384>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S385>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S385>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S385>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S385>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S385>/Constant1'
                                   *   '<S385>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S385>/Constant'
                                   *   '<S385>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S275>/Constant3'
                                        *   '<S296>/Constant3'
                                        *   '<S317>/Constant3'
                                        *   '<S338>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S275>/Constant2'
                                *   '<S296>/Constant2'
                                *   '<S317>/Constant2'
                                *   '<S338>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S275>/Saturation'
                                           *   '<S296>/Saturation'
                                           *   '<S317>/Saturation'
                                           *   '<S338>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S275>/Saturation'
                                          *   '<S296>/Saturation'
                                          *   '<S317>/Saturation'
                                          *   '<S338>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S275>/Gain2'
                                         *   '<S296>/Gain2'
                                         *   '<S317>/Gain2'
                                         *   '<S338>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S275>/Saturation1'
                                             *   '<S296>/Saturation1'
                                             *   '<S317>/Saturation1'
                                             *   '<S338>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S275>/Saturation1'
                                            *   '<S296>/Saturation1'
                                            *   '<S317>/Saturation1'
                                            *   '<S338>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S275>/Gain1'
                                        *   '<S296>/Gain1'
                                        *   '<S317>/Gain1'
                                        *   '<S338>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S367>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S367>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S367>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S367>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S367>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S367>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S439>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S439>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S420>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S420>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S420>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S355>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S355>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S355>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S355>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S355>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S355>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S440>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S439>/Dead Zone'
                                        *   '<S440>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S439>/Dead Zone'
                                        *   '<S440>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.0;            /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S11>/Constant2'
                                        */
real_T Winch_Rev_Target = 10.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S102>/Constant'
                                        */
real_T Winch_Spool_DC = 0.0;           /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S11>/Constant1'
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
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch1, boolean_T
  *Path_Enable, const uint8_T *Switch6, const uint8_T *Switch9, const boolean_T *
  UnitDelay2);
static void enter_internal_Coral_Score_Posi(const boolean_T
  *FixPtRelationalOperator_a, const boolean_T *FixPtRelationalOperator_nw, const
  boolean_T *FixPtRelationalOperator_dd, const boolean_T
  *FixPtRelationalOperator_o);
static void Code_Gen_Mode_Algae_Pickup_High(const boolean_T *Compare_f);
static void Code_Gen_Model_Algae_Pickup_Low(const boolean_T *Compare_f);
static void Code_Gen_Model_Auto_Start(const boolean_T *FixPtRelationalOperator_a,
  const boolean_T *FixPtRelationalOperator_nw, const boolean_T
  *FixPtRelationalOperator_dd, const boolean_T *FixPtRelationalOperator_o);
static void Code__exit_internal_Coral_Eject(void);
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare, const boolean_T
  *Compare_f, const boolean_T *FixPtRelationalOperator_dp);
static void Code_exit_internal_Coral_Pickup(void);
static void Code_Gen_Model_Set_Level(const boolean_T *FixPtRelationalOperator_a,
  const boolean_T *FixPtRelationalOperator_nw, const boolean_T
  *FixPtRelationalOperator_dd, const boolean_T *FixPtRelationalOperator_o);
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_a, const
  boolean_T *FixPtRelationalOperator_nw, const boolean_T
  *FixPtRelationalOperator_dd, const boolean_T *FixPtRelationalOperator_o);
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_a, const boolean_T
  *FixPtRelationalOperator_dp, const boolean_T *FixPtRelationalOperator_nw,
  const boolean_T *FixPtRelationalOperator_dd, const boolean_T
  *FixPtRelationalOperator_o);
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f);
static void Code_Gen_Model_End_Game_Climb(const boolean_T *Compare_f);
static void enter_internal_c2_Code_Gen_Mode(real_T *Algae_Wheel_Inside_DC_c,
  real_T *Algae_Wheel_Outside_DC_p);
static void enter_internal_Coral_Score_Po_f(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_d);
static void Code_Gen_Mo_Algae_Pickup_High_k(const boolean_T *Compare_f);
static void Code_Gen_Mod_Algae_Pickup_Low_c(const boolean_T *Compare_f);
static void Code_Gen_Model_Auto_Start_a(const boolean_T *FixPtRelationalOperator,
  const boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d);
static void Cod_exit_internal_Coral_Eject_j(void);
static void Code_Gen_Model_Coral_Eject_k(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_l);
static void Co_exit_internal_Coral_Pickup_n(void);
static void Code_Gen_Model_Set_Level_g(const boolean_T *FixPtRelationalOperator,
  const boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d);
static void Code_Gen_Model_Coral_Pickup_m(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator, const
  boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d);
static void Code_Gen_Coral_Score_Position_m(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_l,
  const boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d);
static void Co_Elevator_Height_Bottom_pre_j(const boolean_T *Compare_f);
static void Code_Gen_Model_End_Game_Climb_f(const boolean_T *Compare_f);
static void enter_internal_c4_Code_Gen_Mode(const uint8_T *Prev_Active_GameState,
  const real_T *UnitDelay1, real_T *Algae_Wheel_Inside_DC, real_T
  *Algae_Wheel_Outside_DC);

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

/* Function for Chart: '<S25>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch1, boolean_T
  *Path_Enable, const uint8_T *Switch6, const uint8_T *Switch9, const boolean_T *
  UnitDelay2)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 4U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_B.Gamepad_Start_out = true;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 8U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_2;
      Code_Gen_Model_B.Auto_Step_ID = 9U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch9;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_B.Gamepad_Start_out = true;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 13U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
      Code_Gen_Model_B.Auto_Step_ID = 14U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
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

   case Code_IN_Path_to_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_2;
      Code_Gen_Model_B.Auto_Step_ID = 10U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 1U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      if (Code_Gen_Model_DW.is_Path_to_Reef_1 == Code_Gen_Model_IN_Set_L4) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      } else {
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      }

      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 2U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Left_d = true;
    } else {
      switch (Code_Gen_Model_DW.is_Path_to_Reef_1) {
       case Code_Gen_Model_IN_Set_L4:
        break;

       default:
        /* case IN_Timer_to_L4: */
        if (Code_Gen_Model_DW.timer_n >= Auto_Path1_Delay_to_L4_Time) {
          Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Set_L4;
          Code_Gen_Model_B.Gamepad_B4_Y_out = true;
        }
        break;
      }
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 6U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      if (Code_Gen_Model_DW.is_Path_to_Reef_2 == Code_Gen_Model_IN_Set_L4) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      } else {
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      }

      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 7U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Left_d = true;
    } else {
      switch (Code_Gen_Model_DW.is_Path_to_Reef_2) {
       case Code_Gen_Model_IN_Set_L4:
        break;

       default:
        /* case IN_Timer_to_L4: */
        if (Code_Gen_Model_DW.timer_n >= Auto_Path2_Delay_to_L4_Time) {
          Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Set_L4;
          Code_Gen_Model_B.Gamepad_B4_Y_out = true;
        }
        break;
      }
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 11U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      if (Code_Gen_Model_DW.is_Path_to_Reef_3 == Code_Gen_Model_IN_Set_L4) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      } else {
        Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      }

      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 12U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Right_i = true;
    } else {
      switch (Code_Gen_Model_DW.is_Path_to_Reef_3) {
       case Code_Gen_Model_IN_Set_L4:
        break;

       default:
        /* case IN_Timer_to_L4: */
        if (Code_Gen_Model_DW.timer_n >= Auto_Path2_Delay_to_L4_Time) {
          Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Model_IN_Set_L4;
          Code_Gen_Model_B.Gamepad_B4_Y_out = true;
        }
        break;
      }
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 2U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_B.UnitDelay1_d) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 3U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 7U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_B.UnitDelay1_d) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 8U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 12U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    if (Code_Gen_Model_B.UnitDelay1_d) {
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 13U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 5U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (*UnitDelay2) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 6U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 10U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
    if (*UnitDelay2) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 11U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 14U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_g = 0.0;
    Code_Gen_Model_B.Translation_Angle_l = 0.0;
    break;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(const boolean_T
  *FixPtRelationalOperator_a, const boolean_T *FixPtRelationalOperator_nw, const
  boolean_T *FixPtRelationalOperator_dd, const boolean_T
  *FixPtRelationalOperator_o)
{
  if ((Code_Gen_Model_DW.Set_L1_j) || (*FixPtRelationalOperator_nw)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_m = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.State_ID_d = 2.1;
    Code_Gen_Model_B.Set_Coral_Level_j = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2_b) || (*FixPtRelationalOperator_o)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_m = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_d = 2.2;
    Code_Gen_Model_B.Set_Coral_Level_j = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3_f) || (*FixPtRelationalOperator_dd)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_m = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_d = 2.3;
    Code_Gen_Model_B.Set_Coral_Level_j = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4_d) || (*FixPtRelationalOperator_a)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_m = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.State_ID_d = 2.4;
    Code_Gen_Model_B.Set_Coral_Level_j = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position_m =
      Code_Gen_IN_Manual_Adjustment_c;
    Code_Gen_Model_B.State_ID_d = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_h +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Mode_Algae_Pickup_High(const boolean_T *Compare_f)
{
  Code_Gen_Model_B.State_ID_d = 4.3;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Algae_Pickup_Low(const boolean_T *Compare_f)
{
  Code_Gen_Model_B.State_ID_d = 4.2;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Auto_Start(const boolean_T *FixPtRelationalOperator_a,
  const boolean_T *FixPtRelationalOperator_nw, const boolean_T
  *FixPtRelationalOperator_dd, const boolean_T *FixPtRelationalOperator_o)
{
  Code_Gen_Model_B.State_ID_d = 0.0;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((((Code_Gen_Model_DW.Set_L1_j) || (Code_Gen_Model_DW.Set_L2_b)) ||
       (Code_Gen_Model_DW.Set_L3_f)) || (Code_Gen_Model_DW.Set_L4_d)) {
    Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi(FixPtRelationalOperator_a,
      FixPtRelationalOperator_nw, FixPtRelationalOperator_dd,
      FixPtRelationalOperator_o);
  } else {
    switch (Code_Gen_Model_DW.is_Set_Level_d) {
     case Code_Gen_Model_IN_L1:
      if (((*FixPtRelationalOperator_o) || (*FixPtRelationalOperator_dd)) ||
          (*FixPtRelationalOperator_a)) {
        if (*FixPtRelationalOperator_nw) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1_j = true;
        } else if (*FixPtRelationalOperator_o) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2_b = true;
        } else if (*FixPtRelationalOperator_dd) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3_f = true;
        } else if (*FixPtRelationalOperator_a) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4_d = true;
        }
      }
      break;

     case Code_Gen_Model_IN_L2:
      if (((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_dd)) ||
          (*FixPtRelationalOperator_a)) {
        if (*FixPtRelationalOperator_nw) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1_j = true;
        } else if (*FixPtRelationalOperator_o) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2_b = true;
        } else if (*FixPtRelationalOperator_dd) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3_f = true;
        } else if (*FixPtRelationalOperator_a) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4_d = true;
        }
      }
      break;

     case Code_Gen_Model_IN_L3:
      if (((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_o)) ||
          (*FixPtRelationalOperator_a)) {
        if (*FixPtRelationalOperator_nw) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1_j = true;
        } else if (*FixPtRelationalOperator_o) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2_b = true;
        } else if (*FixPtRelationalOperator_dd) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3_f = true;
        } else if (*FixPtRelationalOperator_a) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4_d = true;
        }
      }
      break;

     case Code_Gen_Model_IN_L4:
      if (((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_o)) ||
          (*FixPtRelationalOperator_dd)) {
        if (*FixPtRelationalOperator_nw) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1_j = true;
        } else if (*FixPtRelationalOperator_o) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2_b = true;
        } else if (*FixPtRelationalOperator_dd) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3_f = true;
        } else if (*FixPtRelationalOperator_a) {
          Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4_d = true;
        }
      }
      break;

     default:
      /* case IN_None: */
      if (*FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
      } else if (*FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L2_b = true;
      } else if (*FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L3_f = true;
      } else if (*FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
      break;
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code__exit_internal_Coral_Eject(void)
{
  if (Code_Gen_Model_DW.is_Coral_Eject_n == Code_Gen_Model_IN_Stop) {
    Code_Gen_Model_B.Coral_Score_j = false;
    Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Level_2_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare, const boolean_T
  *Compare_f, const boolean_T *FixPtRelationalOperator_dp)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code__exit_internal_Coral_Eject();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    } else {
      Code__exit_internal_Coral_Eject();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject_n) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.State_ID_d = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
      if (Code_Gen_Model_DW.timer_n2 >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.State_ID_d = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
        Code_Gen_Model_B.Coral_Score_j = true;
      } else {
        Code_Gen_Model_DW.timer_n2 += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_d = 3.2;
      if ((!(*Compare)) || (*FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_2_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_2_c ==
                 Code_Gen_IN_Auto_Lower_Elevator) {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L2_Eject) {
          Code_Gen_Model_DW.is_Level_2_c = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Manual_Adjustment: */
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID_d = 3.3;
      if ((!(*Compare)) || (*FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_3_l ==
                 Code_Gen_IN_Auto_Lower_Elevator) {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L3_Eject) {
          Code_Gen_Model_DW.is_Level_3_l = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Manual_Adjustment: */
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4_Auto:
      Code_Gen_Model_B.State_ID_d = 3.5;
      if ((!(*Compare)) || (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                            Coral_Arm_Angle_L4_Eject_Auto)) {
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else {
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Coral_Arm_Angle_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Mode_IN_Level_4_Teleop:
      Code_Gen_Model_B.State_ID_d = 3.4;
      if ((!(*Compare)) || (*FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_4_Teleop_l ==
                 Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
            Coral_Arm_Angle_L4_Eject_Teleop) {
          Code_Gen_Model_DW.is_Level_4_Teleop_l =
            Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Coral_Arm_Angle_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Manual_Adjustment: */
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.State_ID_d = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
      break;
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_exit_internal_Coral_Pickup(void)
{
  Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions_n == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = false;
    Code_Gen_Model_DW.is_Actions_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Actions_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level(const boolean_T *FixPtRelationalOperator_a,
  const boolean_T *FixPtRelationalOperator_nw, const boolean_T
  *FixPtRelationalOperator_dd, const boolean_T *FixPtRelationalOperator_o)
{
  switch (Code_Gen_Model_DW.is_Set_Level_g) {
   case Code_Gen_Model_IN_L1:
    if (((*FixPtRelationalOperator_o) || (*FixPtRelationalOperator_dd)) ||
        (*FixPtRelationalOperator_a)) {
      if (*FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_dd)) ||
        (*FixPtRelationalOperator_a)) {
      if (*FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_o)) ||
        (*FixPtRelationalOperator_a)) {
      if (*FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if (((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_o)) ||
        (*FixPtRelationalOperator_dd)) {
      if (*FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (*FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (*FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_j = true;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (*FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (*FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (*FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = true;
    }
    break;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_a, const
  boolean_T *FixPtRelationalOperator_nw, const boolean_T
  *FixPtRelationalOperator_dd, const boolean_T *FixPtRelationalOperator_o)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    } else {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Actions_n) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.State_ID_d = 1.1;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Pickup;
      if (*Compare) {
        Code_Gen_Model_DW.is_Actions_n = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.State_ID_d = 1.2;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = true;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset_g = false;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.State_ID_d = 1.2;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Hold;
      if ((Code_Gen_Model_DW.timer_n2 >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1_j) || (Code_Gen_Model_DW.Set_L2_b)) ||
            (Code_Gen_Model_DW.Set_L3_f)) || (Code_Gen_Model_DW.Set_L4_d))) {
        Code_Gen_Model_B.Elevator_LowerPickup_Reset_g = true;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = false;
        Code_Gen_Model_DW.is_Actions_n = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.State_ID_d = 1.3;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer_n2 += 0.02;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.State_ID_d = 1.0;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_h -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired_f -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Actions_n = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.State_ID_d = 1.1;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Pickup;
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      Code_Gen_Model_B.State_ID_d = 1.3;
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_h -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1_j) ||
             (Code_Gen_Model_DW.Set_L2_b)) || (Code_Gen_Model_DW.Set_L3_f)) ||
           (Code_Gen_Model_DW.Set_L4_d))) {
        Code_exit_internal_Coral_Pickup();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.State_ID_d = 2.0;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Start;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level(FixPtRelationalOperator_a,
        FixPtRelationalOperator_nw, FixPtRelationalOperator_dd,
        FixPtRelationalOperator_o);
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_a, const boolean_T
  *FixPtRelationalOperator_dp, const boolean_T *FixPtRelationalOperator_nw,
  const boolean_T *FixPtRelationalOperator_dd, const boolean_T
  *FixPtRelationalOperator_o)
{
  if ((((*FixPtRelationalOperator_nw) || (*FixPtRelationalOperator_o)) ||
       (*FixPtRelationalOperator_dd)) || (*FixPtRelationalOperator_a)) {
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi(FixPtRelationalOperator_a,
      FixPtRelationalOperator_nw, FixPtRelationalOperator_dd,
      FixPtRelationalOperator_o);
  } else if ((*FixPtRelationalOperator_dp) ||
             (Code_Gen_Model_DW.timer_robot_target_g >= AT_On_Target_Time)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_m =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Eject;
    if (Code_Gen_Model_DW.Set_L2_b) {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Level_2;
      Code_Gen_Model_B.State_ID_d = 3.2;
      Code_Gen_Model_DW.is_Level_2_c = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_h +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L3_f) {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Level_3;
      Code_Gen_Model_B.State_ID_d = 3.3;
      Code_Gen_Model_DW.is_Level_3_l = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_h +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L4_d) {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Level_4_Auto;
      Code_Gen_Model_B.State_ID_d = 3.5;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID_d = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_n2 = 0.0;
    }
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position_m) {
     case Code_Gen_Model_IN_Level_1:
      Code_Gen_Model_B.State_ID_d = 2.1;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_m =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_d = 2.2;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_m =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID_d = 2.3;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_m =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_B.State_ID_d = 2.4;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_m =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Manual_Adjustment: */
      Code_Gen_Model_B.State_ID_d = 2.5;
      if (!(*Compare)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_m =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_B.Set_Coral_Level_j = 0U;
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          Code_Gen_Model_IN_Coral_Eject;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f)
{
  boolean_T guard1;
  Code_Gen_Model_B.State_ID_d = 0.1;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired_h -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID_d = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb(const boolean_T *Compare_f)
{
  Code_Gen_Model_B.State_ID_d = 4.4;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void enter_internal_c2_Code_Gen_Mode(real_T *Algae_Wheel_Inside_DC_c,
  real_T *Algae_Wheel_Outside_DC_p)
{
  Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
    Code_Gen_Model_IN_Auto_Start;
  Code_Gen_Model_B.State_ID_d = 0.0;
  Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
  Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Model_IN_None;
  Code_Gen_Model_DW.Set_L1_j = false;
  Code_Gen_Model_DW.Set_L2_b = false;
  Code_Gen_Model_DW.Set_L3_f = false;
  Code_Gen_Model_DW.Set_L4_d = false;
  Code_Gen_Model_DW.is_Algae_Wheels_j = Code_Gen_Model_IN_Off;
  *Algae_Wheel_Outside_DC_p = 0.0;
  *Algae_Wheel_Inside_DC_c = 0.0;
  Code_Gen_Model_DW.is_AT_On_Target_Timer_j = Code_Gen_Model_IN_Off_Target;
  Code_Gen_Model_DW.timer_robot_target_g = 0.0;
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

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Po_f(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_d)
{
  if ((Code_Gen_Model_DW.Set_L1) || (*FixPtRelationalOperator)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.State_ID_a = 2.1;
    Code_Gen_Model_B.Set_Coral_Level = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) || (*FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_a = 2.2;
    Code_Gen_Model_B.Set_Coral_Level = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) || (*FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_a = 2.3;
    Code_Gen_Model_B.Set_Coral_Level = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) || (*FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.State_ID_a = 2.4;
    Code_Gen_Model_B.Set_Coral_Level = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
    Code_Gen_Model_B.State_ID_a = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Mo_Algae_Pickup_High_k(const boolean_T *Compare_f)
{
  Code_Gen_Model_B.State_ID_a = 4.3;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_a = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
    Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_a = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_a = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_a = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_a = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_a = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Mod_Algae_Pickup_Low_c(const boolean_T *Compare_f)
{
  Code_Gen_Model_B.State_ID_a = 4.2;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_a = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
    Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_a = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_a = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_a = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_a = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_a = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Model_Auto_Start_a(const boolean_T *FixPtRelationalOperator,
  const boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d)
{
  Code_Gen_Model_B.State_ID_a = 0.0;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_DW.Set_L2)) ||
       (Code_Gen_Model_DW.Set_L3)) || (Code_Gen_Model_DW.Set_L4)) {
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Po_f(FixPtRelationalOperator,
      FixPtRelationalOperator_n, FixPtRelationalOperator_k,
      FixPtRelationalOperator_d);
  } else {
    switch (Code_Gen_Model_DW.is_Set_Level) {
     case Code_Gen_Model_IN_L1:
      if (((*FixPtRelationalOperator_k) || (*FixPtRelationalOperator_n)) ||
          (*FixPtRelationalOperator_d)) {
        if (*FixPtRelationalOperator) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1 = true;
        } else if (*FixPtRelationalOperator_k) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2 = true;
        } else if (*FixPtRelationalOperator_n) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3 = true;
        } else if (*FixPtRelationalOperator_d) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4 = true;
        }
      }
      break;

     case Code_Gen_Model_IN_L2:
      if (((*FixPtRelationalOperator) || (*FixPtRelationalOperator_n)) ||
          (*FixPtRelationalOperator_d)) {
        if (*FixPtRelationalOperator) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1 = true;
        } else if (*FixPtRelationalOperator_k) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2 = true;
        } else if (*FixPtRelationalOperator_n) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3 = true;
        } else if (*FixPtRelationalOperator_d) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4 = true;
        }
      }
      break;

     case Code_Gen_Model_IN_L3:
      if (((*FixPtRelationalOperator) || (*FixPtRelationalOperator_k)) ||
          (*FixPtRelationalOperator_d)) {
        if (*FixPtRelationalOperator) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1 = true;
        } else if (*FixPtRelationalOperator_k) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2 = true;
        } else if (*FixPtRelationalOperator_n) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3 = true;
        } else if (*FixPtRelationalOperator_d) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4 = true;
        }
      }
      break;

     case Code_Gen_Model_IN_L4:
      if (((*FixPtRelationalOperator) || (*FixPtRelationalOperator_k)) ||
          (*FixPtRelationalOperator_n)) {
        if (*FixPtRelationalOperator) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
          Code_Gen_Model_DW.Set_L1 = true;
        } else if (*FixPtRelationalOperator_k) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
          Code_Gen_Model_DW.Set_L2 = true;
        } else if (*FixPtRelationalOperator_n) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
          Code_Gen_Model_DW.Set_L3 = true;
        } else if (*FixPtRelationalOperator_d) {
          Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
          Code_Gen_Model_DW.Set_L4 = true;
        }
      }
      break;

     default:
      /* case IN_None: */
      if (*FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
      } else if (*FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L2 = true;
      } else if (*FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L3 = true;
      } else if (*FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L4 = true;
      }
      break;
    }
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Cod_exit_internal_Coral_Eject_j(void)
{
  if (Code_Gen_Model_DW.is_Coral_Eject == Code_Gen_Model_IN_Stop) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject_k(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_l)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_a = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Cod_exit_internal_Coral_Eject_j();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_a = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Cod_exit_internal_Coral_Eject_j();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_a = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_a = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_a = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_a = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_a = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.State_ID_a = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.State_ID_a = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_a = 3.2;
      if ((!(*Compare)) || (*FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_a = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_2 == Code_Gen_IN_Auto_Lower_Elevator)
      {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L2_Eject) {
          Code_Gen_Model_DW.is_Level_2 = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_m +=
            Code_Gen_Model_B.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
            Code_Gen_Model_B.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_m +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Manual_Adjustment: */
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID_a = 3.3;
      if ((!(*Compare)) || (*FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_a = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_3 == Code_Gen_IN_Auto_Lower_Elevator)
      {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L3_Eject) {
          Code_Gen_Model_DW.is_Level_3 = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_m +=
            Code_Gen_Model_B.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
            Code_Gen_Model_B.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_m +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Manual_Adjustment: */
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4_Auto:
      Code_Gen_Model_B.State_ID_a = 3.5;
      if ((!(*Compare)) || (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                            Coral_Arm_Angle_L4_Eject_Auto)) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_a = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
          Coral_Arm_Angle_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Mode_IN_Level_4_Teleop:
      Code_Gen_Model_B.State_ID_a = 3.4;
      if ((!(*Compare)) || (*FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_a = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_4_Teleop ==
                 Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
            Coral_Arm_Angle_L4_Eject_Teleop) {
          Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_m +=
            Code_Gen_Model_B.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
            Code_Gen_Model_B.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
            Coral_Arm_Angle_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Manual_Adjustment: */
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.State_ID_a = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      break;
    }
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Co_exit_internal_Coral_Pickup_n(void)
{
  Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_g(const boolean_T *FixPtRelationalOperator,
  const boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d)
{
  switch (Code_Gen_Model_DW.is_Set_Level_c) {
   case Code_Gen_Model_IN_L1:
    if (((*FixPtRelationalOperator_k) || (*FixPtRelationalOperator_n)) ||
        (*FixPtRelationalOperator_d)) {
      if (*FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((*FixPtRelationalOperator) || (*FixPtRelationalOperator_n)) ||
        (*FixPtRelationalOperator_d)) {
      if (*FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((*FixPtRelationalOperator) || (*FixPtRelationalOperator_k)) ||
        (*FixPtRelationalOperator_d)) {
      if (*FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if (((*FixPtRelationalOperator) || (*FixPtRelationalOperator_k)) ||
        (*FixPtRelationalOperator_n)) {
      if (*FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (*FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (*FixPtRelationalOperator) {
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1 = true;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_k) {
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = true;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_n) {
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = true;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_d) {
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup_m(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator, const
  boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_a = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Co_exit_internal_Coral_Pickup_n();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_a = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Co_exit_internal_Coral_Pickup_n();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_a = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_a = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_a = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_a = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_a = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Actions) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.State_ID_a = 1.1;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      if (*Compare) {
        Code_Gen_Model_DW.is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.State_ID_a = 1.2;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = true;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.State_ID_a = 1.2;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
      if ((Code_Gen_Model_DW.timer >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_DW.Set_L2)) ||
            (Code_Gen_Model_DW.Set_L3)) || (Code_Gen_Model_DW.Set_L4))) {
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = true;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.State_ID_a = 1.3;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.State_ID_a = 1.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired_m -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.State_ID_a = 1.1;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      Code_Gen_Model_B.State_ID_a = 1.3;
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1) ||
             (Code_Gen_Model_DW.Set_L2)) || (Code_Gen_Model_DW.Set_L3)) ||
           (Code_Gen_Model_DW.Set_L4))) {
        Co_exit_internal_Coral_Pickup_n();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.State_ID_a = 2.0;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Start;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level_g(FixPtRelationalOperator,
        FixPtRelationalOperator_n, FixPtRelationalOperator_k,
        FixPtRelationalOperator_d);
    }
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Coral_Score_Position_m(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_l,
  const boolean_T *FixPtRelationalOperator_n, const boolean_T
  *FixPtRelationalOperator_k, const boolean_T *FixPtRelationalOperator_d)
{
  if ((((*FixPtRelationalOperator) || (*FixPtRelationalOperator_k)) ||
       (*FixPtRelationalOperator_n)) || (*FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Po_f(FixPtRelationalOperator,
      FixPtRelationalOperator_n, FixPtRelationalOperator_k,
      FixPtRelationalOperator_d);
  } else if ((*FixPtRelationalOperator_l) ||
             (Code_Gen_Model_DW.timer_robot_target >= AT_On_Target_Time)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Eject;
    if (Code_Gen_Model_DW.Set_L2) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_2;
      Code_Gen_Model_B.State_ID_a = 3.2;
      Code_Gen_Model_DW.is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_m +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L3) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_3;
      Code_Gen_Model_B.State_ID_a = 3.3;
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_m +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L4) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mode_IN_Level_4_Teleop;
      Code_Gen_Model_B.State_ID_a = 3.4;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID_a = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position) {
     case Code_Gen_Model_IN_Level_1:
      Code_Gen_Model_B.State_ID_a = 2.1;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_a = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_a = 2.2;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_a = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID_a = 2.3;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_a = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_B.State_ID_a = 2.4;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_a = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Manual_Adjustment: */
      Code_Gen_Model_B.State_ID_a = 2.5;
      if (!(*Compare)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_B.Set_Coral_Level = 0U;
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Coral_Eject;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_a = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_m += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Co_Elevator_Height_Bottom_pre_j(const boolean_T *Compare_f)
{
  boolean_T guard1;
  Code_Gen_Model_B.State_ID_a = 0.1;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired_m -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_a = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
    Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_a = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_a = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_a = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_a = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID_a = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb_f(const boolean_T *Compare_f)
{
  Code_Gen_Model_B.State_ID_a = 4.4;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_a = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
    Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_a = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_a = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_a = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_a = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_a = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S419>/Reefscape_Chart' */
static void enter_internal_c4_Code_Gen_Mode(const uint8_T *Prev_Active_GameState,
  const real_T *UnitDelay1, real_T *Algae_Wheel_Inside_DC, real_T
  *Algae_Wheel_Outside_DC)
{
  boolean_T guard1;
  guard1 = false;
  if ((*Prev_Active_GameState) == 1) {
    if ((*UnitDelay1) == 1.0) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.State_ID_a = 1.0;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if ((*UnitDelay1) == 1.1) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
      Code_Gen_Model_B.State_ID_a = 1.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if ((*UnitDelay1) == 1.2) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
      Code_Gen_Model_B.State_ID_a = 1.2;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = true;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if ((*UnitDelay1) == 1.3) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
      Code_Gen_Model_B.State_ID_a = 1.3;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Raise;
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if ((*UnitDelay1) == 2.0) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Start_Angle;
      Code_Gen_Model_B.State_ID_a = 2.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Start;
    } else if ((*UnitDelay1) == 2.1) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Ge_IN_Coral_Score_Position;
      Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
      Code_Gen_Model_B.State_ID_a = 2.1;
      Code_Gen_Model_B.Set_Coral_Level = 1U;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L1;
    } else if ((*UnitDelay1) == 2.2) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Ge_IN_Coral_Score_Position;
      Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
      Code_Gen_Model_B.State_ID_a = 2.2;
      Code_Gen_Model_B.Set_Coral_Level = 2U;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L2;
    } else if ((*UnitDelay1) == 2.3) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Ge_IN_Coral_Score_Position;
      Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
      Code_Gen_Model_B.State_ID_a = 2.3;
      Code_Gen_Model_B.Set_Coral_Level = 3U;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L3;
    } else if ((*UnitDelay1) == 2.4) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Ge_IN_Coral_Score_Position;
      Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
      Code_Gen_Model_B.State_ID_a = 2.4;
      Code_Gen_Model_B.Set_Coral_Level = 4U;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L4;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_L4;
    } else if ((*UnitDelay1) == 3.2) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_2;
      Code_Gen_Model_B.State_ID_a = 3.2;
      Code_Gen_Model_DW.is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_m +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if ((*UnitDelay1) == 3.3) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_3;
      Code_Gen_Model_B.State_ID_a = 3.3;
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_m +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if ((*UnitDelay1) == 3.4) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mode_IN_Level_4_Teleop;
      Code_Gen_Model_B.State_ID_a = 3.4;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else if ((*UnitDelay1) == 3.5) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_4_Auto;
      Code_Gen_Model_B.State_ID_a = 3.5;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else if ((*UnitDelay1) == 3.6) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID_a = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    } else if ((*UnitDelay1) == 3.7) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
      Code_Gen_Model_B.State_ID_a = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if ((*UnitDelay1) == 0.2) {
      guard1 = true;
    } else if ((*UnitDelay1) == 4.4) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mode_IN_End_Game_Climb;
      Code_Gen_Model_B.State_ID_a = 4.4;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if ((*UnitDelay1) == 4.1) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.State_ID_a = 4.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if ((*UnitDelay1) == 4.2) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.State_ID_a = 4.2;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if ((*UnitDelay1) == 4.3) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.State_ID_a = 4.3;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_a = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID_a = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  }

  Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;
  *Algae_Wheel_Outside_DC = 0.0;
  *Algae_Wheel_Inside_DC = 0.0;
  Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
  Code_Gen_Model_DW.timer_robot_target = 0.0;
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
  real_T UnitDelay1;
  real_T rtb_Add_c;
  real_T rtb_Add_fn;
  real_T rtb_Add_ju;
  real_T rtb_Add_o5;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Disable_Wheels;
  real_T rtb_Enable_Wheels;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Hypot_i;
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
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Switch1;
  real_T rtb_Switch2_ah;
  real_T rtb_Switch2_az;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_gl;
  real_T rtb_Switch2_i;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_jm;
  real_T rtb_Switch5_a;
  real_T rtb_Switch_l;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s229_iter;
  uint16_T s254_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch1;
  uint8_T Prev_Active_GameState;
  uint8_T Switch6;
  uint8_T Switch9;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T FixPtRelationalOperator_d;
  boolean_T FixPtRelationalOperator_k;
  boolean_T FixPtRelationalOperator_l;
  boolean_T FixPtRelationalOperator_n;
  boolean_T FixPtRelationalOperator_o;
  boolean_T FixPtRelationalOperator_p;
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
  boolean_T rtb_AT_Cage_Right_Start_Blue_Ac;
  boolean_T rtb_AT_Cage_Right_Start_Red_Act;
  boolean_T rtb_AT_Processor_Blue_Active;
  boolean_T rtb_AT_Processor_Red_Active;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_cid;
  boolean_T rtb_Compare_dq;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S262>/Add1' incorporates:
   *  Constant: '<S262>/Constant3'
   *  Constant: '<S262>/Constant4'
   *  Gain: '<S21>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S262>/Math Function'
   *  Sum: '<S21>/Add'
   *  Sum: '<S262>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S18>/Product' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S263>/Add1' incorporates:
   *  Constant: '<S263>/Constant3'
   *  Constant: '<S263>/Constant4'
   *  Gain: '<S21>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S263>/Math Function'
   *  Sum: '<S21>/Add1'
   *  Sum: '<S263>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S18>/Product1' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S264>/Add1' incorporates:
   *  Constant: '<S264>/Constant3'
   *  Constant: '<S264>/Constant4'
   *  Gain: '<S21>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S264>/Math Function'
   *  Sum: '<S21>/Add2'
   *  Sum: '<S264>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S18>/Product2' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S265>/Add1' incorporates:
   *  Constant: '<S265>/Constant3'
   *  Constant: '<S265>/Constant4'
   *  Gain: '<S21>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S265>/Math Function'
   *  Sum: '<S21>/Add3'
   *  Sum: '<S265>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S18>/Product3' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_Add_o5 = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* SignalConversion generated from: '<S18>/Product7' incorporates:
   *  Fcn: '<S194>/r->x'
   *  Fcn: '<S194>/theta->y'
   *  Fcn: '<S195>/r->x'
   *  Fcn: '<S195>/theta->y'
   *  Fcn: '<S196>/r->x'
   *  Fcn: '<S196>/theta->y'
   *  Fcn: '<S197>/r->x'
   *  Fcn: '<S197>/theta->y'
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

  /* Reshape: '<S135>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S15>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S15>/Tapped Delay1'
   *  Sum: '<S15>/Add'
   *  Sum: '<S15>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Delay: '<S135>/MemoryX' incorporates:
   *  Constant: '<S135>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S12>/Switch1' incorporates:
   *  Constant: '<S12>/Constant2'
   *  Constant: '<S12>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S108>/FixPt Relational Operator'
   *  Sum: '<S12>/Sum'
   *  UnitDelay: '<S108>/Delay Input1'
   *  UnitDelay: '<S12>/Unit Delay1'
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

  /* End of Switch: '<S12>/Switch1' */

  /* Sum: '<S12>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S107>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch_l = 0.0;
  } else {
    rtb_Switch_l = 3.1415926535897931;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S12>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch_l;

  /* Trigonometry: '<S18>/Trigonometric Function' */
  rtb_Add_o5 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S18>/Trigonometric Function1' */
  rtb_Switch2_g = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S18>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_3 = rtb_Add_o5;
  rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_g;

  /* SignalConversion generated from: '<S18>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S18>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -rtb_Switch2_g;
  rtb_Rotationmatrixfromlocalto_0 = rtb_Add_o5;

  /* Sum: '<S189>/Diff' incorporates:
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
  rtb_Add_o5 = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S18>/Subtract2' incorporates:
   *  Constant: '<S18>/Constant3'
   *  Gain: '<S18>/Gain7'
   *  Math: '<S18>/Square'
   */
  rtb_Switch2_g = 1.0 - ((rtb_Add_o5 * rtb_Add_o5) * 0.16666666666666666);

  /* Gain: '<S18>/Gain6' */
  rtb_Add_o5 *= 0.5;

  /* Product: '<S18>/Product7' incorporates:
   *  Constant: '<S18>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    rtb_Num_Segments = 0;
    for (s229_iter = 0; s229_iter < 8; s229_iter++) {
      rtb_Minus_k_idx_0 +=
        Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s229_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S18>/Product7' */

  /* Product: '<S18>/Product6' incorporates:
   *  SignalConversion generated from: '<S18>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S18>/Unary Minus2'
   */
  UnitDelay1 = (rtb_Switch2_g * tmp[0]) + ((-rtb_Add_o5) * tmp[1]);
  rtb_Algae_Wheel_Outside_DutyCyc = (rtb_Add_o5 * tmp[0]) + (rtb_Switch2_g *
    tmp[1]);

  /* Product: '<S18>/Product6' incorporates:
   *  Concatenate: '<S18>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_3 * UnitDelay1)
    + (rtb_Rotationmatrixfromlocalto_2 * rtb_Algae_Wheel_Outside_DutyCyc);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 * UnitDelay1)
    + (rtb_Rotationmatrixfromlocalto_0 * rtb_Algae_Wheel_Outside_DutyCyc);

  /* Outputs for Enabled SubSystem: '<S162>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S188>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S155>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S186>/Enable'
   */
  /* Logic: '<S15>/AND' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S15>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S186>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S135>/C'
     *  Delay: '<S135>/MemoryX'
     *  Product: '<S188>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_gl;

    /* Sum: '<S186>/Sum' incorporates:
     *  Constant: '<S135>/D'
     *  Product: '<S186>/C[k]*xhat[k|k-1]'
     *  Product: '<S186>/D[k]*u[k]'
     *  Sum: '<S186>/Add1'
     */
    UnitDelay1 = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[0] - (UnitDelay1 +
      rtb_Switch2_gl);

    /* Product: '<S186>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S135>/C'
     *  Delay: '<S135>/MemoryX'
     *  Product: '<S188>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_gl;

    /* Sum: '<S186>/Sum' incorporates:
     *  Constant: '<S135>/D'
     *  Product: '<S186>/C[k]*xhat[k|k-1]'
     *  Product: '<S186>/D[k]*u[k]'
     *  Sum: '<S186>/Add1'
     */
    UnitDelay1 = rtb_Reshapey[1] - (UnitDelay1 + rtb_Switch2_gl);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S186>/Product3' incorporates:
     *  Constant: '<S136>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_2) + (-2.0601714451538746E-17 * UnitDelay1);

    /* Sum: '<S188>/Add1' incorporates:
     *  Product: '<S188>/Product'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S186>/Product3' incorporates:
     *  Constant: '<S136>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_2) + (0.095124921972504 * UnitDelay1);

    /* Sum: '<S188>/Add1' incorporates:
     *  Product: '<S188>/Product'
     */
    UnitDelay1 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S188>/Product2' incorporates:
     *  Constant: '<S136>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (5.9896845167210271E-17 * UnitDelay1);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (0.095124921972503981 * UnitDelay1);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S186>/Product3' incorporates:
       *  Outport: '<S186>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S188>/Product2' incorporates:
       *  Outport: '<S188>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S15>/AND' */
  /* End of Outputs for SubSystem: '<S155>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S162>/Enabled Subsystem' */

  /* Sum: '<S162>/Add' incorporates:
   *  Delay: '<S135>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S18>/Accumulator2' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S18>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S15>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S15>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S15>/Switch' */

  /* DiscreteIntegrator: '<S18>/Accumulator' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S18>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S15>/Switch1' incorporates:
   *  Constant: '<S15>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S15>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S15>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S15>/Switch1' */

  /* RelationalOperator: '<S132>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S132>/Delay Input1'
   *
   * Block description for '<S132>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S133>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S133>/Delay Input1'
   *
   * Block description for '<S133>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S134>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S134>/Delay Input1'
   *
   * Block description for '<S134>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

  /* SignalConversion: '<S13>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S13>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S13>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S13>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S13>/Signal Copy6' incorporates:
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

  /* Sum: '<S16>/Add' incorporates:
   *  Constant: '<S16>/Constant'
   *  Gain: '<S16>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S16>/Add1' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Gain: '<S16>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S16>/Add2' incorporates:
   *  Constant: '<S16>/Constant2'
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
   *  RelationalOperator: '<S100>/FixPt Relational Operator'
   *  RelationalOperator: '<S101>/FixPt Relational Operator'
   *  RelationalOperator: '<S99>/FixPt Relational Operator'
   *  Switch: '<S10>/Switch2'
   *  Switch: '<S10>/Switch3'
   *  UnitDelay: '<S100>/Delay Input1'
   *  UnitDelay: '<S101>/Delay Input1'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S99>/Delay Input1'
   *
   * Block description for '<S100>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S99>/Delay Input1':
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
    /* SignalConversion generated from: '<S8>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S17>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S17>/Merge1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  SignalConversion generated from: '<S8>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S17>/Merge2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  SignalConversion generated from: '<S8>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S17>/Merge3' incorporates:
     *  Constant: '<S8>/Constant3'
     *  SignalConversion generated from: '<S8>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S17>/Merge4' incorporates:
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

    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S8>/Constant7'
     *  SignalConversion generated from: '<S8>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S17>/Merge9' incorporates:
     *  Constant: '<S8>/Constant9'
     *  SignalConversion generated from: '<S8>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S17>/Merge10' incorporates:
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
    Robot_Reached_Destination = false;

    /* Merge: '<S17>/Merge12' incorporates:
     *  Constant: '<S8>/Constant15'
     *  SignalConversion generated from: '<S8>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S17>/Merge11' incorporates:
     *  Constant: '<S8>/Constant11'
     *  SignalConversion generated from: '<S8>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S17>/Merge13' incorporates:
     *  Constant: '<S8>/Constant16'
     *  SignalConversion generated from: '<S8>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S8>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant17'
     */
    UnitDelay1 = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S17>/Merge21' incorporates:
     *  Constant: '<S8>/Constant21'
     *  SignalConversion generated from: '<S8>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S8>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S8>/Constant22'
     */
    rtb_Compare_cid = false;

    /* Merge: '<S17>/Merge23' incorporates:
     *  Constant: '<S8>/Constant23'
     *  SignalConversion generated from: '<S8>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* Merge: '<S17>/Merge24' incorporates:
     *  SignalConversion generated from: '<S8>/Auto_State_ID'
     *  UnitDelay: '<S1>/Unit Delay1'
     */
    Code_Gen_Model_B.State_ID = Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S25>/Unit Delay'
       *  UnitDelay: '<S25>/Unit Delay1'
       *  UnitDelay: '<S25>/Unit Delay2'
       *  UnitDelay: '<S26>/Unit Delay'
       *  UnitDelay: '<S26>/Unit Delay1'
       *  UnitDelay: '<S27>/Delay Input1'
       *  UnitDelay: '<S55>/Delay Input1'
       *  UnitDelay: '<S58>/Delay Input1'
       *  UnitDelay: '<S59>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S63>/Delay Input1'
       *
       * Block description for '<S27>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S55>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S58>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S59>/Delay Input1':
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
       */
      Code_Gen_Model_DW.UnitDelay2_DSTATE_e = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_p = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_os = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_b = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_kr = false;

      /* End of InitializeConditions for SubSystem: '<S1>/Autonomous' */

      /* SystemReset for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S25>/Reefscape_Auto_Steps'
       *  Chart: '<S29>/Reefscape_Chart'
       *  Merge: '<S17>/Merge7'
       *  SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle'
       */
      Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_B.Align_Center_b = false;
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_B.Gamepad_LT_out = false;
      Code_Gen_Model_B.Gamepad_POV_Down_k = false;
      Code_Gen_Model_B.Gamepad_POV_Left_p = false;
      Code_Gen_Model_B.Spline_Enable = false;
      Code_Gen_Model_B.Path_ID = 0U;
      Code_Gen_Model_DW.timer_n = 0.0;
      Code_Gen_Model_B.Translation_Speed_g = 0.0;
      Code_Gen_Model_B.Translation_Angle_l = 0.0;
      Code_Gen_Model_DW.is_active_c2_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_d = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_2_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position_m =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels_j = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_AT_On_Target_Timer_j =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Elevator_Height_Desired_h = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
      Code_Gen_Model_DW.timer_n2 = 0.0;

      /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      rtb_Algae_Wheel_Outside_DutyCyc = 0.0;
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

      /* End of Outputs for SubSystem: '<S1>/Autonomous' */
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_g = false;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = false;
      Code_Gen_Model_B.Set_Coral_Level_j = 0U;
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.timer_robot_target_g = 0.0;
      Code_Gen_Model_B.Coral_Score_j = false;

      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
     *  Constant: '<S25>/Constant1'
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
        Prev_Active_GameState = 1U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant17'
         */
        MultiportSwitch1 = 2U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant4'
         */
        Prev_Active_GameState = 15U;

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
        Prev_Active_GameState = 9U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant19'
         */
        MultiportSwitch1 = 10U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant11'
         */
        Prev_Active_GameState = 19U;

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
        Prev_Active_GameState = 5U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant16'
         */
        MultiportSwitch1 = 6U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant12'
         */
        Prev_Active_GameState = 11U;

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
     *  Constant: '<S25>/Constant1'
     *  Constant: '<S50>/Constant'
     *  Inport: '<Root>/IsBlueAlliance'
     *  RelationalOperator: '<S50>/Compare'
     *  Switch: '<S28>/Switch11'
     *  Switch: '<S28>/Switch8'
     *  Switch: '<S28>/Switch9'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S28>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S28>/Switch10'
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
      } else {
        /* Switch: '<S28>/Switch6' incorporates:
         *  Constant: '<S28>/Constant21'
         */
        Switch6 = 17U;

        /* Switch: '<S28>/Switch9' incorporates:
         *  Constant: '<S28>/Constant25'
         */
        Switch9 = 18U;
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
    }

    /* End of Switch: '<S28>/Switch6' */

    /* UnitDelay: '<S25>/Unit Delay1' */
    Code_Gen_Model_B.UnitDelay1_d = Code_Gen_Model_DW.UnitDelay1_DSTATE_p;

    /* Chart: '<S25>/Reefscape_Auto_Steps' incorporates:
     *  Constant: '<S25>/Constant1'
     *  UnitDelay: '<S14>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c5_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 1U;
      if ((Auto_Starting_Position == 1.0) || (Auto_Starting_Position == 3.0)) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mode_IN_Left_and_Right;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 1U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        Code_Gen_Model_B.Path_ID = Prev_Active_GameState;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Timer_to_L4;
        Code_Gen_Model_DW.timer_n = 0.0;
      } else {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        Code_Gen_Model_B.Path_ID = Prev_Active_GameState;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        Code_Gen_Model_B.Gamepad_B4_Y_out = true;
      }
    } else if (Code_Gen_Model_DW.is_c5_Code_Gen_Model ==
               Code_Gen_Model_IN_Center) {
      switch (Code_Gen_Model_DW.is_Center) {
       case Code_IN_Adjust_Height_for_Algae:
        Code_Gen_Model_B.Auto_Step_ID = 104U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Code_Gen_Model_DW.timer_n >= Auto_Algae_Height_Time) {
          Code_Gen_Model_B.Gamepad_POV_Left_p = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
          Code_Gen_Model_B.Auto_Step_ID = 105U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Algae;
          Code_Gen_Model_B.Gamepad_LT_out = true;
          Code_Gen_Model_B.Align_Center_b = true;
          Code_Gen_Model_DW.timer_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Scor:
        Code_Gen_Model_B.Auto_Step_ID = 103U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_IN_Adjust_Height_for_Algae;
          Code_Gen_Model_B.Auto_Step_ID = 104U;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
          Code_Gen_Model_B.Gamepad_POV_Left_p = true;
          Code_Gen_Model_DW.timer_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Collect_:
        Code_Gen_Model_B.Auto_Step_ID = 106U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen__IN_Path_to_Start_Line;
          Code_Gen_Model_B.Auto_Step_ID = 107U;

          /* Merge: '<S17>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          Code_Gen_Model_B.Path_ID = MultiportSwitch1;
          Code_Gen_Model_B.Gamepad_POV_Down_k = true;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Code_Gen_Model_B.Auto_Step_ID = 105U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Algae;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Compare_f) {
          Code_Gen_Model_B.Gamepad_LT_out = false;
          Code_Gen_Model_B.Align_Center_b = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Collect_;
          Code_Gen_Model_B.Auto_Step_ID = 106U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
          Code_Gen_Model_DW.timer_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case Code_Gen_Model_IN_Path_to_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 101U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.Gamepad_B4_Y_out = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Score_at_Reef;
          Code_Gen_Model_B.Auto_Step_ID = 102U;

          /* Merge: '<S17>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          Code_Gen_Model_B.Align_Left_d = true;
        }
        break;

       case Code_Gen__IN_Path_to_Start_Line:
        Code_Gen_Model_B.Auto_Step_ID = 107U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.Gamepad_POV_Down_k = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 108U;

          /* Merge: '<S17>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          Code_Gen_Model_B.Translation_Speed_g = 0.0;
          Code_Gen_Model_B.Translation_Angle_l = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Score_at_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 102U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        if (Code_Gen_Model_B.UnitDelay1_d) {
          Code_Gen_Model_B.Align_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Back_Up_from_Reef_Coral_Scor;
          Code_Gen_Model_B.Auto_Step_ID = 103U;
          Code_Gen_Model_B.Translation_Speed_g = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_l = 3.1415926535897931;
          Code_Gen_Model_DW.timer_n = 0.0;
        }
        break;

       default:
        /* case IN_Wait_for_Teleop: */
        Code_Gen_Model_B.Auto_Step_ID = 108U;

        /* Merge: '<S17>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_g = 0.0;
        Code_Gen_Model_B.Translation_Angle_l = 0.0;
        break;
      }
    } else {
      /* Merge: '<S17>/Merge7' incorporates:
       *  UnitDelay: '<S14>/Unit Delay'
       *  UnitDelay: '<S25>/Unit Delay2'
       */
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
        &MultiportSwitch1, &Code_Gen_Model_B.Spline_Enable, &Switch6, &Switch9,
        &Code_Gen_Model_DW.UnitDelay2_DSTATE_e);
    }

    /* End of Chart: '<S25>/Reefscape_Auto_Steps' */

    /* Selector: '<S25>/Selector' incorporates:
     *  Constant: '<S25>/Constant'
     *  Merge: '<S17>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s229_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s229_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s229_iter];
      }
    }

    /* End of Selector: '<S25>/Selector' */

    /* RelationalOperator: '<S58>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Reached_Destination = (((int32_T)Code_Gen_Model_B.Gamepad_B4_Y_out) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_ne));

    /* RelationalOperator: '<S52>/FixPt Relational Operator' */
    rtb_Is_Absolute_Translation_g = false;

    /* RelationalOperator: '<S53>/FixPt Relational Operator' */
    rtb_Is_Absolute_Steering = false;

    /* RelationalOperator: '<S57>/FixPt Relational Operator' */
    FixPtRelationalOperator_o = false;

    /* RelationalOperator: '<S59>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_oi = (((int32_T)
      Code_Gen_Model_B.Gamepad_Start_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff));

    /* RelationalOperator: '<S54>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_p4 = false;

    /* RelationalOperator: '<S60>/FixPt Relational Operator' */
    rtb_Compare_cid = false;

    /* RelationalOperator: '<S61>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_af = false;

    /* RelationalOperator: '<S62>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_oe = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down_k) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3));

    /* RelationalOperator: '<S55>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S55>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_e = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left_p) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae));

    /* RelationalOperator: '<S56>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_lp = false;

    /* Chart: '<S29>/Reefscape_Chart' incorporates:
     *  RelationalOperator: '<S63>/FixPt Relational Operator'
     *  UnitDelay: '<S25>/Unit Delay'
     *  UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c2_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c2_Code_Gen_Model = 1U;

      /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
      enter_internal_c2_Code_Gen_Mode(&rtb_Algae_Wheel_Inside_DutyCycl,
        &rtb_Algae_Wheel_Outside_DutyCyc);
    } else {
      switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o) {
       case Code_Gen_M_IN_Algae_Pickup_High:
        Code_Gen_Mode_Algae_Pickup_High(&Compare_f);
        break;

       case Code_Gen_Mo_IN_Algae_Pickup_Low:
        Code_Gen_Model_Algae_Pickup_Low(&Compare_f);
        break;

       case Code_Gen_Model_IN_Algae_Score:
        Code_Gen_Model_B.State_ID_d = 4.1;
        Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
        if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!Compare_f)) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Gen_Model_IN_Coral_Pickup;
          Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.State_ID_d = 1.0;
          Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
          Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
          Code_Gen_Model_DW.Set_L1_j = false;
          Code_Gen_Model_DW.Set_L2_b = false;
          Code_Gen_Model_DW.Set_L3_f = false;
          Code_Gen_Model_DW.Set_L4_d = false;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Gen_Model_IN_Algae_Score;
          Code_Gen_Model_B.Elevator_Height_Desired_h =
            Elevator_Height_Algae_Score;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Gen_Mo_IN_Algae_Pickup_Low;
          Code_Gen_Model_B.State_ID_d = 4.2;
          Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
          Code_Gen_Model_B.Set_Algae_Level_p = 2U;
        }
        break;

       case Code_Gen_Model_IN_Auto_Start:
        Code_Gen_Model_Auto_Start(&Robot_Reached_Destination,
          &rtb_Is_Absolute_Translation_g, &rtb_Is_Absolute_Steering,
          &FixPtRelationalOperator_o);
        break;

       case Code_Gen_Model_IN_Coral_Eject:
        Code_Gen_Model_Coral_Eject(&Compare, &Compare_f, &rtb_Compare_cid);
        break;

       case Code_Gen_Model_IN_Coral_Pickup:
        Code_Gen_Model_Coral_Pickup(&Compare, &Compare_f,
          &Robot_Reached_Destination, &rtb_Is_Absolute_Translation_g,
          &rtb_Is_Absolute_Steering, &FixPtRelationalOperator_o);
        break;

       case Code_Ge_IN_Coral_Score_Position:
        Code_Gen_M_Coral_Score_Position(&Compare, &Robot_Reached_Destination,
          &rtb_Compare_cid, &rtb_Is_Absolute_Translation_g,
          &rtb_Is_Absolute_Steering, &FixPtRelationalOperator_o);
        break;

       case Code__IN_Elevator_Height_Bottom:
        Code_Gen_Model_B.State_ID_d = 0.2;
        Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
        if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) && (!Compare_f)) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Gen_Model_IN_Coral_Pickup;
          Code_Gen_Model_DW.is_Actions_n = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.State_ID_d = 1.0;
          Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
          Code_Gen_Model_DW.is_Set_Level_g = Code_Gen_Model_IN_None;
          Code_Gen_Model_DW.Set_L1_j = false;
          Code_Gen_Model_DW.Set_L2_b = false;
          Code_Gen_Model_DW.Set_L3_f = false;
          Code_Gen_Model_DW.Set_L4_d = false;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Gen_Model_IN_Algae_Score;
          Code_Gen_Model_B.State_ID_d = 4.1;
          Code_Gen_Model_B.Elevator_Height_Desired_h =
            Elevator_Height_Algae_Score;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Gen_Mo_IN_Algae_Pickup_Low;
          Code_Gen_Model_B.State_ID_d = 4.2;
          Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
          Code_Gen_Model_B.Set_Algae_Level_p = 2U;
        }
        break;

       case C_IN_Elevator_Height_Bottom_pre:
        Code_Elevator_Height_Bottom_pre(&Compare_f);
        break;

       case Code_Gen_Mode_IN_End_Game_Climb:
        Code_Gen_Model_End_Game_Climb(&Compare_f);
        break;

       default:
        /* case IN_Start_Angle: */
        Code_Gen_Model_B.State_ID_d = 2.0;
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >
            Coral_Arm_Angle_Start_Thresh) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
            Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi(&Robot_Reached_Destination,
            &rtb_Is_Absolute_Translation_g, &rtb_Is_Absolute_Steering,
            &FixPtRelationalOperator_o);
        }
        break;
      }

      switch (Code_Gen_Model_DW.is_Algae_Wheels_j) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels_j = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer_n2 >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels_j = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n2 += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        if (((int32_T)Code_Gen_Model_B.Gamepad_LT_out) > ((int32_T)
             Code_Gen_Model_DW.DelayInput1_DSTATE_os)) {
          Code_Gen_Model_DW.is_Algae_Wheels_j = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        }
        break;
      }

      if (Code_Gen_Model_DW.is_AT_On_Target_Timer_j ==
          Code_Gen_Model_IN_Off_Target) {
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_i3) {
          Code_Gen_Model_DW.is_AT_On_Target_Timer_j =
            Code_Gen_Model_IN_On_Target;
          Code_Gen_Model_DW.timer_robot_target_g = 0.02;
        }

        /* case IN_On_Target: */
      } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_i3) {
        Code_Gen_Model_DW.is_AT_On_Target_Timer_j = Code_Gen_Model_IN_Off_Target;
        Code_Gen_Model_DW.timer_robot_target_g = 0.0;
      } else {
        Code_Gen_Model_DW.timer_robot_target_g += 0.02;
      }
    }

    /* End of Chart: '<S29>/Reefscape_Chart' */

    /* Merge: '<S17>/Merge13' incorporates:
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_cid = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' */
    UnitDelay1 = Code_Gen_Model_B.Coral_Wheel_DC_a;

    /* Merge: '<S17>/Merge11' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_h;

    /* Merge: '<S17>/Merge21' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_g;

    /* Merge: '<S17>/Merge24' incorporates:
     *  SignalConversion generated from: '<S2>/State_ID'
     */
    Code_Gen_Model_B.State_ID = Code_Gen_Model_B.State_ID_d;

    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S48>/Constant'
     *  Logic: '<S26>/AND'
     *  Logic: '<S26>/AND1'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     *  Switch: '<S26>/Switch1'
     *  Switch: '<S26>/Switch4'
     *  Switch: '<S26>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left_d) {
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right_i) {
      /* Switch: '<S26>/Switch1' incorporates:
       *  Constant: '<S26>/Constant2'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Coral_Level_j == 1)) {
      /* Switch: '<S26>/Switch4' incorporates:
       *  Constant: '<S26>/Constant3'
       *  Switch: '<S26>/Switch1'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S26>/Switch6' incorporates:
       *  Constant: '<S26>/Constant6'
       *  Switch: '<S26>/Switch1'
       *  Switch: '<S26>/Switch4'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S26>/Switch4' incorporates:
       *  Switch: '<S26>/Switch1'
       *  UnitDelay: '<S26>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S26>/Switch' */

    /* Sum: '<S26>/Subtract1' */
    rtb_Enable_Wheels = rtb_Rotationmatrixfromlocalto_2 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S25>/Signal Copy6' */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Y = rtb_Enable_Wheels;

    /* Switch: '<S26>/Switch2' incorporates:
     *  Constant: '<S26>/Constant4'
     *  Constant: '<S36>/Constant'
     *  Logic: '<S26>/AND2'
     *  RelationalOperator: '<S36>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center_b) && (Code_Gen_Model_B.Set_Coral_Level_j
         == 1)) {
      rtb_Switch2_gl = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S26>/OR' */
      Robot_Reached_Destination = ((Code_Gen_Model_B.Align_Left_d) ||
        (Code_Gen_Model_B.Align_Right_i));

      /* Switch: '<S26>/Switch3' incorporates:
       *  Constant: '<S26>/Constant'
       *  Constant: '<S32>/Constant'
       *  Constant: '<S33>/Constant'
       *  Constant: '<S35>/Constant'
       *  Constant: '<S49>/Constant'
       *  Logic: '<S26>/AND3'
       *  Logic: '<S26>/Logical Operator5'
       *  Logic: '<S26>/Logical Operator6'
       *  Logic: '<S26>/OR1'
       *  RelationalOperator: '<S32>/Compare'
       *  RelationalOperator: '<S33>/Compare'
       *  RelationalOperator: '<S35>/Compare'
       *  RelationalOperator: '<S49>/Compare'
       *  Switch: '<S26>/Switch5'
       *  Switch: '<S26>/Switch7'
       */
      if (Robot_Reached_Destination && ((Code_Gen_Model_B.Set_Coral_Level_j == 2)
           || (Code_Gen_Model_B.Set_Coral_Level_j == 3))) {
        rtb_Switch2_gl = AT_Reef_Target_L2_L3_X;
      } else if (Robot_Reached_Destination &&
                 (Code_Gen_Model_B.Set_Coral_Level_j == 4)) {
        /* Switch: '<S26>/Switch5' incorporates:
         *  Constant: '<S26>/Constant5'
         */
        rtb_Switch2_gl = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center_b) &&
                 (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
        /* Switch: '<S26>/Switch7' incorporates:
         *  Constant: '<S26>/Constant7'
         *  Switch: '<S26>/Switch5'
         */
        rtb_Switch2_gl = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S26>/Switch5' incorporates:
         *  UnitDelay: '<S26>/Unit Delay'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
      }

      /* End of Switch: '<S26>/Switch3' */
    }

    /* End of Switch: '<S26>/Switch2' */

    /* Sum: '<S26>/Subtract' */
    rtb_Disable_Wheels = rtb_Switch2_gl -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S25>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus1'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_X = -rtb_Disable_Wheels;

    /* Logic: '<S26>/Logical Operator1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Logic: '<S26>/Logical Operator2'
     *  Logic: '<S26>/Logical Operator3'
     *  Logic: '<S26>/Logical Operator4'
     *  Logic: '<S26>/NOT'
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

    /* SignalConversion: '<S25>/Signal Copy1' */
    Code_Gen_Model_B.Auto_AT_Relative_Enable = Robot_Reached_Destination;

    /* SignalConversion: '<S25>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S31>/Switch2' incorporates:
     *  Switch: '<S31>/Switch'
     *  Switch: '<S31>/Switch1'
     */
    if (Code_Gen_Model_B.Auto_AT_Relative_Enable) {
      /* Merge: '<S17>/Merge3' incorporates:
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

      /* Switch: '<S66>/Switch2' incorporates:
       *  Constant: '<S31>/Constant10'
       *  RelationalOperator: '<S66>/LowerRelop1'
       *  RelationalOperator: '<S66>/UpperRelop'
       *  Switch: '<S66>/Switch'
       *  UnaryMinus: '<S31>/Unary Minus'
       */
      if (rtb_Reset_Wheel_Offsets > AT_Steering_Speed_Max) {
        /* Merge: '<S17>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Reset_Wheel_Offsets < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S66>/Switch' incorporates:
         *  Merge: '<S17>/Merge2'
         *  UnaryMinus: '<S31>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S17>/Merge2' incorporates:
         *  Switch: '<S66>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Reset_Wheel_Offsets;
      }

      /* End of Switch: '<S66>/Switch2' */

      /* Merge: '<S17>/Merge4' incorporates:
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
      /* Merge: '<S17>/Merge3' */
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_B.Translation_Angle_l;

      /* Merge: '<S17>/Merge2' incorporates:
       *  Constant: '<S31>/Constant2'
       */
      Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S17>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.Translation_Speed_g;
    }

    /* End of Switch: '<S31>/Switch2' */

    /* Abs: '<S26>/Abs2' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus'
     */
    rtb_Reset_Wheel_Offsets = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S26>/Abs' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus1'
     */
    rtb_Disable_Wheels = fabs(-rtb_Disable_Wheels);

    /* Abs: '<S26>/Abs1' */
    rtb_Enable_Wheels = fabs(rtb_Enable_Wheels);

    /* Merge: '<S17>/Merge23' incorporates:
     *  Constant: '<S34>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Logic: '<S26>/Logical Operator7'
     *  RelationalOperator: '<S34>/Compare'
     *  RelationalOperator: '<S41>/Compare'
     *  RelationalOperator: '<S42>/Compare'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Robot_Reached_Destination
      && (rtb_Disable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Reset_Wheel_Offsets <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S25>/Signal Copy8' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Logic: '<S26>/Logical Operator'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S40>/Compare'
     */
    Code_Gen_Model_B.Auto_AT_On_Target = (((Robot_Reached_Destination &&
      (rtb_Disable_Wheels <= AT_Max_Error_XY)) && (rtb_Enable_Wheels <=
      AT_Max_Error_XY)) && (rtb_Reset_Wheel_Offsets <= AT_Max_Error_Angle));

    /* Merge: '<S17>/Merge9' incorporates:
     *  Lookup_n-D: '<S25>/1-D Lookup Table'
     */
    Code_Gen_Model_B.Spline_Num_Poses =
      Code_Gen_Model_ConstP.uDLookupTable_tableData[plook_u32u8_evencka
      (Code_Gen_Model_B.Path_ID, 1U, 1U, 19U)];

    /* Merge: '<S17>/Merge12' incorporates:
     *  Constant: '<S29>/Constant5'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* Merge: '<S17>/Merge1' incorporates:
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

    /* Merge: '<S17>/Merge10' incorporates:
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
    Robot_Reached_Destination = false;

    /* Update for UnitDelay: '<S25>/Unit Delay2' incorporates:
     *  RelationalOperator: '<S27>/FixPt Relational Operator'
     *  UnitDelay: '<S27>/Delay Input1'
     *
     * Block description for '<S27>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_e = (((int32_T)
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m) < ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_kr));

    /* Update for UnitDelay: '<S25>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_p = Code_Gen_Model_B.Coral_Score_j;

    /* Update for UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ne = Code_Gen_Model_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S52>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant3'
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_l = false;

    /* Update for UnitDelay: '<S53>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant4'
     *
     * Block description for '<S53>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bd = false;

    /* Update for UnitDelay: '<S57>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant6'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_au = false;

    /* Update for UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ff = Code_Gen_Model_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S54>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant11'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ev = false;

    /* Update for UnitDelay: '<S60>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant17'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_os = Code_Gen_Model_B.Gamepad_LT_out;

    /* Update for UnitDelay: '<S64>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant12'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = false;

    /* Update for UnitDelay: '<S61>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant13'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b3 =
      Code_Gen_Model_B.Gamepad_POV_Down_k;

    /* Update for UnitDelay: '<S55>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_p;

    /* Update for UnitDelay: '<S56>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant14'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_mu = false;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Update for UnitDelay: '<S26>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S27>/Delay Input1'
     *
     * Block description for '<S27>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_kr =
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S23>/Unit Delay'
       *  UnitDelay: '<S416>/Unit Delay1'
       *  UnitDelay: '<S417>/Unit Delay'
       *  UnitDelay: '<S417>/Unit Delay1'
       *  UnitDelay: '<S439>/Unit Delay1'
       *  UnitDelay: '<S439>/Unit Delay2'
       *  UnitDelay: '<S439>/Unit Delay3'
       *  UnitDelay: '<S439>/Unit Delay4'
       *  UnitDelay: '<S442>/Delay Input1'
       *  UnitDelay: '<S443>/Delay Input1'
       *  UnitDelay: '<S444>/Delay Input1'
       *  UnitDelay: '<S445>/Delay Input1'
       *  UnitDelay: '<S446>/Delay Input1'
       *  UnitDelay: '<S447>/Delay Input1'
       *  UnitDelay: '<S453>/Unit Delay'
       *  UnitDelay: '<S453>/Unit Delay1'
       *  UnitDelay: '<S457>/FixPt Unit Delay1'
       *  UnitDelay: '<S457>/FixPt Unit Delay2'
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
       *  UnitDelay: '<S471>/Delay Input1'
       *  UnitDelay: '<S472>/Delay Input1'
       *
       * Block description for '<S442>/Delay Input1':
       *
       *  Store in Global RAM
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
       *
       * Block description for '<S471>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S472>/Delay Input1':
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
      Code_Gen_Model_DW.UnitDelay2_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S419>/Reefscape_Chart'
       *  SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle'
       */
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.State_ID_a = 0.0;
      Code_Gen_Model_B.Elevator_Height_Desired_m = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.timer = 0.0;
      rtb_Add_o5 = 0.0;

      /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

      /* End of Outputs for SubSystem: '<S1>/Teleop' */
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.timer_robot_target = 0.0;

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* SignalConversion generated from: '<S23>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S17>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Logic: '<S416>/Logical Operator8' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    Robot_Reached_Destination = ((Code_Gen_Model_B.Cage_Left_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_cid = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S416>/Logical Operator9' */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Cage_Left_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator7' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator12' */
    FixPtRelationalOperator_o = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator13' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Start_Blue_Ac = ((Code_Gen_Model_B.Cage_Right_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator14' */
    rtb_AT_Cage_Right_Start_Red_Act = ((Code_Gen_Model_B.Cage_Right_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator19' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Left_Finish_Blue_Ac = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator20' */
    rtb_AT_Cage_Left_Finish_Red_Act = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator18' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Middle_Finish_Blue_ = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator15' */
    rtb_AT_Cage_Middle_Finish_Red_A = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator16' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Finish_Blue_A = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator17' */
    rtb_AT_Cage_Right_Finish_Red_Ac = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator6' */
    rtb_AT_Processor_Red_Active = ((Code_Gen_Model_B.Processor) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator5' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Processor_Blue_Active = ((Code_Gen_Model_B.Processor) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator4' */
    rtb_AT_CS_Right_Red_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator1' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_CS_Right_Blue_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S416>/Logical Operator3' */
    rtb_AT_CS_Left_Red_Active = ((Code_Gen_Model_B.Coral_Station_Left) &&
      rtb_Compare_cid);

    /* Logic: '<S416>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_cid = ((Code_Gen_Model_B.Coral_Station_Left) &&
                       (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Switch: '<S416>/Switch2' incorporates:
     *  Switch: '<S416>/Switch1'
     *  Switch: '<S416>/Switch10'
     *  Switch: '<S416>/Switch12'
     *  Switch: '<S416>/Switch13'
     *  Switch: '<S416>/Switch14'
     *  Switch: '<S416>/Switch16'
     *  Switch: '<S416>/Switch19'
     *  Switch: '<S416>/Switch20'
     *  Switch: '<S416>/Switch21'
     *  Switch: '<S416>/Switch22'
     *  Switch: '<S416>/Switch24'
     *  Switch: '<S416>/Switch3'
     *  Switch: '<S416>/Switch30'
     *  Switch: '<S416>/Switch4'
     */
    if (rtb_Compare_cid) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant9'
       *  Sum: '<S416>/Add17'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant28'
       *  Sum: '<S416>/Add23'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant5'
       *  Sum: '<S416>/Add16'
       *  Switch: '<S416>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant27'
       *  Sum: '<S416>/Add22'
       *  Switch: '<S416>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant4'
       *  Sum: '<S416>/Add10'
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant26'
       *  Sum: '<S416>/Add12'
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant17'
       *  Sum: '<S416>/Add11'
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch12'
       *  Switch: '<S416>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant3'
       *  Sum: '<S416>/Add13'
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch20'
       *  Switch: '<S416>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant18'
       *  Sum: '<S416>/Add14'
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch12'
       *  Switch: '<S416>/Switch13'
       *  Switch: '<S416>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant21'
       *  Sum: '<S416>/Add20'
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch20'
       *  Switch: '<S416>/Switch21'
       *  Switch: '<S416>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant19'
       *  Sum: '<S416>/Add15'
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch12'
       *  Switch: '<S416>/Switch13'
       *  Switch: '<S416>/Switch14'
       *  Switch: '<S416>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant23'
       *  Sum: '<S416>/Add21'
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch20'
       *  Switch: '<S416>/Switch21'
       *  Switch: '<S416>/Switch22'
       *  Switch: '<S416>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant7'
       *  Sum: '<S416>/Add1'
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch12'
       *  Switch: '<S416>/Switch13'
       *  Switch: '<S416>/Switch14'
       *  Switch: '<S416>/Switch16'
       *  Switch: '<S416>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant32'
       *  Sum: '<S416>/Add24'
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch20'
       *  Switch: '<S416>/Switch21'
       *  Switch: '<S416>/Switch22'
       *  Switch: '<S416>/Switch24'
       *  Switch: '<S416>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S416>/Switch2' incorporates:
       *  Constant: '<S416>/Constant15'
       *  Sum: '<S416>/Add2'
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch10'
       *  Switch: '<S416>/Switch12'
       *  Switch: '<S416>/Switch13'
       *  Switch: '<S416>/Switch14'
       *  Switch: '<S416>/Switch16'
       *  Switch: '<S416>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S416>/Switch4' incorporates:
       *  Constant: '<S416>/Constant25'
       *  Sum: '<S416>/Add19'
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch20'
       *  Switch: '<S416>/Switch21'
       *  Switch: '<S416>/Switch22'
       *  Switch: '<S416>/Switch24'
       *  Switch: '<S416>/Switch29'
       *  Switch: '<S416>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S416>/Switch11' incorporates:
       *  Switch: '<S416>/Switch1'
       *  Switch: '<S416>/Switch10'
       *  Switch: '<S416>/Switch12'
       *  Switch: '<S416>/Switch13'
       *  Switch: '<S416>/Switch14'
       *  Switch: '<S416>/Switch16'
       *  Switch: '<S416>/Switch3'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant20'
         *  Sum: '<S416>/Add3'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (FixPtRelationalOperator_o) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant24'
         *  Sum: '<S416>/Add4'
         *  Switch: '<S416>/Switch17'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant29'
         *  Sum: '<S416>/Add5'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant31'
         *  Sum: '<S416>/Add6'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant39'
         *  Sum: '<S416>/Add25'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant2'
         *  Sum: '<S416>/Add26'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch31'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant34'
         *  Sum: '<S416>/Add27'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch31'
         *  Switch: '<S416>/Switch32'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant35'
         *  Sum: '<S416>/Add28'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch31'
         *  Switch: '<S416>/Switch32'
         *  Switch: '<S416>/Switch33'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant36'
         *  Sum: '<S416>/Add29'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch31'
         *  Switch: '<S416>/Switch32'
         *  Switch: '<S416>/Switch33'
         *  Switch: '<S416>/Switch34'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant38'
         *  Sum: '<S416>/Add30'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch31'
         *  Switch: '<S416>/Switch32'
         *  Switch: '<S416>/Switch33'
         *  Switch: '<S416>/Switch34'
         *  Switch: '<S416>/Switch35'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else {
        /* Switch: '<S416>/Switch2' incorporates:
         *  Constant: '<S416>/Constant37'
         *  Switch: '<S416>/Switch17'
         *  Switch: '<S416>/Switch18'
         *  Switch: '<S416>/Switch23'
         *  Switch: '<S416>/Switch31'
         *  Switch: '<S416>/Switch32'
         *  Switch: '<S416>/Switch33'
         *  Switch: '<S416>/Switch34'
         *  Switch: '<S416>/Switch35'
         *  Switch: '<S416>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = 0.0;
      }

      /* End of Switch: '<S416>/Switch11' */

      /* Switch: '<S416>/Switch25' incorporates:
       *  Switch: '<S416>/Switch19'
       *  Switch: '<S416>/Switch20'
       *  Switch: '<S416>/Switch21'
       *  Switch: '<S416>/Switch22'
       *  Switch: '<S416>/Switch24'
       *  Switch: '<S416>/Switch26'
       *  Switch: '<S416>/Switch27'
       *  Switch: '<S416>/Switch28'
       *  Switch: '<S416>/Switch29'
       *  Switch: '<S416>/Switch30'
       *  Switch: '<S416>/Switch37'
       *  Switch: '<S416>/Switch38'
       *  Switch: '<S416>/Switch39'
       *  Switch: '<S416>/Switch40'
       *  Switch: '<S416>/Switch41'
       *  Switch: '<S416>/Switch42'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant22'
         *  Sum: '<S416>/Add7'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (FixPtRelationalOperator_o) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant33'
         *  Sum: '<S416>/Add8'
         *  Switch: '<S416>/Switch26'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant6'
         *  Sum: '<S416>/Add9'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant16'
         *  Sum: '<S416>/Add18'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant43'
         *  Sum: '<S416>/Add33'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant42'
         *  Sum: '<S416>/Add32'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch41'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant41'
         *  Sum: '<S416>/Add34'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch37'
         *  Switch: '<S416>/Switch41'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant44'
         *  Sum: '<S416>/Add35'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch37'
         *  Switch: '<S416>/Switch38'
         *  Switch: '<S416>/Switch41'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant45'
         *  Sum: '<S416>/Add36'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch37'
         *  Switch: '<S416>/Switch38'
         *  Switch: '<S416>/Switch39'
         *  Switch: '<S416>/Switch41'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant40'
         *  Sum: '<S416>/Add31'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch37'
         *  Switch: '<S416>/Switch38'
         *  Switch: '<S416>/Switch39'
         *  Switch: '<S416>/Switch40'
         *  Switch: '<S416>/Switch41'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else {
        /* Switch: '<S416>/Switch4' incorporates:
         *  Constant: '<S416>/Constant30'
         *  Switch: '<S416>/Switch26'
         *  Switch: '<S416>/Switch27'
         *  Switch: '<S416>/Switch28'
         *  Switch: '<S416>/Switch37'
         *  Switch: '<S416>/Switch38'
         *  Switch: '<S416>/Switch39'
         *  Switch: '<S416>/Switch40'
         *  Switch: '<S416>/Switch41'
         *  Switch: '<S416>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = 0.0;
      }

      /* End of Switch: '<S416>/Switch25' */
    }

    /* End of Switch: '<S416>/Switch2' */

    /* Switch: '<S453>/Switch1' incorporates:
     *  Constant: '<S458>/Constant'
     *  Constant: '<S459>/Constant'
     *  Logic: '<S453>/AND'
     *  RelationalOperator: '<S458>/Compare'
     *  RelationalOperator: '<S459>/Compare'
     *  Switch: '<S453>/Switch2'
     *  UnitDelay: '<S453>/Unit Delay'
     *  UnitDelay: '<S453>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_gl = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S453>/Switch1' */

    /* Lookup_n-D: '<S440>/Modulation_Drv' incorporates:
     *  Math: '<S440>/Magnitude'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S451>/Compare' incorporates:
     *  Constant: '<S451>/Constant'
     */
    rtb_Compare_dq = (rtb_Algae_Wheel_Outside_DutyCyc == 0.0);

    /* RelationalOperator: '<S460>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S460>/Delay Input1'
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2_k = (Code_Gen_Model_U.Gamepad_B1_A >
                  Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S461>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S461>/Delay Input1'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S465>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S465>/Delay Input1'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S466>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S466>/Delay Input1'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S467>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S467>/Delay Input1'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ne =
      (Code_Gen_Model_U.Gamepad_Start > Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S462>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S462>/Delay Input1'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_j = (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S468>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S468>/Delay Input1'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_l = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_p);

    /* RelationalOperator: '<S472>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S472>/Delay Input1'
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_p = (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S469>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S469>/Delay Input1'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_i = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Up) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S470>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S470>/Delay Input1'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_m = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* RelationalOperator: '<S463>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S463>/Delay Input1'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ji = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S464>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S464>/Delay Input1'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

    /* DeadZone: '<S419>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S419>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S419>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S419>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S419>/Dead Zone' */

    /* DeadZone: '<S419>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S419>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S419>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S419>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S419>/Dead Zone1' */

    /* Chart: '<S419>/Reefscape_Chart' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S471>/FixPt Relational Operator'
     *  UnitDelay: '<S23>/Unit Delay'
     *  UnitDelay: '<S471>/Delay Input1'
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;

      /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' incorporates:
       *  UnitDelay: '<S19>/Unit Delay'
       *  UnitDelay: '<S1>/Unit Delay1'
       */
      enter_internal_c4_Code_Gen_Mode(&Code_Gen_Model_B.Active_GameState,
        &Code_Gen_Model_DW.UnitDelay1_DSTATE_b, &rtb_Algae_Wheel_Inside_DutyCycl,
        &rtb_Add_o5);
    } else {
      switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel) {
       case Code_Gen_M_IN_Algae_Pickup_High:
        Code_Gen_Mo_Algae_Pickup_High_k(&Compare_f);
        break;

       case Code_Gen_Mo_IN_Algae_Pickup_Low:
        Code_Gen_Mod_Algae_Pickup_Low_c(&Compare_f);
        break;

       case Code_Gen_Model_IN_Algae_Score:
        Code_Gen_Model_B.State_ID_a = 4.1;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!Compare_f)) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Model_IN_Coral_Pickup;
          Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.State_ID_a = 1.0;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
          Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
          Code_Gen_Model_DW.Set_L1 = false;
          Code_Gen_Model_DW.Set_L2 = false;
          Code_Gen_Model_DW.Set_L3 = false;
          Code_Gen_Model_DW.Set_L4 = false;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
          if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
              Coral_Arm_Angle_Start_Thresh) {
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
              Code__IN_Elevator_Height_Bottom;
            Code_Gen_Model_B.State_ID_a = 0.2;
            Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
            Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
          } else {
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
              C_IN_Elevator_Height_Bottom_pre;
            Code_Gen_Model_B.State_ID_a = 0.1;
            Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          }
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Mode_IN_End_Game_Climb;
          Code_Gen_Model_B.State_ID_a = 4.4;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Model_IN_Algae_Score;
          Code_Gen_Model_B.Elevator_Height_Desired_m =
            Elevator_Height_Algae_Score;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Mo_IN_Algae_Pickup_Low;
          Code_Gen_Model_B.State_ID_a = 4.2;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
          Code_Gen_Model_B.Set_Algae_Level = 2U;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_M_IN_Algae_Pickup_High;
          Code_Gen_Model_B.State_ID_a = 4.3;
          Code_Gen_Model_B.Elevator_Height_Desired_m =
            Elevator_Height_Algae_High;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
          Code_Gen_Model_B.Set_Algae_Level = 3U;
        }
        break;

       case Code_Gen_Model_IN_Auto_Start:
        Code_Gen_Model_Auto_Start_a(&rtb_AND2_k, &FixPtRelationalOperator_n,
          &FixPtRelationalOperator_k, &FixPtRelationalOperator_d);
        break;

       case Code_Gen_Model_IN_Coral_Eject:
        Code_Gen_Model_Coral_Eject_k(&Compare, &Compare_f,
          &FixPtRelationalOperator_l);
        break;

       case Code_Gen_Model_IN_Coral_Pickup:
        Code_Gen_Model_Coral_Pickup_m(&Compare, &Compare_f, &rtb_AND2_k,
          &FixPtRelationalOperator_n, &FixPtRelationalOperator_k,
          &FixPtRelationalOperator_d);
        break;

       case Code_Ge_IN_Coral_Score_Position:
        Code_Gen_Coral_Score_Position_m(&Compare, &rtb_AND2_k,
          &FixPtRelationalOperator_l, &FixPtRelationalOperator_n,
          &FixPtRelationalOperator_k, &FixPtRelationalOperator_d);
        break;

       case Code__IN_Elevator_Height_Bottom:
        Code_Gen_Model_B.State_ID_a = 0.2;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) && (!Compare_f)) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Model_IN_Coral_Pickup;
          Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.State_ID_a = 1.0;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = -90.0;
          Code_Gen_Model_DW.is_Set_Level_c = Code_Gen_Model_IN_None;
          Code_Gen_Model_DW.Set_L1 = false;
          Code_Gen_Model_DW.Set_L2 = false;
          Code_Gen_Model_DW.Set_L3 = false;
          Code_Gen_Model_DW.Set_L4 = false;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
          if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
              Coral_Arm_Angle_Start_Thresh) {
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
              Code__IN_Elevator_Height_Bottom;
            Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
            Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
          } else {
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
              C_IN_Elevator_Height_Bottom_pre;
            Code_Gen_Model_B.State_ID_a = 0.1;
            Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          }
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Mode_IN_End_Game_Climb;
          Code_Gen_Model_B.State_ID_a = 4.4;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_End_Game;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Model_IN_Algae_Score;
          Code_Gen_Model_B.State_ID_a = 4.1;
          Code_Gen_Model_B.Elevator_Height_Desired_m =
            Elevator_Height_Algae_Score;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Mo_IN_Algae_Pickup_Low;
          Code_Gen_Model_B.State_ID_a = 4.2;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
          Code_Gen_Model_B.Set_Algae_Level = 2U;
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_M_IN_Algae_Pickup_High;
          Code_Gen_Model_B.State_ID_a = 4.3;
          Code_Gen_Model_B.Elevator_Height_Desired_m =
            Elevator_Height_Algae_High;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_m = Coral_Arm_Angle_Up;
          Code_Gen_Model_B.Set_Algae_Level = 3U;
        }
        break;

       case C_IN_Elevator_Height_Bottom_pre:
        Co_Elevator_Height_Bottom_pre_j(&Compare_f);
        break;

       case Code_Gen_Mode_IN_End_Game_Climb:
        Code_Gen_Model_End_Game_Climb_f(&Compare_f);
        break;

       default:
        /* case IN_Start_Angle: */
        Code_Gen_Model_B.State_ID_a = 2.0;
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >
            Coral_Arm_Angle_Start_Thresh) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Po_f(&rtb_AND2_k,
            &FixPtRelationalOperator_n, &FixPtRelationalOperator_k,
            &FixPtRelationalOperator_d);
        }
        break;
      }

      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        rtb_Add_o5 = Algae_Hold_DC;

        /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        if (FixPtRelationalOperator_p) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;
          rtb_Add_o5 = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        rtb_Add_o5 = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;
          rtb_Add_o5 = Algae_Hold_DC;

          /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        } else if (FixPtRelationalOperator_p) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;
          rtb_Add_o5 = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        rtb_Add_o5 = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;
          rtb_Add_o5 = 0.0;

          /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* case IN_Off: */
        rtb_Add_o5 = 0.0;

        /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;
          rtb_Add_o5 = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        }
        break;
      }

      if (Code_Gen_Model_DW.is_AT_On_Target_Timer ==
          Code_Gen_Model_IN_Off_Target) {
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ia) {
          Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_On_Target;
          Code_Gen_Model_DW.timer_robot_target = 0.02;
        }

        /* case IN_On_Target: */
      } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_ia) {
        Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
        Code_Gen_Model_DW.timer_robot_target = 0.0;
      } else {
        Code_Gen_Model_DW.timer_robot_target += 0.02;
      }
    }

    /* End of Chart: '<S419>/Reefscape_Chart' */

    /* Logic: '<S417>/Logical Operator3' incorporates:
     *  Logic: '<S417>/OR'
     *  Switch: '<S417>/Switch2'
     */
    FixPtRelationalOperator_n = ((Code_Gen_Model_B.Align_Left) ||
      (Code_Gen_Model_B.Align_Right));

    /* Logic: '<S417>/Logical Operator1' incorporates:
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  Logic: '<S417>/Logical Operator2'
     *  Logic: '<S417>/Logical Operator3'
     *  Logic: '<S417>/Logical Operator4'
     *  Logic: '<S417>/NOT'
     *  RelationalOperator: '<S432>/Compare'
     *  RelationalOperator: '<S433>/Compare'
     *  RelationalOperator: '<S434>/Compare'
     *  RelationalOperator: '<S435>/Compare'
     *  RelationalOperator: '<S436>/Compare'
     */
    rtb_AND2_k = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) || (
      !(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                    (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                   ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
                    (Code_Gen_Model_B.Set_Algae_Level != 0))) &&
                  (FixPtRelationalOperator_n || (Code_Gen_Model_B.Align_Center)));

    /* SignalConversion: '<S23>/Signal Copy6' */
    Code_Gen_Model_B.AT_Relative_Error_Enable = rtb_AND2_k;

    /* DeadZone: '<S440>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Disable_Wheels = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Disable_Wheels = 0.0;
    } else {
      rtb_Disable_Wheels = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S440>/Dead Zone' */

    /* Logic: '<S440>/Logical Operator' incorporates:
     *  Constant: '<S452>/Constant'
     *  RelationalOperator: '<S452>/Compare'
     */
    Compare_f = ((rtb_Disable_Wheels != 0.0) && rtb_Compare_dq);

    /* Logic: '<S440>/Logical Operator1' */
    Compare = ((Code_Gen_Model_B.AT_Relative_Error_Enable) || Compare_f);

    /* Switch: '<S417>/Switch' incorporates:
     *  Constant: '<S417>/Constant1'
     *  Constant: '<S426>/Constant'
     *  Constant: '<S437>/Constant'
     *  Logic: '<S417>/AND'
     *  Logic: '<S417>/AND1'
     *  RelationalOperator: '<S426>/Compare'
     *  RelationalOperator: '<S437>/Compare'
     *  Switch: '<S417>/Switch1'
     *  Switch: '<S417>/Switch4'
     *  Switch: '<S417>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch2_ji = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S417>/Switch1' incorporates:
       *  Constant: '<S417>/Constant2'
       */
      rtb_Switch2_ji = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S417>/Switch4' incorporates:
       *  Constant: '<S417>/Constant3'
       *  Switch: '<S417>/Switch1'
       */
      rtb_Switch2_ji = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S417>/Switch6' incorporates:
       *  Constant: '<S417>/Constant6'
       *  Switch: '<S417>/Switch1'
       *  Switch: '<S417>/Switch4'
       */
      rtb_Switch2_ji = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S417>/Switch4' incorporates:
       *  Switch: '<S417>/Switch1'
       *  UnitDelay: '<S417>/Unit Delay1'
       */
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S417>/Switch' */

    /* Sum: '<S417>/Subtract1' */
    rtb_Enable_Wheels = rtb_Switch2_ji -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S23>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Enable_Wheels;

    /* Switch: '<S417>/Switch2' incorporates:
     *  Constant: '<S417>/Constant4'
     *  Constant: '<S421>/Constant'
     *  Constant: '<S422>/Constant'
     *  Constant: '<S424>/Constant'
     *  Constant: '<S425>/Constant'
     *  Constant: '<S438>/Constant'
     *  Logic: '<S417>/AND2'
     *  Logic: '<S417>/AND3'
     *  Logic: '<S417>/Logical Operator5'
     *  Logic: '<S417>/Logical Operator6'
     *  Logic: '<S417>/OR1'
     *  RelationalOperator: '<S421>/Compare'
     *  RelationalOperator: '<S422>/Compare'
     *  RelationalOperator: '<S424>/Compare'
     *  RelationalOperator: '<S425>/Compare'
     *  RelationalOperator: '<S438>/Compare'
     *  Switch: '<S417>/Switch3'
     *  Switch: '<S417>/Switch5'
     *  Switch: '<S417>/Switch7'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Switch2_jm = AT_Reef_Target_L1_X;
    } else if (FixPtRelationalOperator_n && ((Code_Gen_Model_B.Set_Coral_Level ==
      2) || (Code_Gen_Model_B.Set_Coral_Level == 3))) {
      /* Switch: '<S417>/Switch3' incorporates:
       *  Constant: '<S417>/Constant'
       */
      rtb_Switch2_jm = AT_Reef_Target_L2_L3_X;
    } else if (FixPtRelationalOperator_n && (Code_Gen_Model_B.Set_Coral_Level ==
                4)) {
      /* Switch: '<S417>/Switch5' incorporates:
       *  Constant: '<S417>/Constant5'
       *  Switch: '<S417>/Switch3'
       */
      rtb_Switch2_jm = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S417>/Switch7' incorporates:
       *  Constant: '<S417>/Constant7'
       *  Switch: '<S417>/Switch3'
       *  Switch: '<S417>/Switch5'
       */
      rtb_Switch2_jm = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S417>/Switch5' incorporates:
       *  Switch: '<S417>/Switch3'
       *  UnitDelay: '<S417>/Unit Delay'
       */
      rtb_Switch2_jm = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
    }

    /* Sum: '<S417>/Subtract' */
    rtb_Reset_Wheel_Offsets = rtb_Switch2_jm -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S23>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S417>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X = -rtb_Reset_Wheel_Offsets;

    /* Switch: '<S440>/Switch9' incorporates:
     *  Switch: '<S440>/Switch4'
     */
    if (Compare) {
      /* Switch: '<S440>/Switch1' */
      if (Compare_f) {
        /* Signum: '<S440>/Sign' */
        if (rtIsNaN(rtb_Disable_Wheels)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_Disable_Wheels < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_Disable_Wheels > 0.0);
        }

        /* Switch: '<S440>/Switch5' incorporates:
         *  Constant: '<S440>/Constant3'
         *  Constant: '<S440>/Constant4'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_i = -1.5707963267948966;
        } else {
          rtb_Switch2_i = 0.0;
        }

        /* Merge: '<S17>/Merge3' incorporates:
         *  Gain: '<S440>/Gain3'
         *  Signum: '<S440>/Sign'
         *  Sum: '<S440>/Add'
         *  Switch: '<S440>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_i;
      } else {
        /* Merge: '<S17>/Merge3' incorporates:
         *  Trigonometry: '<S440>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S440>/Switch1' */
    } else if (rtb_Compare_dq) {
      /* Switch: '<S440>/Switch6' incorporates:
       *  Constant: '<S440>/Constant'
       *  Constant: '<S440>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S440>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_0 = 0.0;
      } else {
        rtb_Minus_k_idx_0 = 3.1415926535897931;
      }

      /* Merge: '<S17>/Merge3' incorporates:
       *  Sum: '<S440>/Add1'
       *  Switch: '<S440>/Switch4'
       *  Switch: '<S440>/Switch6'
       *  Trigonometry: '<S440>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Field_Error_Y, Code_Gen_Model_B.AT_Field_Error_X) +
        rtb_Minus_k_idx_0;
    } else {
      /* Merge: '<S17>/Merge3' incorporates:
       *  Switch: '<S440>/Switch4'
       *  Trigonometry: '<S440>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_2, rtb_Switch2_gl);
    }

    /* End of Switch: '<S440>/Switch9' */

    /* Switch: '<S450>/Switch1' incorporates:
     *  Constant: '<S450>/Constant'
     *  Constant: '<S450>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Rotationmatrixfromlocalto_1 = Boost_Trigger_High_Speed;
    } else {
      rtb_Rotationmatrixfromlocalto_1 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S450>/Switch1' */

    /* Switch: '<S457>/Init' incorporates:
     *  UnitDelay: '<S457>/FixPt Unit Delay1'
     *  UnitDelay: '<S457>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      UnitDelay1 = rtb_Rotationmatrixfromlocalto_1;
    } else {
      UnitDelay1 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S457>/Init' */

    /* Sum: '<S455>/Sum1' */
    rtb_Rotationmatrixfromlocalto_0 = rtb_Rotationmatrixfromlocalto_1 -
      UnitDelay1;

    /* Switch: '<S456>/Switch2' incorporates:
     *  Constant: '<S454>/Constant1'
     *  Constant: '<S454>/Constant3'
     *  RelationalOperator: '<S456>/LowerRelop1'
     *  RelationalOperator: '<S456>/UpperRelop'
     *  Switch: '<S456>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_0 > Boost_Trigger_Increasing_Limit) {
      rtb_Rotationmatrixfromlocalto_0 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Rotationmatrixfromlocalto_0 < Boost_Trigger_Decreasing_Limit)
    {
      /* Switch: '<S456>/Switch' incorporates:
       *  Constant: '<S454>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_0 = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S455>/Sum' incorporates:
     *  Switch: '<S456>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_0 += UnitDelay1;

    /* Switch: '<S440>/Switch8' incorporates:
     *  Switch: '<S440>/Switch2'
     */
    if (Compare) {
      /* Switch: '<S440>/Switch' */
      if (Compare_f) {
        /* Merge: '<S17>/Merge4' incorporates:
         *  Gain: '<S440>/Gain'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_Disable_Wheels;
      } else {
        /* Merge: '<S17>/Merge4' incorporates:
         *  Constant: '<S440>/Constant8'
         *  Gain: '<S440>/Gain1'
         *  Math: '<S440>/Magnitude2'
         *  MinMax: '<S440>/Min1'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S440>/Switch' */
    } else if (rtb_Compare_dq) {
      /* Merge: '<S17>/Merge4' incorporates:
       *  Constant: '<S440>/Constant5'
       *  Gain: '<S440>/Gain2'
       *  Math: '<S440>/Magnitude1'
       *  MinMax: '<S440>/Min'
       *  Switch: '<S440>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Field_Error_X, Code_Gen_Model_B.AT_Field_Error_Y));
    } else {
      /* Product: '<S450>/Product' incorporates:
       *  Switch: '<S440>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Algae_Wheel_Outside_DutyCyc *
        rtb_Rotationmatrixfromlocalto_0;

      /* Saturate: '<S450>/Saturation' incorporates:
       *  Switch: '<S440>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S17>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S17>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S17>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S450>/Saturation' */
    }

    /* End of Switch: '<S440>/Switch8' */

    /* Abs: '<S417>/Abs' incorporates:
     *  UnaryMinus: '<S417>/Unary Minus1'
     */
    UnitDelay1 = fabs(-rtb_Reset_Wheel_Offsets);

    /* Abs: '<S417>/Abs1' */
    rtb_Enable_Wheels = fabs(rtb_Enable_Wheels);

    /* Abs: '<S417>/Abs2' incorporates:
     *  UnaryMinus: '<S417>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_1 = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* SignalConversion: '<S23>/Signal Copy10' incorporates:
     *  Constant: '<S427>/Constant'
     *  Constant: '<S428>/Constant'
     *  Constant: '<S429>/Constant'
     *  Logic: '<S417>/Logical Operator'
     *  RelationalOperator: '<S427>/Compare'
     *  RelationalOperator: '<S428>/Compare'
     *  RelationalOperator: '<S429>/Compare'
     */
    Code_Gen_Model_B.AT_On_Target = (((rtb_AND2_k && (UnitDelay1 <=
      AT_Max_Error_XY)) && (rtb_Enable_Wheels <= AT_Max_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_1 <= AT_Max_Error_Angle));

    /* Merge: '<S17>/Merge23' incorporates:
     *  Constant: '<S423>/Constant'
     *  Constant: '<S430>/Constant'
     *  Constant: '<S431>/Constant'
     *  Logic: '<S417>/Logical Operator7'
     *  RelationalOperator: '<S423>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     *  RelationalOperator: '<S431>/Compare'
     *  SignalConversion: '<S23>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((rtb_AND2_k && (UnitDelay1
      <= AT_Integral_Enable_Error_XY)) && (rtb_Enable_Wheels <=
      AT_Integral_Enable_Error_XY)) && (rtb_Rotationmatrixfromlocalto_1 <=
      AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S23>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S417>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S439>/Switch' incorporates:
     *  Constant: '<S439>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S439>/Product2' incorporates:
       *  Constant: '<S439>/Constant4'
       */
      UnitDelay1 = Code_Gen_Model_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S449>/Switch2' incorporates:
       *  Constant: '<S439>/Constant10'
       *  RelationalOperator: '<S449>/LowerRelop1'
       *  RelationalOperator: '<S449>/UpperRelop'
       *  Switch: '<S449>/Switch'
       *  UnaryMinus: '<S439>/Unary Minus'
       */
      if (UnitDelay1 > AT_Steering_Speed_Max) {
        UnitDelay1 = AT_Steering_Speed_Max;
      } else if (UnitDelay1 < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S449>/Switch' incorporates:
         *  UnaryMinus: '<S439>/Unary Minus'
         */
        UnitDelay1 = -AT_Steering_Speed_Max;
      }

      /* End of Switch: '<S449>/Switch2' */
    } else {
      UnitDelay1 = 0.0;
    }

    /* End of Switch: '<S439>/Switch' */

    /* DeadZone: '<S439>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S439>/Add' incorporates:
     *  Constant: '<S439>/Constant'
     *  Constant: '<S439>/Constant1'
     *  DeadZone: '<S439>/Dead Zone'
     *  Lookup_n-D: '<S439>/Modulation_Str_Y_Rel'
     *  Product: '<S439>/Product'
     *  Product: '<S439>/Product1'
     *  SignalConversion: '<S13>/Signal Copy5'
     */
    UnitDelay1 += (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                   Steering_Relative_Gain) + (rtb_Minus_k_idx_0 *
      Steering_Twist_Gain);

    /* RelationalOperator: '<S441>/Compare' incorporates:
     *  Constant: '<S441>/Constant'
     */
    Compare_f = (UnitDelay1 == 0.0);

    /* Logic: '<S416>/Logical Operator11' */
    rtb_Compare_dq = ((((((Code_Gen_Model_B.Coral_Station_Left) ||
                          (Code_Gen_Model_B.Coral_Station_Right)) ||
                         (Code_Gen_Model_B.Processor)) ||
                        (Code_Gen_Model_B.Cage_Left_Start)) ||
                       (Code_Gen_Model_B.Cage_Middle_Start)) ||
                      (Code_Gen_Model_B.Cage_Right_Start));

    /* RelationalOperator: '<S446>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S446>/Delay Input1'
     *
     * Block description for '<S446>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_p = (((int32_T)rtb_Compare_dq) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft));

    /* Logic: '<S439>/AND2' incorporates:
     *  RelationalOperator: '<S442>/FixPt Relational Operator'
     *  RelationalOperator: '<S443>/FixPt Relational Operator'
     *  RelationalOperator: '<S444>/FixPt Relational Operator'
     *  RelationalOperator: '<S445>/FixPt Relational Operator'
     *  UnitDelay: '<S442>/Delay Input1'
     *  UnitDelay: '<S443>/Delay Input1'
     *  UnitDelay: '<S444>/Delay Input1'
     *  UnitDelay: '<S445>/Delay Input1'
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
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
     */
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S439>/AND1' incorporates:
     *  Logic: '<S439>/AND3'
     *  Logic: '<S439>/AND7'
     *  UnitDelay: '<S439>/Unit Delay2'
     */
    FixPtRelationalOperator_l = ((Compare_f && (!FixPtRelationalOperator_p)) &&
      (rtb_AND2_k || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S439>/AND4' incorporates:
     *  Logic: '<S439>/AND5'
     *  Logic: '<S439>/AND8'
     *  UnitDelay: '<S439>/Unit Delay4'
     */
    rtb_AND2_k = ((Compare_f && (!rtb_AND2_k)) && (FixPtRelationalOperator_p ||
      (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S439>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (FixPtRelationalOperator_l ||
      rtb_AND2_k);

    /* Switch: '<S439>/Switch8' incorporates:
     *  Constant: '<S448>/Constant'
     *  Logic: '<S439>/AND9'
     *  RelationalOperator: '<S447>/FixPt Relational Operator'
     *  RelationalOperator: '<S448>/Compare'
     *  UnitDelay: '<S19>/Unit Delay'
     *  UnitDelay: '<S447>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)Compare_f) >
          ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S439>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S439>/Switch8' incorporates:
       *  UnitDelay: '<S439>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S439>/Switch8' */

    /* Switch: '<S439>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S439>/Switch2' incorporates:
       *  Constant: '<S439>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S439>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S439>/Switch2' */

    /* Switch: '<S416>/Switch15' incorporates:
     *  Switch: '<S416>/Switch43'
     *  Switch: '<S416>/Switch44'
     *  Switch: '<S416>/Switch45'
     *  Switch: '<S416>/Switch46'
     *  Switch: '<S416>/Switch47'
     *  Switch: '<S416>/Switch48'
     *  Switch: '<S416>/Switch49'
     *  Switch: '<S416>/Switch5'
     *  Switch: '<S416>/Switch50'
     *  Switch: '<S416>/Switch51'
     *  Switch: '<S416>/Switch52'
     *  Switch: '<S416>/Switch53'
     *  Switch: '<S416>/Switch54'
     *  Switch: '<S416>/Switch6'
     *  Switch: '<S416>/Switch7'
     *  Switch: '<S416>/Switch8'
     *  Switch: '<S416>/Switch9'
     */
    if (rtb_Compare_cid) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant14'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Blue;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant13'
       *  Switch: '<S416>/Switch5'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Red;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant12'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Blue;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant11'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Red;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant10'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Blue;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant8'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Red;
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant49'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Blue;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant48'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Red;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant47'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Blue;
    } else if (FixPtRelationalOperator_o) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant46'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Red;
    } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant1'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Start_Red_Act) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant50'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Red;
    } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant55'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant54'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch50'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant53'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch50'
       *  Switch: '<S416>/Switch51'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Constant: '<S416>/Constant52'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch50'
       *  Switch: '<S416>/Switch51'
       *  Switch: '<S416>/Switch52'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
      /* Switch: '<S416>/Switch53' incorporates:
       *  Constant: '<S416>/Constant51'
       *  Switch: '<S416>/Switch15'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch50'
       *  Switch: '<S416>/Switch51'
       *  Switch: '<S416>/Switch52'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
      /* Switch: '<S416>/Switch54' incorporates:
       *  Constant: '<S416>/Constant56'
       *  Switch: '<S416>/Switch15'
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch50'
       *  Switch: '<S416>/Switch51'
       *  Switch: '<S416>/Switch52'
       *  Switch: '<S416>/Switch53'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Red;
    } else {
      /* Switch: '<S416>/Switch15' incorporates:
       *  Switch: '<S416>/Switch43'
       *  Switch: '<S416>/Switch44'
       *  Switch: '<S416>/Switch45'
       *  Switch: '<S416>/Switch46'
       *  Switch: '<S416>/Switch47'
       *  Switch: '<S416>/Switch48'
       *  Switch: '<S416>/Switch49'
       *  Switch: '<S416>/Switch5'
       *  Switch: '<S416>/Switch50'
       *  Switch: '<S416>/Switch51'
       *  Switch: '<S416>/Switch52'
       *  Switch: '<S416>/Switch6'
       *  Switch: '<S416>/Switch7'
       *  Switch: '<S416>/Switch8'
       *  Switch: '<S416>/Switch9'
       *  UnitDelay: '<S416>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle =
        Code_Gen_Model_DW.UnitDelay1_DSTATE_e1;
    }

    /* End of Switch: '<S416>/Switch15' */

    /* Switch: '<S439>/Switch4' incorporates:
     *  Constant: '<S439>/Constant5'
     *  Switch: '<S439>/Switch1'
     *  Switch: '<S439>/Switch5'
     *  Switch: '<S439>/Switch6'
     *  Switch: '<S439>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Rotationmatrixfromlocalto_1 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S439>/Switch5' incorporates:
       *  Constant: '<S439>/Constant6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S439>/Switch6' incorporates:
       *  Constant: '<S439>/Constant7'
       *  Switch: '<S439>/Switch5'
       */
      rtb_Rotationmatrixfromlocalto_1 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S439>/Switch7' incorporates:
       *  Constant: '<S439>/Constant8'
       *  Switch: '<S439>/Switch5'
       *  Switch: '<S439>/Switch6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 4.71238898038469;
    } else if (rtb_AND2_k) {
      /* Switch: '<S439>/Switch1' incorporates:
       *  Switch: '<S439>/Switch5'
       *  Switch: '<S439>/Switch6'
       *  Switch: '<S439>/Switch7'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.AT_Field_Target_Angle;
    } else {
      /* Switch: '<S439>/Switch6' incorporates:
       *  Switch: '<S439>/Switch5'
       *  Switch: '<S439>/Switch7'
       *  UnitDelay: '<S439>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S439>/Switch4' */

    /* Switch: '<S439>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S439>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Rotationmatrixfromlocalto_1;
    } else {
      /* Switch: '<S439>/Switch3' incorporates:
       *  Constant: '<S439>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S439>/Switch3' */

    /* Merge: '<S17>/Merge1' incorporates:
     *  Sum: '<S439>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Switch: '<S420>/Switch1' incorporates:
     *  Constant: '<S420>/Constant5'
     *  Constant: '<S420>/Constant7'
     *  Constant: '<S420>/Constant8'
     *  DataTypeConversion: '<S420>/Data Type Conversion'
     *  DataTypeConversion: '<S420>/Data Type Conversion1'
     *  Switch: '<S420>/Switch'
     *  Switch: '<S440>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Steering = Compare_f;
      rtb_Is_Absolute_Translation_g = !Compare;
    }

    /* End of Switch: '<S420>/Switch1' */

    /* Merge: '<S17>/Merge2' incorporates:
     *  SignalConversion: '<S439>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = UnitDelay1;

    /* SignalConversion generated from: '<S23>/Algae_Wheel_Outside_DutyCycle' */
    rtb_Algae_Wheel_Outside_DutyCyc = rtb_Add_o5;

    /* Merge: '<S17>/Merge13' incorporates:
     *  SignalConversion generated from: '<S23>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_m;

    /* SignalConversion generated from: '<S23>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_cid = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S23>/Coral_Wheel_DutyCycle' */
    UnitDelay1 = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S17>/Merge11' incorporates:
     *  SignalConversion generated from: '<S23>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Merge: '<S17>/Merge21' incorporates:
     *  SignalConversion generated from: '<S23>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S17>/Merge24' incorporates:
     *  SignalConversion generated from: '<S23>/State_ID'
     */
    Code_Gen_Model_B.State_ID = Code_Gen_Model_B.State_ID_a;

    /* Merge: '<S17>/Merge12' incorporates:
     *  Constant: '<S419>/Constant5'
     *  SignalConversion generated from: '<S23>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S23>/Constant3'
     *  SignalConversion generated from: '<S23>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S17>/Merge9' incorporates:
     *  Constant: '<S23>/Constant9'
     *  SignalConversion generated from: '<S23>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S17>/Merge10' incorporates:
     *  Constant: '<S23>/Constant1'
     *  SignalConversion generated from: '<S23>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S23>/Enable_Wheels' incorporates:
     *  Constant: '<S23>/Constant6'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S23>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S23>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S23>/Disable_Wheels' incorporates:
     *  Constant: '<S23>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S23>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S23>/Constant2'
     */
    Robot_Reached_Destination = false;

    /* Update for UnitDelay: '<S453>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S453>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S460>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S461>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S465>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S466>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S467>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S462>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S468>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S471>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S472>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S469>/Delay Input1'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S470>/Delay Input1'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S463>/Delay Input1'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S464>/Delay Input1'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.AT_On_Target;

    /* Update for UnitDelay: '<S417>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S417>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Switch2_jm;

    /* Update for UnitDelay: '<S457>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S457>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S457>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S447>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = Compare_f;

    /* Update for UnitDelay: '<S446>/Delay Input1'
     *
     * Block description for '<S446>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = rtb_Compare_dq;

    /* Update for UnitDelay: '<S442>/Delay Input1'
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S443>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S444>/Delay Input1'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S445>/Delay Input1'
     *
     * Block description for '<S445>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S439>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = FixPtRelationalOperator_l;

    /* Update for UnitDelay: '<S439>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND2_k;

    /* Update for UnitDelay: '<S439>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S416>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 =
      Code_Gen_Model_B.AT_Field_Target_Angle;

    /* Update for UnitDelay: '<S439>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Rotationmatrixfromlocalto_1;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S24>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* SignalConversion generated from: '<S24>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S17>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S17>/Merge1' incorporates:
     *  Constant: '<S24>/Constant1'
     *  SignalConversion generated from: '<S24>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S17>/Merge2' incorporates:
     *  Constant: '<S24>/Constant2'
     *  SignalConversion generated from: '<S24>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S17>/Merge3' incorporates:
     *  Constant: '<S24>/Constant3'
     *  SignalConversion generated from: '<S24>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S17>/Merge4' incorporates:
     *  Constant: '<S24>/Constant4'
     *  SignalConversion generated from: '<S24>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S24>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S24>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S24>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S24>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S24>/Constant7'
     *  SignalConversion generated from: '<S24>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S17>/Merge9' incorporates:
     *  Constant: '<S24>/Constant9'
     *  SignalConversion generated from: '<S24>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S17>/Merge10' incorporates:
     *  Constant: '<S24>/Constant12'
     *  SignalConversion generated from: '<S24>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S24>/Constant14'
     *  Switch: '<S24>/Switch1'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      Robot_Reached_Destination = true;
    } else if (Code_Gen_Model_B.Button_Enable_Wheels) {
      /* Switch: '<S24>/Switch1' incorporates:
       *  Constant: '<S24>/Constant13'
       */
      Robot_Reached_Destination = false;
    } else {
      Robot_Reached_Destination = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S24>/Switch' */

    /* Merge: '<S17>/Merge12' incorporates:
     *  Constant: '<S24>/Constant11'
     *  SignalConversion generated from: '<S24>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S17>/Merge11' incorporates:
     *  Constant: '<S24>/Constant10'
     *  SignalConversion generated from: '<S24>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S17>/Merge13' incorporates:
     *  Constant: '<S24>/Constant15'
     *  SignalConversion generated from: '<S24>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S24>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S24>/Constant16'
     */
    UnitDelay1 = 0.0;

    /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S24>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S24>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S17>/Merge21' incorporates:
     *  Constant: '<S24>/Constant19'
     *  SignalConversion generated from: '<S24>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S24>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S24>/Constant20'
     */
    rtb_Compare_cid = false;

    /* Merge: '<S17>/Merge23' incorporates:
     *  Constant: '<S24>/Constant21'
     *  SignalConversion generated from: '<S24>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* Merge: '<S17>/Merge24' incorporates:
     *  Constant: '<S24>/Constant22'
     *  SignalConversion generated from: '<S24>/State_ID'
     */
    Code_Gen_Model_B.State_ID = 0.2;

    /* DataTypeConversion: '<S24>/Cast To Boolean1' */
    rtb_Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* DataTypeConversion: '<S24>/Cast To Boolean3' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* DataTypeConversion: '<S24>/Cast To Boolean2' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = Robot_Reached_Destination;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S20>/If' incorporates:
   *  Constant: '<S254>/Constant'
   *  Logic: '<S254>/AND'
   *  MATLAB Function: '<S204>/Find closest index to curve'
   *  Product: '<S254>/Product'
   *  RelationalOperator: '<S254>/Relational Operator'
   *  RelationalOperator: '<S254>/Relational Operator1'
   *  Selector: '<S254>/Selector'
   *  Selector: '<S254>/Selector1'
   *  Selector: '<S255>/Selector'
   *  Sum: '<S254>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S207>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S210>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S212>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S207>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S20>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S202>/Action Port'
       */
      /* InitializeConditions for If: '<S20>/If' incorporates:
       *  UnitDelay: '<S202>/Unit Delay'
       *  UnitDelay: '<S203>/Unit Delay'
       *  UnitDelay: '<S205>/Unit Delay'
       *  UnitDelay: '<S205>/Unit Delay1'
       *  UnitDelay: '<S255>/Unit Delay'
       *  UnitDelay: '<S255>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S20>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S20>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S202>/Action Port'
     */
    /* Selector: '<S203>/Selector1' incorporates:
     *  Merge: '<S17>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S203>/Selector1' */

    /* Lookup_n-D: '<S202>/Capture Radius' incorporates:
     *  UnitDelay: '<S202>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S203>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S203>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S207>/If' incorporates:
     *  RelationalOperator: '<S207>/ '
     *  UnitDelay: '<S203>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S210>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S212>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S207>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* InitializeConditions for If: '<S207>/If' incorporates:
       *  UnitDelay: '<S210>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S207>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S207>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S210>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S213>/Action Port'
       */
      /* If: '<S210>/If' incorporates:
       *  Selector: '<S203>/Selector1'
       *  Selector: '<S210>/Selector'
       *  Selector: '<S213>/Selector'
       */
      rtb_Rotationmatrixfromlocalto_1 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S210>/Increment_If_Rectangle_Check' */

      /* Sum: '<S210>/Minus' incorporates:
       *  Concatenate: '<S203>/Matrix Concatenate2'
       *  Selector: '<S210>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Rotationmatrixfromlocalto_1;

      /* Outputs for IfAction SubSystem: '<S210>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S213>/Action Port'
       */
      /* If: '<S210>/If' incorporates:
       *  Selector: '<S203>/Selector1'
       *  Selector: '<S210>/Selector'
       *  Selector: '<S213>/Selector'
       *  Sum: '<S210>/Minus'
       */
      rtb_Switch2_jm = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S210>/Increment_If_Rectangle_Check' */

      /* Sum: '<S210>/Minus' incorporates:
       *  Concatenate: '<S203>/Matrix Concatenate2'
       *  Selector: '<S210>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2_jm;

      /* Math: '<S210>/Hypot' */
      rtb_Switch2_gl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S210>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S210>/Switch' incorporates:
       *  Logic: '<S210>/AND'
       *  Logic: '<S210>/OR'
       *  RelationalOperator: '<S210>/Relational Operator'
       *  UnitDelay: '<S210>/Unit Delay'
       */
      rtb_Is_Absolute_Steering = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch2_gl <= rtb_Rotationmatrixfromlocalto_2) &&
         rtb_Is_Absolute_Translation_g));

      /* If: '<S210>/If' */
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
        /* Disable for If: '<S212>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S210>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S212>/Action Port'
         */
        /* If: '<S212>/If' incorporates:
         *  RelationalOperator: '<S212>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S212>/Is_Last_Point' incorporates:
           *  ActionPort: '<S215>/Action Port'
           */
          /* InitializeConditions for If: '<S212>/If' incorporates:
           *  UnitDelay: '<S215>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S212>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S212>/Is_Last_Point' incorporates:
           *  ActionPort: '<S215>/Action Port'
           */
          /* Switch: '<S215>/Switch' incorporates:
           *  Constant: '<S217>/Constant'
           *  Logic: '<S215>/OR'
           *  RelationalOperator: '<S217>/Compare'
           *  UnitDelay: '<S215>/Unit Delay'
           */
          rtb_AT_Cage_Right_Start_Blue_Ac =
            ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) || (rtb_Switch2_gl <=
              Spline_Stop_Radius));

          /* If: '<S215>/If' */
          if (rtb_AT_Cage_Right_Start_Blue_Ac) {
            /* Outputs for IfAction SubSystem: '<S215>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S218>/Action Port'
             */
            /* Merge: '<S207>/Merge2' incorporates:
             *  Constant: '<S218>/Constant'
             *  SignalConversion generated from: '<S218>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S218>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S218>/Constant1'
             */
            FixPtRelationalOperator_o = false;

            /* End of Outputs for SubSystem: '<S215>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S215>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S219>/Action Port'
             */
            /* Merge: '<S207>/Merge2' incorporates:
             *  Constant: '<S219>/Constant'
             *  SignalConversion generated from: '<S219>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S219>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S219>/Constant1'
             */
            FixPtRelationalOperator_o = true;

            /* End of Outputs for SubSystem: '<S215>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S215>/If' */

          /* Merge: '<S207>/Merge4' incorporates:
           *  SignalConversion: '<S215>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S215>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Cage_Right_Start_Blue_Ac;

          /* End of Outputs for SubSystem: '<S212>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S212>/Increment_Search' incorporates:
           *  ActionPort: '<S214>/Action Port'
           */
          /* Merge: '<S207>/Merge2' incorporates:
           *  Constant: '<S214>/Constant'
           *  SignalConversion generated from: '<S214>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S214>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S214>/Constant1'
           */
          FixPtRelationalOperator_o = false;

          /* Merge: '<S207>/Merge4' incorporates:
           *  Constant: '<S216>/FixPt Constant'
           *  SignalConversion: '<S214>/Signal Copy'
           *  Sum: '<S216>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S212>/Increment_Search' */
        }

        /* End of If: '<S212>/If' */
        /* End of Outputs for SubSystem: '<S210>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S210>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S213>/Action Port'
         */
        /* Sum: '<S220>/FixPt Sum1' incorporates:
         *  Constant: '<S220>/FixPt Constant'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S213>/Selector1' incorporates:
         *  Selector: '<S203>/Selector1'
         */
        rtb_Switch2_g = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) - 1];

        /* Sum: '<S221>/Subtract' incorporates:
         *  Selector: '<S213>/Selector1'
         *  Sum: '<S221>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_g - rtb_Rotationmatrixfromlocalto_1;

        /* Selector: '<S213>/Selector1' incorporates:
         *  Selector: '<S203>/Selector1'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl)
          + 9];

        /* Sum: '<S221>/Subtract' incorporates:
         *  Selector: '<S213>/Selector1'
         *  Sum: '<S221>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_0 - rtb_Switch2_jm;

        /* Math: '<S221>/Hypot' */
        rtb_Switch2_ji = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S221>/Divide' */
        rtb_Switch2_gl = rtb_Minus_n[1];

        /* UnaryMinus: '<S221>/Unary Minus' */
        rtb_Add_o5 = rtb_Minus_n[0];

        /* Product: '<S221>/Product' incorporates:
         *  Product: '<S221>/Divide'
         *  UnaryMinus: '<S221>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2_gl / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;
        rtb_Minus_n[1] = ((-rtb_Add_o5) / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;

        /* Sum: '<S221>/Add1' incorporates:
         *  Sum: '<S221>/Add2'
         *  Sum: '<S221>/Minus'
         */
        rtb_Add_o5 = rtb_Switch2_g - rtb_Minus_n[0];

        /* Sum: '<S221>/Minus4' incorporates:
         *  Sum: '<S221>/Add2'
         *  Sum: '<S221>/Minus'
         */
        rtb_Switch2_g = (rtb_Switch2_g + rtb_Minus_n[0]) - rtb_Add_o5;

        /* Sum: '<S221>/Minus5' incorporates:
         *  Concatenate: '<S203>/Matrix Concatenate2'
         *  Sum: '<S221>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Reshapey[0] - rtb_Add_o5;

        /* Sum: '<S221>/Add' incorporates:
         *  Sum: '<S221>/Add2'
         *  Sum: '<S221>/Minus1'
         */
        rtb_Switch2_gl = rtb_Rotationmatrixfromlocalto_1 - rtb_Minus_n[0];

        /* Sum: '<S221>/Minus' incorporates:
         *  Sum: '<S221>/Minus1'
         */
        rtb_Add_o5 -= rtb_Switch2_gl;

        /* DotProduct: '<S221>/Dot Product' incorporates:
         *  Concatenate: '<S203>/Matrix Concatenate2'
         *  Sum: '<S221>/Minus'
         *  Sum: '<S221>/Minus1'
         *  Sum: '<S221>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Reshapey[0] - rtb_Switch2_gl) * rtb_Add_o5;

        /* DotProduct: '<S221>/Dot Product1' incorporates:
         *  Sum: '<S221>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_1 = rtb_Add_o5 * rtb_Add_o5;

        /* DotProduct: '<S221>/Dot Product2' incorporates:
         *  Sum: '<S221>/Minus4'
         *  Sum: '<S221>/Minus5'
         */
        rtb_Minus_k_idx_0 = rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_3;

        /* DotProduct: '<S221>/Dot Product3' incorporates:
         *  Sum: '<S221>/Minus4'
         */
        rtb_Init = rtb_Switch2_g * rtb_Switch2_g;

        /* Sum: '<S221>/Add1' incorporates:
         *  Sum: '<S221>/Add2'
         *  Sum: '<S221>/Minus'
         */
        rtb_Add_o5 = rtb_Rotationmatrixfromlocalto_0 - rtb_Minus_n[1];

        /* Sum: '<S221>/Minus4' incorporates:
         *  Sum: '<S221>/Add2'
         *  Sum: '<S221>/Minus'
         */
        rtb_Switch2_g = (rtb_Rotationmatrixfromlocalto_0 + rtb_Minus_n[1]) -
          rtb_Add_o5;

        /* Sum: '<S221>/Minus5' incorporates:
         *  Concatenate: '<S203>/Matrix Concatenate2'
         *  Sum: '<S221>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Reshapey[1] - rtb_Add_o5;

        /* Sum: '<S221>/Add' incorporates:
         *  Sum: '<S221>/Add2'
         *  Sum: '<S221>/Minus1'
         */
        rtb_Switch2_gl = rtb_Switch2_jm - rtb_Minus_n[1];

        /* Sum: '<S221>/Minus' incorporates:
         *  Sum: '<S221>/Minus1'
         */
        rtb_Add_o5 -= rtb_Switch2_gl;

        /* DotProduct: '<S221>/Dot Product' incorporates:
         *  Concatenate: '<S203>/Matrix Concatenate2'
         *  Sum: '<S221>/Minus'
         *  Sum: '<S221>/Minus1'
         *  Sum: '<S221>/Minus5'
         */
        rtb_Switch2_ji += (rtb_Reshapey[1] - rtb_Switch2_gl) * rtb_Add_o5;

        /* RelationalOperator: '<S222>/Compare' incorporates:
         *  Constant: '<S222>/Constant'
         */
        rtb_Is_Absolute_Translation_g = (rtb_Switch2_ji >= 0.0);

        /* RelationalOperator: '<S221>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S221>/Dot Product1'
         *  Sum: '<S221>/Minus'
         */
        FixPtRelationalOperator_o = (rtb_Switch2_ji <= ((rtb_Add_o5 * rtb_Add_o5)
          + rtb_Rotationmatrixfromlocalto_1));

        /* DotProduct: '<S221>/Dot Product2' incorporates:
         *  Sum: '<S221>/Minus4'
         *  Sum: '<S221>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_3) +
          rtb_Minus_k_idx_0;

        /* Merge: '<S207>/Merge4' incorporates:
         *  Constant: '<S223>/Constant'
         *  DataTypeConversion: '<S213>/Data Type Conversion'
         *  DotProduct: '<S221>/Dot Product3'
         *  Logic: '<S221>/AND'
         *  RelationalOperator: '<S221>/LessThanOrEqual1'
         *  RelationalOperator: '<S223>/Compare'
         *  Sum: '<S213>/Add'
         *  Sum: '<S221>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Translation_g && FixPtRelationalOperator_o) &&
            (rtb_Switch2_ji >= 0.0)) && (rtb_Switch2_ji <= ((rtb_Switch2_g *
          rtb_Switch2_g) + rtb_Init)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S207>/Merge2' incorporates:
         *  Constant: '<S213>/Constant2'
         *  SignalConversion generated from: '<S213>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S213>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S213>/Constant1'
         */
        FixPtRelationalOperator_o = false;

        /* End of Outputs for SubSystem: '<S210>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S210>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S211>/Action Port'
         */
        /* Merge: '<S207>/Merge2' incorporates:
         *  Constant: '<S211>/Constant2'
         *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S211>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S211>/Constant1'
         */
        FixPtRelationalOperator_o = false;

        /* Merge: '<S207>/Merge4' incorporates:
         *  SignalConversion generated from: '<S211>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S210>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S207>/Merge1' incorporates:
       *  Constant: '<S210>/Constant'
       *  SignalConversion generated from: '<S210>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S210>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Steering;

      /* End of Outputs for SubSystem: '<S207>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S207>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S209>/Action Port'
       */
      /* Merge: '<S207>/Merge1' incorporates:
       *  Constant: '<S209>/Constant'
       *  SignalConversion generated from: '<S209>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S207>/Merge2' incorporates:
       *  Constant: '<S209>/Constant1'
       *  SignalConversion generated from: '<S209>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S209>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S209>/Constant2'
       */
      FixPtRelationalOperator_o = false;

      /* Merge: '<S207>/Merge4' incorporates:
       *  SignalConversion generated from: '<S209>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S207>/Escape_Auto_Driving' */
    }

    /* End of If: '<S207>/If' */

    /* If: '<S203>/If1' */
    if (!FixPtRelationalOperator_o) {
      /* Outputs for IfAction SubSystem: '<S203>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S208>/Action Port'
       */
      /* Bias: '<S224>/Add Constant' incorporates:
       *  Bias: '<S224>/Bias'
       *  Sum: '<S224>/Subtract'
       */
      rtb_Switch2_gl = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S224>/Selector4' incorporates:
       *  Bias: '<S224>/Bias1'
       *  Constant: '<S226>/FixPt Constant'
       *  Sum: '<S226>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S224>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S224>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S224>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S224>/Selector5' incorporates:
       *  Concatenate: '<S224>/Matrix Concatenate'
       *  Gain: '<S228>/Gain'
       *  Selector: '<S203>/Selector1'
       *  Selector: '<S224>/Selector2'
       *  Selector: '<S224>/Selector3'
       *  Sum: '<S228>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s229_iter = 0; s229_iter <= rtb_Bias1_p; s229_iter++) {
          rtb_Selector5[s229_iter + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[s229_iter + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S224>/Matrix Concatenate' incorporates:
       *  Bias: '<S224>/Add Constant1'
       *  Gain: '<S227>/Gain'
       *  Selector: '<S203>/Selector1'
       *  Selector: '<S224>/Selector'
       *  Selector: '<S224>/Selector1'
       *  Selector: '<S224>/Selector5'
       *  Sum: '<S227>/Subtract'
       */
      s229_iter = Code_Gen_Model_DW.Selector5_DIMS1[0];
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments < s229_iter;
             rtb_Num_Segments++) {
          rtb_MatrixConcatenate_p[(rtb_Num_Segments +
            (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) + 1] =
            rtb_Selector5[(Code_Gen_Model_DW.Selector5_DIMS1[0] * i) +
            rtb_Num_Segments];
        }
      }

      rtb_MatrixConcatenate_p[Code_Gen_Model_DW.Selector5_DIMS1[0] + 1] =
        (rtb_Ref_Poses[((int32_T)rtb_Reshapey[1]) - 1] * 2.0) - rtb_Ref_Poses
        [((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) - 1];
      rtb_MatrixConcatenate_p[(Code_Gen_Model_DW.Selector5_DIMS1[0] +
        Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0]) + 1] = (rtb_Ref_Poses
        [((int32_T)Code_Gen_Model_B.Spline_Num_Poses) + 9] * 2.0) -
        rtb_Ref_Poses[((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) + 9];

      /* Selector: '<S224>/Selector4' */
      s229_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s229_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S224>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S224>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S224>/Assignment' incorporates:
       *  Concatenate: '<S224>/Matrix Concatenate'
       *  Selector: '<S224>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s229_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S225>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S229>/While Iterator'
       */
      s229_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s229_iter + 1];
        rtb_Minus_n[0] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s229_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s229_iter] - rtb_Assignment[s229_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s229_iter];
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s229_iter + 13];
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s229_iter + 11];
        rtb_Add_o5 = rtb_Assignment[s229_iter + 12];
        rtb_Add2_f[1] = rtb_Add_o5 - rtb_Assignment[s229_iter + 14];
        rtb_Minus_k_idx_1 = rtb_Rotationmatrixfromlocalto_1 - rtb_Add_o5;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch2_ji = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2_jm = rt_powd_snf(rtb_Switch2_ji, 2.0);
          rtb_Rotationmatrixfromlocalto_3 = rt_powd_snf(rtb_Switch2_ji, 3.0);
          rtb_Rotationmatrixfromlocalto_0 = (rtb_Switch2_ji - (2.0 *
            rtb_Switch2_jm)) + rtb_Rotationmatrixfromlocalto_3;
          rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_jm -
            rtb_Rotationmatrixfromlocalto_3;
          rtb_Rotationmatrixfromlocalto_3 = (3.0 * rtb_Switch2_jm) - (2.0 *
            rtb_Rotationmatrixfromlocalto_3);
          rtb_Switch2_g = ((((rtb_Minus_n[0] * rtb_Rotationmatrixfromlocalto_0)
                             + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Rotationmatrixfromlocalto_3)) + rtb_Assignment[s229_iter];
          rtb_Init = ((((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_0) +
                        (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1)) * 0.0)
                      + (rtb_Minus_k_idx_1 * rtb_Rotationmatrixfromlocalto_3)) +
            rtb_Add_o5;
          rtb_Rotationmatrixfromlocalto_0 = ((3.0 * rtb_Switch2_jm) - (4.0 *
            rtb_Switch2_ji)) + 1.0;
          rtb_Rotationmatrixfromlocalto_1 = (2.0 * rtb_Switch2_ji) - (3.0 *
            rtb_Switch2_jm);
          rtb_Switch2_jm = (rtb_Switch2_ji - rtb_Switch2_jm) * 6.0;
          rtb_Rotationmatrixfromlocalto_3 = (((rtb_Minus_n[0] *
            rtb_Rotationmatrixfromlocalto_0) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_1)) * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Switch2_jm);
          rtb_Switch2_az = (((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_0)
                             + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_1 * rtb_Switch2_jm);
          rtb_Switch2_jm = (6.0 * rtb_Switch2_ji) - 4.0;
          rtb_Rotationmatrixfromlocalto_0 = (-6.0 * rtb_Switch2_ji) + 2.0;
          rtb_Switch2_ji = (-12.0 * rtb_Switch2_ji) + 6.0;
          rtb_Rotationmatrixfromlocalto_1 = (((rtb_Minus_n[0] * rtb_Switch2_jm)
            + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_0)) * 0.0) +
            (rtb_Minus_k_idx_0 * rtb_Switch2_ji);
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Minus_n[1] * rtb_Switch2_jm)
            + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_0)) * 0.0) +
            (rtb_Minus_k_idx_1 * rtb_Switch2_ji);
          rtb_Switch2_jm = rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_3, rtb_Switch2_az), 3.0);
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
            ((rtb_Rotationmatrixfromlocalto_3 * rtb_Rotationmatrixfromlocalto_0)
             - (rtb_Rotationmatrixfromlocalto_1 * rtb_Switch2_az)) /
            (rtb_Switch2_ji * ((real_T)i));
        }

        if (s229_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s229_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_ji = rtb_Switch2_gl - ((real_T)s229_iter);
        rtb_Num_Segments = s229_iter;
        s229_iter++;
      } while ((rtb_Switch2_ji >= 4.0) && (s229_iter <= 3));

      /* End of Outputs for SubSystem: '<S225>/Sampling_Loop' */

      /* SignalConversion generated from: '<S208>/Position_and_Curvature' incorporates:
       *  Assignment: '<S229>/Assignment'
       *  Merge: '<S203>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S203>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S203>/If Action Subsystem' incorporates:
       *  ActionPort: '<S206>/Action Port'
       */
      /* Product: '<S206>/Product' incorporates:
       *  Selector: '<S203>/Selector'
       *  Selector: '<S203>/Selector1'
       */
      rtb_Switch2_ji = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S206>/Product1' incorporates:
       *  Selector: '<S203>/Selector'
       *  Selector: '<S203>/Selector1'
       */
      rtb_Switch2_gl = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S206>/Product' incorporates:
         *  Constant: '<S206>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_ji;

        /* Product: '<S206>/Product1' incorporates:
         *  Constant: '<S206>/Constant2'
         *  Product: '<S206>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2_gl;
      }

      /* Assignment: '<S206>/Assignment' incorporates:
       *  Concatenate: '<S206>/Matrix Concatenate'
       *  Merge: '<S203>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S206>/Assignment' */

      /* SignalConversion generated from: '<S206>/Num_Segments' incorporates:
       *  Constant: '<S206>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S203>/If Action Subsystem' */
    }

    /* End of If: '<S203>/If1' */

    /* Concatenate: '<S204>/Matrix Concatenate' incorporates:
     *  Merge: '<S203>/Merge'
     *  Selector: '<S204>/Selector'
     *  Selector: '<S204>/Selector1'
     *  Selector: '<S204>/Selector3'
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

    /* End of Concatenate: '<S204>/Matrix Concatenate' */

    /* MATLAB Function: '<S204>/Distance Along Curve' incorporates:
     *  Concatenate: '<S204>/Matrix Concatenate'
     *  Selector: '<S204>/Selector4'
     *  Selector: '<S204>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s229_iter = 0; s229_iter < 149; s229_iter++) {
      /* Outputs for Iterator SubSystem: '<S225>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S229>/While Iterator'
       */
      rtb_Assignment_d[s229_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s229_iter + 1] -
         rtb_MatrixConcatenate_o[s229_iter], rtb_MatrixConcatenate_o[s229_iter +
         151] - rtb_MatrixConcatenate_o[s229_iter + 150]) +
        rtb_Assignment_d[s229_iter];

      /* End of Outputs for SubSystem: '<S225>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S204>/Distance Along Curve' */

    /* MATLAB Function: '<S204>/Find closest index to curve' incorporates:
     *  Concatenate: '<S204>/Matrix Concatenate'
     *  Selector: '<S204>/Selector4'
     *  Selector: '<S204>/Selector5'
     *  Selector: '<S255>/Selector'
     */
    for (s229_iter = 0; s229_iter < 150; s229_iter++) {
      /* Outputs for Iterator SubSystem: '<S225>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S229>/While Iterator'
       */
      distance_from_robot[s229_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s229_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s229_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S225>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s229_iter = 1;
    } else {
      s229_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s229_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s229_iter == 0) {
      rtb_Switch2_gl = distance_from_robot[0];
    } else {
      rtb_Switch2_gl = distance_from_robot[s229_iter - 1];
      for (rtb_Bias1_p = s229_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_ji = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2_gl > rtb_Switch2_ji) {
          rtb_Switch2_gl = rtb_Switch2_ji;
        }
      }
    }

    s229_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s229_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2_gl) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S255>/Selector' incorporates:
     *  Constant: '<S255>/Constant'
     *  MATLAB Function: '<S204>/Find closest index to curve'
     *  MinMax: '<S255>/Min'
     */
    rtb_Switch2_ji = rtb_Assignment_d[((int32_T)fmin(50.0, s229_iter)) - 1];

    /* If: '<S255>/If' incorporates:
     *  RelationalOperator: '<S255>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S255>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S258>/Action Port'
       */
      /* SignalConversion generated from: '<S258>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S260>/FixPt Sum1' incorporates:
       *  Constant: '<S260>/FixPt Constant'
       */
      rtb_Switch2_gl = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S258>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S17>/Merge8'
       *  Selector: '<S258>/Selector11'
       *  Selector: '<S258>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S258>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S17>/Merge8'
       *  Selector: '<S258>/Selector1'
       *  Selector: '<S258>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S258>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S258>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2_gl), &rtb_Minus_n[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S258>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S258>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S258>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S255>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S255>/Latch' incorporates:
       *  ActionPort: '<S259>/Action Port'
       */
      /* SignalConversion generated from: '<S259>/In1' incorporates:
       *  UnitDelay: '<S255>/Unit Delay1'
       */
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S259>/In2' incorporates:
       *  UnitDelay: '<S255>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S255>/Latch' */
    }

    /* End of If: '<S255>/If' */

    /* MinMax: '<S202>/Min' incorporates:
     *  Lookup_n-D: '<S202>/Lookahead Distance'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Rotationmatrixfromlocalto_2,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled8,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S204>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S254>/While Iterator'
     */
    s254_iter = 1U;
    rtb_Is_Absolute_Steering = true;
    while (rtb_Is_Absolute_Steering && (s254_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S204>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S254>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s254_iter;
      rtb_Is_Absolute_Steering =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s229_iter - 1] + rtb_Rotationmatrixfromlocalto_2)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s254_iter++;
    }

    /* End of Outputs for SubSystem: '<S204>/Find first index that meets distance target' */

    /* Switch: '<S257>/Switch' incorporates:
     *  Concatenate: '<S204>/Matrix Concatenate'
     *  Constant: '<S204>/Constant'
     *  Constant: '<S254>/Constant'
     *  Constant: '<S257>/Constant'
     *  Constant: '<S257>/Constant1'
     *  Constant: '<S257>/Constant2'
     *  Constant: '<S257>/Constant3'
     *  Logic: '<S254>/AND'
     *  MATLAB Function: '<S204>/Find closest index to curve'
     *  Math: '<S257>/Hypot'
     *  Merge: '<S17>/Merge8'
     *  MinMax: '<S257>/Max'
     *  MinMax: '<S257>/Min'
     *  MinMax: '<S257>/Min1'
     *  Product: '<S254>/Product'
     *  Product: '<S257>/Divide'
     *  Product: '<S257>/Product'
     *  Product: '<S257>/Product1'
     *  RelationalOperator: '<S204>/Relational Operator'
     *  RelationalOperator: '<S254>/Relational Operator'
     *  RelationalOperator: '<S254>/Relational Operator1'
     *  Selector: '<S204>/Selector10'
     *  Selector: '<S204>/Selector7'
     *  Selector: '<S204>/Selector8'
     *  Selector: '<S204>/Selector9'
     *  Selector: '<S254>/Selector'
     *  Selector: '<S254>/Selector1'
     *  Selector: '<S255>/Selector'
     *  Sqrt: '<S257>/Sqrt'
     *  Sum: '<S204>/Subtract'
     *  Sum: '<S254>/Add'
     *  Sum: '<S257>/Subtract'
     *  Sum: '<S257>/Subtract1'
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

    /* End of Switch: '<S257>/Switch' */

    /* Logic: '<S205>/OR' */
    FixPtRelationalOperator_o = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S205>/Switch1' incorporates:
     *  Switch: '<S205>/Switch'
     *  UnitDelay: '<S205>/Unit Delay'
     */
    if (FixPtRelationalOperator_o) {
      /* Merge: '<S20>/Merge2' incorporates:
       *  Constant: '<S205>/Constant3'
       *  SignalConversion: '<S205>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S20>/Merge2' incorporates:
       *  SignalConversion: '<S205>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_2;
      rtb_Switch2_ji = rtb_Merge1;
    }

    /* End of Switch: '<S205>/Switch1' */

    /* Merge: '<S20>/Merge' incorporates:
     *  SignalConversion: '<S205>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch2_ji;

    /* Selector: '<S204>/Selector6' incorporates:
     *  Concatenate: '<S204>/Matrix Concatenate'
     *  Selector: '<S204>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S204>/Selector2' incorporates:
     *  Concatenate: '<S204>/Matrix Concatenate'
     *  Selector: '<S204>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S205>/Switch2' incorporates:
     *  Sum: '<S261>/Subtract'
     *  Sum: '<S261>/Subtract1'
     *  Trigonometry: '<S261>/Atan2'
     *  UnitDelay: '<S205>/Unit Delay1'
     */
    if (FixPtRelationalOperator_o) {
      rtb_Switch2_jm = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2_jm = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S205>/Switch2' */

    /* Merge: '<S20>/Merge3' incorporates:
     *  SignalConversion: '<S205>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2_jm;

    /* Merge: '<S20>/Merge7' incorporates:
     *  SignalConversion: '<S202>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S20>/Merge1' incorporates:
     *  Constant: '<S205>/Constant2'
     *  SignalConversion generated from: '<S202>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S20>/Merge4' incorporates:
     *  Constant: '<S205>/Constant5'
     *  SignalConversion generated from: '<S202>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S20>/Merge5' incorporates:
     *  Constant: '<S205>/Constant6'
     *  SignalConversion generated from: '<S202>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S20>/Merge8' incorporates:
     *  SignalConversion generated from: '<S202>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S255>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S255>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S205>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S205>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2_jm;

    /* End of Outputs for SubSystem: '<S20>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S20>/Pass Through' incorporates:
     *  ActionPort: '<S201>/Action Port'
     */
    /* Merge: '<S20>/Merge7' incorporates:
     *  Constant: '<S201>/Constant'
     *  SignalConversion generated from: '<S201>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S20>/Merge' incorporates:
     *  SignalConversion generated from: '<S201>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S20>/Merge1' incorporates:
     *  SignalConversion generated from: '<S201>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S20>/Merge2' incorporates:
     *  SignalConversion generated from: '<S201>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S20>/Merge3' incorporates:
     *  SignalConversion generated from: '<S201>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S20>/Merge4' incorporates:
     *  SignalConversion generated from: '<S201>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S20>/Merge5' incorporates:
     *  SignalConversion generated from: '<S201>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S20>/Merge8' incorporates:
     *  SignalConversion generated from: '<S201>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S20>/Pass Through' */
  }

  /* End of If: '<S20>/If' */

  /* Signum: '<S355>/Sign2' incorporates:
   *  UnitDelay: '<S355>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S355>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S355>/Product1' incorporates:
   *  Signum: '<S355>/Sign1'
   *  Signum: '<S355>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S355>/Switch' incorporates:
   *  Constant: '<S355>/Constant'
   *  Constant: '<S360>/Constant'
   *  Constant: '<S361>/Constant'
   *  Logic: '<S355>/or'
   *  Product: '<S355>/Product1'
   *  RelationalOperator: '<S360>/Compare'
   *  RelationalOperator: '<S361>/Compare'
   *  UnitDelay: '<S355>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S355>/Switch' */

  /* Switch: '<S366>/Init' incorporates:
   *  UnitDelay: '<S366>/FixPt Unit Delay1'
   *  UnitDelay: '<S366>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S366>/Init' */

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S362>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_g > 0.0);

  /* Abs: '<S355>/Abs' incorporates:
   *  Sum: '<S355>/Subtract'
   *  UnitDelay: '<S355>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S355>/Switch5' incorporates:
   *  Constant: '<S355>/Constant1'
   *  Switch: '<S355>/Switch1'
   *  UnaryMinus: '<S355>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S355>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S355>/Constant4'
     *  Constant: '<S355>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S355>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S355>/Constant2'
     *  Constant: '<S355>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S355>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S355>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S355>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S355>/Constant10'
     *  Constant: '<S355>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S355>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S355>/Constant7'
     *  Constant: '<S355>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S355>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S355>/Lookup Table Dynamic1'
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

    /* Switch: '<S355>/Switch3' incorporates:
     *  Constant: '<S355>/Constant1'
     *  Constant: '<S355>/Constant3'
     *  UnaryMinus: '<S355>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S355>/Switch3' */
  }

  /* End of Switch: '<S355>/Switch5' */

  /* Product: '<S355>/Product' incorporates:
   *  Switch: '<S355>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S364>/Sum1' */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S365>/Switch2' incorporates:
   *  RelationalOperator: '<S365>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_2 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S355>/Switch2' incorporates:
     *  Constant: '<S355>/Constant1'
     *  Switch: '<S355>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S355>/Switch4' incorporates:
       *  Constant: '<S355>/Constant1'
       */
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S355>/Switch4' incorporates:
       *  Constant: '<S355>/Constant3'
       *  UnaryMinus: '<S355>/Unary Minus1'
       */
      rtb_Switch2_gl = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S355>/Switch2' */

    /* Product: '<S355>/Product2' */
    rtb_Switch2_gl *= rtb_Merge1;

    /* Switch: '<S365>/Switch' incorporates:
     *  RelationalOperator: '<S365>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_2 < rtb_Switch2_gl) {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    } else {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_2;
    }

    /* End of Switch: '<S365>/Switch' */
  }

  /* End of Switch: '<S365>/Switch2' */

  /* Sum: '<S364>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S358>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S358>/Switch' incorporates:
     *  Constant: '<S390>/Constant3'
     *  Constant: '<S390>/Constant4'
     *  Math: '<S390>/Math Function'
     *  Sum: '<S358>/Subtract'
     *  Sum: '<S390>/Add1'
     *  Sum: '<S390>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S358>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S358>/Switch' */

  /* Sum: '<S386>/Add1' incorporates:
   *  Constant: '<S386>/Constant3'
   *  Constant: '<S386>/Constant4'
   *  Math: '<S386>/Math Function'
   *  Sum: '<S385>/Sum'
   *  Sum: '<S386>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S388>/Sum1' incorporates:
   *  Constant: '<S385>/Constant2'
   *  Product: '<S388>/Product'
   *  Sum: '<S388>/Sum'
   *  UnitDelay: '<S388>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S385>/Product' incorporates:
   *  Constant: '<S385>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S387>/Diff' incorporates:
   *  UnitDelay: '<S387>/UD'
   *
   * Block description for '<S387>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S387>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_2 -
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S385>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S385>/Add' incorporates:
   *  Gain: '<S385>/Gain1'
   *  Saturate: '<S385>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S385>/Subtract' incorporates:
   *  Constant: '<S385>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S385>/Sum2' incorporates:
   *  Gain: '<S385>/Gain2'
   *  UnitDelay: '<S385>/Unit Delay'
   */
  rtb_Switch2_gl = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S389>/Switch2' incorporates:
   *  RelationalOperator: '<S389>/LowerRelop1'
   */
  if (!(rtb_Switch2_gl > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S385>/Subtract1' incorporates:
     *  Constant: '<S385>/Constant1'
     */
    rtb_Switch2_jm = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S389>/Switch' incorporates:
     *  RelationalOperator: '<S389>/UpperRelop'
     */
    if (rtb_Switch2_gl < rtb_Switch2_jm) {
      rtb_Optimized_Module_Angle = rtb_Switch2_jm;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    }

    /* End of Switch: '<S389>/Switch' */
  }

  /* End of Switch: '<S389>/Switch2' */

  /* Saturate: '<S385>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2_gl = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S385>/Saturation1' */

  /* Sum: '<S385>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Switch2_gl;

  /* Saturate: '<S385>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S385>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S385>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S385>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S385>/Saturation2' */

  /* Switch: '<S369>/Switch' incorporates:
   *  Abs: '<S369>/Abs'
   *  Constant: '<S369>/Constant'
   *  Constant: '<S384>/Constant'
   *  RelationalOperator: '<S384>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S369>/Switch' */

  /* Signum: '<S368>/Sign2' incorporates:
   *  UnitDelay: '<S368>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S368>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Init > 0.0);
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
   *  Constant: '<S377>/Constant'
   *  Constant: '<S378>/Constant'
   *  Logic: '<S368>/or'
   *  Product: '<S368>/Product1'
   *  RelationalOperator: '<S377>/Compare'
   *  RelationalOperator: '<S378>/Compare'
   *  UnitDelay: '<S368>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S368>/Switch' */

  /* Switch: '<S383>/Init' incorporates:
   *  UnitDelay: '<S383>/FixPt Unit Delay1'
   *  UnitDelay: '<S383>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Switch2_jm = rtb_uDLookupTable_l;
  } else {
    rtb_Switch2_jm = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S383>/Init' */

  /* RelationalOperator: '<S379>/Compare' incorporates:
   *  Constant: '<S379>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S380>/Compare' incorporates:
   *  Constant: '<S380>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S368>/Abs' incorporates:
   *  Sum: '<S368>/Subtract'
   *  UnitDelay: '<S368>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d -
    rtb_Init);

  /* Switch: '<S368>/Switch1' incorporates:
   *  Constant: '<S368>/Constant1'
   *  Switch: '<S368>/Switch3'
   *  Switch: '<S368>/Switch5'
   *  UnaryMinus: '<S368>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S368>/Constant4'
     *  Constant: '<S368>/Constant6'
     *  UnaryMinus: '<S368>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S368>/Constant2'
     *  Constant: '<S368>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S368>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S368>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic;
  } else {
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S368>/Switch3' incorporates:
       *  Constant: '<S368>/Constant3'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S368>/Constant10'
     *  Constant: '<S368>/Constant8'
     *  UnaryMinus: '<S368>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S368>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S368>/Constant7'
     *  Constant: '<S368>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S368>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S368>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic1;
  }

  /* End of Switch: '<S368>/Switch1' */

  /* Product: '<S368>/Product' */
  rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S381>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_uDLookupTable_l - rtb_Switch2_jm;

  /* Switch: '<S382>/Switch2' incorporates:
   *  RelationalOperator: '<S382>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_ji)) {
    /* Switch: '<S368>/Switch2' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Switch: '<S368>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S368>/Switch4' incorporates:
       *  Constant: '<S368>/Constant1'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S368>/Switch4' incorporates:
       *  Constant: '<S368>/Constant3'
       *  UnaryMinus: '<S368>/Unary Minus1'
       */
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S368>/Switch2' */

    /* Product: '<S368>/Product2' */
    rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_0;

    /* Switch: '<S382>/Switch' incorporates:
     *  RelationalOperator: '<S382>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S382>/Switch' */
  }

  /* End of Switch: '<S382>/Switch2' */

  /* Sum: '<S381>/Sum' */
  rtb_Switch2_ji += rtb_Switch2_jm;

  /* Signum: '<S367>/Sign2' incorporates:
   *  UnitDelay: '<S367>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S367>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S367>/Product1' incorporates:
   *  Signum: '<S367>/Sign1'
   *  Signum: '<S367>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S367>/Switch' incorporates:
   *  Constant: '<S367>/Constant'
   *  Constant: '<S370>/Constant'
   *  Constant: '<S371>/Constant'
   *  Logic: '<S367>/or'
   *  Product: '<S367>/Product1'
   *  RelationalOperator: '<S370>/Compare'
   *  RelationalOperator: '<S371>/Compare'
   *  UnitDelay: '<S367>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S367>/Switch' */

  /* Switch: '<S376>/Init' incorporates:
   *  UnitDelay: '<S376>/FixPt Unit Delay1'
   *  UnitDelay: '<S376>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S376>/Init' */

  /* RelationalOperator: '<S372>/Compare' incorporates:
   *  Constant: '<S372>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S367>/Abs' incorporates:
   *  Sum: '<S367>/Subtract'
   *  UnitDelay: '<S367>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S367>/Switch5' incorporates:
   *  Constant: '<S367>/Constant1'
   *  Switch: '<S367>/Switch1'
   *  UnaryMinus: '<S367>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S367>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S367>/Constant4'
     *  Constant: '<S367>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S367>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S367>/Constant2'
     *  Constant: '<S367>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S367>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S367>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S367>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S367>/Constant10'
     *  Constant: '<S367>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S367>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S367>/Constant7'
     *  Constant: '<S367>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S367>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S367>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S367>/Switch3' incorporates:
     *  Constant: '<S367>/Constant1'
     *  Constant: '<S367>/Constant3'
     *  UnaryMinus: '<S367>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S367>/Switch3' */
  }

  /* End of Switch: '<S367>/Switch5' */

  /* Product: '<S367>/Product' incorporates:
   *  Switch: '<S367>/Switch1'
   */
  rtb_Switch2_jm = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S374>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Optimized_Module_Angle -
    rtb_uDLookupTable_l;

  /* Switch: '<S375>/Switch2' incorporates:
   *  RelationalOperator: '<S375>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_jm)) {
    /* Switch: '<S367>/Switch2' incorporates:
     *  Constant: '<S367>/Constant1'
     *  Constant: '<S367>/Constant3'
     *  Switch: '<S367>/Switch4'
     *  UnaryMinus: '<S367>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S367>/Product2' incorporates:
     *  Switch: '<S367>/Switch2'
     */
    rtb_Switch2_jm = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_0;

    /* Switch: '<S375>/Switch' incorporates:
     *  RelationalOperator: '<S375>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_jm)) {
      rtb_Switch2_jm = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S375>/Switch' */
  }

  /* End of Switch: '<S375>/Switch2' */

  /* Sum: '<S374>/Sum' */
  rtb_Switch2_jm += rtb_uDLookupTable_l;

  /* Switch: '<S357>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S357>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S357>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_jm;
  }

  /* End of Switch: '<S357>/Switch' */

  /* Fcn: '<S398>/r->x' incorporates:
   *  Fcn: '<S403>/r->x'
   *  Fcn: '<S408>/r->x'
   *  Fcn: '<S413>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S392>/Add' incorporates:
   *  Fcn: '<S398>/r->x'
   *  Fcn: '<S399>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;

  /* Fcn: '<S398>/theta->y' incorporates:
   *  Fcn: '<S403>/theta->y'
   *  Fcn: '<S408>/theta->y'
   *  Fcn: '<S413>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S392>/Add' incorporates:
   *  Fcn: '<S398>/theta->y'
   *  Fcn: '<S399>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S393>/Add' incorporates:
   *  Fcn: '<S404>/r->x'
   *  Fcn: '<S404>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S394>/Add' incorporates:
   *  Fcn: '<S409>/r->x'
   *  Fcn: '<S409>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S395>/Add' incorporates:
   *  Fcn: '<S414>/r->x'
   *  Fcn: '<S414>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Fcn: '<S412>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S415>/Compare' incorporates:
   *  Constant: '<S415>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_o5 == 0.0);

  /* Switch: '<S411>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S411>/Switch1' incorporates:
     *  Constant: '<S411>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S411>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S411>/Switch1' */

  /* Fcn: '<S397>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S400>/Compare' incorporates:
   *  Constant: '<S400>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 == 0.0);

  /* Switch: '<S396>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S396>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S396>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S396>/Switch1' */

  /* Fcn: '<S402>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S405>/Compare' incorporates:
   *  Constant: '<S405>/Constant'
   */
  FixPtRelationalOperator_o = (rtb_Switch2_g == 0.0);

  /* Switch: '<S401>/Switch1' */
  if (FixPtRelationalOperator_o) {
    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S401>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S401>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S401>/Switch1' */

  /* Fcn: '<S407>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S410>/Compare' incorporates:
   *  Constant: '<S410>/Constant'
   */
  rtb_AT_Cage_Right_Start_Blue_Ac = (rtb_Init == 0.0);

  /* Switch: '<S406>/Switch1' */
  if (rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S406>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S406>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S406>/Switch1' */

  /* Product: '<S391>/Divide' incorporates:
   *  Abs: '<S391>/Abs'
   *  Abs: '<S391>/Abs1'
   *  Abs: '<S391>/Abs2'
   *  Abs: '<S391>/Abs3'
   *  Constant: '<S391>/Constant'
   *  MinMax: '<S391>/Max'
   */
  rtb_Add_o5 = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S391>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S411>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S411>/Switch' incorporates:
     *  Fcn: '<S412>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S411>/Switch' */

  /* Trigonometry: '<S347>/Cos4' incorporates:
   *  Switch: '<S336>/Angle_Switch'
   *  Trigonometry: '<S346>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S347>/Sin5' incorporates:
   *  UnaryMinus: '<S345>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S347>/Sin4' incorporates:
   *  Switch: '<S336>/Angle_Switch'
   *  Trigonometry: '<S346>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S347>/Cos5' incorporates:
   *  UnaryMinus: '<S345>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S347>/Subtract1' incorporates:
   *  Product: '<S347>/Product2'
   *  Product: '<S347>/Product3'
   *  Trigonometry: '<S347>/Cos4'
   *  Trigonometry: '<S347>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_h3 *
    rtb_Optimized_Module_Angle) + (rtb_Rotationmatrixfromlocalto_0 * rtb_Init);

  /* Sum: '<S347>/Subtract' incorporates:
   *  Product: '<S347>/Product'
   *  Product: '<S347>/Product1'
   *  Trigonometry: '<S347>/Cos4'
   *  Trigonometry: '<S347>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_3 = (rtb_Subtract_h3 * rtb_Init) -
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Optimized_Module_Angle);

  /* Math: '<S347>/Hypot' */
  rtb_Minus_k_idx_1 = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_3,
    rtb_Rotationmatrixfromlocalto_1);

  /* Switch: '<S347>/Switch' incorporates:
   *  Constant: '<S347>/Constant'
   *  Constant: '<S347>/Constant1'
   *  Constant: '<S348>/Constant'
   *  Product: '<S347>/Divide'
   *  Product: '<S347>/Divide1'
   *  RelationalOperator: '<S348>/Compare'
   *  Switch: '<S347>/Switch1'
   */
  if (rtb_Minus_k_idx_1 > 1.0E-6) {
    rtb_Switch2_g = rtb_Rotationmatrixfromlocalto_1 / rtb_Minus_k_idx_1;
    rtb_Init = rtb_Rotationmatrixfromlocalto_3 / rtb_Minus_k_idx_1;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S347>/Switch' */

  /* Switch: '<S336>/Speed_Switch' incorporates:
   *  Abs: '<S336>/Abs'
   *  Constant: '<S344>/Constant'
   *  RelationalOperator: '<S344>/Compare'
   *  Switch: '<S336>/Angle_Switch'
   *  Trigonometry: '<S346>/Atan1'
   *  Trigonometry: '<S347>/Atan1'
   *  UnaryMinus: '<S336>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S346>/Subtract1' incorporates:
     *  Product: '<S346>/Product2'
     *  Product: '<S346>/Product3'
     *  UnaryMinus: '<S336>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_h3 *
      Code_Gen_Model_ConstB.Sin5_c) + (rtb_Rotationmatrixfromlocalto_0 *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S346>/Subtract' incorporates:
     *  Product: '<S346>/Product'
     *  Product: '<S346>/Product1'
     */
    rtb_Rotationmatrixfromlocalto_3 = (rtb_Subtract_h3 *
      Code_Gen_Model_ConstB.Cos5_b) - (rtb_Rotationmatrixfromlocalto_0 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S346>/Hypot' */
    rtb_Rotationmatrixfromlocalto_0 = rt_hypotd_snf
      (rtb_Rotationmatrixfromlocalto_3, rtb_Rotationmatrixfromlocalto_1);

    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant'
     *  Constant: '<S346>/Constant1'
     *  Constant: '<S349>/Constant'
     *  Product: '<S346>/Divide'
     *  Product: '<S346>/Divide1'
     *  RelationalOperator: '<S349>/Compare'
     *  Switch: '<S346>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_0 > 1.0E-6) {
      rtb_Rotationmatrixfromlocalto_3 /= rtb_Rotationmatrixfromlocalto_0;
      rtb_Rotationmatrixfromlocalto_0 = rtb_Rotationmatrixfromlocalto_1 /
        rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = 1.0;
      rtb_Rotationmatrixfromlocalto_0 = 0.0;
    }

    /* End of Switch: '<S346>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Rotationmatrixfromlocalto_0,
      rtb_Rotationmatrixfromlocalto_3);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S339>/Product2' incorporates:
   *  Constant: '<S339>/Constant'
   *  Switch: '<S336>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S334>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S334>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S337>/Add' incorporates:
   *  Sum: '<S338>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S269>/Product' incorporates:
   *  Abs: '<S334>/Abs'
   *  Abs: '<S337>/Abs'
   *  Constant: '<S340>/Constant'
   *  Constant: '<S350>/Constant3'
   *  Constant: '<S350>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S334>/OR'
   *  Lookup_n-D: '<S337>/1-D Lookup Table'
   *  Math: '<S350>/Math Function'
   *  RelationalOperator: '<S334>/Equal1'
   *  RelationalOperator: '<S340>/Compare'
   *  Signum: '<S334>/Sign'
   *  Signum: '<S334>/Sign1'
   *  Sum: '<S337>/Add'
   *  Sum: '<S350>/Add1'
   *  Sum: '<S350>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled34, Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S335>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Rotationmatrixfromlocalto_3 = rtb_Switch2_g -
    Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S342>/Sum1' incorporates:
   *  Constant: '<S335>/Constant2'
   *  Product: '<S342>/Product'
   *  Sum: '<S342>/Sum'
   *  UnitDelay: '<S342>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Rotationmatrixfromlocalto_3 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S335>/Product' incorporates:
   *  Constant: '<S335>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Rotationmatrixfromlocalto_0 *
    Drive_Motor_Control_D;

  /* Sum: '<S341>/Diff' incorporates:
   *  UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
    Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S335>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S335>/Add' incorporates:
   *  Gain: '<S335>/Gain'
   *  Gain: '<S335>/Gain1'
   *  Saturate: '<S335>/Saturation'
   */
  rtb_Minus_k_idx_1 = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                       (Drive_Motor_Control_P * rtb_Rotationmatrixfromlocalto_3))
    + rtb_Minus_k_idx_0;

  /* Switch: '<S335>/Switch' incorporates:
   *  Constant: '<S335>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S335>/Sum2' incorporates:
     *  Gain: '<S335>/Gain2'
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_3 = (Drive_Motor_Control_I *
      rtb_Rotationmatrixfromlocalto_3) + Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S335>/Subtract' incorporates:
     *  Constant: '<S335>/Constant'
     */
    rtb_Switch2_az = 1.0 - rtb_Minus_k_idx_1;

    /* Switch: '<S343>/Switch2' incorporates:
     *  Constant: '<S335>/Constant'
     *  RelationalOperator: '<S343>/LowerRelop1'
     *  Sum: '<S335>/Subtract'
     */
    if (!(rtb_Rotationmatrixfromlocalto_3 > (1.0 - rtb_Minus_k_idx_1))) {
      /* Sum: '<S335>/Subtract1' incorporates:
       *  Constant: '<S335>/Constant1'
       */
      rtb_Switch2_az = -1.0 - rtb_Minus_k_idx_1;

      /* Switch: '<S343>/Switch' incorporates:
       *  Constant: '<S335>/Constant1'
       *  RelationalOperator: '<S343>/UpperRelop'
       *  Sum: '<S335>/Subtract1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_3 < (-1.0 - rtb_Minus_k_idx_1))) {
        rtb_Switch2_az = rtb_Rotationmatrixfromlocalto_3;
      }

      /* End of Switch: '<S343>/Switch' */
    }

    /* End of Switch: '<S343>/Switch2' */

    /* Saturate: '<S335>/Saturation1' */
    if (rtb_Switch2_az > Drive_Motor_Control_I_UL) {
      rtb_Rotationmatrixfromlocalto_3 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_az < Drive_Motor_Control_I_LL) {
      rtb_Rotationmatrixfromlocalto_3 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = rtb_Switch2_az;
    }

    /* End of Saturate: '<S335>/Saturation1' */
  } else {
    rtb_Rotationmatrixfromlocalto_3 = 0.0;
  }

  /* End of Switch: '<S335>/Switch' */

  /* Sum: '<S335>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Minus_k_idx_1 + rtb_Rotationmatrixfromlocalto_3;

  /* Saturate: '<S335>/Saturation2' */
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

  /* End of Saturate: '<S335>/Saturation2' */

  /* Switch: '<S396>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S396>/Switch' incorporates:
     *  Fcn: '<S397>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S396>/Switch' */

  /* Trigonometry: '<S284>/Cos4' incorporates:
   *  Switch: '<S273>/Angle_Switch'
   *  Trigonometry: '<S283>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S284>/Sin5' incorporates:
   *  UnaryMinus: '<S282>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S284>/Sin4' incorporates:
   *  Switch: '<S273>/Angle_Switch'
   *  Trigonometry: '<S283>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S284>/Cos5' incorporates:
   *  UnaryMinus: '<S282>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S284>/Subtract1' incorporates:
   *  Product: '<S284>/Product2'
   *  Product: '<S284>/Product3'
   *  Trigonometry: '<S284>/Cos4'
   *  Trigonometry: '<S284>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv
    * rtb_Init);

  /* Sum: '<S284>/Subtract' incorporates:
   *  Product: '<S284>/Product'
   *  Product: '<S284>/Product1'
   *  Trigonometry: '<S284>/Cos4'
   *  Trigonometry: '<S284>/Sin4'
   */
  rtb_Switch2_az = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S284>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Switch2_az, rtb_Minus_k_idx_1);

  /* Switch: '<S284>/Switch' incorporates:
   *  Constant: '<S284>/Constant'
   *  Constant: '<S284>/Constant1'
   *  Constant: '<S285>/Constant'
   *  Product: '<S284>/Divide'
   *  Product: '<S284>/Divide1'
   *  RelationalOperator: '<S285>/Compare'
   *  Switch: '<S284>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_Minus_k_idx_1 / rtb_Hypot_g5;
    rtb_Init = rtb_Switch2_az / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S284>/Switch' */

  /* Product: '<S391>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S273>/Speed_Switch' incorporates:
   *  Abs: '<S273>/Abs'
   *  Constant: '<S281>/Constant'
   *  RelationalOperator: '<S281>/Compare'
   *  Switch: '<S273>/Angle_Switch'
   *  Trigonometry: '<S283>/Atan1'
   *  Trigonometry: '<S284>/Atan1'
   *  UnaryMinus: '<S273>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S283>/Subtract1' incorporates:
     *  Product: '<S283>/Product2'
     *  Product: '<S283>/Product3'
     *  UnaryMinus: '<S273>/Unary Minus'
     */
    rtb_Minus_k_idx_1 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S283>/Subtract' incorporates:
     *  Product: '<S283>/Product'
     *  Product: '<S283>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S283>/Hypot' */
    rtb_Switch2_az = rt_hypotd_snf(rtb_Hypot_g5, rtb_Minus_k_idx_1);

    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S283>/Constant'
     *  Constant: '<S283>/Constant1'
     *  Constant: '<S286>/Constant'
     *  Product: '<S283>/Divide'
     *  Product: '<S283>/Divide1'
     *  RelationalOperator: '<S286>/Compare'
     *  Switch: '<S283>/Switch'
     */
    if (rtb_Switch2_az > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Switch2_az;
      rtb_Minus_k_idx_1 /= rtb_Switch2_az;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Minus_k_idx_1 = 0.0;
    }

    /* End of Switch: '<S283>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Minus_k_idx_1, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S276>/Product2' incorporates:
   *  Constant: '<S276>/Constant'
   *  Switch: '<S273>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S271>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S271>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S274>/Add' incorporates:
   *  Sum: '<S275>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S266>/Product' incorporates:
   *  Abs: '<S271>/Abs'
   *  Abs: '<S274>/Abs'
   *  Constant: '<S277>/Constant'
   *  Constant: '<S287>/Constant3'
   *  Constant: '<S287>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S271>/OR'
   *  Lookup_n-D: '<S274>/1-D Lookup Table'
   *  Math: '<S287>/Math Function'
   *  RelationalOperator: '<S271>/Equal1'
   *  RelationalOperator: '<S277>/Compare'
   *  Signum: '<S271>/Sign'
   *  Signum: '<S271>/Sign1'
   *  Sum: '<S274>/Add'
   *  Sum: '<S287>/Add1'
   *  Sum: '<S287>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S272>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S279>/Sum1' incorporates:
   *  Constant: '<S272>/Constant2'
   *  Product: '<S279>/Product'
   *  Sum: '<S279>/Sum'
   *  UnitDelay: '<S279>/Unit Delay1'
   */
  rtb_Minus_k_idx_1 = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                       Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S272>/Product' incorporates:
   *  Constant: '<S272>/Constant3'
   */
  rtb_Switch2_az = rtb_Minus_k_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S278>/Diff' incorporates:
   *  UnitDelay: '<S278>/UD'
   *
   * Block description for '<S278>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S278>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_az - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S272>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Gain: '<S272>/Gain'
   *  Gain: '<S272>/Gain1'
   *  Saturate: '<S272>/Saturation'
   */
  rtb_Add_ju = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S272>/Switch' incorporates:
   *  Constant: '<S272>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S272>/Sum2' incorporates:
     *  Gain: '<S272>/Gain2'
     *  UnitDelay: '<S272>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S272>/Subtract' incorporates:
     *  Constant: '<S272>/Constant'
     */
    rtb_Switch2_ah = 1.0 - rtb_Add_ju;

    /* Switch: '<S280>/Switch2' incorporates:
     *  Constant: '<S272>/Constant'
     *  RelationalOperator: '<S280>/LowerRelop1'
     *  Sum: '<S272>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ju))) {
      /* Sum: '<S272>/Subtract1' incorporates:
       *  Constant: '<S272>/Constant1'
       */
      rtb_Switch2_ah = -1.0 - rtb_Add_ju;

      /* Switch: '<S280>/Switch' incorporates:
       *  Constant: '<S272>/Constant1'
       *  RelationalOperator: '<S280>/UpperRelop'
       *  Sum: '<S272>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_ju))) {
        rtb_Switch2_ah = rtb_Hypot_g5;
      }

      /* End of Switch: '<S280>/Switch' */
    }

    /* End of Switch: '<S280>/Switch2' */

    /* Saturate: '<S272>/Saturation1' */
    if (rtb_Switch2_ah > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_ah < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_ah;
    }

    /* End of Saturate: '<S272>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S272>/Switch' */

  /* Sum: '<S272>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ju + rtb_Hypot_g5;

  /* Saturate: '<S272>/Saturation2' */
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

  /* End of Saturate: '<S272>/Saturation2' */

  /* Sum: '<S288>/Add1' incorporates:
   *  Constant: '<S288>/Constant3'
   *  Constant: '<S288>/Constant4'
   *  Math: '<S288>/Math Function'
   *  Sum: '<S288>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S290>/Sum1' incorporates:
   *  Constant: '<S275>/Constant2'
   *  Product: '<S290>/Product'
   *  Sum: '<S290>/Sum'
   *  UnitDelay: '<S290>/Unit Delay1'
   */
  rtb_Add_ju = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_bk) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bk;

  /* Product: '<S275>/Product' incorporates:
   *  Constant: '<S275>/Constant3'
   */
  rtb_Switch2_ah = rtb_Add_ju * Steering_Motor_Control_D;

  /* Sum: '<S289>/Diff' incorporates:
   *  UnitDelay: '<S289>/UD'
   *
   * Block description for '<S289>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S289>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_ah - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S275>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S275>/Add' incorporates:
   *  Gain: '<S275>/Gain1'
   *  Saturate: '<S275>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S275>/Subtract' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_fn;

  /* Sum: '<S275>/Sum2' incorporates:
   *  Gain: '<S275>/Gain2'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S291>/Switch2' incorporates:
   *  RelationalOperator: '<S291>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S291>/Switch' incorporates:
     *  Constant: '<S275>/Constant1'
     *  RelationalOperator: '<S291>/UpperRelop'
     *  Sum: '<S275>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Init = -1.0 - rtb_Add_fn;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S291>/Switch' */
  }

  /* End of Switch: '<S291>/Switch2' */

  /* Saturate: '<S275>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S275>/Saturation1' */

  /* Sum: '<S275>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S275>/Saturation2' */
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

  /* End of Saturate: '<S275>/Saturation2' */

  /* Switch: '<S401>/Switch' */
  if (!FixPtRelationalOperator_o) {
    /* Switch: '<S401>/Switch' incorporates:
     *  Fcn: '<S402>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S401>/Switch' */

  /* Trigonometry: '<S305>/Cos4' incorporates:
   *  Switch: '<S294>/Angle_Switch'
   *  Trigonometry: '<S304>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S305>/Sin5' incorporates:
   *  UnaryMinus: '<S303>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S305>/Sin4' incorporates:
   *  Switch: '<S294>/Angle_Switch'
   *  Trigonometry: '<S304>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S305>/Cos5' incorporates:
   *  UnaryMinus: '<S303>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S305>/Subtract1' incorporates:
   *  Product: '<S305>/Product2'
   *  Product: '<S305>/Product3'
   *  Trigonometry: '<S305>/Cos4'
   *  Trigonometry: '<S305>/Sin4'
   */
  rtb_Add_fn = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S305>/Subtract' incorporates:
   *  Product: '<S305>/Product'
   *  Product: '<S305>/Product1'
   *  Trigonometry: '<S305>/Cos4'
   *  Trigonometry: '<S305>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S305>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_fn);

  /* Switch: '<S305>/Switch' incorporates:
   *  Constant: '<S305>/Constant'
   *  Constant: '<S305>/Constant1'
   *  Constant: '<S306>/Constant'
   *  Product: '<S305>/Divide'
   *  Product: '<S305>/Divide1'
   *  RelationalOperator: '<S306>/Compare'
   *  Switch: '<S305>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_fn / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S305>/Switch' */

  /* Product: '<S391>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S294>/Speed_Switch' incorporates:
   *  Abs: '<S294>/Abs'
   *  Constant: '<S302>/Constant'
   *  RelationalOperator: '<S302>/Compare'
   *  Switch: '<S294>/Angle_Switch'
   *  Trigonometry: '<S304>/Atan1'
   *  Trigonometry: '<S305>/Atan1'
   *  UnaryMinus: '<S294>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S304>/Subtract1' incorporates:
     *  Product: '<S304>/Product2'
     *  Product: '<S304>/Product3'
     *  UnaryMinus: '<S294>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S304>/Subtract' incorporates:
     *  Product: '<S304>/Product'
     *  Product: '<S304>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S304>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_fn);

    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S304>/Constant'
     *  Constant: '<S304>/Constant1'
     *  Constant: '<S307>/Constant'
     *  Product: '<S304>/Divide'
     *  Product: '<S304>/Divide1'
     *  RelationalOperator: '<S307>/Compare'
     *  Switch: '<S304>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_fn /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S304>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S297>/Product2' incorporates:
   *  Constant: '<S297>/Constant'
   *  Switch: '<S294>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S292>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S292>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S295>/Add' incorporates:
   *  Sum: '<S296>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S267>/Product' incorporates:
   *  Abs: '<S292>/Abs'
   *  Abs: '<S295>/Abs'
   *  Constant: '<S298>/Constant'
   *  Constant: '<S308>/Constant3'
   *  Constant: '<S308>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S292>/OR'
   *  Lookup_n-D: '<S295>/1-D Lookup Table'
   *  Math: '<S308>/Math Function'
   *  RelationalOperator: '<S292>/Equal1'
   *  RelationalOperator: '<S298>/Compare'
   *  Signum: '<S292>/Sign'
   *  Signum: '<S292>/Sign1'
   *  Sum: '<S295>/Add'
   *  Sum: '<S308>/Add1'
   *  Sum: '<S308>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S293>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S300>/Sum1' incorporates:
   *  Constant: '<S293>/Constant2'
   *  Product: '<S300>/Product'
   *  Sum: '<S300>/Sum'
   *  UnitDelay: '<S300>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S293>/Product' incorporates:
   *  Constant: '<S293>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_fn * Drive_Motor_Control_D;

  /* Sum: '<S299>/Diff' incorporates:
   *  UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S293>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S293>/Add' incorporates:
   *  Gain: '<S293>/Gain'
   *  Gain: '<S293>/Gain1'
   *  Saturate: '<S293>/Saturation'
   */
  rtb_Add_c = ((Drive_Motor_Control_FF * rtb_Switch2_g) + (Drive_Motor_Control_P
    * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S293>/Switch' incorporates:
   *  Constant: '<S293>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S293>/Sum2' incorporates:
     *  Gain: '<S293>/Gain2'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S293>/Subtract' incorporates:
     *  Constant: '<S293>/Constant'
     */
    rtb_Switch2_e = 1.0 - rtb_Add_c;

    /* Switch: '<S301>/Switch2' incorporates:
     *  Constant: '<S293>/Constant'
     *  RelationalOperator: '<S301>/LowerRelop1'
     *  Sum: '<S293>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_c))) {
      /* Sum: '<S293>/Subtract1' incorporates:
       *  Constant: '<S293>/Constant1'
       */
      rtb_Switch2_e = -1.0 - rtb_Add_c;

      /* Switch: '<S301>/Switch' incorporates:
       *  Constant: '<S293>/Constant1'
       *  RelationalOperator: '<S301>/UpperRelop'
       *  Sum: '<S293>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_c))) {
        rtb_Switch2_e = rtb_Hypot_b;
      }

      /* End of Switch: '<S301>/Switch' */
    }

    /* End of Switch: '<S301>/Switch2' */

    /* Saturate: '<S293>/Saturation1' */
    if (rtb_Switch2_e > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_e < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_e;
    }

    /* End of Saturate: '<S293>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S293>/Switch' */

  /* Sum: '<S293>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_c + rtb_Hypot_b;

  /* Saturate: '<S293>/Saturation2' */
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

  /* End of Saturate: '<S293>/Saturation2' */

  /* Sum: '<S309>/Add1' incorporates:
   *  Constant: '<S309>/Constant3'
   *  Constant: '<S309>/Constant4'
   *  Math: '<S309>/Math Function'
   *  Sum: '<S309>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S311>/Sum1' incorporates:
   *  Constant: '<S296>/Constant2'
   *  Product: '<S311>/Product'
   *  Sum: '<S311>/Sum'
   *  UnitDelay: '<S311>/Unit Delay1'
   */
  rtb_Add_c = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
               Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S296>/Product' incorporates:
   *  Constant: '<S296>/Constant3'
   */
  rtb_Switch2_e = rtb_Add_c * Steering_Motor_Control_D;

  /* Sum: '<S310>/Diff' incorporates:
   *  UnitDelay: '<S310>/UD'
   *
   * Block description for '<S310>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S310>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_e - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S296>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S296>/Add' incorporates:
   *  Gain: '<S296>/Gain1'
   *  Saturate: '<S296>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S296>/Subtract' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S296>/Sum2' incorporates:
   *  Gain: '<S296>/Gain2'
   *  UnitDelay: '<S296>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S312>/Switch2' incorporates:
   *  RelationalOperator: '<S312>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S312>/Switch' incorporates:
     *  Constant: '<S296>/Constant1'
     *  RelationalOperator: '<S312>/UpperRelop'
     *  Sum: '<S296>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S312>/Switch' */
  }

  /* End of Switch: '<S312>/Switch2' */

  /* Saturate: '<S296>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S296>/Saturation1' */

  /* Sum: '<S296>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S296>/Saturation2' */
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

  /* End of Saturate: '<S296>/Saturation2' */

  /* Switch: '<S406>/Switch' */
  if (!rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S406>/Switch' incorporates:
     *  Fcn: '<S407>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S406>/Switch' */

  /* Trigonometry: '<S326>/Cos4' incorporates:
   *  Switch: '<S315>/Angle_Switch'
   *  Trigonometry: '<S325>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S326>/Sin5' incorporates:
   *  UnaryMinus: '<S324>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S326>/Sin4' incorporates:
   *  Switch: '<S315>/Angle_Switch'
   *  Trigonometry: '<S325>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S326>/Cos5' incorporates:
   *  UnaryMinus: '<S324>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S326>/Subtract1' incorporates:
   *  Product: '<S326>/Product2'
   *  Product: '<S326>/Product3'
   *  Trigonometry: '<S326>/Cos4'
   *  Trigonometry: '<S326>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S326>/Subtract' incorporates:
   *  Product: '<S326>/Product'
   *  Product: '<S326>/Product1'
   *  Trigonometry: '<S326>/Cos4'
   *  Trigonometry: '<S326>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S326>/Hypot' */
  rtb_Hypot_i = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S326>/Switch' incorporates:
   *  Constant: '<S326>/Constant'
   *  Constant: '<S326>/Constant1'
   *  Constant: '<S327>/Constant'
   *  Product: '<S326>/Divide'
   *  Product: '<S326>/Divide1'
   *  RelationalOperator: '<S327>/Compare'
   *  Switch: '<S326>/Switch1'
   */
  if (rtb_Hypot_i > 1.0E-6) {
    rtb_Switch2_g /= rtb_Hypot_i;
    rtb_Init = rtb_uDLookupTable_l / rtb_Hypot_i;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S326>/Switch' */

  /* Product: '<S391>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S315>/Speed_Switch' incorporates:
   *  Abs: '<S315>/Abs'
   *  Constant: '<S323>/Constant'
   *  RelationalOperator: '<S323>/Compare'
   *  Switch: '<S315>/Angle_Switch'
   *  Trigonometry: '<S325>/Atan1'
   *  Trigonometry: '<S326>/Atan1'
   *  UnaryMinus: '<S315>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S325>/Subtract1' incorporates:
     *  Product: '<S325>/Product2'
     *  Product: '<S325>/Product3'
     *  UnaryMinus: '<S315>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S325>/Subtract' incorporates:
     *  Product: '<S325>/Product'
     *  Product: '<S325>/Product1'
     */
    rtb_Subtract_h3 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S325>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_h3, rtb_Switch2_g);

    /* Switch: '<S325>/Switch1' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S325>/Constant1'
     *  Constant: '<S328>/Constant'
     *  Product: '<S325>/Divide'
     *  Product: '<S325>/Divide1'
     *  RelationalOperator: '<S328>/Compare'
     *  Switch: '<S325>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_h3 /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_h3 = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S325>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_h3);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S318>/Product2' incorporates:
   *  Constant: '<S318>/Constant'
   *  Switch: '<S315>/Speed_Switch'
   */
  rtb_Add_o5 = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S313>/Sign' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Add_o5 > 0.0);
  }

  /* Signum: '<S313>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S316>/Add' incorporates:
   *  Sum: '<S317>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S268>/Product' incorporates:
   *  Abs: '<S313>/Abs'
   *  Abs: '<S316>/Abs'
   *  Constant: '<S319>/Constant'
   *  Constant: '<S329>/Constant3'
   *  Constant: '<S329>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S313>/OR'
   *  Lookup_n-D: '<S316>/1-D Lookup Table'
   *  Math: '<S329>/Math Function'
   *  RelationalOperator: '<S313>/Equal1'
   *  RelationalOperator: '<S319>/Compare'
   *  Signum: '<S313>/Sign'
   *  Signum: '<S313>/Sign1'
   *  Sum: '<S316>/Add'
   *  Sum: '<S329>/Add1'
   *  Sum: '<S329>/Add2'
   */
  rtb_Add_o5 = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Add_o5) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S314>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_Add_o5 - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S321>/Sum1' incorporates:
   *  Constant: '<S314>/Constant2'
   *  Product: '<S321>/Product'
   *  Sum: '<S321>/Sum'
   *  UnitDelay: '<S321>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S314>/Product' incorporates:
   *  Constant: '<S314>/Constant3'
   */
  rtb_Subtract_h3 = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S320>/Diff' incorporates:
   *  UnitDelay: '<S320>/UD'
   *
   * Block description for '<S320>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S320>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_h3 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S314>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S314>/Add' incorporates:
   *  Gain: '<S314>/Gain'
   *  Gain: '<S314>/Gain1'
   *  Saturate: '<S314>/Saturation'
   */
  rtb_Add_o5 = ((Drive_Motor_Control_FF * rtb_Add_o5) + (Drive_Motor_Control_P *
    rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S314>/Switch' incorporates:
   *  Constant: '<S314>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S314>/Sum2' incorporates:
     *  Gain: '<S314>/Gain2'
     *  UnitDelay: '<S314>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S314>/Subtract' incorporates:
     *  Constant: '<S314>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_Add_o5;

    /* Switch: '<S322>/Switch2' incorporates:
     *  Constant: '<S314>/Constant'
     *  RelationalOperator: '<S322>/LowerRelop1'
     *  Sum: '<S314>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_Add_o5))) {
      /* Sum: '<S314>/Subtract1' incorporates:
       *  Constant: '<S314>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_Add_o5;

      /* Switch: '<S322>/Switch' incorporates:
       *  Constant: '<S314>/Constant1'
       *  RelationalOperator: '<S322>/UpperRelop'
       *  Sum: '<S314>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_Add_o5))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S322>/Switch' */
    }

    /* End of Switch: '<S322>/Switch2' */

    /* Saturate: '<S314>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S314>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S314>/Switch' */

  /* Sum: '<S314>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_o5 + rtb_Integral_hv;

  /* Saturate: '<S314>/Saturation2' */
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

  /* End of Saturate: '<S314>/Saturation2' */

  /* Sum: '<S330>/Add1' incorporates:
   *  Constant: '<S330>/Constant3'
   *  Constant: '<S330>/Constant4'
   *  Math: '<S330>/Math Function'
   *  Sum: '<S330>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S332>/Sum1' incorporates:
   *  Constant: '<S317>/Constant2'
   *  Product: '<S332>/Product'
   *  Sum: '<S332>/Sum'
   *  UnitDelay: '<S332>/Unit Delay1'
   */
  rtb_Hypot_i = ((rtb_Add_o5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                 Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S317>/Product' incorporates:
   *  Constant: '<S317>/Constant3'
   */
  rtb_Product_lf = rtb_Hypot_i * Steering_Motor_Control_D;

  /* Sum: '<S331>/Diff' incorporates:
   *  UnitDelay: '<S331>/UD'
   *
   * Block description for '<S331>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S331>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S317>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S317>/Add' incorporates:
   *  Gain: '<S317>/Gain1'
   *  Saturate: '<S317>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S317>/Subtract' incorporates:
   *  Constant: '<S317>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S317>/Sum2' incorporates:
   *  Gain: '<S317>/Gain2'
   *  UnitDelay: '<S317>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S333>/Switch2' incorporates:
   *  Constant: '<S317>/Constant'
   *  RelationalOperator: '<S333>/LowerRelop1'
   *  Sum: '<S317>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S317>/Subtract1' incorporates:
     *  Constant: '<S317>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S333>/Switch' incorporates:
     *  Constant: '<S317>/Constant1'
     *  RelationalOperator: '<S333>/UpperRelop'
     *  Sum: '<S317>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S333>/Switch' */
  }

  /* End of Switch: '<S333>/Switch2' */

  /* Saturate: '<S317>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S317>/Saturation1' */

  /* Sum: '<S317>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S317>/Saturation2' */
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

  /* End of Saturate: '<S317>/Saturation2' */

  /* Sum: '<S351>/Add1' incorporates:
   *  Constant: '<S351>/Constant3'
   *  Constant: '<S351>/Constant4'
   *  Math: '<S351>/Math Function'
   *  Sum: '<S351>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S353>/Sum1' incorporates:
   *  Constant: '<S338>/Constant2'
   *  Product: '<S353>/Product'
   *  Sum: '<S353>/Sum'
   *  UnitDelay: '<S353>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Add_o5 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S338>/Product' incorporates:
   *  Constant: '<S338>/Constant3'
   */
  rtb_Product_pz = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S352>/Diff' incorporates:
   *  UnitDelay: '<S352>/UD'
   *
   * Block description for '<S352>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S352>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S338>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S338>/Add' incorporates:
   *  Gain: '<S338>/Gain1'
   *  Saturate: '<S338>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S338>/Subtract' incorporates:
   *  Constant: '<S338>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S338>/Sum2' incorporates:
   *  Gain: '<S338>/Gain2'
   *  UnitDelay: '<S338>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S354>/Switch2' incorporates:
   *  Constant: '<S338>/Constant'
   *  RelationalOperator: '<S354>/LowerRelop1'
   *  Sum: '<S338>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S338>/Subtract1' incorporates:
     *  Constant: '<S338>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S354>/Switch' incorporates:
     *  Constant: '<S338>/Constant1'
     *  RelationalOperator: '<S354>/UpperRelop'
     *  Sum: '<S338>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S354>/Switch' */
  }

  /* End of Switch: '<S354>/Switch2' */

  /* Saturate: '<S338>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S338>/Saturation1' */

  /* Sum: '<S338>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S338>/Saturation2' */
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

  /* End of Saturate: '<S338>/Saturation2' */

  /* MinMax: '<S9>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit1'
   *  Merge: '<S17>/Merge13'
   */
  rtb_Add_o5 = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired, look1_binlcpw
    (Code_Gen_Model_B.Coral_Arm_Angle_Desired, Code_Gen_Model_ConstP.pooled36,
     Code_Gen_Model_ConstP.pooled35, 95U)), look1_binlcpw
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured,
                     Code_Gen_Model_ConstP.pooled36,
                     Code_Gen_Model_ConstP.pooled35, 95U));

  /* Switch: '<S9>/Switch3' incorporates:
   *  Abs: '<S9>/Abs1'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant6'
   *  Logic: '<S9>/AND'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired < rtb_Add_o5) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S9>/Add' incorporates:
   *  Sum: '<S9>/Subtract'
   *  Switch: '<S9>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Add_o5 -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S9>/Logical Operator3' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S86>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   */
  rtb_Compare_cid = (rtb_Compare_cid ||
                     ((Code_Gen_Model_B.Elevator_Height_Desired == 0.0) && (fabs
    (Code_Gen_Model_B.Elevator_Error) <= Elevator_Error_Bottom_Disable)));

  /* Gain: '<S88>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator2'
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/NOT2'
   *  Logic: '<S9>/OR'
   */
  rtb_Is_Absolute_Steering = (((!rtb_Compare_cid) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable)) && ((!rtb_Compare_pd) &&
    (!rtb_Compare)));

  /* Switch: '<S88>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S88>/Switch1' incorporates:
     *  UnitDelay: '<S97>/Delay Input1'
     *
     * Block description for '<S97>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S88>/Switch' incorporates:
       *  Constant: '<S88>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S88>/Sum2' incorporates:
       *  Gain: '<S88>/Gain2'
       *  UnitDelay: '<S88>/Unit Delay'
       */
      rtb_Add_o5 = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S88>/Subtract' incorporates:
       *  Constant: '<S88>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S98>/Switch2' incorporates:
       *  RelationalOperator: '<S98>/LowerRelop1'
       */
      if (!(rtb_Add_o5 > rtb_Switch2_g)) {
        /* Sum: '<S88>/Subtract1' incorporates:
         *  Constant: '<S88>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S98>/Switch' incorporates:
         *  RelationalOperator: '<S98>/UpperRelop'
         */
        if (!(rtb_Add_o5 < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Add_o5;
        }

        /* End of Switch: '<S98>/Switch' */
      }

      /* End of Switch: '<S98>/Switch2' */

      /* Saturate: '<S88>/Saturation1' */
      if (rtb_Switch2_g > Elevator_Int_UL) {
        /* Switch: '<S88>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_g < Elevator_Int_LL) {
        /* Switch: '<S88>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S88>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_g;
      }

      /* End of Saturate: '<S88>/Saturation1' */
    }

    /* End of Switch: '<S88>/Switch1' */
  } else {
    /* Switch: '<S88>/Switch' incorporates:
     *  Constant: '<S88>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S88>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     */
    if (rtb_Compare_cid) {
      rtb_Add_o5 = Elevator_Bottom_DC;
    } else {
      /* Sum: '<S88>/Add1' */
      rtb_Switch2_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S88>/Saturation2' */
      if (rtb_Switch2_g > Elevator_Total_UL) {
        rtb_Switch2_g = Elevator_Total_UL;
      } else if (rtb_Switch2_g < Elevator_Total_LL) {
        rtb_Switch2_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S88>/Saturation2' */

      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/Constant1'
       *  Constant: '<S9>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Add_o5 = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Add_o5 = 1.0;
      }

      /* End of Switch: '<S9>/Switch1' */

      /* Switch: '<S89>/Switch2' incorporates:
       *  RelationalOperator: '<S89>/LowerRelop1'
       */
      if (!(rtb_Switch2_g > rtb_Add_o5)) {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant3'
         *  Constant: '<S9>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Add_o5 = 0.0;
        } else {
          rtb_Add_o5 = -1.0;
        }

        /* End of Switch: '<S9>/Switch' */

        /* Switch: '<S89>/Switch' incorporates:
         *  RelationalOperator: '<S89>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_Add_o5)) {
          rtb_Add_o5 = rtb_Switch2_g;
        }

        /* End of Switch: '<S89>/Switch' */
      }

      /* End of Switch: '<S89>/Switch2' */
    }

    /* End of Switch: '<S9>/Switch4' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* UnitDelay: '<S87>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S87>/Abs' incorporates:
   *  Sum: '<S87>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S87>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S87>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S87>/Product1' incorporates:
   *  Signum: '<S87>/Sign1'
   *  Signum: '<S87>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S87>/Switch' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S90>/Constant'
   *  Constant: '<S91>/Constant'
   *  Logic: '<S87>/or'
   *  Product: '<S87>/Product1'
   *  RelationalOperator: '<S90>/Compare'
   *  RelationalOperator: '<S91>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S87>/Switch' */

  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Constant: '<S92>/Constant'
   */
  rtb_Compare_cid = (rtb_Add_o5 == 0.0);

  /* Switch: '<S87>/Switch5' */
  if (rtb_Compare_cid) {
    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S87>/Constant4'
     *  Constant: '<S87>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S87>/Constant2'
     *  Constant: '<S87>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S87>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S87>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S87>/Constant10'
     *  Constant: '<S87>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S87>/Constant7'
     *  Constant: '<S87>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S87>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S87>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S87>/Switch5' */

  /* RelationalOperator: '<S93>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 > 0.0);

  /* Switch: '<S87>/Switch1' incorporates:
   *  Switch: '<S87>/Switch3'
   */
  if (rtb_Compare_cid) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S87>/Switch3' incorporates:
     *  Constant: '<S87>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S87>/Product' incorporates:
   *  Switch: '<S87>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S96>/Init' incorporates:
   *  UnitDelay: '<S96>/FixPt Unit Delay1'
   *  UnitDelay: '<S96>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S96>/Init' */

  /* Sum: '<S94>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S95>/Switch2' incorporates:
   *  RelationalOperator: '<S95>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S87>/Switch2' incorporates:
     *  Constant: '<S87>/Constant1'
     *  Constant: '<S87>/Constant3'
     *  Switch: '<S87>/Switch4'
     *  UnaryMinus: '<S87>/Unary Minus1'
     */
    if (rtb_Compare_cid) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S87>/Switch4' incorporates:
       *  Constant: '<S87>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S87>/Product2' incorporates:
     *  Switch: '<S87>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S95>/Switch' incorporates:
     *  RelationalOperator: '<S95>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S95>/Switch' */
  }

  /* End of Switch: '<S95>/Switch2' */

  /* Sum: '<S94>/Sum' */
  rtb_Switch5_a = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   */
  rtb_Compare_cid = ((Code_Gen_Model_B.Elevator_Height_Measured <
                      Elevator_Height_Coral_Arm_Low_Thresh) &&
                     (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                      Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S7>/Logical Operator4' incorporates:
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   */
  FixPtRelationalOperator_o = ((Code_Gen_Model_B.Coral_Arm_Angle_Desired >
    Coral_Arm_Angle_Pos_Threshold) && (Code_Gen_Model_B.Coral_Arm_Angle_Measured
    > Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 2U);

  /* Switch: '<S73>/Switch2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S73>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired > 90.0) {
    rtb_Add_o5 = 90.0;
  } else {
    /* Lookup_n-D: '<S7>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S10>/Switch'
     */
    rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S73>/Switch' incorporates:
     *  RelationalOperator: '<S73>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired < rtb_Add_o5)) {
      rtb_Add_o5 = Code_Gen_Model_B.Coral_Arm_Angle_Desired;
    }

    /* End of Switch: '<S73>/Switch' */
  }

  /* End of Switch: '<S73>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Add_o5 -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S72>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   *  Logic: '<S7>/Logical Operator3'
   */
  rtb_Is_Absolute_Translation_g = (((!FixPtRelationalOperator_o) &&
    (!rtb_Compare_cid)) && (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Lookup_n-D: '<S7>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S72>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S72>/Switch1' incorporates:
     *  UnitDelay: '<S81>/Delay Input1'
     *
     * Block description for '<S81>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S72>/Switch' incorporates:
       *  Constant: '<S72>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S72>/Sum2' incorporates:
       *  Gain: '<S72>/Gain2'
       *  UnitDelay: '<S72>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S72>/Subtract' */
      rtb_Switch2_i = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S82>/Switch2' incorporates:
       *  RelationalOperator: '<S82>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_i)) {
        /* Sum: '<S72>/Subtract1' */
        rtb_Switch2_i = rtb_Add_o5 - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S82>/Switch' incorporates:
         *  RelationalOperator: '<S82>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_i)) {
          rtb_Switch2_i = rtb_Init;
        }

        /* End of Switch: '<S82>/Switch' */
      }

      /* End of Switch: '<S82>/Switch2' */

      /* Saturate: '<S72>/Saturation1' */
      if (rtb_Switch2_i > Coral_Arm_Int_UL) {
        /* Switch: '<S72>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_i < Coral_Arm_Int_LL) {
        /* Switch: '<S72>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S72>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_i;
      }

      /* End of Saturate: '<S72>/Saturation1' */
    }

    /* End of Switch: '<S72>/Switch1' */
  } else {
    /* Switch: '<S72>/Switch' incorporates:
     *  Constant: '<S72>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     *  Switch: '<S7>/Switch3'
     */
    if (rtb_Compare_cid) {
      rtb_Add_o5 = Coral_Arm_Neg90_DC;
    } else if (FixPtRelationalOperator_o) {
      /* Switch: '<S7>/Switch3' incorporates:
       *  Constant: '<S7>/Constant1'
       */
      rtb_Add_o5 = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S72>/Add1' incorporates:
       *  Switch: '<S7>/Switch3'
       */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S83>/Switch2' incorporates:
       *  RelationalOperator: '<S83>/LowerRelop1'
       *  RelationalOperator: '<S83>/UpperRelop'
       *  Switch: '<S7>/Switch3'
       *  Switch: '<S83>/Switch'
       */
      if (rtb_Init > rtb_Switch2_g) {
        rtb_Add_o5 = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_Add_o5)) {
        rtb_Add_o5 = rtb_Init;
      }

      /* End of Switch: '<S83>/Switch2' */
    }

    /* End of Switch: '<S7>/Switch1' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* UnitDelay: '<S71>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S71>/Abs' incorporates:
   *  Sum: '<S71>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S71>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S71>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S71>/Product1' incorporates:
   *  Signum: '<S71>/Sign1'
   *  Signum: '<S71>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S71>/Switch' incorporates:
   *  Constant: '<S71>/Constant'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  Logic: '<S71>/or'
   *  Product: '<S71>/Product1'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S71>/Switch' */

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  rtb_Compare_cid = (rtb_Add_o5 == 0.0);

  /* Switch: '<S71>/Switch5' */
  if (rtb_Compare_cid) {
    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S71>/Constant4'
     *  Constant: '<S71>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S71>/Constant2'
     *  Constant: '<S71>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S71>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S71>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S71>/Constant10'
     *  Constant: '<S71>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S71>/Constant7'
     *  Constant: '<S71>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S71>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S71>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S71>/Switch5' */

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  FixPtRelationalOperator_o = (rtb_Add_o5 > 0.0);

  /* Switch: '<S71>/Switch1' incorporates:
   *  Switch: '<S71>/Switch3'
   */
  if (rtb_Compare_cid) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (FixPtRelationalOperator_o) {
    /* Switch: '<S71>/Switch3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S71>/Product' incorporates:
   *  Switch: '<S71>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_i;

  /* Switch: '<S80>/Init' incorporates:
   *  UnitDelay: '<S80>/FixPt Unit Delay1'
   *  UnitDelay: '<S80>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S80>/Init' */

  /* Sum: '<S78>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S79>/Switch2' incorporates:
   *  RelationalOperator: '<S79>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant3'
     *  Switch: '<S71>/Switch4'
     *  UnaryMinus: '<S71>/Unary Minus1'
     */
    if (rtb_Compare_cid) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (FixPtRelationalOperator_o) {
      /* Switch: '<S71>/Switch4' incorporates:
       *  Constant: '<S71>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S71>/Product2' incorporates:
     *  Switch: '<S71>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_i;

    /* Switch: '<S79>/Switch' incorporates:
     *  RelationalOperator: '<S79>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S79>/Switch' */
  }

  /* End of Switch: '<S79>/Switch2' */

  /* Sum: '<S78>/Sum' */
  rtb_Add_o5 = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Add_o5;

  /* RelationalOperator: '<S131>/Compare' incorporates:
   *  Constant: '<S131>/Constant'
   *  Inport: '<Root>/Joystick_Left_B5'
   */
  Code_Gen_Model_B.Winch_Cmd = (Code_Gen_Model_U.Joystick_Left_B5 != 0.0);

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant5'
   *  Logic: '<S11>/Logical Operator1'
   *  RelationalOperator: '<S11>/Relational Operator'
   */
  if (((Code_Gen_Model_B.Winch_Cmd) && (Code_Gen_Model_B.Elevator_Height_Desired
        == Elevator_Height_End_Game)) &&
      (Code_Gen_Model_B.Reefscape_Motors_Enable)) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S102>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S102>/Compare'
     */
    if (Code_Gen_Model_U.Winch_Revs >= Winch_Rev_Target) {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S11>/Constant2'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Hold_DC;
    } else {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S11>/Constant1'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Spool_DC;
    }

    /* End of Switch: '<S11>/Switch1' */
  } else {
    /* Outport: '<Root>/Winch_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant'
     */
    Code_Gen_Model_Y.Winch_DutyCycle = 0.0;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S13>/Subtract' incorporates:
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Code_Gen_Model_B.Actuator_Cmd = Code_Gen_Model_U.Joystick_Left_B8 -
    Code_Gen_Model_U.Joystick_Left_B7;

  /* Sum: '<S11>/Add' incorporates:
   *  Constant: '<S11>/Constant3'
   *  Product: '<S11>/Product'
   *  UnitDelay: '<S11>/Unit Delay'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Actuator_Cmd * Actuator_Cmd_Gain) +
    Code_Gen_Model_B.Actuator_Position_Desired;

  /* Saturate: '<S11>/Saturation' */
  if (rtb_Minus_k_idx_0 > Actuator_Desired_Max) {
    /* Saturate: '<S11>/Saturation' */
    Code_Gen_Model_B.Actuator_Position_Desired = Actuator_Desired_Max;
  } else if (rtb_Minus_k_idx_0 < 0.0) {
    /* Saturate: '<S11>/Saturation' */
    Code_Gen_Model_B.Actuator_Position_Desired = 0.0;
  } else {
    /* Saturate: '<S11>/Saturation' */
    Code_Gen_Model_B.Actuator_Position_Desired = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Gain: '<S10>/Gain2' incorporates:
   *  Inport: '<Root>/Actuator_Revs'
   */
  Code_Gen_Model_B.Actuator_Position_Measured_Raw = Actuator_MotorRev_to_Inch *
    Code_Gen_Model_U.Actuator_Revs;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Minus_k_idx_0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 256.0);
  }

  Prev_Active_GameState = (uint8_T)((rtb_Minus_k_idx_0 < 0.0) ? ((int32_T)
    ((uint8_T)(-((int8_T)((uint8_T)(-rtb_Minus_k_idx_0)))))) : ((int32_T)
    ((uint8_T)rtb_Minus_k_idx_0)));

  /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

  /* Switch: '<S10>/Switch5' */
  if (Prev_Active_GameState != 0) {
    /* Switch: '<S10>/Switch5' */
    Code_Gen_Model_B.Actuator_Position_Offset =
      Code_Gen_Model_B.Actuator_Position_Measured_Raw;
  }

  /* End of Switch: '<S10>/Switch5' */

  /* Sum: '<S10>/Subtract3' */
  Code_Gen_Model_B.Actuator_Position_Measured =
    Code_Gen_Model_B.Actuator_Position_Measured_Raw -
    Code_Gen_Model_B.Actuator_Position_Offset;

  /* Sum: '<S104>/Sum' */
  rtb_Init = Code_Gen_Model_B.Actuator_Position_Desired -
    Code_Gen_Model_B.Actuator_Position_Measured;

  /* Gain: '<S104>/Gain1' */
  rtb_Switch2_g = Actuator_P_Gain * rtb_Init;

  /* RelationalOperator: '<S103>/Compare' incorporates:
   *  Constant: '<S103>/Constant'
   */
  FixPtRelationalOperator_o = (Code_Gen_Model_B.Actuator_Position_Desired >= 1.0);

  /* Switch: '<S104>/Switch' incorporates:
   *  Constant: '<S104>/Constant2'
   */
  if (FixPtRelationalOperator_o) {
    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S104>/Constant3'
     *  UnitDelay: '<S105>/Delay Input1'
     *
     * Block description for '<S105>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
      rtb_Init = 0.0;
    } else {
      /* Sum: '<S104>/Sum2' incorporates:
       *  Gain: '<S104>/Gain2'
       *  UnitDelay: '<S104>/Unit Delay'
       */
      rtb_Init = (Actuator_I_Gain * rtb_Init) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_km;

      /* Sum: '<S104>/Subtract' incorporates:
       *  Constant: '<S104>/Constant'
       */
      rtb_Switch2_i = Actuator_Total_UL - rtb_Switch2_g;

      /* Switch: '<S106>/Switch2' incorporates:
       *  RelationalOperator: '<S106>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_i)) {
        /* Sum: '<S104>/Subtract1' incorporates:
         *  Constant: '<S104>/Constant1'
         */
        rtb_Switch2_i = Actuator_Total_LL - rtb_Switch2_g;

        /* Switch: '<S106>/Switch' incorporates:
         *  RelationalOperator: '<S106>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_i)) {
          rtb_Switch2_i = rtb_Init;
        }

        /* End of Switch: '<S106>/Switch' */
      }

      /* End of Switch: '<S106>/Switch2' */

      /* Saturate: '<S104>/Saturation1' */
      if (rtb_Switch2_i > Actuator_Int_UL) {
        rtb_Init = Actuator_Int_UL;
      } else if (rtb_Switch2_i < Actuator_Int_LL) {
        rtb_Init = Actuator_Int_LL;
      } else {
        rtb_Init = rtb_Switch2_i;
      }

      /* End of Saturate: '<S104>/Saturation1' */
    }

    /* End of Switch: '<S104>/Switch1' */
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S104>/Switch' */

  /* Switch: '<S11>/Switch2' */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Sum: '<S104>/Add1' */
    rtb_Minus_k_idx_0 = rtb_Switch2_g + rtb_Init;

    /* Saturate: '<S104>/Saturation2' */
    if (rtb_Minus_k_idx_0 > Actuator_Total_UL) {
      /* Outport: '<Root>/Actuator_DutyCycle' */
      Code_Gen_Model_Y.Actuator_DutyCycle = Actuator_Total_UL;
    } else if (rtb_Minus_k_idx_0 < Actuator_Total_LL) {
      /* Outport: '<Root>/Actuator_DutyCycle' */
      Code_Gen_Model_Y.Actuator_DutyCycle = Actuator_Total_LL;
    } else {
      /* Outport: '<Root>/Actuator_DutyCycle' */
      Code_Gen_Model_Y.Actuator_DutyCycle = rtb_Minus_k_idx_0;
    }

    /* End of Saturate: '<S104>/Saturation2' */
  } else {
    /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant4'
     */
    Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Chart: '<S19>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Active_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (Prev_Active_GameState != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Active_GameState = Prev_Active_GameState;
    }

    /* case IN_Not_Disabled: */
  } else if (Prev_Active_GameState == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Active_GameState = Prev_Active_GameState;
  }

  /* End of Chart: '<S19>/Chart' */

  /* Gain: '<S198>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S199>/Compare' incorporates:
   *  Constant: '<S198>/Constant'
   *  Constant: '<S199>/Constant'
   */
  rtb_Compare_cid = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S198>/Switch1' incorporates:
   *  UnitDelay: '<S198>/Unit Delay1'
   */
  if (rtb_Compare_cid) {
    rtb_Switch2_g = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S198>/Switch1' */

  /* Sum: '<S198>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_g;

  /* Gain: '<S198>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S198>/Switch' incorporates:
   *  UnitDelay: '<S198>/Unit Delay'
   */
  if (rtb_Compare_cid) {
    rtb_Switch2_i = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch2_i = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S198>/Switch' */

  /* Sum: '<S198>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch2_i;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S12>/Gain'
   *  Sum: '<S12>/Add1'
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
  Code_Gen_Model_Y.Swerve_Motors_Disabled = Robot_Reached_Destination;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = UnitDelay1;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle =
    rtb_Algae_Wheel_Outside_DutyCyc;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle =
    rtb_Algae_Wheel_Inside_DutyCycl;

  /* SignalConversion: '<S13>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Update for UnitDelay: '<S190>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S191>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S191>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S192>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S192>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S193>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S193>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for S-Function (sfix_udelay): '<S15>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S15>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S135>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S155>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S135>/A'
   *  Delay: '<S135>/MemoryX'
   */
  rtb_Switch_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  UnitDelay1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S135>/MemoryX' incorporates:
   *  Constant: '<S135>/B'
   *  Product: '<S155>/A[k]*xhat[k|k-1]'
   *  Product: '<S155>/B[k]*u[k]'
   *  Sum: '<S155>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch_l) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + UnitDelay1) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S108>/Delay Input1' incorporates:
   *  Constant: '<S12>/Constant3'
   *
   * Block description for '<S108>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S12>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S189>/UD'
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for DiscreteIntegrator: '<S18>/Accumulator2' incorporates:
   *  Constant: '<S18>/Constant'
   *  DiscreteIntegrator: '<S18>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S18>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S18>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S132>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S132>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S133>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S133>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S134>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S134>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S99>/Delay Input1'
   *
   * Block description for '<S99>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S100>/Delay Input1'
   *
   * Block description for '<S100>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp;

  /* Update for UnitDelay: '<S101>/Delay Input1'
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = Code_Gen_Model_B.State_ID;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination_l;

  /* Update for UnitDelay: '<S366>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S366>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S388>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S387>/UD'
   *
   * Block description for '<S387>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S385>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2_gl;

  /* Update for UnitDelay: '<S368>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S383>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S383>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S383>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S367>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_jm;

  /* Update for UnitDelay: '<S376>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S376>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S376>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_jm;

  /* Update for UnitDelay: '<S342>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S335>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Rotationmatrixfromlocalto_3;

  /* Update for UnitDelay: '<S279>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S278>/UD'
   *
   * Block description for '<S278>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Switch2_az;

  /* Update for UnitDelay: '<S272>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S290>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bk = rtb_Add_ju;

  /* Update for UnitDelay: '<S289>/UD'
   *
   * Block description for '<S289>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_ah;

  /* Update for UnitDelay: '<S275>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S300>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_fn;

  /* Update for UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S293>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S311>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_c;

  /* Update for UnitDelay: '<S310>/UD'
   *
   * Block description for '<S310>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_e;

  /* Update for UnitDelay: '<S296>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S321>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S320>/UD'
   *
   * Block description for '<S320>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_h3;

  /* Update for UnitDelay: '<S314>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S332>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Hypot_i;

  /* Update for UnitDelay: '<S331>/UD'
   *
   * Block description for '<S331>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S317>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S353>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S352>/UD'
   *
   * Block description for '<S352>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_pz;

  /* Update for UnitDelay: '<S338>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S97>/Delay Input1'
   *
   * Block description for '<S97>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S87>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S96>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S96>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S96>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Add_o5;

  /* Update for UnitDelay: '<S80>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S80>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S80>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Add_o5;

  /* Update for UnitDelay: '<S105>/Delay Input1'
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = FixPtRelationalOperator_o;

  /* Update for UnitDelay: '<S104>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_km = rtb_Init;

  /* Update for UnitDelay: '<S198>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_g;

  /* Update for UnitDelay: '<S198>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch2_i;
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

    /* Start for If: '<S20>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S135>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S12>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S18>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S18>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b = 0.2;

    /* InitializeConditions for UnitDelay: '<S366>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S383>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S376>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S96>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S80>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S457>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S20>/Spline Path Following Enabled' */
    /* Start for If: '<S207>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S203>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S207>/Robot_Index_Is_Valid' */
    /* Start for If: '<S210>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S210>/Circle_Check_Valid' */
    /* Start for If: '<S212>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S210>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S207>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S20>/Spline Path Following Enabled' */
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
