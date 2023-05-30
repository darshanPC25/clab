//WAP in c to create a calculator for arithmatic operation like +,-,* and / using switch statemate.
#include<stdio.h>

int main(){
    

    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);

    char ch;
    fflush(stdin);
    printf("Enter the Arithmatic Operator(+,-,*,/): ");
    scanf("%c",&ch);
    
    switch(ch){
        case '+':
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
        case '/':
            if (num2 == 0){
                printf("You Give Second Number as 0 that give Divide by Zero Error!!!");
                break;
            }
            else 
                {printf("%d / %d = %f",num1,num2,(float)num1/num2);
                break;
            }
        default:
            printf("Please Enter Right Arithmatic Operator !!!");
            break;
    }
    return 0;

}