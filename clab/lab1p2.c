//# clab
//WAP a c program to calculate the percentage of student marks of 5 subject 
#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5, total_marks, percentage;

    printf("Enter marks obtained in subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks obtained in subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks obtained in subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks obtained in subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks obtained in subject 5: ");
    scanf("%f", &subject5);

    total_marks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total_marks / 500) * 100;

    printf("Total marks = %f\n", total_marks);
    printf("Percentage = %f", percentage);

    return 0;
}
