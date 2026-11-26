#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    printf("请输入一个直角三角形两条直角边的长度\n");
    scanf("%f,%f",&a,&b);
    c=sqrt(a*a+b*b);
    printf("该直角三角形的斜边长为%.4f\n",c);
}