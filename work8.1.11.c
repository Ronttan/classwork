#include<stdio.h>
int main()
{
	int a[6]={1,2,3,4};
	int i,s=1;
    int *p=NULL;
	p=a;
	for(i=0;i<4;i++)
		s*=*(p+i);
	printf("%d\n",s);
}