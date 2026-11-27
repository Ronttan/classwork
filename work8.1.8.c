#include<stdio.h>
int main()
{
    int i,j,a[5][5],b[5][5];
    printf("请输入9个数字,用以组成一个9*9的矩阵:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("行列互换后的矩阵为:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
            printf("%-2d",b[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}