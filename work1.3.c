#include<stdio.h>
void main()
{
    float a,b,c;
    float avg;
    float product;
    printf("请输入三个数字，空格隔开:");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    product=a*b*c;
    printf("平均值=%.2f\n",avg);
    printf("乘积=%.2f\n",product);
}