//WAP in c to print the fibonacci serise up to 10
#include<stdio.h>

int main(){
    int ser=10;
    int fibo=0,a=0,b=1;
    printf("Fibonacci serise of first %d term: \n",ser);
    do
    {
        printf("%d ",a);
        fibo=a+b;
        a=b;
        b=fibo;
        ser--;
        
    }
    while(ser>0);

} 