#include<stdio.h>
int main()
{
    int num,a,b,c,i;
    float sum;
    i=0;
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=100;b++)
        {
            for(c=1;c<=100;c++)
            {
                sum=3*a+1*b+(1.0/3)*c;
                num=a+b+c;
                if(num==100 && sum==100)
                {
                    i++;
                }
            }
        }
    }
    printf("用100元买100只鸡,已知公鸡3元一只,母鸡1元一只,小鸡1元三只,总共有%d种购买方案\n",i);
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=100;b++)
        {
            for(c=1;c<=100;c++)
            {
                sum=3*a+1*b+(1.0/3)*c;
                num=a+b+c;
                if(num==100 && sum==100)
                {
                    printf("公鸡%d只,母鸡%d只,小鸡%d只\n",a,b,c);
                }
            }
        }
    }
}