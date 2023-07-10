//WAP in C to calculate x^n using a recursive function.
#include <stdio.h>

float power(float x, int n) {
    if (n == 0) {
        return 1.0;
    }
    else if (n > 0) {
        return x * power(x, n - 1);
    }
    else {
        return 1.0 / (x * power(x, -n - 1));
    }
}

int main() {
    float x;
    int n;
    printf("Enter the base (x): ");
    scanf("%f", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    float result = power(x, n);
    printf("%.2lf raised to the power of %d is: %.2f\n", x, n, result);

    return 0;
}
