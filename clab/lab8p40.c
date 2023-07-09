//WAP in c to sort the element of an array using selection sort.
#include<stdio.h>
#define max 100
int main(){
    int term,i,j,temp;
    int ar[max];
//Input of Term.
    printf("Enter The Number of Term: ");
    scanf("%d",&term);

//Input of Array Elements.
    for(i=0;i<term;i++){
        printf("Enter the Element: ");
        scanf("%d",&ar[i]);
    }
//Printing of Unsorted Array.
    printf("\nThe Unsorted Array: ");
    for(i=0;i<term;i++){
        printf("\t%d",ar[i]);
    }
//Process.
    for(i=0;i<term;i++){
        for(j=i+1;j<term;j++){
            if(ar[j]<=ar[i]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
//Printing of sorted array.
    printf("\nThe Sorted Array  : ");
    for(i=0;i<term;i++){
        printf("\t%d",ar[i]);
    }

}