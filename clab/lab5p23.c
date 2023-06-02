//WAP in c to convert decimal intiger number to into binary number .
#include<stdio.h>
int main(){
    int num,bin=0,mlt=1,org;

    printf("Enter The Number: ");
    scanf("%d",&num);org=num;

    while(num>0){
        bin +=(num%2)*mlt;
        num=num/2;
        mlt*=10;

    }
    printf("The Binary Number of %d is %d",org,bin);
}