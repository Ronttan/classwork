#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}