#include<stdio.h>
void main()
{
	int a[]={1,3,5},x=7,y=9;
	int *p=NULL;
	p=a;
	printf("%d, ",*p);
	printf("%d, ",*(++p));
	printf("%d, ",*++p);
	printf("%d, ",*(p--));
	printf("%d, ",*p--);
	printf("%d, ",*p++);
	printf("%d, ",++(*p));
	printf("%d\n ",(*p)++);
	p=&a[2];
	printf("%d, ",*p);
	printf("%d, ",*(++p));
	p++;
	printf("%d, ",*p);
}