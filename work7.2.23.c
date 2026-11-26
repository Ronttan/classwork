#include<stdio.h>
int main()
{
    int i,n,j;
    printf("100以内的素数有\n");
    for(i=2;i<=100;i++)
    {
        j=1;
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            {
                j=0;
                break;
            }
        }
        if(j==1)
        printf("%-2d",i);
    }
    printf("\n");
}