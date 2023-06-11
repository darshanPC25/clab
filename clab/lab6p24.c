//WAP in c to print the sum of 1^2+2^2+3^2........n^2.
#include<stdio.h>
#include<math.h>

int main(){
    int sum=0, num=1, a;
    printf("Enter The 'n': ");
    scanf("%d",&a);

    while(num<=a){
        sum=sum+(pow(num,2));
        num++;
    }
        printf("Sum is %d\n",sum);
        return 0;
        
}