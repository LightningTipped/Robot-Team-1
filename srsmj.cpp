#include <stdio.h>
#include <time.h>
#include "E101.h"

/* motor 1 = left hand side
 * motor 2 = right hand side 
/**/

int moveForward(){
	
	int lSpeed = 50;
	int rSpeed = 50;
	int scale = 0.2;
	int total = 0;
	bool isWhite = false;
	int count = 0;
	
	while(true){
		
		count = 0;
		total = 0;
		take_picture();
		for(int i=0, i<319, i++){
			isWhite = (get_pixel(120, i, 3) > 100);
			if(isWhite){
				total += (160-i);
				count ++;
		}
		
		printf("count: %d\n", count);
		printf("result: %d\n", total);
		
		set_motor(1, lSpeed + total*scale);
		set_motor(2, rSpeed + total*scale);
	}	
	stop(1);
	stop(2);
	
	return 0;
}
int moveBackward(){
	set_motor(1, lSpeed - total*scale);
	set_motor(2, rSpeed - total*scale);
	
	stop(1);
	stop(2);
	
	return 0;
}

int main(){
	init();
	moveForward();
	
	return 0;
}
