#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorNormal, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                                            - For Loop -                                            *|
|*                                      ROBOTC on VEX 2.0 CORTEX                                      *|
|*                                                                                                    *|
|*  This program uses a "for" loop to instruct the robot to traverse a square 5 times by repeating    *|
|*  moving forward and turning behaviors 20 times.                                                    *|
|*  There is a two second pause at the beginning of the program.                                      *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Reversing 'rightMotor' (port 2) in the "Motors and Sensors Setup" is needed with the        *|
|*        "Squarebot" mode, but may not be needed for all robot configurations.                       *|
|*    2)  A "for" loop is more condensed than a "while" loop; it declares and initializes the         *|
|*        variable, makes a comparison for the condition, and increments the variable all in the      *|
|*        first line (declaration).                                                                   *|
|*    3)  The integer variable 'i' is needed to keep track of the number of times that the "for"      *|
|*        loop has run.                                                                               *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]          [Name]              [Type]                [Description]                     *|
|*    Motor Port 2        rightMotor          VEX 3-wire module     Right side motor                  *|
|*    Motor Port 3        leftMotor           VEX 3-wire module     Left side motor                   *|
\*-----------------------------------------------------------------------------------------------4246-*/


//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	wait1Msec(2000);						      // Robot waits for 2000 milliseconds before executing program

	for(int i = 0; i < 20; i++)   /* This for() loop:  declares the integer 'i' and initializes it to 0,                           */
	{                             /* repeats the code as long as 'i' is less than 20, and increments 'i' by 1 after each iteration */

		// Move forward at half power for 2 seconds
		motor[rightMotor] = 63;			    // Motor on port2 is run at half (63) power forward
		motor[leftMotor]  = 63;			    // Motor on port3 is run at half (63) power forward
		wait1Msec(2000);				        // Robot runs previous code for 2000 milliseconds before moving on

		// Turn Left at half power for 0.5 seconds
		motor[rightMotor] = 63;     	  // Motor on port2 is run at half (63) power forward
		motor[leftMotor]  = -63;    	  // Motor on port3 is run at half (-63) power reverse
		wait1Msec(500);        	        // Robot runs previous code for 500 milliseconds before moving on

	}

}														        // Program ends, and the robot stops
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
