#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double sum,x,y;
    n=1;
    sum=1;
    x=1;
    y=-1;
    while(fabs(x)>=1e-5)
    {
        x=y*(1.0/(2*n+1));
        sum+=x;
        y=-y;
        n++;
    }
    printf("Π的近似值为%.4lf\n",sum*4.0);
}