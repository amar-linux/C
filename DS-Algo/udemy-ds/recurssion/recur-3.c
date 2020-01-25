#include<stdio.h>

void foo(int a){
	if (a < 1){
		return;
	}else{
		foo((a-1));
		printf ("Hello world + %d\n",a);
	}
}

int main(){

	int a =9;
	foo(a);
}
