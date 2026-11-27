#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n;
    printf("请输入你想每组输入的整数个数(共两组):");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("你输入的数字小于或等于0,不符合要求\n");
    }
    int i;
    printf("请分别输入%d个整数(换行以区分组数):\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }  
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }  
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("两组整数对应位置的和为:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
}    