#include<stdio.h>
void main()
{
    int a,b,h,s;
    printf("请依次输入该梯形的上底，下底和高：");
    scanf("%d,%d,%d",&a,&b,&h);
    s=(a+b)*h/2;
    printf("该梯形的面积为%d",s);
}