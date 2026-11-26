#include <stdio.h>
int main()
{
    int i, square, flag = 1;
    printf("--- 第22题开始验证 ---\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            square = i * i;
            if (square % 8 != 1)
            {
                printf("发现反例：%d\n", i);
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("验证成功！100以内所有奇数的平方除以8都余1。\n");
    }
    else
    {
        printf("验证失败！\n");
    }
    printf("--- 第22题验证结束 ---\n");
    return 0;
}