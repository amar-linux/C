#include<stdio.h>



int find_factorial(int num) {
	
	if (num ==0){
		return 1;
	}else {
		return (num * (find_factorial(num-1)));
	}
}




int main(){

        int num, value;
	printf ("Enter the number: ");
	scanf("%d",&num);
	value = find_factorial(num);

	printf("The value is: %d\n",value);
}
