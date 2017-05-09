#include <stdio.h>
#include <time.h>
#include "E101.h"

//look at assignment 5 to understand this

/* motor 1 = left hand side
 * motor 2 = right hand side 
/**/

int main(){
	init();
	moveForward();
	
	
	return 0;
}

int moveForward(){
	take_picture();
	int my_pixel = get_pixel(160, 120, 3);
	if(my_pixel >= 127){
		set_motor(1, 20); //tells motor 1 to go a bit
		sleep1(5,0); //sleeps
		
		set_motor(2, 20); //tells motor 2 to go a bit
		sleep1(5,0); //sleeps
	}
	stop(1);
	stop(2);
	
	return 0;
}
int moveBackward(){
	set_motor(1, -20);
	sleep1(5,0);
	
	set_motor(2, -20);
	sleep1(5,0);
	
	stop(1);
	stop(2);
	
	return 0;
}
