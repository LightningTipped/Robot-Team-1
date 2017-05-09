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
	while(true){
		take_picture();
		int my_pixel = get_pixel(160, 120, 3);
		printf("%d\n", my_pixel);
		if(my_pixel >= 127){
			set_motor(1, 50); //tells motor 1 to go a bit
			set_motor(2, 50); //tells motor 2 to go a bit
			sleep1(0,1000); //sleeps
		}
	}	
	stop(1);
	stop(2);
	
	return 0;
}
int moveBackward(){
	set_motor(1, -50);
	sleep1(0,1000); //sleeps
	
	set_motor(2, -50);
	sleep1(0,1000); //sleeps
	
	stop(1);
	stop(2);
	
	return 0;
}
