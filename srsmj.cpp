#include <stdio.h>
#include <time.h>
#include "E101.h"

//look at assignment 5 to understand this

int main(){
	init();
	
	set_motor(1, 100);
	sleep1(0,500000);
	
	set_motor(2, 100);
	sleep1(0,500000);
	
	stop(1);
	stop(2);
	
	return 0;
}
