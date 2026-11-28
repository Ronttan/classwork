#include<stdio.h>
int main()
{
    printf("请输入15个整数:\n");
    int a[15],i;
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("这15个整数从小到大排序后为:\n");
    int min;
    min=a[0];
    for(i=1;i<15;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        printf("%d",min);
    }
}