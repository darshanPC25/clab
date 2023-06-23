//WAP in c to calculate the sum of given series: 1+1/4+1/9......
#include<stdio.h>
#include<math.h>
int main(){
    int ser;
    float sum=0;
    printf("Enter The Number of series: ");
    scanf("%d",&ser);

    for(int i=1;i<=ser;i++){
        sum+=((float)1/pow(i,2));

    }
    printf("Sum of series is %f",sum);
}