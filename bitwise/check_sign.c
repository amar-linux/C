#include<stdio.h>

int main(){

    int sign =0;
    int data =0;


    printf ("Enter the data to be checked: ");
    scanf("%d",&data);

    if (data < 0){
        printf("The data is negative.\n");
    }else{
        printf ("The date is positive.\n");
    }
}
