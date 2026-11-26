#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("请输入两个整数a,b\n注意,b不为0\n");
    scanf("%d,%d",&a,&b);
    c=a+b;
    d=a/b;
    printf("它们的和数为%d,整除后的商数为%d\n",c,d);
}