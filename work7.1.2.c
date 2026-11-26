#include<stdio.h>
int main()
{
    int i,num,max;
    printf("请输入10个整数:");
    scanf("%d",&num);
    max=num;
    for(i=1;i<=9;i++)
    {
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
    }
    printf("10个整数中最大的是%d\n",max);
}