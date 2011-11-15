#ifndef _globals_h_
#define _globals_h_ 1
/*THIS IS A TEST TO SEE IF THE GITHUB REPOSITORY
 * THINGY WORKS. GOOD USEABLE CODE HERE TOO.
 * 
 * 

 * 
 * yayayaya, making more changes to see if this 
 * commits properly! woohoo
 * 
 * Globals.h
 * global constants stored here
 */

//debug flags
//#define _AUTONOMOUS_CENTER_LEFT
//#define _AUTONOMOUS_CENTER_RIGHT

#define BUNNY BACK_IN_BOX

enum TurnDirection {HARD_LEFT=0, LEFT=1, STRAIGHT=2, RIGHT=3, HARD_RIGHT=4, STOP=5, BACK_UP=6};

//#define MAX_BOTH_COUNT 40
//enum Direction {LEFT=0, RIGHT=2, NEITHER=1, BOTH=3, STOP=4};

//PWM outputs
#define L_DRIVE_PWM 1
#define R_DRIVE_PWM 2
#define ARM_MOTOR_PWM 3
#define MINIBOT_RELEASE_PWM 10

//DIOs
#define ARM_SWITCH_UPPER_DIO 6
#define ARM_SWITCH_LOWER_DIO 5
#define LFLOORSWITCH_DIO 2
#define RFLOORSWITCH_DIO 4
//#define MFLOORSWITCH_DIO 3    not used anymore 
#define COMPRESSOR_LIMIT_DIO 1
#define AUTO_SWITCH1_DIO 11
#define AUTO_SWITCH2_DIO 12
#define AUTO_SWITCH3_DIO 13
#define AUTO_SWITCH4_DIO 14

//Solenoid outputs
#define COL_UP_SOL 1	//Column up Solenoid
#define COL_DN_SOL 2	//Column down solenoid 
#define GRPR_OPN_SOL 3	//Gripper open solenoid
#define GRPR_CLS_SOL 4	//Gripper closed solenoid

//Analog
#define DISTANCE_FRONT_ANA 1

//Relays
#define COMPRESSOR_RELAY 1



#endif
