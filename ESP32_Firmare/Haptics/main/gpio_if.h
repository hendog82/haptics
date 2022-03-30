
#define RIGHT_LEG		17
#define LEFT_LEG		16
#define BOTH_LEGS		((1ULL<<LEFT_LEG)|(1ULL<<RIGHT_LEG))

/*
 * Initializes all motor GPIOS
 *
 */
void motor_init();

/*
 * Turn selected motor ON
 */
void Left_Motor_On();
/*
 * Turn selected motor ON
 */
void Right_Motor_On();

/*
 * Turn selected motor OFF
 */
void Left_Motor_Off();
/*
 * Turn selected motor OFF
 */
void Right_Motor_Off();
