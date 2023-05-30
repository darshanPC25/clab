//WAP in c to print the fibonacci serise up to 10
#include<stdio.h>

int main(){
    int ser=10;
    int fibo=0,a=0,b=1;
    printf("Fibonacci serise of first %d term: \n",ser);
    while(ser>0){
        printf("%d ",a);
        fibo=a+b;
        a=b;
        b=fibo;
        ser--;
        
    }

} 