//without using loops
#include <stdio.h>

int main()
{
    int a;
    printf("Enter Your Amount: ");
    scanf("%d",&a);
    
    int n500=a/500;
    a=a%500;
    int n100=a/100;
    a=a%100;
    int n50=a/50;
    a=a%50;
    int n20=a/20;
    a=a%20;
    int n10=a/10;
    a=a%10;
    int n5=a/5;
    a=a%5;
    int n2=a/2;
    a=a%2;
    int n1=a/1;
    a=a%1;
    printf("500:%d \n100:%d \n50:%d \n20:%d \n10:%d \n5:%d \n2:%d \n1:%d",n500,n100,n50,n20,n10,n5,n2,n1);
}