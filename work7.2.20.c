#include<stdio.h>
int main()
{
    int num,a,b,c;
    float sum;
    printf("若用100匹马驮100担货,大马驮3担,中马驮2担,小马驮0.5担,有以下几种方案:\n");
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=100;b++)
        {
            for(c=1;c<=100;c++)
            {
                num=a+b+c;
                sum=a*3+b*2+c*0.5;
                if(num==100 && sum==100)
                {
                    printf("大马%d匹,中马%d匹,小马%d匹\n",a,b,c);
                }
            }
        }
    }
}