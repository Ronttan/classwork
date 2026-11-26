#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,p,s;
    printf("请输入三角形的三条边a,b,c的长度\n");
    scanf("%f,%f,%f",&a,&b,&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("该三角形的面积为%3.f\n",s);
}