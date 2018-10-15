#include <stdio.h>

int main()
{
    float f,c;
    printf("Enter temperature in F:");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("%.1fF=%.1fC",f,c);
}
