#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("请输入该一元二次方程ax²+bx+c=0的三个系数a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    printf("该一元二次方程的根为\n");
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("x1=%f\n,x2=%f\n",x1=(-b+sqrt(d))/(2*a),x2=(-b-sqrt(d))/(2*a));
    }
    else if(d==0)
    {
        printf("x1=x2=%f\n",-b/(2*a));
    }
    else if(d<0)
    {
        printf("x1=%f+%fi\n,x2=%f-%fi\n",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
    }
}