#include<stdio.h>
int main()
{
    char letter;
    printf("请输入一个大写字母:");
    scanf("%c",&letter);
    letter=letter+32;
    printf("他的小写字母是%c",letter);
}