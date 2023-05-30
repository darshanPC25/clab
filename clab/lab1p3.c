//# clab
//WAP c program to convert temprature in celsius to fehrenhit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%f Celsius = %f Fahrenheit", celsius, fahrenheit);

    return 0;
}
