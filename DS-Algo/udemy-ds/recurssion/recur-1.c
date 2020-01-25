#include<stdio.h>

int global;

void dowork(int *value){
        
	printf ("%d-in do work\n",*value);
	if (*value == 40){
		printf ("function returning from dowork after printing 40 times.\n");
	}
	else {
		(*value)++;
		dowork(value);
	}
}


int main(){

        global =0;
	printf ("I am in main:\n");
	dowork(&global);
}
	
