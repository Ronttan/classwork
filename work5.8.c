#include<stdio.h>
void main()
{
    char ch;
    printf("请输入一个大写字母");
    scanf("%c",&ch);
    ch=ch+32;
    printf("该大写字母的小写字母为%c\n",ch);
}