//WAP in c to find the greatest number in the array.
#include<stdio.h>
int main(){
    int term,i,temp;
    int a[100];
//Input of Terms
    printf("Enter The Number of Term: ");
    scanf("%d",&term);
//Input of Array Elements 
    for(i=0;i<term;i++){
        printf("Enter The Elements: ");
        scanf("%d",&a[i]);
    }
//Prosses
    temp=a[0];
    for(i=1;i<term;i++){
        if(temp<a[i])
            temp=a[i];
        
    }
//Printing of Result
    printf("%d is the a Greatest.",temp);
}