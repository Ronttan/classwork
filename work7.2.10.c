#include<stdio.h>
int main()
{
    int i,n;
    n=0;
    for(i=7;i<=100;i++)
    {
        if(i%5!=0)
        {
            printf("%4d",i);
            n++;
            if(n%5==0)
            {
                printf("\n");
            }
        }
    }
    if(n%5!=0)
    {
        printf("\n");
    }
}