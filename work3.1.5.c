#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("输入三个一位整数：");
    scanf("%d,%d,%d",&a,&b,&c);
    d=a*100+b*10+c;
    printf("组成的整数为：%d",d);
}