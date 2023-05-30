//WAP in c to Swap Variable Value of i and j not using Temporary Variable.
#include<stdio.h>

int main(){
    int i,j;
    printf("Enter the First Number to be Swaped (i): ");
    scanf("%d",&i);

    printf("Enter the Second Number to be Swaped (j); ");
    scanf("%d",&j);

    printf("Before Swaping the Number: i=%d and j=%d\n",i,j);
    //let i=5 and j=6
    i=i+j;//i=5+6=11
    j=i-j;//j=11-6=5
    i=i-j;//i=11-5=6

    printf("After Swaping the Number: i=%d and j=%d",i,j);
    return 0;
}