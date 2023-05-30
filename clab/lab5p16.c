//WAP in c to find the factorial
#include<stdio.h>

int main(){
    int fact=1,num;
    printf("Enter The number: ");//num=5
    scanf("%d",&num);
    int n = num;
    while(num>0)
    {
        fact=fact*num;
        num--;
    }
    printf("\n factorial of num=%d is %d",n,fact);
    return 0;
}