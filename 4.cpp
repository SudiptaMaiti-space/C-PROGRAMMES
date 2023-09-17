#include <stdio.h>
#include <math.h>
int main()
{
	float c,x,f,y;
	printf("enter temp in c\n");
	scanf("%f", &x);
	f=32+((x*9)/5);
	printf("in f is %f\n",f);
	printf("enter temp in f\n");
	scanf("%f", &y);
	c=((y-32)*5)/9;
	printf("in c is %f\n", c);
	return 0;
}
