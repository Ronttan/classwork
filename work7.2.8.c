#include<stdio.h>
int main()
{
    int i,n;
    i=77;
    n=0;
    while(i<=210)
    {
        if(i%2==0)
        {
            n++;
        }
        i++;
    }
    printf("77到210中偶数的个数为%d\n",n);
}