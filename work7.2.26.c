#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    for(n=100;n<=300;n++)
    {
        a=n/100;
        b=n/10%10;
        c=n%10;
        i=a+b+c;
        if(i%5==0)
        printf("%-4d",n);
    }
    printf("\n");
}