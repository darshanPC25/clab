//WAP in c to calculate sum of given series: x + X^2/2! + X^3/3! + X^4/4! ............
#include<stdio.h>
#include<math.h>

int main (){
    int num,ser,fact;
    printf("Enter The Number: ");
    scanf("%d",&num);
    float sum=num;
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);

    for(int i=1;i<ser;i++){
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        sum=sum+(pow(num,i)/fact);

    }
    printf("Sum of series is %f",sum);
    
}