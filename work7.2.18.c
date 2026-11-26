#include<stdio.h>
int main()
{
    int num,i1,j1,i2,j2;
    for(num=2;num<=1000;num++)
    {
        j1=0;
        for(i1=1;i1<num;i1++)
        {
            if(num%i1==0)
            {
                j1+=i1;
            }
        }
        j2=0;
        for(i2=1;i2<j1;i2++)
        {
            if(j1%i2==0)
            {
                j2+=i2;
            }
        }
        if(i1==j2 && i1>i2)
        {
            printf("%d和%d是亲密对数\n",i1,i2);
        }
    }
}