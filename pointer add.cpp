#include<stdio.h>
int add(int *a,int *b)
{
	int c;
	c=*a+*b;
	return c;
}
int subtract(int*a,int*b)
{
	int c;
	c=*a-*b;
	return c;
}
int main()
{
	int a=4;
	int b=3;
	int c,d;
	c=add(&a,&b);
	d=subtract(&a,&b);
	printf("add=%d\nsubtract=%d\n",c,d);
	return 0;
}
