//WAP in c to find maximum from given 3 numbers using conditional operater.
#include<stdio.h>

int main(){
    int a,b,c,m1;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    
    printf("Enter the Second Number: ");
    scanf("%d",&b);

    printf("Enter the Third Number: ");
    scanf("%d",&c);

    m1=(a>b?a:b)>c?a>b?a:b:c;
    printf("%d is Greatest",m1);
    return 0;
}