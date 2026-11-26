#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入一个正整数");
    scanf("%d",&a);
    b=a%2;
    if (a==0 || b==0)
    {
        printf("该数为偶数\n");
    }
    else if (b!=0)
    {
        printf("该数为奇数\n");
    }
}