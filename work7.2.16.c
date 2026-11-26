#include<stdio.h>
int main()
{
    int num,x1,x2,i,j,n;
    x1=0;
    x2=0;
    i=0;
    j=0;
    printf("请输入整数:");
    while(1)
    {
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        else if(num!=0)
        {
            if(num%2==0)
            {
                x1++;
                i+=num;
            }
            else
            {
                x2++;
                j+=num;
            }

        }

    }
    printf("输入的数字中\n偶数(不包括0)的个数有%d\n偶数的平均值为%d\n奇数的个数有%d\n奇数的平均值为%d\n",x1,i/x1,x2,j/x2);
}