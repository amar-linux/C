#include<stdio.h>

int global;




void domore(int *value){

	printf ("I am in domore\n");
}



void dowork(int *value){

	domore(value);
	printf ("I am in dowrk\n");
}

void bar (int* value){
        
	dowork(value);
	printf ("I am in bar\n");
}

int main(){

        global =0;
	bar (&global);
}
