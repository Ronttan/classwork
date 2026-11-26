#include<stdio.h>
int main()
{
    long long i,x1,x2,a,b;
    x1=0;
    x2=1;
    printf("0\n1\n");
    for(i=3;i<=100;i++)
    {
        if(i%2!=0)
        {
            a=x1+x2;
            printf("%lld\n",a);
            x1=x2;
            x2=a;
        }
        else
        {
            b=x2-x1;
            printf("%lld\n",b);
            x1=x2;
            x2=b;
        }
    }
} 