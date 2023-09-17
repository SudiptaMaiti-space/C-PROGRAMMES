#include <stdio.h>
#include <math.h>
int binarytodecimal(long long bn)
{
	int dn=0,i=0,r;
	while(bn>0)
	{
		r=bn%10;
		dn+=r*pow(2,i);
		bn=bn/10;
		++i;
	}
	return dn;
}
int main()
{
	long long n;
	printf("Enter a binary number:");
	scanf("%lld",&n);
	printf("Its decimal number is:%d",binarytodecimal(n));
	return 0;
	
}
