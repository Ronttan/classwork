#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("请输入两个整数\n");
    scanf("%d %d",&a,&b);
    printf("\n请选择对这两个数进行的计算:\n1.做加法\n2.做减法\n3.做乘法\n4.做除法\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:d=a+b;printf("运算结果为%.2f\n",d);break;
        case 2:d=a-b;printf("运算结果为%.2f\n",d);break;
        case 3:d=a*b;printf("运算结果为%.2f\n",d);break;
        case 4:
        if (b!=0)
        {
            d=(float)a/b;
            printf("运算结果为%.2f\n",d);break;
        }
        else
        {
            printf("b为除数,不可以为0!!!\n");break;
        }
        default: printf("输入的选择无效!!!\n");break;
    }
}    
