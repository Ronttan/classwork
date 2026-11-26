#include<stdio.h>
int main()
{
    double a;
    printf("请输入一个浮点数:");
    scanf("%lf",&a);
    printf("The input is %.6f or %.6e.",a,a);
}