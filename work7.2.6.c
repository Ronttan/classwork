#include<stdio.h>
int main()
{
    int n;
    double sum;
    n=1;
    sum=1;
    while(n<=100)
    {
        sum*=(2.0*n*2*n)/((2*n-1)*(2*n+1));
        n++;
    }
    printf("Π的值为%.4lf\n",2*sum);
}