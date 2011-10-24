//#include "Spike.h"	
//
///**
// * Autonomous code
// * 
// */
//void Spike::AutonomousInit(void)
//{	
//	GetWatchdog().SetEnabled(false);
//	MiniGo->Set(0.95);//servo all the way in
//	last_floorswitch=NEITHER;
//	seen_both=false;
//	l_count = 999999;
//	r_count = 999999;
//	wait_count=0;
//	arm_limit_hit = false;
//	timer=0;
//	ClawClose();
//	ColumnUp();
//}
//
//void Spike::AutonomousPeriodic()
//{	
//	if(!was_autonomous) AutonomousInit();
//	was_autonomous=true;
//	GetWatchdog().Feed();
//	sendIOPortData();
//	ClawClose();
//	static int both_count = MAX_BOTH_COUNT;
//	static int safety_net = 0;
//	if (!ArmSwitchUpper->Get())arm_limit_hit = true;
//	float distance_feet = (frontDistance->GetVoltage())*1024/5/2.54/12;
//	if (ArmSwitchUpper->Get() && timer > 80)ArmMotor->SetRaw(127-64);
//	
//	if(!lFloorSwitch->Get()) {
//		left_floorswitch=true;
//		if(!seen_both) l_count = 0;}	
//	else{
//		left_floorswitch=false;
//		l_count++;}
//
//	if(!rFloorSwitch->Get()) {
//		rght_floorswitch=true;
//		if(!seen_both) r_count = 0;}
//	else{
//		rght_floorswitch=false;
//		r_count++;}
//
//	//Oh Crap!
//	//reset first
//	if (rFloorSwitch->Get() || lFloorSwitch->Get()){
//		safety_net = 0;
//	}
//	if (!rFloorSwitch->Get() && !lFloorSwitch->Get()){
//		if (safety_net > 10){//.25 seconds of nothing...
////			both_count = 0; //make BOTH happen
//		}
//		safety_net ++;
//	}
//	if(left_floorswitch) last_floorswitch = LEFT;
//	if(rght_floorswitch) last_floorswitch = RIGHT;
//	if ((l_count < 3 && r_count < 3) && timer>80/* && !mFloorSwitch->Get()*/) {
//		last_floorswitch = BOTH;
//		both_count = 0;
//		seen_both=true;
//	}
//	//if (distance_feet < 3.5 && arm_limit_hit==true)last_floorswitch = STOP;
//	
//	//turn left
//#ifdef _AUTONOMOUS_CENTER_LEFT
//	if (last_floorswitch==BOTH || both_count < MAX_BOTH_COUNT){
//		last_floorswitch = LEFT;
//		both_count++;
//		seen_both=true;
//	}
//#endif
//	
//#ifdef _AUTONOMOUS_CENTER_RIGHT
//	if (last_floorswitch==BOTH || both_count < MAX_BOTH_COUNT){
//		last_floorswitch = RIGHT;
//		both_count++;
//		seen_both=true;
//	}
//#endif	
//	
//	/*if ((last_floorswitch==BOTH || both_count < MAX_BOTH_COUNT) && AutoSwitch1->Get() && AutoSwitch4->Get()) {
//		if (!AutoSwitch2->Get()){
//			last_floorswitch = LEFT;
//			both_count ++;
//		}
//		if(!AutoSwitch3->Get()){
//			last_floorswitch = RIGHT;
//			both_count ++;
//		}
//		seen_both=true;
//	}*/
//	
//	
//	/*	if (last_floorswitch==BOTH || both_count < 15){
//			Drive->ArcadeDrive(.45,.65);
//			both_count ++;*/
//	//		if(!left_floorswitch || !rght_floorswitch) off_line = true;
//	//		if(!off_line) last_floorswitch=BOTH;
//	//	}
//		if(last_floorswitch==NEITHER) {
//			Drive->ArcadeDrive(-0.75,0.0);
//		}
//		else if(last_floorswitch==RIGHT) {
//			if (both_count < MAX_BOTH_COUNT) Drive->TankDrive(0.75,-0.7);
//			else Drive->ArcadeDrive(-0.75,-.25);
//			//Drive->ArcadeDrive(0.5,-0.55);
//		}
//		else if(last_floorswitch==LEFT) {
//			if (both_count < MAX_BOTH_COUNT)Drive->TankDrive(-0.5,0.7);
//			else Drive->ArcadeDrive(-0.75,0.25);
//			//Drive->ArcadeDrive(0.5,0.55);
//
//}
//	
//	if (last_floorswitch==STOP){
//		wait_count++;
//		if(wait_count==40)ClawOpen();
//		if (wait_count>100 && distance_feet < 6){
//			Drive->ArcadeDrive(0.65,0);
//		}
//	}
//	
//	//else Drive->ArcadeDrive(-0.5,0.0);
//	
//	
//
////		if(last_floorswitch==LEFT || last_floorswitch==RIGHT) {
////					Drive->Drive(0.0,0.0);
////		}
////		if(last_floorswitch==NEITHER) {
////		Drive->Drive(-0.25,-0.0005); //4 wheel
////	
////		}
//		
//		//Drive->Drive(-0.25,0.01);//6 wheel
//		
//	//test of the distance sensor
////	float distance_feet = (frontDistance->GetVoltage())*1024/5/2.54/12;
////	if (distance_feet > 5) Drive->Drive(0.15,0.0);
//	timer++;
//	
//}
//
//void Spike::AutonomousContinuous()
//{
//	
//}
