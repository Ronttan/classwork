#include<stdio.h>
#include<float.h>
void main()
{
    double a=1.0/3.0;
    float b=1.0f/3.0f;
    printf("double变量a(1.0/3.0)\n");
    printf("保留4位小数:%.4lf\n",a);
    printf("保留12位小数:%.12lf\n",a);
    printf("保留16位小数:%.16lf\n",a);
    printf("float变量b(1.0/3.0)\n");
    printf("保留4位小数:%.4f\n",b);
    printf("保留12位小数:%.12f\n",b);
    printf("保留16位小数:%.16f\n",b);
    printf("\nFLT_DIG=%d\n",FLT_DIG);
    printf("DBL_DIG=%d\n",DBL_DIG);
}