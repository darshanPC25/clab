//WAP in c to find a number is odd or even using switch 
#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    switch(num%2){
        case 0:
            printf("The Number is Even.");
            break;
        case 1:
            printf("The Number is Odd.");
            break;
    }
    return 0;
}