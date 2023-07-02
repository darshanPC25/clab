//WAP in c to find the second largest number in an array.
#include<stdio.h>
int main(){
    int term,i,great1,great2;
    int a[100];
    printf("Enter The Number of Term: ");
    scanf("%d",&term);

//Input of Array.
    for(i=0;i<term;i++){
        printf("Enter The Elements: ");
        scanf("%d",&a[i]);
    }
//Prosses
    great1=great2=a[0];
    for(i=0;i<term;i++){
        if(a[i]>great1){
            great2=great1;
            great1=a[i];
        }
        else if(a[i]>great2 && a[i]<great1){
            great2=a[i];
        }
    }
//Printing of the Results
    printf("The Second Largest Number are %d",great2);

    
    }   