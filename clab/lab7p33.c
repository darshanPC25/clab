////WAP in c to print following Partten.
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<stdio.h>
int main (){
    int ser,a=1;
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);

    for(int i=1;i<=ser;i++){
        for(int j=1;j<=i;j++){
            printf("%d  ",a);a++;
        }
        printf("\n");
    }
}