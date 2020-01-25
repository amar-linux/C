#include<stdio.h>
#include<stdlib.h>
#define max 8

int find_factorial(int num){

    if (num == 0){
        return 1;
    }else {
        return(num* find_factorial(num -1 ));
    }
}

int main(){


    int num,i, value;
    int FLAG = 1;
    char buf[max];
    printf("Enter the number: ");
    fgets(buf,max,stdin);

    for (i =0; i <= max; i++){
        if ((atoi((char*)buf[i])) == 0)
            FLAG = 0;
    }
        

    
    num = atoi(buf);
    if (FLAG == 0){
        printf ("Entered value is not integer.");
    }else{
        value = find_factorial(num);
    }
    printf ("The value of the factorial is %d\n",value);
}
