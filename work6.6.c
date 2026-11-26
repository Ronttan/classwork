#include<stdio.h>
int main()
{
    char ch;
    printf("请输入一个英文字母,大小写随意:");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("该字母的大写是%c\n",ch);
    }
    else if (ch>='A' && ch<='Z');
    {
        ch=ch+32;
        printf("该字母的小写是%c\n",ch);
    }
}