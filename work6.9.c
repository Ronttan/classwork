#include<stdio.h>
int main()
{
    int x,a,b,c,d,e;
    printf("请输入不多于5位的正整数");
    scanf("%d",&x);
    a=x/10000;
    b=x%10000/1000;
    c=x%1000/100;
    d=x%100/10;
    e=x%10;
    if (a!=0)
    {
        printf("它是五位数\n各位数分别为\n%d\n%d\n%d\n%d\n%d\n逆序输出为%d%d%d%d%d\n",a,b,c,d,e,e,d,c,b,a);
    }
    else if (a==0 && b!=0)
    {
        printf("它是四位数\n各位数分别为\n%d\n%d\n%d\n%d\n逆序输出为%d%d%d%d\n",b,c,d,e,e,d,c,b);
    }
    else if (a==0 && b==0 && c!=0)
    {
        printf("它是三位数\n各位数分别为\n%d\n%d\n%d\n逆序输出为%d%d%d\n",c,d,e,e,d,c);
    }
    else if (a==0 && b==0 && c!=0)
    {
        printf("它是三位数\n各位数分别为\n%d\n%d\n%d\n逆序输出为%d%d%d\n",c,d,e,e,d,c);
    }
    else if (a==0 && b==0 && c==0 && d!=0)
    {
        printf("它是两位数\n各位数分别为\n%d\n%d\n逆序输出为%d%d\n",d,e,e,d);
    }
    else if (a==0 && b==0 && c==0 && d==0 && e!=0)
    {
        printf("它是一位数\n各位数分别为\n%d\n逆序输出为%d\n",e,e);
    }
}