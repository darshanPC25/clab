//WAP in c to sort an element of array in accendind order using Bubble sort algo.
#include<stdio.h>
#define max 100
int main(){
    int term,i,j,temp,orgterm;
    int ar[max];
//Input of Terms.
    printf("Enter The Number of Terms: ");
    scanf("%d",&term);
    orgterm=term;

//Input of Elements.
    for(i=0;i<term;i++){
        printf("Enter The Element: ");
        scanf("%d",&ar[i]);
    }
//Printing of Orignal array
    printf("\nThe Unsorted Array: ");
    for(i=0;i<term;i++){
        printf("\t%d",ar[i]);
    }
//Procsee.
    for(i=0;i<term;i++){
        for(j=0;j<term-1-i;j++){
            if(ar[j]>=ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
//Printing of sorted Array.
    printf("\nThe Sorted Array  : ");
    for(i=0;i<orgterm;i++){
        printf("\t%d",ar[i]);
    }
}