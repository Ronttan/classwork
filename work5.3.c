#include<stdio.h>
#define PI 3.14
void main()
{
    float r,c,s;
    printf("输入一个圆的半径\n");
    scanf("%f",&r);
    c=2*PI*r;
    s=PI*r*r;
    printf("该圆的周长为%.3f\n该圆的面积为%.3f\n",c,s);
}