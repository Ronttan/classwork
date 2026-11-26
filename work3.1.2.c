#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入三个数字：");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    printf("他们的和是:%d",d);
    d=(a+b+c)/3;
    printf("他们的平均数是：%d",d);
}