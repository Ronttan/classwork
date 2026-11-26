#include<stdio.h>
int main()
{
    int i,n;
    n=0;
    for(i=7;i<=91;i++)
    {
        if((i%3==0) && (i%2!=0))
        {
            n++;
        }
    }
    printf("7到91中能被3整除的奇数的个数为%d\n",n);
}