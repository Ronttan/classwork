#include<stdio.h>
int main()
{
    double n,totai_g,num;
    printf("请输入水的夸脱数：");
    scanf("%lf",&n);
    totai_g=n*950;
    num=totai_g/(3.0e-23);
    printf("水分子的数量=%e\n",num);
}