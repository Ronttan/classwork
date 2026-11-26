#include<stdio.h>
int main()
{
    int num,i,j,x;
    printf("请输入一个整数:");
    scanf("%d",&num);
    printf("所有小于或等于该整数的素数有\n");
    for(i=2;i<=num;i++)
        {
            x=1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    x=0;
                    break;
                }
            }
            if(x==1)
            {
                printf("%3d",i);
            }
        }
        printf("\n");
}