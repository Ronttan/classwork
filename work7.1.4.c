#include<stdio.h>
#include<math.h>
int main()
{
    double x,a,b;
    int n=1;
    printf("请输入一个数:");
    scanf("%lf",&x);
    a=x;
    b=x;
    while(fabs(a)>=1e-5)
    {
        a=-a*x*x/((2*n)*(2*n+1));
        b+=a;
        n++;
    }
    printf("sin%.4lf的近似值为%.4lf\n",x,b);
}