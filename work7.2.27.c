#include<stdio.h>
int main()
{
    int a,b,i,j,m,n;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    i=a;
    j=b;
    while(j!=0)
    {
        m=i%j;
        i=j;
        j=m;
    }
    n=(a/i)*b;
    printf("a和b的最大公约数为%d\n",i);
    printf("a和b的最小公倍数为%d\n",n);
}