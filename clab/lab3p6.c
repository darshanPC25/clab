//WAP in c to calculate energy by Equation: energy=[massXacclarationXheight + mass X Velocity^2/2]
#include<stdio.h>
#include<math.h>

int main(){

    float mass , acc , height , velocity , energy;
    
    printf("Enter the Mass of Object: ");
    scanf("%f",&mass);
    printf("Enter the Acceleration of the Object: ");
    scanf("%f",&acc);
    printf("Enter the Height of the Object: ");
    scanf("%f",&height);
    printf("Enter the Velocity of the Object: ");
    scanf("%f",&velocity);
    
    energy=(mass*acc*height)+(mass*pow(velocity,2)/2);
    printf("So,Energy is %.3f",energy);
    return 0;
}
