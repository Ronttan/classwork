#include<stdio.h>
void main()
{
    int age;
    int days;
    printf("请输入你的年龄：");
    scanf("%d",&age);
    days = age*365;
    printf("年龄： %d岁\n",age);
    printf("换算成天数：%d天\n",days);
}