//WAP in c to calculate the sum of digits of any number.
#include<stdio.h>

int main(){
    int num,sum=0,orig,a;
    printf("Enter The Number: ");
    scanf("%d",&num);
    orig=num;

    while(num>0){
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("The sum of digits of %d is %d",orig,sum);
    return 0;

}