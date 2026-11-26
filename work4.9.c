#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("请输入两个整数：");
    scanf("%d,%d",&a,&b);
    printf("它们的和数为%d\n",c=a+b);
    printf("它们整除后的商数为%d",d=a/b);
}