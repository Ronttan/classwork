#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入两个数做被除数与除数");
    scanf("%d %d",&a,&b);
    if (b!=0)
    {
        d=a%b;
        c=a/b;
        printf("商为%d,余数为%d\n",c,d);
    }
    else if (b==0)
    {
        printf("除数不可以为0!!!\n");
    }
}