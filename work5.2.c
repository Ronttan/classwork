#include<stdio.h>
void main()
{
    int a,b,c;
    printf("输入任意两个数为a,b赋值");
    scanf("%d,%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("交换它们的值后输出的结果是a=%d,b=%d\n",a,b);
}