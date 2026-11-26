#include<stdio.h>
int main()
{
    char a,b,c;
    int d;
    printf("输入三个字符：");
    scanf("%c,%c,%c",&a,&b,&c);
    d=(a-'0')*100+(b-'0')*10+(c-'0');
    printf("组成的整数为：%d",d);
}