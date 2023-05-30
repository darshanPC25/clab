//WAP in c to check tha number is divisible by 3 and 7
#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(a % 2 == 0) {
        printf("%d is even.", a);
    } else {
        printf("%d is odd.", a);
    }

    return 0;
}
