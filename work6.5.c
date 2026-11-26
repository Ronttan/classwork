#include<stdio.h>
int main()
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    if(a%2==0 && a%3==0 && a%5==0)
    {
        printf("该整数能被2,3,5整除!\n");
    }
    else
    {
        printf("该整数不能被2,3,5整除!\n");
    }
    
}