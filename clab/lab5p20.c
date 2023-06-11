//WAP in c to check a given number is aemstrong or not
#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,a,org,i=0;
    printf("Enter a number: ");//153
    scanf("%d",&num);
    org=num;
    while(num>0){
        i++;
        num/=10;
    }
    num=org;
    while(num>0){
        a=num%10;
        sum=sum+pow(a,i);
        printf("%d\n",pow(a,i));
        num/=10;
    }                           
    if (sum==org){
        printf("%d is an Armstrong Number",org);
    }
    else{
        printf("%d is not an Armstrong Number",org);
    }
    return 0;

}