#include<stdio.h>

int main()
{
    int height,weight;
    float bmi;
    float s,d;
    printf("Enter your height and weight (-1 to exit):");
    scanf("%d %d",&height,&weight);
    while(height!=-1 && weight!=-1)
    {
        bmi=weight/((height/100.0)*(height/100.0));
        printf("Your BMI is %.1f ",bmi);
        if(bmi<18.5)
        {
            printf("(體重過輕)\n");
            s=(height/100.0)*(height/100.0)*18.5;
            d=s-weight;
            printf("The normal BMI (18.5) = %.1f. You need to gain %.1f kg to normal.\n\n",s,d);
            return main();
        }
        else if(bmi<24)
        {
            printf("(正常範圍)\n\n");
            return main();
        }
        else if(bmi<27)
        {
            printf("(稍重)\n");
            s=(height/100.0)*(height/100.0)*24;
            d=weight-s;
            printf("The normal BMI (24) = %.1f. You need to reduce %.1f kg to normal.\n\n",s,d);
            return main();
        }
        else if(bmi<30)
        {
            printf("(輕度肥胖)\n");
            s=(height/100.0)*(height/100.0)*24;
            d=weight-s;
            printf("The normal BMI (24) = %.1f. You need to reduce %.1f kg to normal.\n\n",s,d);
            return main();
        }
        else if(bmi<35)
        {
            printf("(中度肥胖)\n");
            s=(height/100.0)*(height/100.0)*24;
            d=weight-s;
            printf("The normal BMI (24) = %.1f. You need to reduce %.1f kg to normal.\n\n",s,d);
            return main();
        }
        else
        {
            printf("(重度肥胖)\n");
            s=(height/100.0)*(height/100.0)*24;
            d=weight-s;
            printf("The normal BMI (24) = %.1f. You need to reduce %.1f kg to normal.\n\n",s,d);
            return main();
        }
    }
}
