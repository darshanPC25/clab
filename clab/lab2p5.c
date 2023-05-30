//WAP in c to check Whether the triangle is Equilatraial , isosceles or scalene.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Sides of Triangle:");
    scanf("%d",&a);
    printf("Enter Second Sides of Triangle:");
    scanf("%d",&b);
    printf("Enter Third Sides of Triangle:");
    scanf("%d",&c);

    if(a==b && b==c) 
    {
        printf("The Triangle is Equilatrial Triangle.");
    }
    else if (a==b || b==c || c==a)
    {
        printf("The Triangle is Isosceles Triangle.");
    }
    else
    {
        printf("The Triangle is scalene Tringle.");
    }
    }   