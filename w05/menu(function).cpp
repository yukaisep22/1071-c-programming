#include <stdio.h>

int isleap(int year)
{
    if ((year%4==0 and year%100!=0 ) or (year%400==0))
        return 1;
    else
        return 0;
}

int timeconvert(int hh,int mm,int ss)
{
    return hh*3600+mm*60+ss;
}


int main()
{

    int choice;
    int year;
    int hh,mm,ss;
    int sec;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Leap year\n");
        printf("2. Time convert\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter year:");
            scanf("%d",&year);
            if(isleap(year))
            {
                printf("year %d is a leap year.\n\n",year);
            }
            else
            {
                printf("year %d is not a leap year.\n\n",year);
            }
            break;
        case 2:
            printf("Enter hh:mm:ss : ");
            scanf("%d:%d:%d",&hh,&mm,&ss);
            sec=timeconvert(hh,mm,ss);
            printf("%d:%d:%d = %d sec\n\n",hh,mm,ss,sec);
            break;
        }
    }
}
