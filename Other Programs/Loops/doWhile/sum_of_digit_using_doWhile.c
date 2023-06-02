//WAP in c to calculate the sum of digits of any number.
#include<stdio.h>

int main(){
    int num,sum=0,orig,a;
    printf("Enter The Number: ");
    scanf("%d",&num);
    orig=num;
    do{
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    while(num>0);
    printf("The sum of digits of %d is %d",orig,sum);
    return 0;

}