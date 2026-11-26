#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入某年某月某日\n");
    scanf("%d年%d月%d日",&a,&b,&c);
    switch(b)
    {
        case 1:d=0;break;
        case 2:d=0+31;break;
        case 3:d=0+31+28;break;
        case 4:d=0+31+28+31;break;
        case 5:d=0+31+28+31+30;break;
        case 6:d=0+31+28+31+30+31;break;
        case 7:d=0+31+28+31+30+31+30;break;
        case 8:d=0+31+28+31+30+31+30+31;break;
        case 9:d=0+31+28+31+30+31+30+31+31;break;
        case 10:d=0+31+28+31+30+31+30+31+31+30;break;
        case 11:d=0+31+28+31+30+31+30+31+31+30+31;break;
        case 12:d=0+31+28+31+30+31+30+31+31+30+31+30;break;
    }
    if ((a%4==0 && a%100!=0) || (a%400==0))
    {
        if (b>2)
        {
            d=d+1+c;
            printf("这一天是这一年的第%d天\n",d);
        }
        else
        {
            d=d+c;
            printf("这一天是这一年的第%d天\n",d);
        }
    }
    else
    {
        d=d+c;
            printf("这一天是这一年的第%d天\n",d);
    }
}