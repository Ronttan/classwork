#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个整数表示三条边的长度\n");
    scanf("%d %d %d",&a,&b,&c);
    if (!(a+b>c) || !(a+c>b) || !(b+c>a))
    {
        printf("它们不能组成一个三角形");
    }
    else if ((a+b>c) && (a+c>b) && (b+c>a))
    {
        if ((a*a+b*b==c*c) || (a*a==b*b+c*c) || (a*a+c*c==b*b))
        {
            printf("它们能够组成一个直角三角形\n");
        }
        else if ((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a))
        {
            printf("它们能够组成一个等腰三角形\n");
        }
        else if (a==b && b==c)
        {
            printf("它们能够组成一个等边三角形\n");
        }
    }
}