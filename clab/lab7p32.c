//WAp in c to print following Partten.
// 1234
// 123
// 12
// 1

#include<stdio.h>
int main (){
    int ser;
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);
    
    for(int i=ser;i>=0;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
}