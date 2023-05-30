// WAP in c to find greatest number anong three number using nested if else.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    if(c>=b){
        if(c>=a){
            printf("%d is the greatest",c);
        }
        else{
            printf("%d is the greatest",a);
        }

    }
    else {
        if(b>=a){
            printf("%d is the greatest",b);
        }
        else{
            printf("%d is the greatest",a);
        }
    }

    return 0;
}