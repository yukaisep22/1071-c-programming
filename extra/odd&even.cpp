#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two integers:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        printf("%d>%d\n",n1,n2);
        if(n1%2==0)
        {
            printf("%d is even;",n1);
        }
        else
        {
            printf("%d is odd;",n1);
        }
        if(n2%2==0)
        {
            printf("%d is even.",n2);
        }
        else
        {
            printf("%d is odd.",n2);
        }
    }
    if(n1<n2)
    {
        printf("%d<%d\n",n1,n2);
        if(n1%2==0)
        {
            printf("%d is even;",n1);
        }
        else
        {
            printf("%d is odd;",n1);
        }
        if(n2%2==0)
        {
            printf("%d is even.",n2);
        }
        else
        {
            printf("%d is odd.",n2);
        }
    }
    if(n1==n2)
    {
        printf("%d=%d\n",n1,n2);
        if(n1%2==0)
        {
            printf("%d is even.",n1);
        }
        else
        {
            printf("%d is odd.",n1);
        }

    }

}
