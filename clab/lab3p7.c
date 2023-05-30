//WAP in c to Swap Variable Value of i and j using Temporary Variable.
#include<stdio.h>

int main(){
    int i,j,t;
    printf("Enter the First Number to be Swaped (i): ");
    scanf("%d",&i);

    printf("Enter the Second Number to be Swaped (j); ");
    scanf("%d",&j);

    printf("Before Swaping the Number: i=%d and j=%d\n",i,j);
    
    t=i;
    i=j;
    j=t;

    printf("After Swaping the Number: i=%d and j=%d",i,j);
    return 0;
}