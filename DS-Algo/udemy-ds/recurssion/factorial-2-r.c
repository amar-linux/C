#include<stdio.h>



int find_factorial(int num){

    if (num == 0){
        return 1;
    }else{
        return (num*find_factorial(num-1));
    }
}

int main(){

    int num, value;
    float numf;

    printf ("Enter the number whose factorial is to be calculated: ");
    if ((scanf("%d",&num) == 1)){

    value = find_factorial(num);
    printf ("The Factorial value is %d\n",value);
    }else{
        printf ("not an integer value.\n ");
    }
}
