/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.221
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Jan 18 22:21:49 2025
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

/* Named constants for Chart: '<S11>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Exported block parameters */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S317>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S317>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S317>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S317>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S317>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S317>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S317>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S317>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S317>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S317>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S317>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S317>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S317>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S317>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S317>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S317>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S317>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S317>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S317>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S317>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S317>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S317>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S317>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S317>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S320>/Gain2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S333>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S329>/Constant'
                                        *   '<S329>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S333>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S329>/Constant1'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S257>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S173>/Constant3'
                                        *   '<S194>/Constant3'
                                        *   '<S215>/Constant3'
                                        *   '<S236>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S173>/Constant2'
                                   *   '<S194>/Constant2'
                                   *   '<S215>/Constant2'
                                   *   '<S236>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S173>/Saturation'
                                        *   '<S194>/Saturation'
                                        *   '<S215>/Saturation'
                                        *   '<S236>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S173>/Saturation'
                                        *   '<S194>/Saturation'
                                        *   '<S215>/Saturation'
                                        *   '<S236>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S173>/Gain'
                                            *   '<S194>/Gain'
                                            *   '<S215>/Gain'
                                            *   '<S236>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S173>/Gain2'
                                        *   '<S194>/Gain2'
                                        *   '<S215>/Gain2'
                                        *   '<S236>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S173>/Saturation1'
                                        *   '<S194>/Saturation1'
                                        *   '<S215>/Saturation1'
                                        *   '<S236>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S173>/Saturation1'
                                        *   '<S194>/Saturation1'
                                        *   '<S215>/Saturation1'
                                        *   '<S236>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S173>/Gain1'
                                        *   '<S194>/Gain1'
                                        *   '<S215>/Gain1'
                                        *   '<S236>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S178>/Constant'
                            *   '<S199>/Constant'
                            *   '<S220>/Constant'
                            *   '<S241>/Constant'
                            */
real_T Elevator_Gain_Int = 0.001;      /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S18>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.05;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S18>/Gain1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S18>/Constant3'
                                        */
real_T Elevator_Int_LL = 0.0;          /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S18>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S18>/Saturation1'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.31416;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S14>/Gain'
                                            */
real_T Elevator_Total_LL = 0.0;        /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S18>/Constant1'
                                        *   '<S18>/Saturation2'
                                        */
