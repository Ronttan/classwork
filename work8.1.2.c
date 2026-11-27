#include<stdio.h>
int main()
{
    int n;
    printf("请输入你想输入的浮点数个数:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("你输入的数字小于或等于0,不符合要求\n");
    }
    int i;
    double a[100];
    printf("请输入%d个浮点数:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }  
    int max;
    double MAX;
    MAX=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>=MAX)
        {
            MAX=a[i];
            max=i;
        }
    }
    printf("double类型数组中存储的最大数值的下标为%d\n",max);
}