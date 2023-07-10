//WAP in C to calculate the factorial of a given number using function
#include <stdio.h>

int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    
    int result = 1;
    
    for (int i = 2; i <= number; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int fact = factorial(number);
    printf("Factorial of %d is: %d\n", number, fact);
    
    return 0;
}
