#include<stdio.h>
int main()
{
    printf("请输入15个整数:\n");
    int a[15],i,j,n;
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }    
    for(i=0;i<14;i++)
        {
            for(j=0;j<14-i;j++)
            {
                if(a[j]<=a[j+1])
                {
                    n=a[j+1];
                    a[j+1]=a[j];
                    a[j]=n;
                }
            }
        }
    printf("这15个整数从小到大排序后为:\n");
    for(i=0;i<15;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}