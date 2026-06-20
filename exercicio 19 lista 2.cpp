//Write a program to read the number of class hours given by two teachers and the hourly rate received by each (different amounts because one of them
// is a master and the other is a doctor). Display on the screen which teacher has the higher total salary.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float master_hour, doctor_hour, master_value, doctor_value, amount_received_m, amount_received_d;
	
	printf("write the value of the master's professor's class hour:");
	scanf("%f", &master_value);
	
	printf("write the value of the doctor professor class hour:");
	scanf("%f", &doctor_value);
	
	printf("write how many time the master teacher work:");
	scanf("%f", &master_hour);
	
	printf("write how many time the doctor professor work:");
	scanf("%f", &doctor_hour);
	
	amount_received_m = master_value * master_hour;
	amount_received_d = doctor_value * doctor_hour;
	
	printf("the value to be amount to master is %2.f $, and the value to be amount to doctor is %2.f $", amount_received_m, amount_received_d);
	
	return 0;
}
