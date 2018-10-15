#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter temperature in C:");
    scanf("%f",&c);
    f=(c*9)/5.0+32;
    printf("%.1fC=%.1fF",c,f);
}
