// Write a program that prompts the user to enter an integer and determines whether it is positive, negative, or zero. Display an appropriate message
// based on the entered number.
#include<stdio.h>

int main(){
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    if(num>0){
        printf("The Number %d Is Positive",num);
    }
    else if(num==0){
        printf("The Number %d Is Zero",num);
    }
    else{
        printf("The Number %d Is Negative",num);
    }
}   
