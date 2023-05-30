//WAP in c to check a given number is aemstrong or not
#include<stdio.h>
int main(){
    int num,sum=0,a,org;
    printf("Enter a number: ");//153
    scanf("%d",&num);
    org=num;
    while(num>0){
        a=num%10;
        num/=10;
        sum=sum+(a*a*a);

    }
    if (sum==org){
        printf("%d is an Armstrong Number",org);
    }
    else{
        printf("%d is not an Armstrong Number",org);
    }

}