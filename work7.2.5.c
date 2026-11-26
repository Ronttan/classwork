#include<stdio.h>
int main()
{
    int sum,n,a;
    sum=1;
    n=2;
    a=1;
    while(n<=6)
    {
        a=-1*a*n;
        sum=sum+a;
        n++;
    }
    printf("1!-2!+3!-4!+5!-6!=%d\n",sum);
}