//WAp in c to print following Partten.
// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main (){
    int ser;
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);

    for(int i=1;i<=ser;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}