real_T Elevator_Total_UL = 0.2;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S18>/Constant'
                                        *   '<S18>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S5>/Constant2'
                                       *   '<S5>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S5>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S8>/Constant1'
                                        *   '<S8>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
                                         * Referenced by: '<S8>/Constant'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S10>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S99>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S158>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S158>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S105>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S118>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S158>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S269>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S269>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S269>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S269>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S269>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S269>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S286>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S286>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S286>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S286>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S285>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S286>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S286>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S286>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S286>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S286>/Constant1'
                                   *   '<S286>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S286>/Constant'
                                   *   '<S286>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S176>/Constant3'
                                        *   '<S197>/Constant3'
                                        *   '<S218>/Constant3'
                                        *   '<S239>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S176>/Constant2'
                                *   '<S197>/Constant2'
                                *   '<S218>/Constant2'
                                *   '<S239>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S176>/Saturation'
                                           *   '<S197>/Saturation'
                                           *   '<S218>/Saturation'
                                           *   '<S239>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S176>/Saturation'
                                          *   '<S197>/Saturation'
                                          *   '<S218>/Saturation'
                                          *   '<S239>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S176>/Gain2'
                                         *   '<S197>/Gain2'
                                         *   '<S218>/Gain2'
                                         *   '<S239>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S176>/Saturation1'
                                             *   '<S197>/Saturation1'
                                             *   '<S218>/Saturation1'
                                             *   '<S239>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S176>/Saturation1'
                                            *   '<S197>/Saturation1'
                                            *   '<S218>/Saturation1'
                                            *   '<S239>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S176>/Gain1'
                                        *   '<S197>/Gain1'
                                        *   '<S218>/Gain1'
                                        *   '<S239>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S268>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S268>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S268>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S268>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S268>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S268>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S319>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S319>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S16>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S16>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S16>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S256>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S256>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S256>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S256>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S256>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S256>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S320>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S319>/Dead Zone'
                                        *   '<S320>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S319>/Dead Zone'
                                        *   '<S320>/Dead Zone'
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
  real_T rtb_thetay_n_0[8];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_du;
  real_T rtb_Add_gj;
  real_T rtb_Add_i;
  real_T rtb_Add_o2;
  real_T rtb_Add_oh;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_a;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Integral_i;
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Product2_f;
  real_T rtb_Product2_l;
  real_T rtb_Product_d;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Sum1_h;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch2;
  real_T rtb_Switch2_k;
  real_T rtb_Switch4;
  real_T rtb_rx;
  real_T rtb_rx_c;
  real_T rtb_rx_d;
  real_T rtb_rx_g;
  real_T rtb_rx_nr;
  real_T rtb_thetay;
  real_T rtb_thetay_i;
  real_T rtb_thetay_l;
  real_T rtb_thetay_n;
  real_T tmp;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_Compare_pf;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_FixPtRelationalOperator_ea;
  boolean_T rtb_FixPtRelationalOperator_f;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S33>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S33>/Delay Input1'
   *
   * Block description for '<S33>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S35>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator_ea = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S6>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S6>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S6>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S6>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S6>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S28>/Compare' incorporates:
   *  Constant: '<S28>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S36>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S8>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S8>/Tapped Delay1'
   *  Sum: '<S8>/Add'
   *  Sum: '<S8>/Add1'
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

  /* Delay: '<S36>/MemoryX' incorporates:
   *  Constant: '<S36>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S8>/AND' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S8>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S63>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S89>/Add1' incorporates:
     *  Constant: '<S36>/C'
     *  Delay: '<S36>/MemoryX'
     *  Product: '<S89>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_p2 = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S89>/Product2' incorporates:
     *  Constant: '<S37>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Switch1_p2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Switch1_p2);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S89>/Product2' incorporates:
     *  Outport: '<S89>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S63>/Enabled Subsystem' */

  /* Sum: '<S63>/Add' incorporates:
   *  Delay: '<S36>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S10>/Accumulator2' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S10>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S8>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S8>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S8>/Switch' */

  /* DiscreteIntegrator: '<S10>/Accumulator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S10>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S8>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S8>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S5>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S23>/FixPt Relational Operator'
   *  Sum: '<S5>/Sum'
   *  UnitDelay: '<S23>/Delay Input1'
   *  UnitDelay: '<S5>/Unit Delay1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Sum: '<S5>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S22>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

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
     *  ActionPort: '<S3>/Action Port'
     */
    /* Merge: '<S9>/Merge1' incorporates:
     *  Constant: '<S3>/Constant1'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S9>/Merge3' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S9>/Merge4' incorporates:
     *  Constant: '<S3>/Constant4'
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S3>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S3>/Constant9'
     *  SignalConversion generated from: '<S3>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S3>/Enable_Wheels' incorporates:
     *  Constant: '<S3>/Constant18'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S3>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S3>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S3>/Disable_Wheels' incorporates:
     *  Constant: '<S3>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S3>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S3>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S9>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S9>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S9>/Merge4' incorporates:
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

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* Logic: '<S317>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S317>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S317>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S317>/Switch15' incorporates:
     *  Switch: '<S317>/Switch16'
     *  Switch: '<S317>/Switch23'
     *  Switch: '<S317>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S317>/Switch15' incorporates:
       *  Constant: '<S317>/Constant9'
       *  Sum: '<S317>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S317>/Switch23' incorporates:
       *  Constant: '<S317>/Constant28'
       *  Sum: '<S317>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S317>/Switch15' incorporates:
       *  Constant: '<S317>/Constant5'
       *  Sum: '<S317>/Add16'
       *  Switch: '<S317>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S317>/Switch23' incorporates:
       *  Constant: '<S317>/Constant27'
       *  Sum: '<S317>/Add22'
       *  Switch: '<S317>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S317>/Switch15' incorporates:
       *  Constant: '<S317>/Constant1'
       *  Switch: '<S317>/Switch1'
       *  Switch: '<S317>/Switch12'
       *  Switch: '<S317>/Switch13'
       *  Switch: '<S317>/Switch14'
       *  Switch: '<S317>/Switch16'
       *  Switch: '<S317>/Switch17'
       *  Switch: '<S317>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S317>/Switch23' incorporates:
       *  Constant: '<S317>/Constant2'
       *  Switch: '<S317>/Switch19'
       *  Switch: '<S317>/Switch20'
       *  Switch: '<S317>/Switch21'
       *  Switch: '<S317>/Switch22'
       *  Switch: '<S317>/Switch24'
       *  Switch: '<S317>/Switch25'
       *  Switch: '<S317>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S317>/Switch15' */

    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S337>/Constant'
     *  Constant: '<S338>/Constant'
     *  Logic: '<S332>/AND'
     *  RelationalOperator: '<S337>/Compare'
     *  RelationalOperator: '<S338>/Compare'
     *  Switch: '<S332>/Switch2'
     *  UnitDelay: '<S332>/Unit Delay'
     *  UnitDelay: '<S332>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S332>/Switch1' */

    /* Lookup_n-D: '<S320>/Modulation_Drv' incorporates:
     *  Math: '<S320>/Magnitude'
     */
    rtb_thetay_n = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S330>/Compare' incorporates:
     *  Constant: '<S330>/Constant'
     */
    rtb_Compare_pf = (rtb_thetay_n == 0.0);

    /* DeadZone: '<S320>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_thetay = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_thetay = 0.0;
    } else {
      rtb_thetay = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S320>/Dead Zone' */

    /* Logic: '<S320>/Logical Operator' incorporates:
     *  Constant: '<S331>/Constant'
     *  RelationalOperator: '<S331>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_thetay != 0.0) && rtb_Compare_pf);

    /* Switch: '<S320>/Switch1' incorporates:
     *  Switch: '<S320>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S320>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S9>/Merge3' incorporates:
         *  Constant: '<S320>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S9>/Merge3' incorporates:
         *  Constant: '<S320>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S320>/Switch5' */
    } else if (rtb_Compare_pf) {
      /* Switch: '<S320>/Switch6' incorporates:
       *  Constant: '<S320>/Constant'
       *  Constant: '<S320>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S320>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        tmp = 0.0;
      } else {
        tmp = 3.1415926535897931;
      }

      /* Merge: '<S9>/Merge3' incorporates:
       *  Sum: '<S320>/Add1'
       *  Switch: '<S320>/Switch4'
       *  Switch: '<S320>/Switch6'
       *  Trigonometry: '<S320>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + tmp;
    } else {
      /* Merge: '<S9>/Merge3' incorporates:
       *  Switch: '<S320>/Switch4'
       *  Trigonometry: '<S320>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Constant5'
     *  Constant: '<S16>/Constant7'
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     *  Switch: '<S320>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S16>/Switch' */

    /* DeadZone: '<S319>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      tmp = 0.0;
    } else {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S319>/Add' incorporates:
     *  Constant: '<S319>/Constant'
     *  Constant: '<S319>/Constant1'
     *  DeadZone: '<S319>/Dead Zone'
     *  Lookup_n-D: '<S319>/Modulation_Str_Y_Rel'
     *  Product: '<S319>/Product'
     *  Product: '<S319>/Product1'
     *  SignalConversion: '<S6>/Signal Copy5'
     */
    rtb_rx = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
              Steering_Relative_Gain) + (tmp * Steering_Twist_Gain);

    /* RelationalOperator: '<S321>/Compare' incorporates:
     *  Constant: '<S321>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_rx == 0.0);

    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S16>/Constant5'
     *  Constant: '<S16>/Constant8'
     *  DataTypeConversion: '<S16>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_FixPtRelationalOperator;
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Logic: '<S317>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S326>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S326>/Delay Input1'
     *
     * Block description for '<S326>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S319>/AND2' incorporates:
     *  RelationalOperator: '<S322>/FixPt Relational Operator'
     *  RelationalOperator: '<S323>/FixPt Relational Operator'
     *  RelationalOperator: '<S324>/FixPt Relational Operator'
     *  RelationalOperator: '<S325>/FixPt Relational Operator'
     *  UnitDelay: '<S322>/Delay Input1'
     *  UnitDelay: '<S323>/Delay Input1'
     *  UnitDelay: '<S324>/Delay Input1'
     *  UnitDelay: '<S325>/Delay Input1'
     *
     * Block description for '<S322>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S323>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S324>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S325>/Delay Input1':
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

    /* Logic: '<S319>/AND1' incorporates:
     *  Logic: '<S319>/AND3'
     *  Logic: '<S319>/AND7'
     *  UnitDelay: '<S319>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S319>/AND4' incorporates:
     *  Logic: '<S319>/AND5'
     *  Logic: '<S319>/AND8'
     *  UnitDelay: '<S319>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S319>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S319>/Switch8' incorporates:
     *  Constant: '<S328>/Constant'
     *  Logic: '<S319>/AND9'
     *  RelationalOperator: '<S327>/FixPt Relational Operator'
     *  RelationalOperator: '<S328>/Compare'
     *  UnitDelay: '<S11>/Unit Delay'
     *  UnitDelay: '<S327>/Delay Input1'
     *
     * Block description for '<S327>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_j))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S319>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S319>/Switch8' */

    /* Switch: '<S319>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S319>/Switch2' incorporates:
       *  Constant: '<S319>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S319>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S319>/Switch2' */

    /* Logic: '<S317>/Logical Operator' incorporates:
     *  Logic: '<S317>/Logical Operator1'
     *  Logic: '<S317>/Logical Operator13'
     *  UnitDelay: '<S317>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S317>/Switch2' incorporates:
     *  Switch: '<S317>/Switch4'
     *  Switch: '<S317>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S317>/Switch2' incorporates:
       *  Constant: '<S16>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S317>/Switch2' incorporates:
       *  Constant: '<S317>/Constant14'
       *  Switch: '<S317>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S317>/Switch2' incorporates:
       *  Constant: '<S317>/Constant13'
       *  Switch: '<S317>/Switch4'
       *  Switch: '<S317>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S317>/Switch2' */

    /* Switch: '<S319>/Switch4' incorporates:
     *  Constant: '<S319>/Constant5'
     *  Switch: '<S319>/Switch1'
     *  Switch: '<S319>/Switch5'
     *  Switch: '<S319>/Switch6'
     *  Switch: '<S319>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S319>/Switch5' incorporates:
       *  Constant: '<S319>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S319>/Switch6' incorporates:
       *  Constant: '<S319>/Constant7'
       *  Switch: '<S319>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S319>/Switch7' incorporates:
       *  Constant: '<S319>/Constant8'
       *  Switch: '<S319>/Switch5'
       *  Switch: '<S319>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S319>/Switch1' incorporates:
       *  Switch: '<S319>/Switch5'
       *  Switch: '<S319>/Switch6'
       *  Switch: '<S319>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S319>/Switch6' incorporates:
       *  Switch: '<S319>/Switch5'
       *  Switch: '<S319>/Switch7'
       *  UnitDelay: '<S319>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S319>/Switch4' */

    /* Switch: '<S319>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S319>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S319>/Switch3' incorporates:
       *  Constant: '<S319>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S319>/Switch3' */

    /* Merge: '<S9>/Merge1' incorporates:
     *  Sum: '<S319>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S9>/Merge2' incorporates:
     *  SignalConversion: '<S319>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_rx;

    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S329>/Constant'
     *  Constant: '<S329>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Switch2_k = Boost_Trigger_High_Speed;
    } else {
      rtb_Switch2_k = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S329>/Switch1' */

    /* Switch: '<S336>/Init' incorporates:
     *  UnitDelay: '<S336>/FixPt Unit Delay1'
     *  UnitDelay: '<S336>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_rx = rtb_Switch2_k;
    } else {
      rtb_rx = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S336>/Init' */

    /* Sum: '<S334>/Sum1' */
    rtb_Switch2_k -= rtb_rx;

    /* Switch: '<S335>/Switch2' incorporates:
     *  Constant: '<S333>/Constant1'
     *  Constant: '<S333>/Constant3'
     *  RelationalOperator: '<S335>/LowerRelop1'
     *  RelationalOperator: '<S335>/UpperRelop'
     *  Switch: '<S335>/Switch'
     */
    if (rtb_Switch2_k > Boost_Trigger_Increasing_Limit) {
      rtb_Switch2_k = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Switch2_k < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S335>/Switch' incorporates:
       *  Constant: '<S333>/Constant1'
       */
      rtb_Switch2_k = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S335>/Switch2' */

    /* Sum: '<S334>/Sum' */
    rtb_Switch2_k += rtb_rx;

    /* Switch: '<S320>/Switch' incorporates:
     *  Switch: '<S320>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S9>/Merge4' incorporates:
       *  Gain: '<S320>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_thetay;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S9>/Merge4' incorporates:
       *  Gain: '<S320>/Gain2'
       *  Math: '<S320>/Magnitude1'
       *  Switch: '<S320>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S329>/Product' incorporates:
       *  Switch: '<S320>/Switch2'
       */
      rtb_Integral_i = rtb_thetay_n * rtb_Switch2_k;

      /* Saturate: '<S329>/Saturation' incorporates:
       *  Switch: '<S320>/Switch2'
       */
      if (rtb_Integral_i > Boost_Trigger_High_Speed) {
        /* Merge: '<S9>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Integral_i < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S9>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S9>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Integral_i;
      }

      /* End of Saturate: '<S329>/Saturation' */
    }

    /* End of Switch: '<S320>/Switch' */

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S16>/Constant3'
     *  SignalConversion generated from: '<S16>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S16>/Constant9'
     *  SignalConversion generated from: '<S16>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S16>/Constant1'
     *  SignalConversion generated from: '<S16>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S16>/Enable_Wheels' incorporates:
     *  Constant: '<S16>/Constant6'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S16>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S16>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S16>/Disable_Wheels' incorporates:
     *  Constant: '<S16>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S16>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S16>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S332>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S327>/Delay Input1'
     *
     * Block description for '<S327>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S326>/Delay Input1'
     *
     * Block description for '<S326>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S322>/Delay Input1'
     *
     * Block description for '<S322>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S323>/Delay Input1'
     *
     * Block description for '<S323>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S324>/Delay Input1'
     *
     * Block description for '<S324>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S325>/Delay Input1'
     *
     * Block description for '<S325>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S319>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S319>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S319>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* Update for UnitDelay: '<S336>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S336>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S336>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Switch2_k;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S17>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* Merge: '<S9>/Merge1' incorporates:
     *  Constant: '<S17>/Constant1'
     *  SignalConversion generated from: '<S17>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S17>/Constant2'
     *  SignalConversion generated from: '<S17>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S9>/Merge3' incorporates:
     *  Constant: '<S17>/Constant3'
     *  SignalConversion generated from: '<S17>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S9>/Merge4' incorporates:
     *  Constant: '<S17>/Constant4'
     *  SignalConversion generated from: '<S17>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S17>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S17>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S17>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S17>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S17>/Constant7'
     *  SignalConversion generated from: '<S17>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S17>/Constant9'
     *  SignalConversion generated from: '<S17>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S17>/Constant12'
     *  SignalConversion generated from: '<S17>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/Constant14'
     *  Switch: '<S17>/Switch1'
     *  UnitDelay: '<S17>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_ea) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (rtb_FixPtRelationalOperator) {
      /* Switch: '<S17>/Switch1' incorporates:
       *  Constant: '<S17>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S17>/Switch' */

    /* DataTypeConversion: '<S17>/Cast To Boolean1' */
    rtb_thetay = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S17>/Cast To Boolean3' */
    rtb_thetay_n = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S17>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S34>/FixPt Relational Operator'
     *  UnitDelay: '<S34>/Delay Input1'
     *
     * Block description for '<S34>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_rx = (Code_Gen_Model_U.Joystick_Left_B12 >
              Code_Gen_Model_DW.DelayInput1_DSTATE_e);

    /* Update for UnitDelay: '<S17>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    tmp = 0.0;
  } else {
    tmp = 3.1415926535897931;
  }

  /* Sum: '<S5>/Add' incorporates:
   *  Switch: '<S5>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + tmp;

  /* If: '<S12>/If' incorporates:
   *  Constant: '<S102>/Constant'
   *  Merge: '<S12>/Merge'
   *  Merge: '<S12>/Merge1'
   *  Merge: '<S12>/Merge2'
   *  Merge: '<S12>/Merge3'
   *  Merge: '<S12>/Merge4'
   *  Merge: '<S12>/Merge5'
   *  Merge: '<S12>/Merge7'
   *  Merge: '<S12>/Merge8'
   *  SignalConversion generated from: '<S102>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S108>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S111>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S113>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S111>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S108>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S12>/Pass Through' incorporates:
   *  ActionPort: '<S102>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S12>/If' */
  /* End of Outputs for SubSystem: '<S12>/Pass Through' */

  /* UnitDelay: '<S256>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S256>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    tmp = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S256>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S256>/Product1' incorporates:
   *  Signum: '<S256>/Sign1'
   *  Signum: '<S256>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S256>/Switch' incorporates:
   *  Constant: '<S256>/Constant'
   *  Constant: '<S261>/Constant'
   *  Constant: '<S262>/Constant'
   *  Logic: '<S256>/or'
   *  Product: '<S256>/Product1'
   *  RelationalOperator: '<S261>/Compare'
   *  RelationalOperator: '<S262>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_c = 0.0;
  }

  /* End of Switch: '<S256>/Switch' */

  /* RelationalOperator: '<S263>/Compare' incorporates:
   *  Constant: '<S263>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_c == 0.0);

  /* RelationalOperator: '<S264>/Compare' incorporates:
   *  Constant: '<S264>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_c > 0.0);

  /* Abs: '<S256>/Abs' incorporates:
   *  Sum: '<S256>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S256>/Switch5' incorporates:
   *  Constant: '<S256>/Constant1'
   *  Switch: '<S256>/Switch1'
   *  UnaryMinus: '<S256>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S256>/Constant4'
     *  Constant: '<S256>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S256>/Constant2'
     *  Constant: '<S256>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S256>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S256>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p2 = rtb_LookupTableDynamic_j;
    tmp = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S256>/Constant10'
     *  Constant: '<S256>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S256>/Constant7'
     *  Constant: '<S256>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S256>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S256>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p2 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S256>/Switch3' incorporates:
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S256>/Constant3'
     *  UnaryMinus: '<S256>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Translation_Speed_Rate_Limit_Inc;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S256>/Switch3' */
  }

  /* End of Switch: '<S256>/Switch5' */

  /* Product: '<S256>/Product' incorporates:
   *  Switch: '<S256>/Switch1'
   */
  rtb_Switch2 = tmp * rtb_Switch1_p2;

  /* Switch: '<S267>/Init' incorporates:
   *  UnitDelay: '<S267>/FixPt Unit Delay1'
   *  UnitDelay: '<S267>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_c;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S267>/Init' */

  /* Sum: '<S265>/Sum1' */
  rtb_Switch4 = rtb_rx_c - rtb_Merge1;

  /* Switch: '<S266>/Switch2' incorporates:
   *  RelationalOperator: '<S266>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S256>/Switch2' incorporates:
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S256>/Constant3'
     *  Switch: '<S256>/Switch4'
     *  UnaryMinus: '<S256>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S256>/Switch4' incorporates:
       *  Constant: '<S256>/Constant1'
       */
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S256>/Product2' incorporates:
     *  Switch: '<S256>/Switch2'
     */
    rtb_Switch2 = tmp * rtb_Switch1_p2;

    /* Switch: '<S266>/Switch' incorporates:
     *  RelationalOperator: '<S266>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S266>/Switch' */
  }

  /* End of Switch: '<S266>/Switch2' */

  /* Sum: '<S265>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S259>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S291>/Constant3'
     *  Constant: '<S291>/Constant4'
     *  Math: '<S291>/Math Function'
     *  Sum: '<S259>/Subtract'
     *  Sum: '<S291>/Add1'
     *  Sum: '<S291>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S259>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S259>/Switch' */

  /* Sum: '<S287>/Add1' incorporates:
   *  Constant: '<S287>/Constant3'
   *  Constant: '<S287>/Constant4'
   *  Math: '<S287>/Math Function'
   *  Sum: '<S286>/Sum'
   *  Sum: '<S287>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S289>/Sum1' incorporates:
   *  Constant: '<S286>/Constant2'
   *  Product: '<S289>/Product'
   *  Sum: '<S289>/Sum'
   *  UnitDelay: '<S289>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S286>/Product' incorporates:
   *  Constant: '<S286>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S288>/Diff' incorporates:
   *  UnitDelay: '<S288>/UD'
   *
   * Block description for '<S288>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S288>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S286>/Saturation' */
  if (rtb_Integral_i > Steering_Heading_Control_D_UL) {
    rtb_Integral_i = Steering_Heading_Control_D_UL;
  } else if (rtb_Integral_i < Steering_Heading_Control_D_LL) {
    rtb_Integral_i = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S286>/Add' incorporates:
   *  Gain: '<S286>/Gain1'
   *  Saturate: '<S286>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + rtb_Integral_i;

  /* Sum: '<S286>/Subtract' incorporates:
   *  Constant: '<S286>/Constant'
   */
  rtb_rx_g = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S286>/Sum2' incorporates:
   *  Gain: '<S286>/Gain2'
   *  UnitDelay: '<S286>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S290>/Switch2' incorporates:
   *  RelationalOperator: '<S290>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_rx_g)) {
    /* Sum: '<S286>/Subtract1' incorporates:
     *  Constant: '<S286>/Constant1'
     */
    rtb_Switch2_k = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S290>/Switch' incorporates:
     *  RelationalOperator: '<S290>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Switch2_k) {
      rtb_rx_g = rtb_Switch2_k;
    } else {
      rtb_rx_g = rtb_Switch2;
    }

    /* End of Switch: '<S290>/Switch' */
  }

  /* End of Switch: '<S290>/Switch2' */

  /* Saturate: '<S286>/Saturation1' */
  if (rtb_rx_g > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_g < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_rx_g;
  }

  /* End of Saturate: '<S286>/Saturation1' */

  /* Sum: '<S286>/Add1' */
  rtb_Integral_i = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S286>/Saturation2' */
  if (rtb_Integral_i > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S286>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Integral_i < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S286>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S286>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Integral_i;
  }

  /* End of Saturate: '<S286>/Saturation2' */

  /* Switch: '<S270>/Switch' incorporates:
   *  Abs: '<S270>/Abs'
   *  Constant: '<S270>/Constant'
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S285>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_rx_g = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S270>/Switch' */

  /* Signum: '<S269>/Sign2' incorporates:
   *  UnitDelay: '<S269>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S269>/Sign1' */
  if (rtIsNaN(rtb_rx_g)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_rx_g < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_rx_g > 0.0);
  }

  /* Product: '<S269>/Product1' incorporates:
   *  Signum: '<S269>/Sign1'
   *  Signum: '<S269>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S269>/Switch' incorporates:
   *  Constant: '<S269>/Constant'
   *  Constant: '<S278>/Constant'
   *  Constant: '<S279>/Constant'
   *  Logic: '<S269>/or'
   *  Product: '<S269>/Product1'
   *  RelationalOperator: '<S278>/Compare'
   *  RelationalOperator: '<S279>/Compare'
   *  UnitDelay: '<S269>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_nr = rtb_rx_g;
  } else {
    rtb_rx_nr = 0.0;
  }

  /* End of Switch: '<S269>/Switch' */

  /* RelationalOperator: '<S280>/Compare' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_nr == 0.0);

  /* RelationalOperator: '<S281>/Compare' incorporates:
   *  Constant: '<S281>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_nr > 0.0);

  /* Abs: '<S269>/Abs' incorporates:
   *  Sum: '<S269>/Subtract'
   *  UnitDelay: '<S269>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_rx_g);

  /* Switch: '<S269>/Switch5' incorporates:
   *  Constant: '<S269>/Constant1'
   *  Switch: '<S269>/Switch1'
   *  UnaryMinus: '<S269>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S269>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S269>/Constant4'
     *  Constant: '<S269>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S269>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S269>/Constant2'
     *  Constant: '<S269>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S269>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S269>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic;
    tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S269>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S269>/Constant10'
     *  Constant: '<S269>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S269>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S269>/Constant7'
     *  Constant: '<S269>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S269>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S269>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic1;

    /* Switch: '<S269>/Switch3' incorporates:
     *  Constant: '<S269>/Constant1'
     *  Constant: '<S269>/Constant3'
     *  UnaryMinus: '<S269>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S269>/Switch3' */
  }

  /* End of Switch: '<S269>/Switch5' */

  /* Product: '<S269>/Product' incorporates:
   *  Switch: '<S269>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_Switch4;

  /* Switch: '<S284>/Init' incorporates:
   *  UnitDelay: '<S284>/FixPt Unit Delay1'
   *  UnitDelay: '<S284>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_rx_g = rtb_rx_nr;
  } else {
    rtb_rx_g = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S284>/Init' */

  /* Sum: '<S282>/Sum1' */
  rtb_Switch2_k = rtb_rx_nr - rtb_rx_g;

  /* Switch: '<S283>/Switch2' incorporates:
   *  RelationalOperator: '<S283>/LowerRelop1'
   */
  if (!(rtb_Switch2_k > rtb_thetay_i)) {
    /* Switch: '<S269>/Switch2' incorporates:
     *  Constant: '<S269>/Constant1'
     *  Constant: '<S269>/Constant3'
     *  Switch: '<S269>/Switch4'
     *  UnaryMinus: '<S269>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S269>/Switch4' incorporates:
       *  Constant: '<S269>/Constant1'
       */
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S269>/Product2' incorporates:
     *  Switch: '<S269>/Switch2'
     */
    rtb_Product2_l = tmp * rtb_Switch4;

    /* Switch: '<S283>/Switch' incorporates:
     *  RelationalOperator: '<S283>/UpperRelop'
     */
    if (rtb_Switch2_k < rtb_Product2_l) {
      rtb_thetay_i = rtb_Product2_l;
    } else {
      rtb_thetay_i = rtb_Switch2_k;
    }

    /* End of Switch: '<S283>/Switch' */
  }

  /* End of Switch: '<S283>/Switch2' */

  /* Sum: '<S282>/Sum' */
  rtb_Switch4 = rtb_thetay_i + rtb_rx_g;

  /* Signum: '<S268>/Sign2' incorporates:
   *  UnitDelay: '<S268>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S268>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S268>/Product1' incorporates:
   *  Signum: '<S268>/Sign1'
   *  Signum: '<S268>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S268>/Switch' incorporates:
   *  Constant: '<S268>/Constant'
   *  Constant: '<S271>/Constant'
   *  Constant: '<S272>/Constant'
   *  Logic: '<S268>/or'
   *  Product: '<S268>/Product1'
   *  RelationalOperator: '<S271>/Compare'
   *  RelationalOperator: '<S272>/Compare'
   *  UnitDelay: '<S268>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_thetay_i = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_thetay_i = 0.0;
  }

  /* End of Switch: '<S268>/Switch' */

  /* RelationalOperator: '<S273>/Compare' incorporates:
   *  Constant: '<S273>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_i == 0.0);

  /* RelationalOperator: '<S274>/Compare' incorporates:
   *  Constant: '<S274>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_thetay_i > 0.0);

  /* Abs: '<S268>/Abs' incorporates:
   *  Sum: '<S268>/Subtract'
   *  UnitDelay: '<S268>/Unit Delay'
   */
  rtb_Switch2_k = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                       Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S268>/Switch5' incorporates:
   *  Constant: '<S268>/Constant1'
   *  Switch: '<S268>/Switch1'
   *  UnaryMinus: '<S268>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S268>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S268>/Constant4'
     *  Constant: '<S268>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S268>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S268>/Constant2'
     *  Constant: '<S268>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S268>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S268>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Akxhatkk1[0],
                         rtb_Switch2_k, &rtb_Minus_n[0], 1U);
    rtb_Switch2_k = rtb_LookupTableDynamic_p;
    tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S268>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S268>/Constant10'
     *  Constant: '<S268>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S268>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S268>/Constant7'
     *  Constant: '<S268>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S268>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S268>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Akxhatkk1[0],
                         rtb_Switch2_k, &rtb_Minus_n[0], 1U);
    rtb_Switch2_k = rtb_LookupTableDynamic1_g;

    /* Switch: '<S268>/Switch3' incorporates:
     *  Constant: '<S268>/Constant1'
     *  Constant: '<S268>/Constant3'
     *  UnaryMinus: '<S268>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S268>/Switch3' */
  }

  /* End of Switch: '<S268>/Switch5' */

  /* Product: '<S268>/Product' incorporates:
   *  Switch: '<S268>/Switch1'
   */
  rtb_rx_g = tmp * rtb_Switch2_k;

  /* Switch: '<S277>/Init' incorporates:
   *  UnitDelay: '<S277>/FixPt Unit Delay1'
   *  UnitDelay: '<S277>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_nr = rtb_thetay_i;
  } else {
    rtb_rx_nr = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S277>/Init' */

  /* Sum: '<S275>/Sum1' */
  rtb_Product2_l = rtb_thetay_i - rtb_rx_nr;

  /* Switch: '<S276>/Switch2' incorporates:
   *  RelationalOperator: '<S276>/LowerRelop1'
   */
  if (!(rtb_Product2_l > rtb_rx_g)) {
    /* Switch: '<S268>/Switch2' incorporates:
     *  Constant: '<S268>/Constant1'
     *  Constant: '<S268>/Constant3'
     *  Switch: '<S268>/Switch4'
     *  UnaryMinus: '<S268>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S268>/Switch4' incorporates:
       *  Constant: '<S268>/Constant1'
       */
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S268>/Product2' incorporates:
     *  Switch: '<S268>/Switch2'
     */
    rtb_Product2_f = tmp * rtb_Switch2_k;

    /* Switch: '<S276>/Switch' incorporates:
     *  RelationalOperator: '<S276>/UpperRelop'
     */
    if (rtb_Product2_l < rtb_Product2_f) {
      rtb_rx_g = rtb_Product2_f;
    } else {
      rtb_rx_g = rtb_Product2_l;
    }

    /* End of Switch: '<S276>/Switch' */
  }

  /* End of Switch: '<S276>/Switch2' */

  /* Sum: '<S275>/Sum' */
  rtb_Switch2_k = rtb_rx_g + rtb_rx_nr;

  /* Switch: '<S258>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S258>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S258>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_k;
  }

  /* End of Switch: '<S258>/Switch' */

  /* Outputs for Atomic SubSystem: '<S171>/Initialize Function' */
  /* Sum: '<S257>/Add' incorporates:
   *  Constant: '<S257>/Constant'
   *  Constant: '<S257>/Constant4'
   *  Constant: '<S257>/Constant5'
   *  Trigonometry: '<S257>/Atan2'
   */
  rtb_Product2_l = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S171>/Initialize Function' */

  /* Fcn: '<S299>/r->x' incorporates:
   *  Fcn: '<S304>/r->x'
   *  Fcn: '<S309>/r->x'
   *  Fcn: '<S314>/r->x'
   */
  rtb_rx_d = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S293>/Add' incorporates:
   *  Fcn: '<S299>/r->x'
   *  Fcn: '<S300>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Product2_l)) + rtb_rx_d;

  /* Fcn: '<S299>/theta->y' incorporates:
   *  Fcn: '<S304>/theta->y'
   *  Fcn: '<S309>/theta->y'
   *  Fcn: '<S314>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S293>/Add' incorporates:
   *  Fcn: '<S299>/theta->y'
   *  Fcn: '<S300>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Product2_l)) + rtb_Add_oh;

  /* Fcn: '<S298>/x->r' */
  rtb_rx_nr = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S301>/Compare' incorporates:
   *  Constant: '<S301>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_nr == 0.0);

  /* Switch: '<S297>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S297>/Switch' incorporates:
     *  Fcn: '<S298>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S297>/Switch' */

  /* Trigonometry: '<S185>/Cos4' incorporates:
   *  Switch: '<S174>/Angle_Switch'
   *  Trigonometry: '<S184>/Cos4'
   */
  rtb_Product2_l = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S163>/Add1' incorporates:
   *  Constant: '<S163>/Constant3'
   *  Constant: '<S163>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S163>/Math Function'
   *  Sum: '<S13>/Add'
   *  Sum: '<S163>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S185>/Sin5' incorporates:
   *  UnaryMinus: '<S183>/Unary Minus'
   */
  rtb_rx_c = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S185>/Sin4' incorporates:
   *  Switch: '<S174>/Angle_Switch'
   *  Trigonometry: '<S184>/Sin4'
   */
  rtb_Product2_f = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S185>/Cos5' incorporates:
   *  UnaryMinus: '<S183>/Unary Minus'
   */
  rtb_rx_g = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S185>/Subtract1' incorporates:
   *  Product: '<S185>/Product2'
   *  Product: '<S185>/Product3'
   *  Trigonometry: '<S185>/Cos4'
   *  Trigonometry: '<S185>/Sin4'
   */
  rtb_Subtract1 = (rtb_Product2_l * rtb_rx_c) + (rtb_Product2_f * rtb_rx_g);

  /* Sum: '<S185>/Subtract' incorporates:
   *  Product: '<S185>/Product'
   *  Product: '<S185>/Product1'
   *  Trigonometry: '<S185>/Cos4'
   *  Trigonometry: '<S185>/Sin4'
   */
  rtb_rx_c = (rtb_Product2_l * rtb_rx_g) - (rtb_Product2_f * rtb_rx_c);

  /* Math: '<S185>/Hypot' */
  rtb_rx_g = rt_hypotd_snf(rtb_rx_c, rtb_Subtract1);

  /* Switch: '<S185>/Switch' incorporates:
   *  Constant: '<S185>/Constant'
   *  Constant: '<S185>/Constant1'
   *  Constant: '<S186>/Constant'
   *  Product: '<S185>/Divide'
   *  Product: '<S185>/Divide1'
   *  RelationalOperator: '<S186>/Compare'
   *  Switch: '<S185>/Switch1'
   */
  if (rtb_rx_g > 1.0E-6) {
    rtb_thetay_i = rtb_Subtract1 / rtb_rx_g;
    rtb_rx_g = rtb_rx_c / rtb_rx_g;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_g = 1.0;
  }

  /* End of Switch: '<S185>/Switch' */

  /* RelationalOperator: '<S182>/Compare' incorporates:
   *  Abs: '<S174>/Abs'
   *  Constant: '<S182>/Constant'
   *  Trigonometry: '<S185>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_g)) >
    1.5707963267948966);

  /* Switch: '<S174>/Angle_Switch' incorporates:
   *  Trigonometry: '<S184>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S184>/Subtract1' incorporates:
     *  Product: '<S184>/Product2'
     *  Product: '<S184>/Product3'
     */
    rtb_rx_c = (rtb_Product2_l * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_f *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S184>/Subtract' incorporates:
     *  Product: '<S184>/Product'
     *  Product: '<S184>/Product1'
     */
    rtb_Product2_f = (rtb_Product2_l * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Product2_f * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S184>/Hypot' */
    rtb_Product2_l = rt_hypotd_snf(rtb_Product2_f, rtb_rx_c);

    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S184>/Constant'
     *  Constant: '<S184>/Constant1'
     *  Constant: '<S187>/Constant'
     *  Product: '<S184>/Divide'
     *  Product: '<S184>/Divide1'
     *  RelationalOperator: '<S187>/Compare'
     *  Switch: '<S184>/Switch'
     */
    if (rtb_Product2_l > 1.0E-6) {
      rtb_Product2_f /= rtb_Product2_l;
      rtb_Product2_l = rtb_rx_c / rtb_Product2_l;
    } else {
      rtb_Product2_f = 1.0;
      rtb_Product2_l = 0.0;
    }

    /* End of Switch: '<S184>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Product2_l, rtb_Product2_f);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S176>/Sum' incorporates:
   *  Sum: '<S175>/Add'
   */
  rtb_FeedForward = rtb_thetay_i - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S189>/Add1' incorporates:
   *  Constant: '<S189>/Constant3'
   *  Constant: '<S189>/Constant4'
   *  Math: '<S189>/Math Function'
   *  Sum: '<S176>/Sum'
   *  Sum: '<S189>/Add2'
   */
  rtb_rx_g = rt_modd_snf(rtb_FeedForward + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S191>/Sum1' incorporates:
   *  Constant: '<S176>/Constant2'
   *  Product: '<S191>/Product'
   *  Sum: '<S191>/Sum'
   *  UnitDelay: '<S191>/Unit Delay1'
   */
  rtb_Product2_l = ((rtb_rx_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S176>/Product' incorporates:
   *  Constant: '<S176>/Constant3'
   */
  rtb_Product2_f = rtb_Product2_l * Steering_Motor_Control_D;

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
  rtb_Integral_i = rtb_Product2_f - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S176>/Saturation' */
  if (rtb_Integral_i > Steering_Motor_Control_D_UL) {
    rtb_Integral_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Steering_Motor_Control_D_LL) {
    rtb_Integral_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S176>/Add' incorporates:
   *  Gain: '<S176>/Gain1'
   *  Saturate: '<S176>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_rx_g) + rtb_Integral_i;

  /* Sum: '<S176>/Subtract' incorporates:
   *  Constant: '<S176>/Constant'
   */
  rtb_rx_c = 1.0 - rtb_Subtract1;

  /* Sum: '<S176>/Sum2' incorporates:
   *  Gain: '<S176>/Gain2'
   *  UnitDelay: '<S176>/Unit Delay'
   */
  rtb_rx_g = (Steering_Motor_Control_I * rtb_rx_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S192>/Switch2' incorporates:
   *  Constant: '<S176>/Constant'
   *  RelationalOperator: '<S192>/LowerRelop1'
   *  Sum: '<S176>/Subtract'
   */
  if (!(rtb_rx_g > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S176>/Subtract1' incorporates:
     *  Constant: '<S176>/Constant1'
     */
    rtb_rx_c = -1.0 - rtb_Subtract1;

    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S176>/Constant1'
     *  RelationalOperator: '<S192>/UpperRelop'
     *  Sum: '<S176>/Subtract1'
     */
    if (!(rtb_rx_g < (-1.0 - rtb_Subtract1))) {
      rtb_rx_c = rtb_rx_g;
    }

    /* End of Switch: '<S192>/Switch' */
  }

  /* End of Switch: '<S192>/Switch2' */

  /* Saturate: '<S176>/Saturation1' */
  if (rtb_rx_c > Steering_Motor_Control_I_UL) {
    rtb_rx_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_c < Steering_Motor_Control_I_LL) {
    rtb_rx_c = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S176>/Saturation1' */

  /* Sum: '<S176>/Add1' */
  rtb_Integral_i = rtb_Subtract1 + rtb_rx_c;

  /* Saturate: '<S176>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S176>/Saturation2' */

  /* Switch: '<S297>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S297>/Switch1' incorporates:
     *  Constant: '<S297>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S297>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_rx_nr;
  }

  /* End of Switch: '<S297>/Switch1' */

  /* Sum: '<S294>/Add' incorporates:
   *  Fcn: '<S305>/r->x'
   *  Fcn: '<S305>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_rx_d;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S303>/x->r' */
  rtb_rx_g = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S306>/Compare' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_g == 0.0);

  /* Switch: '<S302>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S302>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S302>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_rx_g;
  }

  /* End of Switch: '<S302>/Switch1' */

  /* Sum: '<S295>/Add' incorporates:
   *  Fcn: '<S310>/r->x'
   *  Fcn: '<S310>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_rx_d;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S308>/x->r' */
  rtb_thetay_l = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S311>/Compare' incorporates:
   *  Constant: '<S311>/Constant'
   */
  rtb_FixPtRelationalOperator = (rtb_thetay_l == 0.0);

  /* Switch: '<S307>/Switch1' */
  if (rtb_FixPtRelationalOperator) {
    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S307>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S307>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_thetay_l;
  }

  /* End of Switch: '<S307>/Switch1' */

  /* Sum: '<S296>/Add' incorporates:
   *  Fcn: '<S315>/r->x'
   *  Fcn: '<S315>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_rx_d;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S313>/x->r' */
  rtb_rx_d = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S316>/Compare' incorporates:
   *  Constant: '<S316>/Constant'
   */
  rtb_FixPtRelationalOperator_ea = (rtb_rx_d == 0.0);

  /* Switch: '<S312>/Switch1' */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S312>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S312>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_rx_d;
  }

  /* End of Switch: '<S312>/Switch1' */

  /* Product: '<S292>/Divide' incorporates:
   *  Abs: '<S292>/Abs'
   *  Abs: '<S292>/Abs1'
   *  Abs: '<S292>/Abs2'
   *  Abs: '<S292>/Abs3'
   *  Constant: '<S292>/Constant'
   *  MinMax: '<S292>/Max'
   */
  rtb_rx_nr = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S292>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S174>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S174>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S177>/Product2' incorporates:
   *  Constant: '<S177>/Constant'
   *  Switch: '<S174>/Speed_Switch'
   */
  rtb_rx_d = tmp * 1150.4247703785388;

  /* Signum: '<S172>/Sign' */
  if (rtIsNaN(rtb_rx_d)) {
    tmp = (rtNaN);
  } else if (rtb_rx_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_d > 0.0);
  }

  /* Signum: '<S172>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S167>/Product' incorporates:
   *  Abs: '<S172>/Abs'
   *  Abs: '<S175>/Abs'
   *  Constant: '<S178>/Constant'
   *  Constant: '<S188>/Constant3'
   *  Constant: '<S188>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S172>/OR'
   *  Lookup_n-D: '<S175>/1-D Lookup Table'
   *  Math: '<S188>/Math Function'
   *  RelationalOperator: '<S172>/Equal1'
   *  RelationalOperator: '<S178>/Compare'
   *  Signum: '<S172>/Sign'
   *  Signum: '<S172>/Sign1'
   *  Sum: '<S188>/Add1'
   *  Sum: '<S188>/Add2'
   */
  rtb_rx_d = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_d) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_FeedForward + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
    Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S173>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_rx_d;

  /* Sum: '<S173>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_rx_d -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S180>/Sum1' incorporates:
   *  Constant: '<S173>/Constant2'
   *  Product: '<S180>/Product'
   *  Sum: '<S180>/Sum'
   *  UnitDelay: '<S180>/Unit Delay1'
   */
  rtb_rx_g = ((rtb_rx_d - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S173>/Product' incorporates:
   *  Constant: '<S173>/Constant3'
   */
  rtb_Subtract1 = rtb_rx_g * Drive_Motor_Control_D;

  /* Sum: '<S179>/Diff' incorporates:
   *  UnitDelay: '<S179>/UD'
   *
   * Block description for '<S179>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S179>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S173>/Saturation' */
  if (rtb_Integral_i > Drive_Motor_Control_D_UL) {
    rtb_Integral_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Drive_Motor_Control_D_LL) {
    rtb_Integral_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S173>/Add' incorporates:
   *  Gain: '<S173>/Gain1'
   *  Saturate: '<S173>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_rx_d) + rtb_FeedForward) +
    rtb_Integral_i;

  /* Sum: '<S173>/Subtract' incorporates:
   *  Constant: '<S173>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_Add_oh;

  /* Sum: '<S173>/Sum2' incorporates:
   *  Gain: '<S173>/Gain2'
   *  UnitDelay: '<S173>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_rx_d) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S181>/Switch2' incorporates:
   *  Constant: '<S173>/Constant'
   *  RelationalOperator: '<S181>/LowerRelop1'
   *  Sum: '<S173>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S181>/Switch' incorporates:
     *  Constant: '<S173>/Constant1'
     *  RelationalOperator: '<S181>/UpperRelop'
     *  Sum: '<S173>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_thetay_l = -1.0 - rtb_Add_oh;
    } else {
      rtb_thetay_l = rtb_FeedForward;
    }

    /* End of Switch: '<S181>/Switch' */
  }

  /* End of Switch: '<S181>/Switch2' */

  /* Saturate: '<S173>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_thetay_l;
  }

  /* End of Saturate: '<S173>/Saturation1' */

  /* Sum: '<S173>/Add1' */
  rtb_Integral_i = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S173>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S173>/Saturation2' */

  /* Switch: '<S302>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S302>/Switch' incorporates:
     *  Fcn: '<S303>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S302>/Switch' */

  /* Trigonometry: '<S206>/Cos4' incorporates:
   *  Switch: '<S195>/Angle_Switch'
   *  Trigonometry: '<S205>/Cos4'
   */
  rtb_Sum1_h = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S164>/Add1' incorporates:
   *  Constant: '<S164>/Constant3'
   *  Constant: '<S164>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S164>/Math Function'
   *  Sum: '<S13>/Add1'
   *  Sum: '<S164>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S206>/Sin5' incorporates:
   *  UnaryMinus: '<S204>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S206>/Sin4' incorporates:
   *  Switch: '<S195>/Angle_Switch'
   *  Trigonometry: '<S205>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S206>/Cos5' incorporates:
   *  UnaryMinus: '<S204>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S206>/Subtract1' incorporates:
   *  Product: '<S206>/Product2'
   *  Product: '<S206>/Product3'
   *  Trigonometry: '<S206>/Cos4'
   *  Trigonometry: '<S206>/Sin4'
   */
  rtb_Add_oh = (rtb_Sum1_h * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S206>/Subtract' incorporates:
   *  Product: '<S206>/Product'
   *  Product: '<S206>/Product1'
   *  Trigonometry: '<S206>/Cos4'
   *  Trigonometry: '<S206>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Sum1_h * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S206>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S206>/Switch' incorporates:
   *  Constant: '<S206>/Constant'
   *  Constant: '<S206>/Constant1'
   *  Constant: '<S207>/Constant'
   *  Product: '<S206>/Divide'
   *  Product: '<S206>/Divide1'
   *  RelationalOperator: '<S207>/Compare'
   *  Switch: '<S206>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_rx_d = rtb_Add_oh / rtb_Hypot_bl;
    rtb_thetay_l = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S206>/Switch' */

  /* RelationalOperator: '<S203>/Compare' incorporates:
   *  Abs: '<S195>/Abs'
   *  Constant: '<S203>/Constant'
   *  Trigonometry: '<S206>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S195>/Angle_Switch' incorporates:
   *  Trigonometry: '<S205>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S205>/Subtract1' incorporates:
     *  Product: '<S205>/Product2'
     *  Product: '<S205>/Product3'
     */
    rtb_Add_oh = (rtb_Sum1_h * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Product_d *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S205>/Subtract' incorporates:
     *  Product: '<S205>/Product'
     *  Product: '<S205>/Product1'
     */
    rtb_Hypot_bl = (rtb_Sum1_h * Code_Gen_Model_ConstB.Cos5_g) - (rtb_Product_d *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S205>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S205>/Constant'
     *  Constant: '<S205>/Constant1'
     *  Constant: '<S208>/Constant'
     *  Product: '<S205>/Divide'
     *  Product: '<S205>/Divide1'
     *  RelationalOperator: '<S208>/Compare'
     *  Switch: '<S205>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S205>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_rx_d = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S197>/Sum' incorporates:
   *  Sum: '<S196>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S210>/Add1' incorporates:
   *  Constant: '<S210>/Constant3'
   *  Constant: '<S210>/Constant4'
   *  Math: '<S210>/Math Function'
   *  Sum: '<S197>/Sum'
   *  Sum: '<S210>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S212>/Sum1' incorporates:
   *  Constant: '<S197>/Constant2'
   *  Product: '<S212>/Product'
   *  Sum: '<S212>/Sum'
   *  UnitDelay: '<S212>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S197>/Product' incorporates:
   *  Constant: '<S197>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S211>/Diff' incorporates:
   *  UnitDelay: '<S211>/UD'
   *
   * Block description for '<S211>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S211>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S197>/Saturation' */
  if (rtb_Integral_i > Steering_Motor_Control_D_UL) {
    rtb_Integral_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Steering_Motor_Control_D_LL) {
    rtb_Integral_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S197>/Add' incorporates:
   *  Gain: '<S197>/Gain1'
   *  Saturate: '<S197>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Integral_i;

  /* Sum: '<S197>/Subtract' incorporates:
   *  Constant: '<S197>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_i;

  /* Sum: '<S197>/Sum2' incorporates:
   *  Gain: '<S197>/Gain2'
   *  UnitDelay: '<S197>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S213>/Switch2' incorporates:
   *  Constant: '<S197>/Constant'
   *  RelationalOperator: '<S213>/LowerRelop1'
   *  Sum: '<S197>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S213>/Switch' incorporates:
     *  Constant: '<S197>/Constant1'
     *  RelationalOperator: '<S213>/UpperRelop'
     *  Sum: '<S197>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_thetay_i = -1.0 - rtb_Add_i;
    } else {
      rtb_thetay_i = rtb_Hypot_bl;
    }

    /* End of Switch: '<S213>/Switch' */
  }

  /* End of Switch: '<S213>/Switch2' */

  /* Saturate: '<S197>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_i;
  }

  /* End of Saturate: '<S197>/Saturation1' */

  /* Sum: '<S197>/Add1' */
  rtb_Integral_i = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S197>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S197>/Saturation2' */

  /* Product: '<S292>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S195>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S195>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S198>/Product2' incorporates:
   *  Constant: '<S198>/Constant'
   *  Switch: '<S195>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S193>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S193>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S168>/Product' incorporates:
   *  Abs: '<S193>/Abs'
   *  Abs: '<S196>/Abs'
   *  Constant: '<S199>/Constant'
   *  Constant: '<S209>/Constant3'
   *  Constant: '<S209>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S193>/OR'
   *  Lookup_n-D: '<S196>/1-D Lookup Table'
   *  Math: '<S209>/Math Function'
   *  RelationalOperator: '<S193>/Equal1'
   *  RelationalOperator: '<S199>/Compare'
   *  Signum: '<S193>/Sign'
   *  Signum: '<S193>/Sign1'
   *  Sum: '<S209>/Add1'
   *  Sum: '<S209>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S194>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S194>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S201>/Sum1' incorporates:
   *  Constant: '<S194>/Constant2'
   *  Product: '<S201>/Product'
   *  Sum: '<S201>/Sum'
   *  UnitDelay: '<S201>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S194>/Product' incorporates:
   *  Constant: '<S194>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S200>/Diff' incorporates:
   *  UnitDelay: '<S200>/UD'
   *
   * Block description for '<S200>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S200>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S194>/Saturation' */
  if (rtb_Integral_i > Drive_Motor_Control_D_UL) {
    rtb_Integral_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Drive_Motor_Control_D_LL) {
    rtb_Integral_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S194>/Add' incorporates:
   *  Gain: '<S194>/Gain1'
   *  Saturate: '<S194>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_n) +
    rtb_Integral_i;

  /* Sum: '<S194>/Subtract' incorporates:
   *  Constant: '<S194>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_o2;

  /* Sum: '<S194>/Sum2' incorporates:
   *  Gain: '<S194>/Gain2'
   *  UnitDelay: '<S194>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S202>/Switch2' incorporates:
   *  Constant: '<S194>/Constant'
   *  RelationalOperator: '<S202>/LowerRelop1'
   *  Sum: '<S194>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S202>/Switch' incorporates:
     *  Constant: '<S194>/Constant1'
     *  RelationalOperator: '<S202>/UpperRelop'
     *  Sum: '<S194>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_rx_d = -1.0 - rtb_Add_o2;
    } else {
      rtb_rx_d = rtb_FeedForward_n;
    }

    /* End of Switch: '<S202>/Switch' */
  }

  /* End of Switch: '<S202>/Switch2' */

  /* Saturate: '<S194>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_rx_d;
  }

  /* End of Saturate: '<S194>/Saturation1' */

  /* Sum: '<S194>/Add1' */
  rtb_Integral_i = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S194>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S194>/Saturation2' */

  /* Switch: '<S307>/Switch' */
  if (!rtb_FixPtRelationalOperator) {
    /* Switch: '<S307>/Switch' incorporates:
     *  Fcn: '<S308>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S307>/Switch' */

  /* Trigonometry: '<S227>/Cos4' incorporates:
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Cos4'
   */
  rtb_Sum1_h = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S165>/Add1' incorporates:
   *  Constant: '<S165>/Constant3'
   *  Constant: '<S165>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S165>/Math Function'
   *  Sum: '<S13>/Add2'
   *  Sum: '<S165>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S227>/Sin5' incorporates:
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S227>/Sin4' incorporates:
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S227>/Cos5' incorporates:
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S227>/Subtract1' incorporates:
   *  Product: '<S227>/Product2'
   *  Product: '<S227>/Product3'
   *  Trigonometry: '<S227>/Cos4'
   *  Trigonometry: '<S227>/Sin4'
   */
  rtb_Add_o2 = (rtb_Sum1_h * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S227>/Subtract' incorporates:
   *  Product: '<S227>/Product'
   *  Product: '<S227>/Product1'
   *  Trigonometry: '<S227>/Cos4'
   *  Trigonometry: '<S227>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Sum1_h * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S227>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S227>/Switch' incorporates:
   *  Constant: '<S227>/Constant'
   *  Constant: '<S227>/Constant1'
   *  Constant: '<S228>/Constant'
   *  Product: '<S227>/Divide'
   *  Product: '<S227>/Divide1'
   *  RelationalOperator: '<S228>/Compare'
   *  Switch: '<S227>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_rx_d = rtb_Add_o2 / rtb_Hypot_d;
    rtb_thetay_l = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S227>/Switch' */

  /* RelationalOperator: '<S224>/Compare' incorporates:
   *  Abs: '<S216>/Abs'
   *  Constant: '<S224>/Constant'
   *  Trigonometry: '<S227>/Atan1'
   */
  rtb_FixPtRelationalOperator = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S216>/Angle_Switch' incorporates:
   *  Trigonometry: '<S226>/Atan1'
   */
  if (rtb_FixPtRelationalOperator) {
    /* Sum: '<S226>/Subtract1' incorporates:
     *  Product: '<S226>/Product2'
     *  Product: '<S226>/Product3'
     */
    rtb_Add_o2 = (rtb_Sum1_h * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Product_d *
      Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S226>/Subtract' incorporates:
     *  Product: '<S226>/Product'
     *  Product: '<S226>/Product1'
     */
    rtb_Hypot_d = (rtb_Sum1_h * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Product_d *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S226>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S226>/Constant'
     *  Constant: '<S226>/Constant1'
     *  Constant: '<S229>/Constant'
     *  Product: '<S226>/Divide'
     *  Product: '<S226>/Divide1'
     *  RelationalOperator: '<S229>/Compare'
     *  Switch: '<S226>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S226>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S218>/Sum' incorporates:
   *  Sum: '<S217>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S231>/Add1' incorporates:
   *  Constant: '<S231>/Constant3'
   *  Constant: '<S231>/Constant4'
   *  Math: '<S231>/Math Function'
   *  Sum: '<S218>/Sum'
   *  Sum: '<S231>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S233>/Sum1' incorporates:
   *  Constant: '<S218>/Constant2'
   *  Product: '<S233>/Product'
   *  Sum: '<S233>/Sum'
   *  UnitDelay: '<S233>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S218>/Product' incorporates:
   *  Constant: '<S218>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S232>/Diff' incorporates:
   *  UnitDelay: '<S232>/UD'
   *
   * Block description for '<S232>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S232>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S218>/Saturation' */
  if (rtb_Integral_i > Steering_Motor_Control_D_UL) {
    rtb_Integral_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Steering_Motor_Control_D_LL) {
    rtb_Integral_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S218>/Add' incorporates:
   *  Gain: '<S218>/Gain1'
   *  Saturate: '<S218>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Integral_i;

  /* Sum: '<S218>/Subtract' incorporates:
   *  Constant: '<S218>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_gj;

  /* Sum: '<S218>/Sum2' incorporates:
   *  Gain: '<S218>/Gain2'
   *  UnitDelay: '<S218>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S234>/Switch2' incorporates:
   *  Constant: '<S218>/Constant'
   *  RelationalOperator: '<S234>/LowerRelop1'
   *  Sum: '<S218>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S234>/Switch' incorporates:
     *  Constant: '<S218>/Constant1'
     *  RelationalOperator: '<S234>/UpperRelop'
     *  Sum: '<S218>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_thetay_i = -1.0 - rtb_Add_gj;
    } else {
      rtb_thetay_i = rtb_Hypot_d;
    }

    /* End of Switch: '<S234>/Switch' */
  }

  /* End of Switch: '<S234>/Switch2' */

  /* Saturate: '<S218>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_thetay_i;
  }

  /* End of Saturate: '<S218>/Saturation1' */

  /* Sum: '<S218>/Add1' */
  rtb_Integral_i = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S218>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S218>/Saturation2' */

  /* Product: '<S292>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S216>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S216>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator) {
    tmp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S219>/Product2' incorporates:
   *  Constant: '<S219>/Constant'
   *  Switch: '<S216>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S214>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S214>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S169>/Product' incorporates:
   *  Abs: '<S214>/Abs'
   *  Abs: '<S217>/Abs'
   *  Constant: '<S220>/Constant'
   *  Constant: '<S230>/Constant3'
   *  Constant: '<S230>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S214>/OR'
   *  Lookup_n-D: '<S217>/1-D Lookup Table'
   *  Math: '<S230>/Math Function'
   *  RelationalOperator: '<S214>/Equal1'
   *  RelationalOperator: '<S220>/Compare'
   *  Signum: '<S214>/Sign'
   *  Signum: '<S214>/Sign1'
   *  Sum: '<S230>/Add1'
   *  Sum: '<S230>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S215>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S215>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S222>/Sum1' incorporates:
   *  Constant: '<S215>/Constant2'
   *  Product: '<S222>/Product'
   *  Sum: '<S222>/Sum'
   *  UnitDelay: '<S222>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S215>/Product' incorporates:
   *  Constant: '<S215>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S221>/Diff' incorporates:
   *  UnitDelay: '<S221>/UD'
   *
   * Block description for '<S221>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S221>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S215>/Saturation' */
  if (rtb_Integral_i > Drive_Motor_Control_D_UL) {
    rtb_Integral_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Drive_Motor_Control_D_LL) {
    rtb_Integral_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S215>/Add' incorporates:
   *  Gain: '<S215>/Gain1'
   *  Saturate: '<S215>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_a) +
    rtb_Integral_i;

  /* Sum: '<S215>/Subtract' incorporates:
   *  Constant: '<S215>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_thetay_i;

  /* Sum: '<S215>/Sum2' incorporates:
   *  Gain: '<S215>/Gain2'
   *  UnitDelay: '<S215>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S223>/Switch2' incorporates:
   *  Constant: '<S215>/Constant'
   *  RelationalOperator: '<S223>/LowerRelop1'
   *  Sum: '<S215>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S215>/Subtract1' incorporates:
     *  Constant: '<S215>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_thetay_i;

    /* Switch: '<S223>/Switch' incorporates:
     *  Constant: '<S215>/Constant1'
     *  RelationalOperator: '<S223>/UpperRelop'
     *  Sum: '<S215>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_thetay_i))) {
      rtb_rx_d = rtb_FeedForward_a;
    }

    /* End of Switch: '<S223>/Switch' */
  }

  /* End of Switch: '<S223>/Switch2' */

  /* Saturate: '<S215>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_rx_d;
  }

  /* End of Saturate: '<S215>/Saturation1' */

  /* Sum: '<S215>/Add1' */
  rtb_Integral_i = rtb_thetay_i + rtb_FeedForward_a;

  /* Saturate: '<S215>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S215>/Saturation2' */

  /* Switch: '<S312>/Switch' */
  if (!rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S312>/Switch' incorporates:
     *  Fcn: '<S313>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S312>/Switch' */

  /* Trigonometry: '<S248>/Cos4' incorporates:
   *  Switch: '<S237>/Angle_Switch'
   *  Trigonometry: '<S247>/Cos4'
   */
  rtb_Sum1_h = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S166>/Add1' incorporates:
   *  Constant: '<S166>/Constant3'
   *  Constant: '<S166>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S166>/Math Function'
   *  Sum: '<S13>/Add3'
   *  Sum: '<S166>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S248>/Sin5' incorporates:
   *  UnaryMinus: '<S246>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S248>/Sin4' incorporates:
   *  Switch: '<S237>/Angle_Switch'
   *  Trigonometry: '<S247>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S248>/Cos5' incorporates:
   *  UnaryMinus: '<S246>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S248>/Subtract1' incorporates:
   *  Product: '<S248>/Product2'
   *  Product: '<S248>/Product3'
   *  Trigonometry: '<S248>/Cos4'
   *  Trigonometry: '<S248>/Sin4'
   */
  rtb_rx_d = (rtb_Sum1_h * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S248>/Subtract' incorporates:
   *  Product: '<S248>/Product'
   *  Product: '<S248>/Product1'
   *  Trigonometry: '<S248>/Cos4'
   *  Trigonometry: '<S248>/Sin4'
   */
  rtb_thetay_i = (rtb_Sum1_h * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S248>/Hypot' */
  rtb_thetay_l = rt_hypotd_snf(rtb_thetay_i, rtb_rx_d);

  /* Switch: '<S248>/Switch' incorporates:
   *  Constant: '<S248>/Constant'
   *  Constant: '<S248>/Constant1'
   *  Constant: '<S249>/Constant'
   *  Product: '<S248>/Divide'
   *  Product: '<S248>/Divide1'
   *  RelationalOperator: '<S249>/Compare'
   *  Switch: '<S248>/Switch1'
   */
  if (rtb_thetay_l > 1.0E-6) {
    rtb_rx_d /= rtb_thetay_l;
    rtb_thetay_l = rtb_thetay_i / rtb_thetay_l;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S248>/Switch' */

  /* RelationalOperator: '<S245>/Compare' incorporates:
   *  Abs: '<S237>/Abs'
   *  Constant: '<S245>/Constant'
   *  Trigonometry: '<S248>/Atan1'
   */
  rtb_FixPtRelationalOperator_ea = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S237>/Angle_Switch' incorporates:
   *  Trigonometry: '<S247>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Sum: '<S247>/Subtract1' incorporates:
     *  Product: '<S247>/Product2'
     *  Product: '<S247>/Product3'
     */
    rtb_thetay_i = (rtb_Sum1_h * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Product_d *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S247>/Subtract' incorporates:
     *  Product: '<S247>/Product'
     *  Product: '<S247>/Product1'
     */
    rtb_thetay_l = (rtb_Sum1_h * Code_Gen_Model_ConstB.Cos5_b) - (rtb_Product_d *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S247>/Hypot' */
    rtb_rx_d = rt_hypotd_snf(rtb_thetay_l, rtb_thetay_i);

    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S247>/Constant'
     *  Constant: '<S247>/Constant1'
     *  Constant: '<S250>/Constant'
     *  Product: '<S247>/Divide'
     *  Product: '<S247>/Divide1'
     *  RelationalOperator: '<S250>/Compare'
     *  Switch: '<S247>/Switch'
     */
    if (rtb_rx_d > 1.0E-6) {
      rtb_thetay_l /= rtb_rx_d;
      rtb_thetay_i /= rtb_rx_d;
    } else {
      rtb_thetay_l = 1.0;
      rtb_thetay_i = 0.0;
    }

    /* End of Switch: '<S247>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_thetay_i, rtb_thetay_l);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S239>/Sum' incorporates:
   *  Sum: '<S238>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S252>/Add1' incorporates:
   *  Constant: '<S252>/Constant3'
   *  Constant: '<S252>/Constant4'
   *  Math: '<S252>/Math Function'
   *  Sum: '<S239>/Sum'
   *  Sum: '<S252>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S254>/Sum1' incorporates:
   *  Constant: '<S239>/Constant2'
   *  Product: '<S254>/Product'
   *  Sum: '<S254>/Sum'
   *  UnitDelay: '<S254>/Unit Delay1'
   */
  rtb_Sum1_h = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S239>/Product' incorporates:
   *  Constant: '<S239>/Constant3'
   */
  rtb_Product_d = rtb_Sum1_h * Steering_Motor_Control_D;

  /* Sum: '<S253>/Diff' incorporates:
   *  UnitDelay: '<S253>/UD'
   *
   * Block description for '<S253>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S253>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S239>/Saturation' */
  if (rtb_Integral_i > Steering_Motor_Control_D_UL) {
    rtb_Integral_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Steering_Motor_Control_D_LL) {
    rtb_Integral_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S239>/Add' incorporates:
   *  Gain: '<S239>/Gain1'
   *  Saturate: '<S239>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Integral_i;

  /* Sum: '<S239>/Subtract' incorporates:
   *  Constant: '<S239>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_du;

  /* Sum: '<S239>/Sum2' incorporates:
   *  Gain: '<S239>/Gain2'
   *  UnitDelay: '<S239>/Unit Delay'
   */
  rtb_thetay_l = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S255>/Switch2' incorporates:
   *  Constant: '<S239>/Constant'
   *  RelationalOperator: '<S255>/LowerRelop1'
   *  Sum: '<S239>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_Add_du))) {
    /* Sum: '<S239>/Subtract1' incorporates:
     *  Constant: '<S239>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_du;

    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S239>/Constant1'
     *  RelationalOperator: '<S255>/UpperRelop'
     *  Sum: '<S239>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_Add_du))) {
      rtb_thetay_i = rtb_thetay_l;
    }

    /* End of Switch: '<S255>/Switch' */
  }

  /* End of Switch: '<S255>/Switch2' */

  /* Saturate: '<S239>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Add2_k_idx_0 = rtb_thetay_i;
  }

  /* End of Saturate: '<S239>/Saturation1' */

  /* Sum: '<S239>/Add1' */
  rtb_Integral_i = rtb_Add_du + rtb_Add2_k_idx_0;

  /* Saturate: '<S239>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S239>/Saturation2' */

  /* Product: '<S292>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S237>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S237>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    tmp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S240>/Product2' incorporates:
   *  Constant: '<S240>/Constant'
   *  Switch: '<S237>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S235>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S235>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S170>/Product' incorporates:
   *  Abs: '<S235>/Abs'
   *  Abs: '<S238>/Abs'
   *  Constant: '<S241>/Constant'
   *  Constant: '<S251>/Constant3'
   *  Constant: '<S251>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S235>/OR'
   *  Lookup_n-D: '<S238>/1-D Lookup Table'
   *  Math: '<S251>/Math Function'
   *  RelationalOperator: '<S235>/Equal1'
   *  RelationalOperator: '<S241>/Compare'
   *  Signum: '<S235>/Sign'
   *  Signum: '<S235>/Sign1'
   *  Sum: '<S251>/Add1'
   *  Sum: '<S251>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S236>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S236>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S243>/Sum1' incorporates:
   *  Constant: '<S236>/Constant2'
   *  Product: '<S243>/Product'
   *  Sum: '<S243>/Sum'
   *  UnitDelay: '<S243>/Unit Delay1'
   */
  rtb_rx_nr = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S236>/Product' incorporates:
   *  Constant: '<S236>/Constant3'
   */
  rtb_Add_du = rtb_rx_nr * Drive_Motor_Control_D;

  /* Sum: '<S242>/Diff' incorporates:
   *  UnitDelay: '<S242>/UD'
   *
   * Block description for '<S242>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S242>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Integral_i = rtb_Add_du - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S236>/Saturation' */
  if (rtb_Integral_i > Drive_Motor_Control_D_UL) {
    rtb_Integral_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Integral_i < Drive_Motor_Control_D_LL) {
    rtb_Integral_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Gain: '<S236>/Gain1'
   *  Saturate: '<S236>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_thetay_i) +
    rtb_Integral_i;

  /* Sum: '<S236>/Subtract' incorporates:
   *  Constant: '<S236>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_thetay_i;

  /* Sum: '<S236>/Sum2' incorporates:
   *  Gain: '<S236>/Gain2'
   *  UnitDelay: '<S236>/Unit Delay'
   */
  rtb_thetay_l = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S244>/Switch2' incorporates:
   *  Constant: '<S236>/Constant'
   *  RelationalOperator: '<S244>/LowerRelop1'
   *  Sum: '<S236>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S236>/Subtract1' incorporates:
     *  Constant: '<S236>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_thetay_i;

    /* Switch: '<S244>/Switch' incorporates:
     *  Constant: '<S236>/Constant1'
     *  RelationalOperator: '<S244>/UpperRelop'
     *  Sum: '<S236>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_thetay_i))) {
      rtb_rx_d = rtb_thetay_l;
    }

    /* End of Switch: '<S244>/Switch' */
  }

  /* End of Switch: '<S244>/Switch2' */

  /* Saturate: '<S236>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_rx_d = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_rx_d = Drive_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S236>/Saturation1' */

  /* Sum: '<S236>/Add1' */
  rtb_Integral_i = rtb_thetay_i + rtb_rx_d;

  /* Saturate: '<S236>/Saturation2' */
  if (rtb_Integral_i > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Integral_i < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Integral_i;
  }

  /* End of Saturate: '<S236>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_thetay;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_rx;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_thetay_n;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* Logic: '<S4>/OR' incorporates:
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   *  Switch: '<S4>/Switch1'
   */
  rtb_FixPtRelationalOperator = !(Code_Gen_Model_U.Elevator_Limit_Switch_Top !=
    0.0);

  /* Switch: '<S4>/Switch1' */
  rtb_thetay_n = rtb_FixPtRelationalOperator;

  /* Sum: '<S18>/Sum' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Gain: '<S14>/Gain'
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  rtb_rx = 1.0 - (Elevator_MotorRev_to_Inch *
                  Code_Gen_Model_U.Elevator_Motor_Rev);

  /* Gain: '<S18>/Gain1' */
  rtb_thetay = Elevator_Gain_Prop * rtb_rx;

  /* Logic: '<S4>/NOT' incorporates:
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   *  Logic: '<S4>/OR'
   */
  rtb_Is_Absolute_Translation_g = (rtb_FixPtRelationalOperator &&
    (!(Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0)));

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant2'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S18>/Constant3'
     *  UnitDelay: '<S20>/Delay Input1'
     *
     * Block description for '<S20>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_np) {
      rtb_Integral_i = Elevator_Int_IC;
    } else {
      /* Sum: '<S18>/Sum2' incorporates:
       *  Gain: '<S18>/Gain2'
       *  UnitDelay: '<S18>/Unit Delay'
       */
      rtb_rx = (Elevator_Gain_Int * rtb_rx) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_oo;

      /* Sum: '<S18>/Subtract' incorporates:
       *  Constant: '<S18>/Constant'
       */
      rtb_thetay_i = Elevator_Total_UL - rtb_thetay;

      /* Switch: '<S21>/Switch2' incorporates:
       *  RelationalOperator: '<S21>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_thetay_i)) {
        /* Sum: '<S18>/Subtract1' incorporates:
         *  Constant: '<S18>/Constant1'
         */
        rtb_thetay_i = Elevator_Total_LL - rtb_thetay;

        /* Switch: '<S21>/Switch' incorporates:
         *  RelationalOperator: '<S21>/UpperRelop'
         */
        if (!(rtb_rx < rtb_thetay_i)) {
          rtb_thetay_i = rtb_rx;
        }

        /* End of Switch: '<S21>/Switch' */
      }

      /* End of Switch: '<S21>/Switch2' */

      /* Saturate: '<S18>/Saturation1' */
      if (rtb_thetay_i > Elevator_Int_UL) {
        rtb_Integral_i = Elevator_Int_UL;
      } else if (rtb_thetay_i < Elevator_Int_LL) {
        rtb_Integral_i = Elevator_Int_LL;
      } else {
        rtb_Integral_i = rtb_thetay_i;
      }

      /* End of Saturate: '<S18>/Saturation1' */
    }

    /* End of Switch: '<S18>/Switch1' */
  } else {
    rtb_Integral_i = 0.0;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Sum: '<S18>/Add1' */
  rtb_thetay += rtb_Integral_i;

  /* Saturate: '<S18>/Saturation2' */
  if (rtb_thetay > Elevator_Total_UL) {
    rtb_thetay = Elevator_Total_UL;
  } else if (rtb_thetay < Elevator_Total_LL) {
    rtb_thetay = Elevator_Total_LL;
  }

  /* End of Saturate: '<S18>/Saturation2' */

  /* Switch: '<S19>/Switch2' incorporates:
   *  RelationalOperator: '<S19>/LowerRelop1'
   */
  if (!(rtb_thetay > ((real_T)rtb_FixPtRelationalOperator))) {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Constant: '<S4>/Constant4'
     *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
     */
    if (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0) {
      rtb_thetay_n = 0.0;
    } else {
      rtb_thetay_n = -1.0;
    }

    /* End of Switch: '<S4>/Switch' */

    /* Switch: '<S19>/Switch' incorporates:
     *  RelationalOperator: '<S19>/UpperRelop'
     */
    if (!(rtb_thetay < rtb_thetay_n)) {
      rtb_thetay_n = rtb_thetay;
    }

    /* End of Switch: '<S19>/Switch' */
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay_n;

  /* SignalConversion: '<S6>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S10>/Trigonometric Function1' */
  rtb_rx = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S10>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S10>/Trigonometric Function'
   */
  rtb_Add2_k_idx_1 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Rotationmatrixfromlocalto_1 = rtb_rx;

  /* SignalConversion generated from: '<S10>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S10>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_0 = -rtb_rx;

  /* Sum: '<S90>/Diff' incorporates:
   *  UnitDelay: '<S90>/UD'
   *
   * Block description for '<S90>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S90>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S10>/Subtract2' incorporates:
   *  Constant: '<S10>/Constant3'
   *  Gain: '<S10>/Gain7'
   *  Math: '<S10>/Square'
   */
  rtb_rx = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S10>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S10>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_n;

  /* SignalConversion generated from: '<S10>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S10>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_thetay_n;

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S91>/Diff'
   *  UnitDelay: '<S91>/UD'
   *
   * Block description for '<S91>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S91>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S92>/Diff'
   *  UnitDelay: '<S92>/UD'
   *
   * Block description for '<S92>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S10>/Product2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S93>/Diff'
   *  UnitDelay: '<S93>/UD'
   *
   * Block description for '<S93>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S10>/Product3' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S94>/Diff'
   *  UnitDelay: '<S94>/UD'
   *
   * Block description for '<S94>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S10>/Product7' incorporates:
   *  Fcn: '<S95>/r->x'
   *  Fcn: '<S95>/theta->y'
   *  Fcn: '<S96>/r->x'
   *  Fcn: '<S96>/theta->y'
   *  Fcn: '<S97>/r->x'
   *  Fcn: '<S97>/theta->y'
   *  Fcn: '<S98>/r->x'
   *  Fcn: '<S98>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_l * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_l * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_thetay_i * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_thetay_i * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S10>/Product7' incorporates:
   *  Constant: '<S10>/Constant4'
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

  /* End of Product: '<S10>/Product7' */

  /* Product: '<S10>/Product6' incorporates:
   *  Concatenate: '<S10>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S10>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_1 *
    rtb_Akxhatkk1[1]);
  rtb_thetay_n = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) + (rtb_rx *
    rtb_Akxhatkk1[1]);

  /* Product: '<S10>/Product6' incorporates:
   *  Concatenate: '<S10>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_1 * rtb_thetay) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_thetay_n);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 * rtb_thetay)
    + (rtb_Add2_k_idx_1 * rtb_thetay_n);

  /* Outputs for Enabled SubSystem: '<S56>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S87>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S87>/D[k]*u[k]' incorporates:
     *  Constant: '<S36>/D'
     */
    rtb_thetay = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S87>/Sum' incorporates:
     *  Constant: '<S36>/C'
     *  Delay: '<S36>/MemoryX'
     *  Product: '<S87>/C[k]*xhat[k|k-1]'
     *  Product: '<S87>/D[k]*u[k]'
     *  Sum: '<S87>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_thetay;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_thetay;

    /* Product: '<S87>/Product3' incorporates:
     *  Constant: '<S37>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S87>/Product3' incorporates:
     *  Outport: '<S87>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S56>/MeasurementUpdate' */

  /* RelationalOperator: '<S100>/Compare' incorporates:
   *  Constant: '<S100>/Constant'
   *  Constant: '<S99>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S99>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S99>/Switch' incorporates:
   *  UnitDelay: '<S99>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay_n = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay_n = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S99>/Switch' */

  /* Sum: '<S99>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay_n;

  /* Gain: '<S99>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S99>/Switch1' incorporates:
   *  UnitDelay: '<S99>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S99>/Switch1' */

  /* Sum: '<S99>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_thetay;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
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

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* Chart: '<S11>/Chart' */
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

  /* End of Chart: '<S11>/Chart' */

  /* Update for UnitDelay: '<S33>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S33>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S34>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S35>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' incorporates:
     *  Bias: '<S130>/Bias'
     *  Merge: '<S104>/Merge1'
     *  S-Function (sfix_udelay): '<S8>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' incorporates:
     *  Bias: '<S130>/Bias'
     *  Merge: '<S104>/Merge1'
     *  S-Function (sfix_udelay): '<S8>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S36>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S56>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S36>/A'
   *  Delay: '<S36>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S36>/MemoryX' incorporates:
   *  Constant: '<S36>/B'
   *  Product: '<S56>/A[k]*xhat[k|k-1]'
   *  Product: '<S56>/B[k]*u[k]'
   *  Sum: '<S56>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S10>/Accumulator2' incorporates:
   *  Constant: '<S10>/Constant'
   *  DiscreteIntegrator: '<S10>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S10>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S10>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S23>/Delay Input1' incorporates:
   *  Constant: '<S5>/Constant3'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S5>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S267>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S267>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S289>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S288>/UD'
   *
   * Block description for '<S288>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S286>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S269>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S284>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S284>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S284>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S268>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_k;

  /* Update for UnitDelay: '<S277>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S277>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S277>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_k;

  /* Update for UnitDelay: '<S191>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Product2_l;

  /* Update for UnitDelay: '<S190>/UD'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_f;

  /* Update for UnitDelay: '<S176>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_c;

  /* Update for UnitDelay: '<S180>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_rx_g;

  /* Update for UnitDelay: '<S179>/UD'
   *
   * Block description for '<S179>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S173>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S212>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S211>/UD'
   *
   * Block description for '<S211>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S197>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S201>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S200>/UD'
   *
   * Block description for '<S200>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S194>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S233>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S232>/UD'
   *
   * Block description for '<S232>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S218>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S222>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S221>/UD'
   *
   * Block description for '<S221>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S215>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S254>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Sum1_h;

  /* Update for UnitDelay: '<S253>/UD'
   *
   * Block description for '<S253>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S239>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S243>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_rx_nr;

  /* Update for UnitDelay: '<S242>/UD'
   *
   * Block description for '<S242>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add_du;

  /* Update for UnitDelay: '<S236>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_d;

  /* Update for UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_np = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S18>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oo = rtb_Integral_i;

  /* Update for UnitDelay: '<S90>/UD'
   *
   * Block description for '<S90>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S91>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S91>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S92>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S93>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S94>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S99>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay_n;

  /* Update for UnitDelay: '<S99>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_thetay;
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

    /* Start for If: '<S12>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S36>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S267>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S284>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S277>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S336>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S12>/Spline Path Following Enabled' */
    /* Start for If: '<S108>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S104>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S108>/Robot_Index_Is_Valid' */
    /* Start for If: '<S111>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S111>/Circle_Check_Valid' */
    /* Start for If: '<S113>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S111>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S108>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S12>/Spline Path Following Enabled' */
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
