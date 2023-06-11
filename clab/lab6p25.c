//WAP in c to find leap Year between year 1800 to 2050
#include<stdio.h>

int main(){
    int year;
    printf("Leap Year Between 1800 to 2050: \n");
    for(year=1800;year<=2050;year++){
        if(year%4==0){
            printf("%d\t",year);
        }
    }
}
