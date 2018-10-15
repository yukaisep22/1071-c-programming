#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,m,b;
    printf("Enter your height(cm):");
    scanf("%f",&h);
    printf("Enter your weight(kg):");
    scanf("%f",&m);

    b=m/((h/100)*(h/100));
    printf("BMI=%.1f\n",b);

    if(b<18.5)
    {
        printf("過輕");
    }
    else if(b<24)
    {
        printf("正常");
    }
    else if(b<27)
    {
        printf("過重");
    }
    else if(b<30)
    {
        printf("輕度肥胖");
    }
    else if(b<35)
    {
        printf("中度肥胖");
    }
    else if(b>=35)
    {
        printf("重度肥胖");
    }
}
