//WAP in c to add first seven of following series usinf for loop -> 1/1! + 2/2! + 3/3! + ...........
#include<stdio.h>
#include<math.h>
int main(){
    int ser,fact=1;
    float sum=0;
    printf("Enter Number of Series: ");
    scanf("%d",&ser);
    
    for(int i=1;i<=ser;i++){
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        sum=sum+((float)i/fact);
        printf("%f\t",sum);
    }
} 