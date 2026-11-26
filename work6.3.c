#include<stdio.h>
int main()
{
    int class;
    printf("请输入班号：");
    scanf("%d",&class);
    printf("该班学生人数为");
    switch(class)
    {
        case 91:printf("30\n");break;
        case 92:printf("32\n");break;
        case 93:printf("30\n");break;
        case 94:printf("30\n");break;
        case 95:printf("32\n");break;
    }
}