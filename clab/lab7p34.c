////WAP in c to print following Partten.
//       * 
//     * *
//   * * *
// * * * *

#include<stdio.h>
int main (){
    int ser,i,j;
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);
    
    for(i=1;i<=ser;i++){
        for(j=1;j<=ser-i;j++){
            printf(" ");

        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    }
