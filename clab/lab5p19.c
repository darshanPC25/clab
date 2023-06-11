//WAP in c to check Weather the number is prime or not 
#include<stdio.h>
int main() {
    int number, i = 2;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= number / 2) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime == 1 && number != 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
