#include<stdio.h>
void main()
{
    char first[10],last[10];
    printf("请输入你的名字\n");
    scanf("%s %s",first,last);
    printf("您的名字为%s，姓氏为%s\n",last,first);
}