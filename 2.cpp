#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,s,ar,r;
	printf("enter three lengths of triangle\n");
	scanf("%f%f%f", &a,&b,&c);
	s=a+b+c;                        
	r=s/2;
	printf("perimeter=%f\n", s);
	ar=sqrt(r*(r-a)*(r-b)*(r-c));
	printf("area=%f\n", ar);
	return 0;
}
