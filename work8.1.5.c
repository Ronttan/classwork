#include<stdio.h>
int main()
{
    int a[20],i;
    printf("请输入20个整数:\n");
    for(i=0;i<=20;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,n;
    m=0;
    for(i=0;i<=20;i++)
    {
        for(n=2;n<a[i];n++)
        {
            if(a[i]%n==0)
            {
                break;
            }
            else
            {
                m++;
            }
        }
    }
    printf("这20个整数中,素数的个数为%d",m);
}