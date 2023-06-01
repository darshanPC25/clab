//WAP in c to reverse the given number.
#include<stdio.h>

int main(){
    int num,rev=0,a;
    printf("Enter The number: ");
    scanf("%d",&num);

    while(num>0){
        a=num%10;
        num/=10;
        rev=rev*10+a;
        
    }
        printf("%d",rev);
}
