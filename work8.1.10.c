#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("请输入一个3*3的整型矩阵:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum1=0,sum2=0,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==i)
            {
                break;
            }
        }
        sum1+=a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j+i==2)
            {
                break;
            }
        }
        sum2+=a[i][j];
    }
    sum=sum1+sum2-a[1][1];
    printf("该3*3的整型矩阵对角线元素之和为%d\n",sum);
}