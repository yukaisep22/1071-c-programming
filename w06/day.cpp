#include<stdio.h>
#include<ctype.h>

int leap(int year)
{
    if ((year%4==0 && year%100!=0 ) || (year%400==0))
        return 1;
    else
        return 0;
}



int main()
{
    int year,month,day;
    int sum=0;
    char cont='Y';
    int m[]= {31,28,31,30,31,30,31,31,30,31,30,31};

    while (cont=='Y')
    {
        printf("Enter yy/mm/dd:");
        scanf("%d/%d/%d",&year,&month,&day);
        m[1]=28;
        sum=0;
        if(leap(year)) m[1]++;
        for(int i=0; i<month-1; i++)
        sum=sum+m[i];
        printf("%d days passed since %d/1/1\n",sum+day,year);
        printf("Continue(Y/N)?");
        getchar();
        cont=toupper(getchar());
        printf("\n");

    }

}
