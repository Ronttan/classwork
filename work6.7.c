#include<stdio.h>
int main()
{
    float x,y;
    printf("当x<1时,y=x;\n当1<=x<15时,y=2x-1;\n当x>=15时,y=6x+x²;\n请输入一个x的值:");
    scanf("%f",&x);
    printf("\n此时y的值为");
    if (x<1)
    {
        y=x;
        printf("%.3f\n",y);
    }
    else if (x>=1 && x<15)
    {
        y=2*x-1;
        printf("%.3f\n",y);
    } 
    else if (x>=15)
    {
        y=6*x+x*x;
        printf("%.3f\n",y);
    }
}