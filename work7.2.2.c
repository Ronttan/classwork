#include<stdio.h>
int main()
{
    int num,i,a,b,c;
    a=0;
    b=0;
    c=0;
    printf("请输入20个整数,正负号不限\n");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&num);
        if(num>0)
        {
            a++;
        }
        else if(num==0)
        {
            b++;
        }
        else if(num<0)
        {
            c++;
        }
    }
    printf("这20个数中\n正数有%d个\n负数有%d个\n0有%d个\n",a,c,b);
}