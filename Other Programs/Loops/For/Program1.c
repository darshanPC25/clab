//Write a program that prompts the user to enter a series of numbers (terminated by entering a negative number) and 
//calculates the sum of all the positive numbers entered. Display the final sum.
#include <stdio.h>

int main() {
    int num=0,sum=0;

    do {
        sum=sum+num;
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num >= 0);

    printf("The sum of positive numbers entered is: %d\n", sum);

    return 0;
}
