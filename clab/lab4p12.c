//WAP in c to print name of day according to input
#include<stdio.h>
int main(){
    int week;
    printf("Enter The Number Between 1 to 7: ");
    scanf("%d",&week);

    switch(week){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thusday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Enter a Number Between ! to 7!!!");
    }
    return 0;
}