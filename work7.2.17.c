#include<stdio.h>
int main()
{
    int num,i,j;
    for(num=1;num<=1000;num++)
    {
        j=0;
        for(i=1;i<num;i++)
        {
            if(num%i==0)
            {
                j+=i;
            }
            else
            {
                j+=0;
            }
        }
        if(j==num)
        {
            printf("%d\n",num);
        }
    }
}