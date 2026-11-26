#include<stdio.h>
int main()
{
    int a3,a5,a7,x,y;
    printf("请输入一个整数：");
    scanf("%d",&x);
    if (x%3==0)
    {
        a3=1;
    }
    else
    {
        a3=0;
    }
     if (x%5==0)
    {
        a5=1;
    }
    else
    {
        a5=0;
    } if (x%7==0)
    {
        a7=1;
    }
    else
    {
        a7=0;
    }
    y=a3+a5+a7;
    if (y==3)
    {
        printf("该整数能够同时被3,5,7整除\n");
    }
    else if (y==2)
    {
        if (a3==1 && a5==1)
        printf("该整数可以同时被3和5整除\n");
        else if (a3==1 && a7==1)
        printf("该整数可以同时被3和7整除\n");
        else if (a7==1 && a5==1)
        printf("该整数可以同时被5和7整除\n");
    }
    else if (y==1)
    {
        if (a3==1)
        printf("该整数只可以被3整除\n");
        else if (a5==1)
        printf("该整数只可以被5整除\n");
        else if (a7==1)
        printf("该整数只可以被7整除\n");
    }
    else if (y=0)
    {
        printf("该整数不能被3,5,7中任一个数整除\n");
    }
}    