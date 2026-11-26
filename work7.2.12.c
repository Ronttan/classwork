#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    printf("请输入两个整数(要求第一个数小于第二个数):");
    scanf("%d %d",&x,&y);
    for(a=x;a<=y;a++)
    {
        b=a*a;
        c=a*a*a;
        printf("%-4d%-4d%-4d\n",a,b,c);
    }
}