#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int year=0;
    printf("Enter year:");
    scanf("%d",&year);
    while(year>=0)
    {
        if ((year%4==0 and year%100!=0) or (year%400==0))
        {
            printf("year %d is a leap year.\n",year);
        }
        else
        {
            printf("year %d is not a leap year.\n",year);
        }
        return main();
    }
}
