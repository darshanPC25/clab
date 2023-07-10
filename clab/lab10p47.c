//WAP in C to calculate the sum of the first 20 natural numbers using recursive function.
#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n = 20;
    int sum = sumOfNaturalNumbers(n);

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
