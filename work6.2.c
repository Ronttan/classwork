#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z;
    printf("请分别输入x,y的值");
    scanf("%f %f",&x,&y);
    if(x>0 && y>0)
    {
        printf("z的值为%f\n",z=log(x)+log(y));
    }
    else if(x<0 && y>0)
    {
        printf("z的值为%f\n",z=sin(x)+sin(y));
    }
    else if(x<0 && y<0)
    {
        printf("z的值为%f\n",z=exp(2*x)+exp(3*x));
    }
    else if(x>0 && y<0)
    {
        printf("z的值为%f\n",z=tan(x+y));
    }
}