#include<stdio.h>
int main()
{
    int n,i,he,ji,pinfang;
    printf("请输入10个整数\n");
    scanf("%d",&n);
    he=n;
    ji=n;
    
    for(i=1;i<=9;i++)
    {
        scanf("%d",&n);
        he+=n;
        ji*=n;
        pinfang+=(n*n);
    }
    printf("这10个数\n和为%d\n积为%d\n平方和为%d\n和的平方为%d\n",he,ji,pinfang,he*he);
}