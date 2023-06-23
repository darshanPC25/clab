//WAp in c to print following Partten.
// AAAA
// BBB
// CC
// D

#include<stdio.h>
int main (){
    int ser;
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);
    char ch='A';

    for(int i=1;i<=ser;i++){
        for(int j=ser;j>=i;j--){
            printf("%c",ch);
        }ch++;
        printf("\n");
    }
}