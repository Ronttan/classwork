#include<stdio.h>
#define A 10000
#define B 5000
#define C 1000
int main()
{
    float a;
    printf("输入货物价格：");
    scanf("%f",&a);
    if(a>A)
    {
        printf("税金为%.3f\n",a*=0.05);
    }
    else if(a<=A && a>B)
    {
        printf("税金为%.3f\n",a*=0.03);
    }
    else if(a<=B && a>C)
    {
        printf("税金为%.3f\n",a*=0.02);
    }
    else if(a<=C)
    {
        printf("税金为%.3f\n",a*=0);
    }
    return 0;
}