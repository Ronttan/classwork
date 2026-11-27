#include<stdio.h>
int main()
{
    int a[20],i;
    printf("请输入20个整数:\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    double result;
    for(i=0;i<20;i++)
    {
        sum+=a[i];
    }
    result=sum/20.0;
    printf("这20个数的平均值为%.3f\n",result);
}