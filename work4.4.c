#include<stdio.h>
void main()
{
    int a=12;
    int n=5;
    printf("(1)%d\n",a+=a);
    a=12;
    printf("(2)%d\n",a-=2);
    a=12;
    printf("(3)%d\n",a*=2+3);
    a=12;
    printf("(4)%d\n",a%=(n%=2));
    a=12;
    printf("(5)%d\n",a/=a+a);
    a=12;
    printf("(6)%d\n",a+=a-=a*=a);
}