#include<stdio.h>
int main()
{
    int a,b,i,j,m,n;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    i=a;
    j=b;
    while(m!=0)
    {
        m=i%j;
        i=j;
        j=m;
    }
    n=(a/j)*b;
    printf("a和b的最大公约数为%d",j);
    printf("a和b的最小公倍数为%d",n);
}