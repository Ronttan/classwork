#include<stdio.h>
void main()
{
   char name[20];
   float high;
   printf("请输入您的姓名和身高(以英寸为单位)\n");
   scanf("%s %f",name,&high);
   printf("%s,you are %.3f feet tall.\n",name,high);
}