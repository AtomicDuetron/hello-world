#pragma config(Motor,  port2,           qween,         tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port10,          king,          tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		if(vexRT[Btn6D] == 1)
		{
			motor[qween] = -100;
			motor[king] = 100;
		}
		else if(vexRT[Btn5D] == 1)
		{
			motor[qween] = 100;
			motor[king] = -100;
		}
		else
		{
			motor[qween] = -vexRT[Ch2];
			motor[king] = -vexRT[Ch3];
		}
	}
}
