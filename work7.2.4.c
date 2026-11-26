#include<stdio.h>
int main()
{
    int n;
    double sum;
    sum=1;
    n=1;
    while(n<=35)
    {
        sum*=n;
        printf("%d!=%.0lf\n",n,sum);
        n++;
    }
}