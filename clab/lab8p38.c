//WAP in c to search an elements from an array and print the locarion of the elements using linear search approch.
#include<stdio.h>
int main(){
    int term,i,key;
    int ar[100];
//Input of term
    printf("Enter The number of Term: ");
    scanf("%d",&term);

//Input of element
    for(i=0;i<term;i++){
        printf("Enter The Elements: ");
        scanf("%d",&ar[i]);
    }
//Enter number To be Find.
    printf("Enter The Number to be Find: ");
    scanf("%d",&key);
//Process and Printing of Result.
    for(i=0;i<term;i++){
        if(key==ar[i]){
            printf("The Number is Found In %d place",ar[i]);
            return 0;
        }
    }
    printf("The Number You Entered is not Found.");
    return 0;
    
}