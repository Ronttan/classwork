#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("请输入两位正整数：");
    scanf("%d",&a);
    b=a*a;
    c=(b%1000)/100;
    d=(b%100)/10;
    printf("平方后取其百位数和十位数，所构成的新两位整数为%d%d",c,d);
}