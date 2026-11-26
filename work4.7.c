#include<stdio.h>
void main()
{
    int a,b,c,n,sum;
    n=126;
    a=n/100;
    b=(n-a*100)/10;
    c=n-100-b*10;
    sum=a+b+c;
    printf("sum=%d\n",sum);
}