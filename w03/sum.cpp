#include <stdio.h>

int main()
{
    int n1,n2;
    int sum=0;
    printf("Enter n1 n2:");
    scanf("%d %d",&n1,&n2);
    while(n1!=-1 && n2!=-1)
    {
        sum=0;
        for(int i=n1; i<=n2; i++)
        {
            sum += i;
        }
        printf("sum(%d %d)=%d\n",n1,n2,sum);
        return main();
    }
}
