//WAP in c to calculate whether The given number is Palindrome or not
#include<stdio.h>
int main(){
    int num,rev=0,a,org;
    printf("Enter The Number: ");
    scanf("%d",&num);
    org=num;
    do{
        a=num%10;
        num/=10;
        rev=rev*10+a;
    }
    while(num>0);
    if(rev==org){
        printf("The number You Give %d is Palindrome",rev);
    }
    else{
        printf("The Number You Give %d is Not Palindrome",org);
    }
}

