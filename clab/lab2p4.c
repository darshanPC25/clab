//WAP in c calculate division according to percentage.
#include <stdio.h>

int main(){
    int a; 
    printf("Enter Your Percentage: ");
    scanf("%d",&a);

    if (a>=75 && a<=100){
        printf("You are given Honour!!");
    }
    else if (a>=65 && a<75){
        printf("You are in First Division!!");
    }
    else if (a<65 && a>=45){
        printf("You are in Second Division!!");
    }
    else if (a<45){
        printf("You are Fail!!!");
    }
    else{
        printf("Please Enter Valid Percentage!!!!!!!1");
    }
    return 0;
} 

