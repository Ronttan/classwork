#include<stdio.h>
void main()
{
    float c,f;
    printf("请输入摄氏度\n");
    scanf("%f",&c);
    f=(9/5)*c+32;
    printf("该摄氏度转换为华氏度为%.4f\n",f);
}