//Write a program that prompts the user to enter a series of numbers (terminated by entering a negative number) and 
//calculates the sum of all the positive numbers entered. Display the final sum.
#include<stdio.h>

int main(){
    int num=0,sum=0;
    

    while(num>=0){
        sum=sum+num;
        printf("Enter The Number: ");
        scanf("%d",&num);
        
    }
    printf("The Sum of All Positive Number You Enter is %d",sum);
    
}