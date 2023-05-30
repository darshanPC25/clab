//WAP in c read one character from the user and print as vowel or consonant using switch statement
#include<stdio.h>

int main(){
    char ch;
    printf("Enter the char: ");
    scanf("%c",&ch);

    switch(ch){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("Vowel.");
            break;
        default:
            printf("Consonant.");
            break;
    }
    return 0;
}