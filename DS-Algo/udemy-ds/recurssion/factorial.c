#include<stdio.h>


int glogal;

int find_factorial(int num, int value){

	if (num == 1){
		return value;
	}else{
		value = value * num;
		find_factorial((num-1),value);
	}
}



int main (){

        int num,value;
	printf ("Enter the number whose factioal is to be calculated: ");
	scanf("%d",&num);

	value = find_factorial(num, 1);
	printf ("The value os factorial is %d\n",value);
}

