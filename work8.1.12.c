#include<stdio.h>
void shuru(int* p);
void shuchu(int* p);
int main()
{
    int a[5];
    printf("请输入5个整数:");
    shuru (a);
    printf("输出为:\n");
    shuchu (a);
    printf("\n");
}
void shuru(int* p)
{
    int x;
    for(x=0;x<5;x++)
    {
        scanf("%d",p+x);
    }
}
void shuchu(int* p)
{
    int y;
    for(y=0;y<5;y++)
    {
        printf("%d\n",p[y]);
    }
}