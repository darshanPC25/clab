// With a recursive function obtain the Fibonacel sequence up to 20 terms
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int numTerms = 20;

    printf("Fibonacci Sequence up to %d terms:\n", numTerms);
    for (int i = 0; i < numTerms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
