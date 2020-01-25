#include<stdio.h>


int main(){

    int num;

    printf("Enter the number to be validated: ");
    scanf("%d",&num);

    if ((num !=0) &&(!(num & (num-1)))){
        printf ("The number is power of 2.\n");
    }
    else{
        printf ("The number is not the power of 2.\n");
    }
}

