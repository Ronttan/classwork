#include<stdio.h>
int main()
{
    float x,y,cha,ji,outcome;
    while(1)
    {
        printf("请输入任意两个浮点数:");
        scanf("%f %f",&x,&y);
        if(x<=0 || y<=0)
        {
            printf("不可以输入负数或零,程序停止\n");
            break;
        }
        cha=x-y;
        ji=x*y;
        outcome=cha*ji;
        printf("这两个浮点数的差值除以二者的乘积所得的结果为%.4f\n\n",outcome);    
    }
}    