//WAP in c to evaluate the series : s= x^1 + x^3 +  x^5 + x^7 + x^9 + x^11.........(x is any value )
#include<stdio.h>
#include<math.h>
int main(){
    int x,ser,s=0,j=1;
    printf("s= x^1 + x^3 +  x^5 + x^7 + x^9 + x^11.........(x is any value )\n");
    printf("Enter The Number: ");
    scanf("%d",&x);
    printf("Enter The Number of Series: ");
    scanf("%d",&ser);

    for(int i=1;j<=ser;i+=2,j++){
        s=s+pow(x,i);
    }
    printf("Sum of Series:\t%d",s);
}