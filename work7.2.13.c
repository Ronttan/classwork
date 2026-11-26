#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    printf("请输入一个大写字母(A~V):");
    scanf("%c",&ch);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(5-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%c",ch+j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
}