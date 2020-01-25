#include<stdio.h>


int main(){

    int a;
    int b;

    printf ("Enter the value of a: ");
    scanf("%d",&a);

    printf ("Enter the value of b: ");
    scanf("%d",&b);

    int result = a^b;

    if (result < 0){
        printf ("The numbers were of different sing.\n");
    }
    else{
        printf ("The numbers were of same sign.\n");
    }
}
