#include<stdio.h>
void main()
{
    int a,b,c;
    printf("请输入日期(年/月/日)\n");
    scanf("%d年%d月%d日",&a,&b,&c);
    printf("以日/月/年的形式输出为\n%d日/%d月/%d年\n",c,b,a);
}