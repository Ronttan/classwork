#include<stdio.h>
int main()
{
    int year;
    float i,j;
    i=3886;
    for(year=2000;year<=2005;year++)
    {
        j=i*(1+0.1);
        i=j;
    }
    printf("某化肥厂1999年生产化肥3886万吨,该厂计划年增长率为百分之10,编程计算出2005年生产出%.3lf万吨化肥。\n",j);
}