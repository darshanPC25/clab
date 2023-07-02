//WAP in c to copy one array into another array;
#include<stdio.h>
int main(){
    int term,i;
    int a[100],b[100];
//Input of Array Elements.
    printf("Enter The number of term: ");
    scanf("%d",&term);
//Input of array 
    for(i=0;i<term;i++){
        printf("\n Enter The Element: ");
        scanf("%d",&a[i]);
    }
//Printing of orignal array
    printf("Original Array :");
    for(i=0;i<term;i++){
        printf("\t%d",a[i]);
    }
//Prosses
    for(i=0;i<term;i++){
        b[i]=a[i];
        
    }
//printing of Result
    printf("\nCopied Array   :");
    for(i=0;i<term;i++){
        printf("\t%d",b[i]);
    }

    


}