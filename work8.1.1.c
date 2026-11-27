#include<stdio.h>
int main()
{
    int n;
    printf("请输入你想输入的整数个数:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("你输入的数字小于或等于0,不符合要求\n");
    }
    int i,a[100];
    printf("请输入%d个整数:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }  
    int max;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("这个整型数组中存储的最大数值为%d\n",max);
}