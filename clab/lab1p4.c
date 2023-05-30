//# clab
//WAP a c program to calculate the area of the triangle 
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is %f", area);

    return 0;
}
