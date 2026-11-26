#include<stdio.h>
int main()
{
    double a,e;
    int n;
    a=1.0;
    e=1.0;
    n=1;
    while(a>=1e-6)
    {
        a=a/n;
        e+=a;
        n++;
    }
    printf("e的近似值为%.4lf\n",e);
}