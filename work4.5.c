#include<stdio.h>
void main()
{
    float a=2,b=3,x=3.5,y=2.5;
    float c;
    printf("(1)%f\n",c=(float)(a+b)/2+(int)x%(int)y);
    printf("(2)%f\n",c=(float)a+b/2+(int)x%(int)y);
    printf("(3)%f\n",c=(float)(a+b/2)+(int)x%(int)y);
}