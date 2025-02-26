// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
#include "include/SimulinkSmartDashboardInterface.h"
 
SimulinkSmartDashboardInterface::SimulinkSmartDashboardInterface()
{
    nt::NetworkTableInstance NTinst = nt::NetworkTableInstance::GetDefault();
    auto NTtable_Tune = NTinst.GetTable("Simulink Tunable Params");
    auto NTtable_Inport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_Outport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_TPoint = NTinst.GetTable("Simulink Test Points");
 
    __AT_Target_Tag_11_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_11_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_11_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_11_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_11_Field_Angle__Entry.SetDouble(2.0944);
 
    __AT_Target_Tag_11_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_11_X");
    NTinst.AddListener(__AT_Target_Tag_11_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_11_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_11_X__Entry.SetDouble(12.5143);
 
    __AT_Target_Tag_11_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_11_Y");
    NTinst.AddListener(__AT_Target_Tag_11_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_11_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_11_Y__Entry.SetDouble(2.6574);
 
    __AT_Target_Tag_12_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_12_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_12_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_12_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_12_Field_Angle__Entry.SetDouble(-2.0944);
 
    __AT_Target_Tag_12_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_12_X");
    NTinst.AddListener(__AT_Target_Tag_12_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_12_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_12_X__Entry.SetDouble(12.5143);
 
    __AT_Target_Tag_12_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_12_Y");
    NTinst.AddListener(__AT_Target_Tag_12_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_12_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_12_Y__Entry.SetDouble(5.5542);
 
    __AT_Target_Tag_13_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_13_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_13_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_13_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_13_Field_Angle__Entry.SetDouble(0);
 
    __AT_Target_Tag_13_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_13_X");
    NTinst.AddListener(__AT_Target_Tag_13_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_13_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_13_X__Entry.SetDouble(10.001);
 
    __AT_Target_Tag_13_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_13_Y");
    NTinst.AddListener(__AT_Target_Tag_13_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_13_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_13_Y__Entry.SetDouble(4.1051);
 
    __AT_Target_Tag_14_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_14_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_14_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_14_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_14_Field_Angle__Entry.SetDouble(0);
 
    __AT_Target_Tag_14_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_14_X");
    NTinst.AddListener(__AT_Target_Tag_14_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_14_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_14_X__Entry.SetDouble(6.54);
 
    __AT_Target_Tag_14_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_14_Y");
    NTinst.AddListener(__AT_Target_Tag_14_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_14_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_14_Y__Entry.SetDouble(4.1051);
 
    __AT_Target_Tag_15_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_15_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_15_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_15_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_15_Field_Angle__Entry.SetDouble(2.0944);
 
    __AT_Target_Tag_15_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_15_X");
    NTinst.AddListener(__AT_Target_Tag_15_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_15_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_15_X__Entry.SetDouble(4.0317);
 
    __AT_Target_Tag_15_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_15_Y");
    NTinst.AddListener(__AT_Target_Tag_15_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_15_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_15_Y__Entry.SetDouble(5.5542);
 
    __AT_Target_Tag_16_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_16_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_16_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_16_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_16_Field_Angle__Entry.SetDouble(4.1888);
 
    __AT_Target_Tag_16_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_16_X");
    NTinst.AddListener(__AT_Target_Tag_16_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_16_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_16_X__Entry.SetDouble(4.0317);
 
    __AT_Target_Tag_16_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_16_Y");
    NTinst.AddListener(__AT_Target_Tag_16_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_16_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_16_Y__Entry.SetDouble(2.6574);
 
    __AT_Target_Tag_5_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_5_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_5_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_5_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_5_Field_Angle__Entry.SetDouble(1.5708);
 
    __AT_Target_Tag_5_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_5_X");
    NTinst.AddListener(__AT_Target_Tag_5_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_5_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_5_X__Entry.SetDouble(14.7008);
 
    __AT_Target_Tag_5_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_5_Y");
    NTinst.AddListener(__AT_Target_Tag_5_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_5_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_5_Y__Entry.SetDouble(7.2898);
 
    __AT_Target_Tag_6_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_6_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_6_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_6_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_6_Field_Angle__Entry.SetDouble(4.7124);
 
    __AT_Target_Tag_6_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_6_X");
    NTinst.AddListener(__AT_Target_Tag_6_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_6_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_6_X__Entry.SetDouble(1.8415);
 
    __AT_Target_Tag_6_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_6_Y");
    NTinst.AddListener(__AT_Target_Tag_6_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_6_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_6_Y__Entry.SetDouble(7.2898);
 
    __AT_XY_Control_Gain__Entry = NTtable_Tune->GetEntry("AT_XY_Control_Gain");
    NTinst.AddListener(__AT_XY_Control_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_XY_Control_Gain = event.GetValueEventData()->value.GetDouble();});
    __AT_XY_Control_Gain__Entry.SetDouble(1.5);
 
    __Algae_Eject_Time__Entry = NTtable_Tune->GetEntry("Algae_Eject_Time");
    NTinst.AddListener(__Algae_Eject_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Eject_Time = event.GetValueEventData()->value.GetDouble();});
    __Algae_Eject_Time__Entry.SetDouble(1);
 
    __Algae_Hold_DC__Entry = NTtable_Tune->GetEntry("Algae_Hold_DC");
    NTinst.AddListener(__Algae_Hold_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Hold_DC = event.GetValueEventData()->value.GetDouble();});
    __Algae_Hold_DC__Entry.SetDouble(0.005);
 
    __Algae_Pull_In_DC__Entry = NTtable_Tune->GetEntry("Algae_Pull_In_DC");
    NTinst.AddListener(__Algae_Pull_In_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Pull_In_DC = event.GetValueEventData()->value.GetDouble();});
    __Algae_Pull_In_DC__Entry.SetDouble(1);
 
    __Algae_Push_Out_DC__Entry = NTtable_Tune->GetEntry("Algae_Push_Out_DC");
    NTinst.AddListener(__Algae_Push_Out_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Push_Out_DC = event.GetValueEventData()->value.GetDouble();});
    __Algae_Push_Out_DC__Entry.SetDouble(-0.3);
 
    __Boost_Trigger_Decreasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Decreasing_Limit");
    NTinst.AddListener(__Boost_Trigger_Decreasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Decreasing_Limit = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Decreasing_Limit__Entry.SetDouble(-0.28);
 
    __Boost_Trigger_High_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_High_Speed");
    NTinst.AddListener(__Boost_Trigger_High_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_High_Speed = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_High_Speed__Entry.SetDouble(5);
 
    __Boost_Trigger_Increasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Increasing_Limit");
    NTinst.AddListener(__Boost_Trigger_Increasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Increasing_Limit = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Increasing_Limit__Entry.SetDouble(3.5);
 
    __Boost_Trigger_Low_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Low_Speed");
    NTinst.AddListener(__Boost_Trigger_Low_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Low_Speed = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Low_Speed__Entry.SetDouble(1.5);
 
    __Coral_Arm_Angle_Error_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Error_Threshold");
    NTinst.AddListener(__Coral_Arm_Angle_Error_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Error_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Error_Threshold__Entry.SetDouble(3);
 
    __Coral_Arm_Angle_L1__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L1");
    NTinst.AddListener(__Coral_Arm_Angle_L1__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L1 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L1__Entry.SetDouble(-15);
 
    __Coral_Arm_Angle_L2__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L2");
    NTinst.AddListener(__Coral_Arm_Angle_L2__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L2 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L2__Entry.SetDouble(50);
 
    __Coral_Arm_Angle_L3__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L3");
    NTinst.AddListener(__Coral_Arm_Angle_L3__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L3 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L3__Entry.SetDouble(50);
 
    __Coral_Arm_Angle_L4__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4");
    NTinst.AddListener(__Coral_Arm_Angle_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L4__Entry.SetDouble(50);
 
    __Coral_Arm_Angle_Neg_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Neg_Threshold");
    NTinst.AddListener(__Coral_Arm_Angle_Neg_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Neg_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Neg_Threshold__Entry.SetDouble(-88);
 
    __Coral_Arm_Angle_Start__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Start");
    NTinst.AddListener(__Coral_Arm_Angle_Start__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Start = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Start__Entry.SetDouble(-15);
 
    __Coral_Arm_Angle_Start_Thresh__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Start_Thresh");
    NTinst.AddListener(__Coral_Arm_Angle_Start_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Start_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Start_Thresh__Entry.SetDouble(-75);
 
    __Coral_Arm_Angle_Up__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Up");
    NTinst.AddListener(__Coral_Arm_Angle_Up__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Up = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Up__Entry.SetDouble(85);
 
    __Coral_Arm_DC_Inc_RL__Entry = NTtable_Tune->GetEntry("Coral_Arm_DC_Inc_RL");
    NTinst.AddListener(__Coral_Arm_DC_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_DC_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_DC_Inc_RL__Entry.SetDouble(0.066667);
 
    __Coral_Arm_Gain_Int__Entry = NTtable_Tune->GetEntry("Coral_Arm_Gain_Int");
    NTinst.AddListener(__Coral_Arm_Gain_Int__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Gain_Int = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Gain_Int__Entry.SetDouble(0.001);
 
    __Coral_Arm_Gain_Prop__Entry = NTtable_Tune->GetEntry("Coral_Arm_Gain_Prop");
    NTinst.AddListener(__Coral_Arm_Gain_Prop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Gain_Prop = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Gain_Prop__Entry.SetDouble(0.01);
 
    __Coral_Arm_Int_IC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_IC");
    NTinst.AddListener(__Coral_Arm_Int_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_IC = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Int_IC__Entry.SetDouble(0);
 
    __Coral_Arm_Int_LL__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_LL");
    NTinst.AddListener(__Coral_Arm_Int_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_LL = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Int_LL__Entry.SetDouble(-0.05);
 
    __Coral_Arm_Int_UL__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_UL");
    NTinst.AddListener(__Coral_Arm_Int_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_UL = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Int_UL__Entry.SetDouble(0.05);
 
    __Coral_Arm_Manual_Gain__Entry = NTtable_Tune->GetEntry("Coral_Arm_Manual_Gain");
    NTinst.AddListener(__Coral_Arm_Manual_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Manual_Gain = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Manual_Gain__Entry.SetDouble(0.4);
 
    __Coral_Arm_Neg90_DC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Neg90_DC");
    NTinst.AddListener(__Coral_Arm_Neg90_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Neg90_DC = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Neg90_DC__Entry.SetDouble(-0.03);
 
    __Coral_Detect_Distance__Entry = NTtable_Tune->GetEntry("Coral_Detect_Distance");
    NTinst.AddListener(__Coral_Detect_Distance__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Detect_Distance = event.GetValueEventData()->value.GetDouble();});
    __Coral_Detect_Distance__Entry.SetDouble(60);
 
    __Coral_Eject_Time__Entry = NTtable_Tune->GetEntry("Coral_Eject_Time");
    NTinst.AddListener(__Coral_Eject_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Eject_Time = event.GetValueEventData()->value.GetDouble();});
    __Coral_Eject_Time__Entry.SetDouble(0.5);
 
    __Coral_Motor_DC_Eject__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Eject");
    NTinst.AddListener(__Coral_Motor_DC_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Eject = event.GetValueEventData()->value.GetDouble();});
    __Coral_Motor_DC_Eject__Entry.SetDouble(-0.65);
 
    __Coral_Motor_DC_Hold__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Hold");
    NTinst.AddListener(__Coral_Motor_DC_Hold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Hold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Motor_DC_Hold__Entry.SetDouble(0.01);
 
    __Coral_Motor_DC_Pickup__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Pickup");
    NTinst.AddListener(__Coral_Motor_DC_Pickup__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Pickup = event.GetValueEventData()->value.GetDouble();});
    __Coral_Motor_DC_Pickup__Entry.SetDouble(0.1);
 
    __Distance_FL_y__Entry = NTtable_Tune->GetEntry("Distance_FL_y");
    NTinst.AddListener(__Distance_FL_y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Distance_FL_y = event.GetValueEventData()->value.GetDouble();});
    __Distance_FL_y__Entry.SetDouble(0.18732);
 
    __Drive_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D");
    NTinst.AddListener(__Drive_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D__Entry.SetDouble(0.0001);
 
    __Drive_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(__Drive_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Drive_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_LL");
    NTinst.AddListener(__Drive_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    __Drive_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_UL");
    NTinst.AddListener(__Drive_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    __Drive_Motor_Control_FF__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_FF");
    NTinst.AddListener(__Drive_Motor_Control_FF__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_FF = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_FF__Entry.SetDouble(0.00016129);
 
    __Drive_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I");
    NTinst.AddListener(__Drive_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I__Entry.SetDouble(0);
 
    __Drive_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_LL");
    NTinst.AddListener(__Drive_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I_LL__Entry.SetDouble(0);
 
    __Drive_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_UL");
    NTinst.AddListener(__Drive_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I_UL__Entry.SetDouble(0);
 
    __Drive_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_P");
    NTinst.AddListener(__Drive_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_P__Entry.SetDouble(5e-06);
 
    __Drive_Motor_Control_Sign_Change_Deadband__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_Sign_Change_Deadband");
    NTinst.AddListener(__Drive_Motor_Control_Sign_Change_Deadband__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_Sign_Change_Deadband = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_Sign_Change_Deadband__Entry.SetDouble(7000);
 
    __Elevator_Bottom_DC__Entry = NTtable_Tune->GetEntry("Elevator_Bottom_DC");
    NTinst.AddListener(__Elevator_Bottom_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Bottom_DC = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Bottom_DC__Entry.SetDouble(-0.04);
 
    __Elevator_DC_Inc_RL__Entry = NTtable_Tune->GetEntry("Elevator_DC_Inc_RL");
    NTinst.AddListener(__Elevator_DC_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_DC_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_DC_Inc_RL__Entry.SetDouble(0.066667);
 
    __Elevator_Error_Bottom_Disable__Entry = NTtable_Tune->GetEntry("Elevator_Error_Bottom_Disable");
    NTinst.AddListener(__Elevator_Error_Bottom_Disable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Error_Bottom_Disable = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Error_Bottom_Disable__Entry.SetDouble(3);
 
    __Elevator_Error_Increase__Entry = NTtable_Tune->GetEntry("Elevator_Error_Increase");
    NTinst.AddListener(__Elevator_Error_Increase__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Error_Increase = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Error_Increase__Entry.SetDouble(0);
 
    __Elevator_Gain_Int__Entry = NTtable_Tune->GetEntry("Elevator_Gain_Int");
    NTinst.AddListener(__Elevator_Gain_Int__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Gain_Int = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Gain_Int__Entry.SetDouble(0.02);
 
    __Elevator_Gain_Prop__Entry = NTtable_Tune->GetEntry("Elevator_Gain_Prop");
    NTinst.AddListener(__Elevator_Gain_Prop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Gain_Prop = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Gain_Prop__Entry.SetDouble(0.3);
 
    __Elevator_Height_Algae_High__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_High");
    NTinst.AddListener(__Elevator_Height_Algae_High__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_High = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Algae_High__Entry.SetDouble(19);
 
    __Elevator_Height_Algae_Low__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_Low");
    NTinst.AddListener(__Elevator_Height_Algae_Low__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_Low = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Algae_Low__Entry.SetDouble(11);
 
    __Elevator_Height_Algae_Score__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_Score");
    NTinst.AddListener(__Elevator_Height_Algae_Score__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_Score = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Algae_Score__Entry.SetDouble(2.5);
 
    __Elevator_Height_Bottom__Entry = NTtable_Tune->GetEntry("Elevator_Height_Bottom");
    NTinst.AddListener(__Elevator_Height_Bottom__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Bottom = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Bottom__Entry.SetDouble(0);
 
    __Elevator_Height_Coral_Arm_Low_Thresh__Entry = NTtable_Tune->GetEntry("Elevator_Height_Coral_Arm_Low_Thresh");
    NTinst.AddListener(__Elevator_Height_Coral_Arm_Low_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Coral_Arm_Low_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Coral_Arm_Low_Thresh__Entry.SetDouble(8.5);
 
    __Elevator_Height_Error_Threshold__Entry = NTtable_Tune->GetEntry("Elevator_Height_Error_Threshold");
    NTinst.AddListener(__Elevator_Height_Error_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Error_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Error_Threshold__Entry.SetDouble(1);
 
    __Elevator_Height_L1__Entry = NTtable_Tune->GetEntry("Elevator_Height_L1");
    NTinst.AddListener(__Elevator_Height_L1__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L1 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L1__Entry.SetDouble(11);
 
    __Elevator_Height_L2__Entry = NTtable_Tune->GetEntry("Elevator_Height_L2");
    NTinst.AddListener(__Elevator_Height_L2__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L2 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L2__Entry.SetDouble(7.25);
 
    __Elevator_Height_L3__Entry = NTtable_Tune->GetEntry("Elevator_Height_L3");
    NTinst.AddListener(__Elevator_Height_L3__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L3 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L3__Entry.SetDouble(15.125);
 
    __Elevator_Height_L4__Entry = NTtable_Tune->GetEntry("Elevator_Height_L4");
    NTinst.AddListener(__Elevator_Height_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L4 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L4__Entry.SetDouble(26.125);
 
    __Elevator_Height_Lower__Entry = NTtable_Tune->GetEntry("Elevator_Height_Lower");
    NTinst.AddListener(__Elevator_Height_Lower__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Lower = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Lower__Entry.SetDouble(6);
 
    __Elevator_Height_Manual_Gain__Entry = NTtable_Tune->GetEntry("Elevator_Height_Manual_Gain");
    NTinst.AddListener(__Elevator_Height_Manual_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Manual_Gain = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Manual_Gain__Entry.SetDouble(0.1);
 
    __Elevator_Height_PickupLower_Reset__Entry = NTtable_Tune->GetEntry("Elevator_Height_PickupLower_Reset");
    NTinst.AddListener(__Elevator_Height_PickupLower_Reset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_PickupLower_Reset = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_PickupLower_Reset__Entry.SetDouble(6.8);
 
    __Elevator_Height_Prepare__Entry = NTtable_Tune->GetEntry("Elevator_Height_Prepare");
    NTinst.AddListener(__Elevator_Height_Prepare__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Prepare = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Prepare__Entry.SetDouble(12);
 
    __Elevator_Height_Raise__Entry = NTtable_Tune->GetEntry("Elevator_Height_Raise");
    NTinst.AddListener(__Elevator_Height_Raise__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Raise = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Raise__Entry.SetDouble(9);
 
    __Elevator_Height_Top__Entry = NTtable_Tune->GetEntry("Elevator_Height_Top");
    NTinst.AddListener(__Elevator_Height_Top__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Top = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Top__Entry.SetDouble(28);
 
    __Elevator_Height_Top_Reset__Entry = NTtable_Tune->GetEntry("Elevator_Height_Top_Reset");
    NTinst.AddListener(__Elevator_Height_Top_Reset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Top_Reset = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Top_Reset__Entry.SetDouble(28.125);
 
    __Elevator_Hold_at_Top_DC__Entry = NTtable_Tune->GetEntry("Elevator_Hold_at_Top_DC");
    NTinst.AddListener(__Elevator_Hold_at_Top_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Hold_at_Top_DC = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Hold_at_Top_DC__Entry.SetDouble(0.1);
 
    __Elevator_Int_IC__Entry = NTtable_Tune->GetEntry("Elevator_Int_IC");
    NTinst.AddListener(__Elevator_Int_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_IC = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Int_IC__Entry.SetDouble(0);
 
    __Elevator_Int_LL__Entry = NTtable_Tune->GetEntry("Elevator_Int_LL");
    NTinst.AddListener(__Elevator_Int_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_LL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Int_LL__Entry.SetDouble(-0.1);
 
    __Elevator_Int_UL__Entry = NTtable_Tune->GetEntry("Elevator_Int_UL");
    NTinst.AddListener(__Elevator_Int_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_UL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Int_UL__Entry.SetDouble(0.1);
 
    __Elevator_LowerPickup_Time__Entry = NTtable_Tune->GetEntry("Elevator_LowerPickup_Time");
    NTinst.AddListener(__Elevator_LowerPickup_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_LowerPickup_Time = event.GetValueEventData()->value.GetDouble();});
    __Elevator_LowerPickup_Time__Entry.SetDouble(0.5);
 
    __Elevator_MotorRev_to_Inch__Entry = NTtable_Tune->GetEntry("Elevator_MotorRev_to_Inch");
    NTinst.AddListener(__Elevator_MotorRev_to_Inch__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_MotorRev_to_Inch = event.GetValueEventData()->value.GetDouble();});
    __Elevator_MotorRev_to_Inch__Entry.SetDouble(0.27646);
 
    __Elevator_Total_LL__Entry = NTtable_Tune->GetEntry("Elevator_Total_LL");
    NTinst.AddListener(__Elevator_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Total_LL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Total_LL__Entry.SetDouble(-0.25);
 
    __Elevator_Total_UL__Entry = NTtable_Tune->GetEntry("Elevator_Total_UL");
    NTinst.AddListener(__Elevator_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Total_UL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Total_UL__Entry.SetDouble(1);
 
    __Gyro_Calibration_Reset_Degree__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Reset_Degree");
    NTinst.AddListener(__Gyro_Calibration_Reset_Degree__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Reset_Degree = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Reset_Degree__Entry.SetDouble(0);
 
    __Gyro_Calibration_Reset_Flag__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Reset_Flag");
    NTinst.AddListener(__Gyro_Calibration_Reset_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Reset_Flag = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Reset_Flag__Entry.SetDouble(0);
 
    __KF_Enable__Entry = NTtable_Tune->GetEntry("KF_Enable");
    NTinst.AddListener(__KF_Enable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {KF_Enable = event.GetValueEventData()->value.GetDouble();});
    __KF_Enable__Entry.SetDouble(1);
 
    __Odometry_IC_X__Entry = NTtable_Tune->GetEntry("Odometry_IC_X");
    NTinst.AddListener(__Odometry_IC_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_IC_X = event.GetValueEventData()->value.GetDouble();});
    __Odometry_IC_X__Entry.SetDouble(0);
 
    __Odometry_IC_Y__Entry = NTtable_Tune->GetEntry("Odometry_IC_Y");
    NTinst.AddListener(__Odometry_IC_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_IC_Y = event.GetValueEventData()->value.GetDouble();});
    __Odometry_IC_Y__Entry.SetDouble(0);
 
    __Odometry_Reset_IC__Entry = NTtable_Tune->GetEntry("Odometry_Reset_IC");
    NTinst.AddListener(__Odometry_Reset_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_Reset_IC = event.GetValueEventData()->value.GetDouble();});
    __Odometry_Reset_IC__Entry.SetDouble(0);
 
    __Odometry_X_Y_TEAR__Entry = NTtable_Tune->GetEntry("Odometry_X_Y_TEAR");
    NTinst.AddListener(__Odometry_X_Y_TEAR__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_X_Y_TEAR = event.GetValueEventData()->value.GetDouble();});
    __Odometry_X_Y_TEAR__Entry.SetDouble(0);
 
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry = NTtable_Tune->GetEntry("Spline_Last_Pose_Distance_to_Velocity_Gain");
    NTinst.AddListener(__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Last_Pose_Distance_to_Velocity_Gain = event.GetValueEventData()->value.GetDouble();});
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry.SetDouble(2);
 
    __Spline_Max_Centripital_Acceleration__Entry = NTtable_Tune->GetEntry("Spline_Max_Centripital_Acceleration");
    NTinst.AddListener(__Spline_Max_Centripital_Acceleration__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Max_Centripital_Acceleration = event.GetValueEventData()->value.GetDouble();});
    __Spline_Max_Centripital_Acceleration__Entry.SetDouble(10);
 
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry = NTtable_Tune->GetEntry("Spline_Pose_Num_Before_End_Reduce_Speed");
    NTinst.AddListener(__Spline_Pose_Num_Before_End_Reduce_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Pose_Num_Before_End_Reduce_Speed = event.GetValueEventData()->value.GetDouble();});
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry.SetDouble(1);
 
    __Spline_Stop_Radius__Entry = NTtable_Tune->GetEntry("Spline_Stop_Radius");
    NTinst.AddListener(__Spline_Stop_Radius__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Stop_Radius = event.GetValueEventData()->value.GetDouble();});
    __Spline_Stop_Radius__Entry.SetDouble(0.1);
 
    __Spline_Velocity_Multiplier_TEST__Entry = NTtable_Tune->GetEntry("Spline_Velocity_Multiplier_TEST");
    NTinst.AddListener(__Spline_Velocity_Multiplier_TEST__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Velocity_Multiplier_TEST = event.GetValueEventData()->value.GetDouble();});
    __Spline_Velocity_Multiplier_TEST__Entry.SetDouble(1);
 
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(0.1);
 
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry.SetDouble(-1);
 
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry.SetDouble(1);
 
    __Steering_Heading_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D");
    NTinst.AddListener(__Steering_Heading_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D__Entry.SetDouble(0);
 
    __Steering_Heading_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_FilterCoeff");
    NTinst.AddListener(__Steering_Heading_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Steering_Heading_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_LL");
    NTinst.AddListener(__Steering_Heading_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_LL__Entry.SetDouble(0);
 
    __Steering_Heading_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_UL");
    NTinst.AddListener(__Steering_Heading_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_UL__Entry.SetDouble(0);
 
    __Steering_Heading_Control_Deadzone__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Deadzone");
    NTinst.AddListener(__Steering_Heading_Control_Deadzone__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Deadzone = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Deadzone__Entry.SetDouble(0.1);
 
    __Steering_Heading_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I");
    NTinst.AddListener(__Steering_Heading_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I__Entry.SetDouble(0);
 
    __Steering_Heading_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_LL");
    NTinst.AddListener(__Steering_Heading_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I_LL__Entry.SetDouble(-0.1);
 
    __Steering_Heading_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_UL");
    NTinst.AddListener(__Steering_Heading_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I_UL__Entry.SetDouble(0.1);
 
    __Steering_Heading_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_P");
    NTinst.AddListener(__Steering_Heading_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_P__Entry.SetDouble(2.5);
 
    __Steering_Heading_Control_Total_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_LL");
    NTinst.AddListener(__Steering_Heading_Control_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Total_LL__Entry.SetDouble(-2.5);
 
    __Steering_Heading_Control_Total_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_UL");
    NTinst.AddListener(__Steering_Heading_Control_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Total_UL__Entry.SetDouble(2.5);
 
    __Steering_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D");
    NTinst.AddListener(__Steering_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D__Entry.SetDouble(0.5);
 
    __Steering_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(__Steering_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Steering_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_LL");
    NTinst.AddListener(__Steering_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    __Steering_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_UL");
    NTinst.AddListener(__Steering_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    __Steering_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I");
    NTinst.AddListener(__Steering_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I__Entry.SetDouble(0.005);
 
    __Steering_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_LL");
    NTinst.AddListener(__Steering_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I_LL__Entry.SetDouble(-0.005);
 
    __Steering_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_UL");
    NTinst.AddListener(__Steering_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I_UL__Entry.SetDouble(0.005);
 
    __Steering_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_P");
    NTinst.AddListener(__Steering_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_P__Entry.SetDouble(0.15);
 
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(1);
 
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(__Steering_Relative_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry.SetDouble(-10);
 
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(__Steering_Relative_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry.SetDouble(10);
 
    __Steering_Relative_Gain__Entry = NTtable_Tune->GetEntry("Steering_Relative_Gain");
    NTinst.AddListener(__Steering_Relative_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Gain = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Gain__Entry.SetDouble(5);
 
    __Steering_Twist_Gain__Entry = NTtable_Tune->GetEntry("Steering_Twist_Gain");
    NTinst.AddListener(__Steering_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    __Steering_Twist_Gain__Entry.SetDouble(-0.5);
 
    __TEST_Swerve_Mode_Override_Flag__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Override_Flag");
    NTinst.AddListener(__TEST_Swerve_Mode_Override_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Override_Flag = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Override_Flag__Entry.SetDouble(0);
 
    __TEST_Swerve_Mode_Steering__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Steering");
    NTinst.AddListener(__TEST_Swerve_Mode_Steering__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Steering = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Steering__Entry.SetDouble(0);
 
    __TEST_Swerve_Mode_Translation__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Translation");
    NTinst.AddListener(__TEST_Swerve_Mode_Translation__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Translation = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Translation__Entry.SetDouble(0);
 
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Translation_Speed_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Translation_Speed_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Translation_Speed_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Error_Thresh");
    NTinst.AddListener(__Translation_Speed_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_NonZero_Error_Thresh__Entry.SetDouble(0.15);
 
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Translation_Speed_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry.SetDouble(0.05);
 
    __Translation_Speed_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Dec");
    NTinst.AddListener(__Translation_Speed_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Rate_Limit_Dec__Entry.SetDouble(-4);
 
    __Translation_Speed_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Inc");
    NTinst.AddListener(__Translation_Speed_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Rate_Limit_Inc__Entry.SetDouble(4);
 
    __Translation_Twist_Gain__Entry = NTtable_Tune->GetEntry("Translation_Twist_Gain");
    NTinst.AddListener(__Translation_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    __Translation_Twist_Gain__Entry.SetDouble(0.5);
 
    __Twist_Deadzone_neg__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_neg");
    NTinst.AddListener(__Twist_Deadzone_neg__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_neg = event.GetValueEventData()->value.GetDouble();});
    __Twist_Deadzone_neg__Entry.SetDouble(-0.01);
 
    __Twist_Deadzone_pos__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_pos");
    NTinst.AddListener(__Twist_Deadzone_pos__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_pos = event.GetValueEventData()->value.GetDouble();});
    __Twist_Deadzone_pos__Entry.SetDouble(0.01);
 
// Inports
    __AT_Tag_11_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_11_Found");
    __AT_Tag_12_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_12_Found");
    __AT_Tag_13_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_13_Found");
    __AT_Tag_14_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_14_Found");
    __AT_Tag_15_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_15_Found");
    __AT_Tag_16_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_16_Found");
    __Algae_Limit_Switch__Entry = NTtable_Inport->GetEntry("Algae_Limit_Switch");
    __BackLeft_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Rev");
    __BackLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Speed");
    __BackLeft_Steer_Rev__Entry = NTtable_Inport->GetEntry("BackLeft_Steer_Rev");
    __BackLeft_Turn_Offset__Entry = NTtable_Inport->GetEntry("BackLeft_Turn_Offset");
    __BackRight_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Rev");
    __BackRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Speed");
    __BackRight_Steer_Rev__Entry = NTtable_Inport->GetEntry("BackRight_Steer_Rev");
    __BackRight_Turn_Offset__Entry = NTtable_Inport->GetEntry("BackRight_Turn_Offset");
    __Coral_Arm_Angle_Measured_Raw__Entry = NTtable_Inport->GetEntry("Coral_Arm_Angle_Measured_Raw");
    __Coral_Limit_Switch__Entry = NTtable_Inport->GetEntry("Coral_Limit_Switch");
    __Coral_TOF_Distance__Entry = NTtable_Inport->GetEntry("Coral_TOF_Distance");
    __Elevator_Limit_Switch_Bottom__Entry = NTtable_Inport->GetEntry("Elevator_Limit_Switch_Bottom");
    __Elevator_Limit_Switch_Top__Entry = NTtable_Inport->GetEntry("Elevator_Limit_Switch_Top");
    __Elevator_Motor_Rev__Entry = NTtable_Inport->GetEntry("Elevator_Motor_Rev");
    __FrontLeft_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Rev");
    __FrontLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Speed");
    __FrontLeft_Steer_Rev__Entry = NTtable_Inport->GetEntry("FrontLeft_Steer_Rev");
    __FrontLeft_Turn_Offset__Entry = NTtable_Inport->GetEntry("FrontLeft_Turn_Offset");
    __FrontRight_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Rev");
    __FrontRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Speed");
    __FrontRight_Steer_Rev__Entry = NTtable_Inport->GetEntry("FrontRight_Steer_Rev");
    __FrontRight_Turn_Offset__Entry = NTtable_Inport->GetEntry("FrontRight_Turn_Offset");
    __GameState__Entry = NTtable_Inport->GetEntry("GameState");
    __Gamepad_B1_A__Entry = NTtable_Inport->GetEntry("Gamepad_B1_A");
    __Gamepad_B2_B__Entry = NTtable_Inport->GetEntry("Gamepad_B2_B");
    __Gamepad_B3_X__Entry = NTtable_Inport->GetEntry("Gamepad_B3_X");
    __Gamepad_B4_Y__Entry = NTtable_Inport->GetEntry("Gamepad_B4_Y");
    __Gamepad_Back__Entry = NTtable_Inport->GetEntry("Gamepad_Back");
    __Gamepad_LB__Entry = NTtable_Inport->GetEntry("Gamepad_LB");
    __Gamepad_LT__Entry = NTtable_Inport->GetEntry("Gamepad_LT");
    __Gamepad_POV__Entry = NTtable_Inport->GetEntry("Gamepad_POV");
    __Gamepad_RB__Entry = NTtable_Inport->GetEntry("Gamepad_RB");
    __Gamepad_RT__Entry = NTtable_Inport->GetEntry("Gamepad_RT");
    __Gamepad_Start__Entry = NTtable_Inport->GetEntry("Gamepad_Start");
    __Gamepad_Stick_Left_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_X");
    __Gamepad_Stick_Left_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_Y");
    __Gamepad_Stick_Right_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_X");
    __Gamepad_Stick_Right_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_Y");
    __Gyro_Angle__Entry = NTtable_Inport->GetEntry("Gyro_Angle");
    __IsBlueAlliance__Entry = NTtable_Inport->GetEntry("IsBlueAlliance");
    __Joystick_Left_B1__Entry = NTtable_Inport->GetEntry("Joystick_Left_B1");
    __Joystick_Left_B10__Entry = NTtable_Inport->GetEntry("Joystick_Left_B10");
    __Joystick_Left_B11__Entry = NTtable_Inport->GetEntry("Joystick_Left_B11");
    __Joystick_Left_B12__Entry = NTtable_Inport->GetEntry("Joystick_Left_B12");
    __Joystick_Left_B13__Entry = NTtable_Inport->GetEntry("Joystick_Left_B13");
    __Joystick_Left_B14__Entry = NTtable_Inport->GetEntry("Joystick_Left_B14");
    __Joystick_Left_B15__Entry = NTtable_Inport->GetEntry("Joystick_Left_B15");
    __Joystick_Left_B16__Entry = NTtable_Inport->GetEntry("Joystick_Left_B16");
    __Joystick_Left_B2__Entry = NTtable_Inport->GetEntry("Joystick_Left_B2");
    __Joystick_Left_B3__Entry = NTtable_Inport->GetEntry("Joystick_Left_B3");
    __Joystick_Left_B4__Entry = NTtable_Inport->GetEntry("Joystick_Left_B4");
    __Joystick_Left_B5__Entry = NTtable_Inport->GetEntry("Joystick_Left_B5");
    __Joystick_Left_B6__Entry = NTtable_Inport->GetEntry("Joystick_Left_B6");
    __Joystick_Left_B7__Entry = NTtable_Inport->GetEntry("Joystick_Left_B7");
    __Joystick_Left_B8__Entry = NTtable_Inport->GetEntry("Joystick_Left_B8");
    __Joystick_Left_B9__Entry = NTtable_Inport->GetEntry("Joystick_Left_B9");
    __Joystick_Left_POV__Entry = NTtable_Inport->GetEntry("Joystick_Left_POV");
    __Joystick_Left_X__Entry = NTtable_Inport->GetEntry("Joystick_Left_X");
    __Joystick_Left_Y__Entry = NTtable_Inport->GetEntry("Joystick_Left_Y");
    __Joystick_Left_Z__Entry = NTtable_Inport->GetEntry("Joystick_Left_Z");
    __Joystick_Right_B1__Entry = NTtable_Inport->GetEntry("Joystick_Right_B1");
    __Joystick_Right_B10__Entry = NTtable_Inport->GetEntry("Joystick_Right_B10");
    __Joystick_Right_B11__Entry = NTtable_Inport->GetEntry("Joystick_Right_B11");
    __Joystick_Right_B12__Entry = NTtable_Inport->GetEntry("Joystick_Right_B12");
    __Joystick_Right_B13__Entry = NTtable_Inport->GetEntry("Joystick_Right_B13");
    __Joystick_Right_B14__Entry = NTtable_Inport->GetEntry("Joystick_Right_B14");
    __Joystick_Right_B15__Entry = NTtable_Inport->GetEntry("Joystick_Right_B15");
    __Joystick_Right_B16__Entry = NTtable_Inport->GetEntry("Joystick_Right_B16");
    __Joystick_Right_B2__Entry = NTtable_Inport->GetEntry("Joystick_Right_B2");
    __Joystick_Right_B3__Entry = NTtable_Inport->GetEntry("Joystick_Right_B3");
    __Joystick_Right_B4__Entry = NTtable_Inport->GetEntry("Joystick_Right_B4");
    __Joystick_Right_B5__Entry = NTtable_Inport->GetEntry("Joystick_Right_B5");
    __Joystick_Right_B6__Entry = NTtable_Inport->GetEntry("Joystick_Right_B6");
    __Joystick_Right_B7__Entry = NTtable_Inport->GetEntry("Joystick_Right_B7");
    __Joystick_Right_B8__Entry = NTtable_Inport->GetEntry("Joystick_Right_B8");
    __Joystick_Right_B9__Entry = NTtable_Inport->GetEntry("Joystick_Right_B9");
    __Joystick_Right_POV__Entry = NTtable_Inport->GetEntry("Joystick_Right_POV");
    __Joystick_Right_X__Entry = NTtable_Inport->GetEntry("Joystick_Right_X");
    __Joystick_Right_Y__Entry = NTtable_Inport->GetEntry("Joystick_Right_Y");
    __Joystick_Right_Z__Entry = NTtable_Inport->GetEntry("Joystick_Right_Z");
    __Num_Tags_Detected__Entry = NTtable_Inport->GetEntry("Num_Tags_Detected");
    __Photon_Est_Pose_X__Entry = NTtable_Inport->GetEntry("Photon_Est_Pose_X");
    __Photon_Est_Pose_Y__Entry = NTtable_Inport->GetEntry("Photon_Est_Pose_Y");
 
// Outports
    __Algae_Wheel_Inside_DutyCycle__Entry = NTtable_Outport->GetEntry("Algae_Wheel_Inside_DutyCycle");
    __Algae_Wheel_Outside_DutyCycle__Entry = NTtable_Outport->GetEntry("Algae_Wheel_Outside_DutyCycle");
    __BackLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Drive_DutyCycle");
    __BackLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Steer_DutyCycle");
    __BackRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Drive_DutyCycle");
    __BackRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Steer_DutyCycle");
    __Coral_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Coral_Arm_DutyCycle");
    __Coral_Wheel_DutyCycle__Entry = NTtable_Outport->GetEntry("Coral_Wheel_DutyCycle");
    __Disable_Wheels__Entry = NTtable_Outport->GetEntry("Disable_Wheels");
    __Elevator_DutyCycle__Entry = NTtable_Outport->GetEntry("Elevator_DutyCycle");
    __Enable_Wheels__Entry = NTtable_Outport->GetEntry("Enable_Wheels");
    __FrontLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Drive_DutyCycle");
    __FrontLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Steer_DutyCycle");
    __FrontRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Drive_DutyCycle");
    __FrontRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Steer_DutyCycle");
    __Gyro_Angle_Offset_Total__Entry = NTtable_Outport->GetEntry("Gyro_Angle_Offset_Total");
    __Reset_Wheel_Offsets__Entry = NTtable_Outport->GetEntry("Reset_Wheel_Offsets");
    __Swerve_Motors_Disabled__Entry = NTtable_Outport->GetEntry("Swerve_Motors_Disabled");
 
// Test Points
    __AT_Error_X__Entry = NTtable_TPoint->GetEntry("AT_Error_X");
    __AT_Error_Y__Entry = NTtable_TPoint->GetEntry("AT_Error_Y");
    __AT_Target_Angle__Entry = NTtable_TPoint->GetEntry("AT_Target_Angle");
    __Active_GameState__Entry = NTtable_TPoint->GetEntry("Active_GameState");
    __Align_Amp__Entry = NTtable_TPoint->GetEntry("Align_Amp");
    __Align_Speaker__Entry = NTtable_TPoint->GetEntry("Align_Speaker");
    __BL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Desired_Module_Angle");
    __BL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed");
    __BL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed_in");
    __BL_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Steer_Module_Angle");
    __BR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Desired_Module_Angle");
    __BR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed");
    __BR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed_in");
    __BR_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Steer_Module_Angle");
    __Button_Disable_Wheels__Entry = NTtable_TPoint->GetEntry("Button_Disable_Wheels");
    __Button_Enable_Wheels__Entry = NTtable_TPoint->GetEntry("Button_Enable_Wheels");
    __Button_Reset_Wheel_Offsets__Entry = NTtable_TPoint->GetEntry("Button_Reset_Wheel_Offsets");
    __Coral_ArmAngle_Error__Entry = NTtable_TPoint->GetEntry("Coral_ArmAngle_Error");
    __Coral_Arm_Angle_Desired__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired");
    __Coral_Arm_Angle_Desired_o__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired_o");
    __Coral_Arm_Angle_Measured__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Measured");
    __Coral_Pickup_Lower_Wait_State__Entry = NTtable_TPoint->GetEntry("Coral_Pickup_Lower_Wait_State");
    __Coral_Wheel_DC__Entry = NTtable_TPoint->GetEntry("Coral_Wheel_DC");
    __DeadZone__Entry = NTtable_TPoint->GetEntry("DeadZone");
    __DeadZone1__Entry = NTtable_TPoint->GetEntry("DeadZone1");
    __Drive_Joystick_X__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_X");
    __Drive_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Y");
    __Drive_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z");
    __Drive_Joystick_Z_Mode__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z_Mode");
    __Elevator_Error__Entry = NTtable_TPoint->GetEntry("Elevator_Error");
    __Elevator_Height_Desired__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired");
    __Elevator_Height_Desired_m__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired_m");
    __Elevator_Height_Measured__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Measured");
    __Elevator_Height_Measured_Raw__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Measured_Raw");
    __Elevator_Height_Offset__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Offset");
    __Elevator_Integral__Entry = NTtable_TPoint->GetEntry("Elevator_Integral");
    __Elevator_Integral_o__Entry = NTtable_TPoint->GetEntry("Elevator_Integral_o");
    __Elevator_LowerPickup_Reset__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset");
    __Elevator_LowerPickup_Reset_tp__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset_tp");
    __Elevator_Proportional__Entry = NTtable_TPoint->GetEntry("Elevator_Proportional");
    __Elevator_Proportional_l__Entry = NTtable_TPoint->GetEntry("Elevator_Proportional_l");
    __FL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Desired_Module_Angle");
    __FL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed");
    __FL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed_in");
    __FL_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Steer_Module_Angle");
    __FR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Desired_Module_Angle");
    __FR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed");
    __FR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed_in");
    __FR_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Steer_Module_Angle");
    __Face_Away_Driver__Entry = NTtable_TPoint->GetEntry("Face_Away_Driver");
    __Face_Left_Driver__Entry = NTtable_TPoint->GetEntry("Face_Left_Driver");
    __Face_Right_Driver__Entry = NTtable_TPoint->GetEntry("Face_Right_Driver");
    __Face_Toward_Driver__Entry = NTtable_TPoint->GetEntry("Face_Toward_Driver");
    __FixPtRelationalOperator__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator");
    __FixPtRelationalOperator_d__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator_d");
    __FixPtRelationalOperator_ji__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator_ji");
    __FixPtRelationalOperator_k__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator_k");
    __FixPtRelationalOperator_m__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator_m");
    __FixPtRelationalOperator_ml__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator_ml");
    __FixPtRelationalOperator_n__Entry = NTtable_TPoint->GetEntry("FixPtRelationalOperator_n");
    __Gamepad_POV_Down__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Down");
    __Gamepad_POV_Left__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Left");
    __Gamepad_POV_Right__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Right");
    __Gamepad_POV_Up__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Up");
    __Gyro_Angle_Calibrated_deg__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_Calibrated_deg");
    __Gyro_Angle_Field_rad__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_Field_rad");
    __Gyro_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_SPF");
    __Gyro_Angle_rad__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_rad");
    __Is_Absolute_Steering_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Steering_SPF");
    __Is_Absolute_Translation_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Translation_SPF");
    __Is_Boosting__Entry = NTtable_TPoint->GetEntry("Is_Boosting");
    __KF_Position_X__Entry = NTtable_TPoint->GetEntry("KF_Position_X");
    __KF_Position_Y__Entry = NTtable_TPoint->GetEntry("KF_Position_Y");
    __Odom_Position_X__Entry = NTtable_TPoint->GetEntry("Odom_Position_X");
    __Odom_Position_Y__Entry = NTtable_TPoint->GetEntry("Odom_Position_Y");
    __Odometry_X_global_TEAR_ft__Entry = NTtable_TPoint->GetEntry("Odometry_X_global_TEAR_ft");
    __Odometry_X_global_est_ft__Entry = NTtable_TPoint->GetEntry("Odometry_X_global_est_ft");
    __Odometry_Y_global_TEAR_ft__Entry = NTtable_TPoint->GetEntry("Odometry_Y_global_TEAR_ft");
    __Odometry_Y_global_est_ft__Entry = NTtable_TPoint->GetEntry("Odometry_Y_global_est_ft");
    __Reefscape_Motors_Enable__Entry = NTtable_TPoint->GetEntry("Reefscape_Motors_Enable");
    __Robot_Reached_Destination__Entry = NTtable_TPoint->GetEntry("Robot_Reached_Destination");
    __Spline_Enable__Entry = NTtable_TPoint->GetEntry("Spline_Enable");
    __Spline_Follow_Index__Entry = NTtable_TPoint->GetEntry("Spline_Follow_Index");
    __Spline_Num_Poses__Entry = NTtable_TPoint->GetEntry("Spline_Num_Poses");
    __Spline_Out_Of_Bounds__Entry = NTtable_TPoint->GetEntry("Spline_Out_Of_Bounds");
    __Spline_Target_X__Entry = NTtable_TPoint->GetEntry("Spline_Target_X");
    __Spline_Target_Y__Entry = NTtable_TPoint->GetEntry("Spline_Target_Y");
    __Steer_Joystick_X__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_X");
    __Steer_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Y");
    __Steer_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Z");
    __Steering_Abs_Angle__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle");
    __Steering_Abs_Angle_Active__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle_Active");
    __Steering_Abs_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd");
    __Steering_Abs_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd_SPF");
    __Steering_Abs_Gyro__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro");
    __Steering_Abs_Gyro_Latch__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro_Latch");
    __Steering_Localized_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Localized_Cmd");
    __Steering_Localized_PID__Entry = NTtable_TPoint->GetEntry("Steering_Localized_PID");
    __Steering_Rel_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd");
    __Steering_Rel_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd_SPF");
    __Test_Mode__Entry = NTtable_TPoint->GetEntry("Test_Mode");
    __Translation_Angle__Entry = NTtable_TPoint->GetEntry("Translation_Angle");
    __Translation_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Angle_SPF");
    __Translation_Speed__Entry = NTtable_TPoint->GetEntry("Translation_Speed");
    __Translation_Speed_RL__Entry = NTtable_TPoint->GetEntry("Translation_Speed_RL");
    __Translation_Speed_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Speed_SPF");
    __Translation_Steering_Cmd__Entry = NTtable_TPoint->GetEntry("Translation_Steering_Cmd");
    __previous_call_was_for_speaker__Entry = NTtable_TPoint->GetEntry("previous_call_was_for_speaker");
}
 
void SimulinkSmartDashboardInterface::PreStepCallback() {}
 
void SimulinkSmartDashboardInterface::PostStepCallback() {}
 
void SimulinkSmartDashboardInterface::SmartDashboardCallback()
{
    // Inports
    __AT_Tag_11_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_11_Found);
    __AT_Tag_12_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_12_Found);
    __AT_Tag_13_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_13_Found);
    __AT_Tag_14_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_14_Found);
    __AT_Tag_15_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_15_Found);
    __AT_Tag_16_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_16_Found);
    __Algae_Limit_Switch__Entry.SetDouble(Code_Gen_Model_U.Algae_Limit_Switch);
    __BackLeft_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
    __BackLeft_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed);
    __BackLeft_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Steer_Rev);
    __BackLeft_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Turn_Offset);
    __BackRight_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.BackRight_Drive_Motor_Rev);
    __BackRight_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.BackRight_Drive_Motor_Speed);
    __BackRight_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.BackRight_Steer_Rev);
    __BackRight_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.BackRight_Turn_Offset);
    __Coral_Arm_Angle_Measured_Raw__Entry.SetDouble(Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw);
    __Coral_Limit_Switch__Entry.SetDouble(Code_Gen_Model_U.Coral_Limit_Switch);
    __Coral_TOF_Distance__Entry.SetDouble(Code_Gen_Model_U.Coral_TOF_Distance);
    __Elevator_Limit_Switch_Bottom__Entry.SetDouble(Code_Gen_Model_U.Elevator_Limit_Switch_Bottom);
    __Elevator_Limit_Switch_Top__Entry.SetDouble(Code_Gen_Model_U.Elevator_Limit_Switch_Top);
    __Elevator_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.Elevator_Motor_Rev);
    __FrontLeft_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
    __FrontLeft_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed);
    __FrontLeft_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Steer_Rev);
    __FrontLeft_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Turn_Offset);
    __FrontRight_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
    __FrontRight_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed);
    __FrontRight_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Steer_Rev);
    __FrontRight_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Turn_Offset);
    __GameState__Entry.SetDouble(Code_Gen_Model_U.GameState);
    __Gamepad_B1_A__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B1_A);
    __Gamepad_B2_B__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B2_B);
    __Gamepad_B3_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B3_X);
    __Gamepad_B4_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B4_Y);
    __Gamepad_Back__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Back);
    __Gamepad_LB__Entry.SetDouble(Code_Gen_Model_U.Gamepad_LB);
    __Gamepad_LT__Entry.SetDouble(Code_Gen_Model_U.Gamepad_LT);
    __Gamepad_POV__Entry.SetDouble(Code_Gen_Model_U.Gamepad_POV);
    __Gamepad_RB__Entry.SetDouble(Code_Gen_Model_U.Gamepad_RB);
    __Gamepad_RT__Entry.SetDouble(Code_Gen_Model_U.Gamepad_RT);
    __Gamepad_Start__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Start);
    __Gamepad_Stick_Left_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Left_X);
    __Gamepad_Stick_Left_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Left_Y);
    __Gamepad_Stick_Right_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Right_X);
    __Gamepad_Stick_Right_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Right_Y);
    __Gyro_Angle__Entry.SetDouble(Code_Gen_Model_U.Gyro_Angle);
    __IsBlueAlliance__Entry.SetDouble(Code_Gen_Model_U.IsBlueAlliance);
    __Joystick_Left_B1__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B1);
    __Joystick_Left_B10__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B10);
    __Joystick_Left_B11__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B11);
    __Joystick_Left_B12__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B12);
    __Joystick_Left_B13__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B13);
    __Joystick_Left_B14__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B14);
    __Joystick_Left_B15__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B15);
    __Joystick_Left_B16__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B16);
    __Joystick_Left_B2__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B2);
    __Joystick_Left_B3__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B3);
    __Joystick_Left_B4__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B4);
    __Joystick_Left_B5__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B5);
    __Joystick_Left_B6__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B6);
    __Joystick_Left_B7__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B7);
    __Joystick_Left_B8__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B8);
    __Joystick_Left_B9__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B9);
    __Joystick_Left_POV__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_POV);
    __Joystick_Left_X__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_X);
    __Joystick_Left_Y__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_Y);
    __Joystick_Left_Z__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_Z);
    __Joystick_Right_B1__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B1);
    __Joystick_Right_B10__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B10);
    __Joystick_Right_B11__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B11);
    __Joystick_Right_B12__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B12);
    __Joystick_Right_B13__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B13);
    __Joystick_Right_B14__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B14);
    __Joystick_Right_B15__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B15);
    __Joystick_Right_B16__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B16);
    __Joystick_Right_B2__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B2);
    __Joystick_Right_B3__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B3);
    __Joystick_Right_B4__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B4);
    __Joystick_Right_B5__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B5);
    __Joystick_Right_B6__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B6);
    __Joystick_Right_B7__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B7);
    __Joystick_Right_B8__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B8);
    __Joystick_Right_B9__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B9);
    __Joystick_Right_POV__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_POV);
    __Joystick_Right_X__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_X);
    __Joystick_Right_Y__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_Y);
    __Joystick_Right_Z__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_Z);
    __Num_Tags_Detected__Entry.SetDouble(Code_Gen_Model_U.Num_Tags_Detected);
    __Photon_Est_Pose_X__Entry.SetDouble(Code_Gen_Model_U.Photon_Est_Pose_X);
    __Photon_Est_Pose_Y__Entry.SetDouble(Code_Gen_Model_U.Photon_Est_Pose_Y);
    // Outports
    __Algae_Wheel_Inside_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle);
    __Algae_Wheel_Outside_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle);
    __BackLeft_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackLeft_Drive_DutyCycle);
    __BackLeft_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
    __BackRight_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackRight_Drive_DutyCycle);
    __BackRight_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackRight_Steer_DutyCycle);
    __Coral_Arm_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Coral_Arm_DutyCycle);
    __Coral_Wheel_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Coral_Wheel_DutyCycle);
    __Disable_Wheels__Entry.SetDouble(Code_Gen_Model_Y.Disable_Wheels);
    __Elevator_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Elevator_DutyCycle);
    __Enable_Wheels__Entry.SetDouble(Code_Gen_Model_Y.Enable_Wheels);
    __FrontLeft_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle);
    __FrontLeft_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
    __FrontRight_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontRight_Drive_DutyCycle);
    __FrontRight_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
    __Gyro_Angle_Offset_Total__Entry.SetDouble(Code_Gen_Model_Y.Gyro_Angle_Offset_Total);
    __Reset_Wheel_Offsets__Entry.SetDouble(Code_Gen_Model_Y.Reset_Wheel_Offsets);
    __Swerve_Motors_Disabled__Entry.SetDouble(Code_Gen_Model_Y.Swerve_Motors_Disabled);
    // Test Points
    __AT_Error_X__Entry.SetDouble(Code_Gen_Model_B.AT_Error_X);
    __AT_Error_Y__Entry.SetDouble(Code_Gen_Model_B.AT_Error_Y);
    __AT_Target_Angle__Entry.SetDouble(Code_Gen_Model_B.AT_Target_Angle);
    __Active_GameState__Entry.SetDouble(Code_Gen_Model_B.Active_GameState);
    __Align_Amp__Entry.SetDouble(Code_Gen_Model_B.Align_Amp);
    __Align_Speaker__Entry.SetDouble(Code_Gen_Model_B.Align_Speaker);
    __BL_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Module_Angle);
    __BL_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Wheel_Speed);
    __BL_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Wheel_Speed_in);
    __BL_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BL_Steer_Module_Angle);
    __BR_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Module_Angle);
    __BR_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Wheel_Speed);
    __BR_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);
    __BR_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BR_Steer_Module_Angle);
    __Button_Disable_Wheels__Entry.SetDouble(Code_Gen_Model_B.Button_Disable_Wheels);
    __Button_Enable_Wheels__Entry.SetDouble(Code_Gen_Model_B.Button_Enable_Wheels);
    __Button_Reset_Wheel_Offsets__Entry.SetDouble(Code_Gen_Model_B.Button_Reset_Wheel_Offsets);
    __Coral_ArmAngle_Error__Entry.SetDouble(Code_Gen_Model_B.Coral_ArmAngle_Error);
    __Coral_Arm_Angle_Desired__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Desired);
    __Coral_Arm_Angle_Desired_o__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Desired_o);
    __Coral_Arm_Angle_Measured__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Measured);
    __Coral_Pickup_Lower_Wait_State__Entry.SetDouble(Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State);
    __Coral_Wheel_DC__Entry.SetDouble(Code_Gen_Model_B.Coral_Wheel_DC);
    __DeadZone__Entry.SetDouble(Code_Gen_Model_B.DeadZone);
    __DeadZone1__Entry.SetDouble(Code_Gen_Model_B.DeadZone1);
    __Drive_Joystick_X__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_X);
    __Drive_Joystick_Y__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Y);
    __Drive_Joystick_Z__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Z);
    __Drive_Joystick_Z_Mode__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Z_Mode);
    __Elevator_Error__Entry.SetDouble(Code_Gen_Model_B.Elevator_Error);
    __Elevator_Height_Desired__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Desired);
    __Elevator_Height_Desired_m__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Desired_m);
    __Elevator_Height_Measured__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Measured);
    __Elevator_Height_Measured_Raw__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Measured_Raw);
    __Elevator_Height_Offset__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Offset);
    __Elevator_Integral__Entry.SetDouble(Code_Gen_Model_B.Elevator_Integral);
    __Elevator_Integral_o__Entry.SetDouble(Code_Gen_Model_B.Elevator_Integral_o);
    __Elevator_LowerPickup_Reset__Entry.SetDouble(Code_Gen_Model_B.Elevator_LowerPickup_Reset);
    __Elevator_LowerPickup_Reset_tp__Entry.SetDouble(Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp);
    __Elevator_Proportional__Entry.SetDouble(Code_Gen_Model_B.Elevator_Proportional);
    __Elevator_Proportional_l__Entry.SetDouble(Code_Gen_Model_B.Elevator_Proportional_l);
    __FL_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Module_Angle);
    __FL_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Wheel_Speed);
    __FL_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Wheel_Speed_in);
    __FL_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FL_Steer_Module_Angle);
    __FR_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Module_Angle);
    __FR_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Wheel_Speed);
    __FR_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Wheel_Speed_in);
    __FR_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FR_Steer_Module_Angle);
    __Face_Away_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Away_Driver);
    __Face_Left_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Left_Driver);
    __Face_Right_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Right_Driver);
    __Face_Toward_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Toward_Driver);
    __FixPtRelationalOperator__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator);
    __FixPtRelationalOperator_d__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator_d);
    __FixPtRelationalOperator_ji__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator_ji);
    __FixPtRelationalOperator_k__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator_k);
    __FixPtRelationalOperator_m__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator_m);
    __FixPtRelationalOperator_ml__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator_ml);
    __FixPtRelationalOperator_n__Entry.SetDouble(Code_Gen_Model_B.FixPtRelationalOperator_n);
    __Gamepad_POV_Down__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Down);
    __Gamepad_POV_Left__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Left);
    __Gamepad_POV_Right__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Right);
    __Gamepad_POV_Up__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Up);
    __Gyro_Angle_Calibrated_deg__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_Calibrated_deg);
    __Gyro_Angle_Field_rad__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_Field_rad);
    __Gyro_Angle_SPF__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_SPF);
    __Gyro_Angle_rad__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_rad);
    __Is_Absolute_Steering_SPF__Entry.SetDouble(Code_Gen_Model_B.Is_Absolute_Steering_SPF);
    __Is_Absolute_Translation_SPF__Entry.SetDouble(Code_Gen_Model_B.Is_Absolute_Translation_SPF);
    __Is_Boosting__Entry.SetDouble(Code_Gen_Model_B.Is_Boosting);
    __KF_Position_X__Entry.SetDouble(Code_Gen_Model_B.KF_Position_X);
    __KF_Position_Y__Entry.SetDouble(Code_Gen_Model_B.KF_Position_Y);
    __Odom_Position_X__Entry.SetDouble(Code_Gen_Model_B.Odom_Position_X);
    __Odom_Position_Y__Entry.SetDouble(Code_Gen_Model_B.Odom_Position_Y);
    __Odometry_X_global_TEAR_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_X_global_TEAR_ft);
    __Odometry_X_global_est_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_X_global_est_ft);
    __Odometry_Y_global_TEAR_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_Y_global_TEAR_ft);
    __Odometry_Y_global_est_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_Y_global_est_ft);
    __Reefscape_Motors_Enable__Entry.SetDouble(Code_Gen_Model_B.Reefscape_Motors_Enable);
    __Robot_Reached_Destination__Entry.SetDouble(Code_Gen_Model_B.Robot_Reached_Destination);
    __Spline_Enable__Entry.SetDouble(Code_Gen_Model_B.Spline_Enable);
    __Spline_Follow_Index__Entry.SetDouble(Code_Gen_Model_B.Spline_Follow_Index);
    __Spline_Num_Poses__Entry.SetDouble(Code_Gen_Model_B.Spline_Num_Poses);
    __Spline_Out_Of_Bounds__Entry.SetDouble(Code_Gen_Model_B.Spline_Out_Of_Bounds);
    __Spline_Target_X__Entry.SetDouble(Code_Gen_Model_B.Spline_Target_X);
    __Spline_Target_Y__Entry.SetDouble(Code_Gen_Model_B.Spline_Target_Y);
    __Steer_Joystick_X__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_X);
    __Steer_Joystick_Y__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_Y);
    __Steer_Joystick_Z__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_Z);
    __Steering_Abs_Angle__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Angle);
    __Steering_Abs_Angle_Active__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Angle_Active);
    __Steering_Abs_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Cmd);
    __Steering_Abs_Cmd_SPF__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Cmd_SPF);
    __Steering_Abs_Gyro__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Gyro);
    __Steering_Abs_Gyro_Latch__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Gyro_Latch);
    __Steering_Localized_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Localized_Cmd);
    __Steering_Localized_PID__Entry.SetDouble(Code_Gen_Model_B.Steering_Localized_PID);
    __Steering_Rel_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Rel_Cmd);
    __Steering_Rel_Cmd_SPF__Entry.SetDouble(Code_Gen_Model_B.Steering_Rel_Cmd_SPF);
    __Test_Mode__Entry.SetDouble(Code_Gen_Model_B.Test_Mode);
    __Translation_Angle__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle);
    __Translation_Angle_SPF__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle_SPF);
    __Translation_Speed__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed);
    __Translation_Speed_RL__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_RL);
    __Translation_Speed_SPF__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_SPF);
    __Translation_Steering_Cmd__Entry.SetDouble(Code_Gen_Model_B.Translation_Steering_Cmd);
    __previous_call_was_for_speaker__Entry.SetDouble(Code_Gen_Model_B.previous_call_was_for_speaker);
}
void SimulinkSmartDashboardInterface::GameStateChangeCallback() {}
