#include<stdio.h>

void sorting(int d[],int n,int temp)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(d[j]>d[j+1])
            {
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }

}


int main()
{
    int d[10]= {71,40,96,24,55,32,19,7,48,87};
    int n=10;
    int temp;

    printf("Original:");
    for(int i=0; i<n; i++)
    {
        printf("%3d",d[i]);
    }
    printf("\n");
    sorting(d,n,temp);
    printf("Sorting: ");
    for(int i=0; i<n; i++)
    {
        printf("%3d",d[i]);
    }

}
