//WAP in c to find that the accepted no is Negarive ,Positive or zero
#include<stdio.h>

int main()
{
    int a;
    printf("Enter The number: ");
    scanf("%d",&a);
    
    if (a>0){
        printf("Number You Enter is Positive.");
    }
    else if (a<0){
        printf("Number You Enter is Negative");
    }
    else{
        printf("Number You Enter is Zero");
    }
    return 0;

}