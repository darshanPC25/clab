//WAP in c to find the factorial using doWhile loop
#include<stdio.h>

int main(){
    int fact=1,num;
    printf("Enter The number: ");//num=5
    scanf("%d",&num);
    int n = num;

    do
    {
        fact=fact*num;
        num--;
    }
    while(num>0);
    
    printf("\n factorial of num=%d is %d",n,fact);
    return 0;
}