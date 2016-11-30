/*******************************************************************************
* fly_defs.h
*
* constants and parameters
*******************************************************************************/

// Flight Core Constants
#define ARM_TIP_THRESHOLD		0.2		// radians from level to allow arming sequence 
#define TIP_ANGLE				1.5

// order of control inputs
// throttle(Z), roll, pitch, YAW, sideways (X),forward(Y)
#define VEC_THR					0
#define VEC_ROLL				1
#define VEC_PITCH				2
#define VEC_YAW					3
#define VEC_SIDE				4
#define VEC_FWD					5

// user control parameters
#define MAX_YAW_RATE			2.5		// rad/s
#define MAX_ROLL_SETPOINT		0.4		// rad
#define MAX_PITCH_SETPOINT		0.4		// rad
#define MAX_CLIMB_RATE			1.0		// m/s
#define YAW_DEADZONE			0.03
#define ALTITUDE_DEADZONE		0.06



// thread speeds, prioritites, and close timeouts
#define SETPOINT_MANAGER_HZ			100
#define SETPOINT_MANAGER_PRIORITY	18
#define SETPOINT_MANAGER_TIMEOUT	1.0
#define DSM2_CHECK_HZ				100
#define INPUT_MANAGER_HZ			100
#define INPUT_MANAGER_PRIORITY		17
#define INPUT_MANAGER_TIMEOUT		0.3
#define LOG_MANAGER_HZ				20
#define LOG_MANAGER_PRIORITY		15
#define LOG_MANAGER_TIMEOUT			1.0
#define BATTERY_MANAGER_HZ			10
#define BATTERY_MANAGER_PRIORITY	10
#define BATTERY_MANAGER_TIMEOUT		0.5
#define PRINTF_MANAGER_HZ			20
#define PRINTF_MANAGER_PRIORITY		10
#define PRINTF_MANAGER_TIMEOUT		0.3
#define BUTTON_EXIT_CHECK_HZ		10
#define BUTTON_EXIT_TIME_S			2
  
 
#define	EMERGENCY_DESCENT_RATE		0.5 // m/s

// Save File
#define FLY_SETTINGS_FILE "/root/fly_settings.json"

// for future modes, not used yet
#define  LAND_TIMEOUT			0.3
#define  DISARM_TIMEOUT			4.0