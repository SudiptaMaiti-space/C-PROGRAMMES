#include <stdio.h>
float ktom(float n)
{
	return (n*0.621371);
}
float itof(float n)
{
	return (n*0.083333);
}
float ctoi(float n)
{
	return (n*0.393701);
}
float ptok(float n)
{
	return (n*0.453592);
}
float itom(float n)
{
	return (n*0254);
}
int main( )
{
	float n;
	int c;
	printf("enter:\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.pounds to kgs\n5.inches to meter\n");
	printf("enter choice: ");
	scanf("%d",&c);
	printf("enter number to convert: ");
	scanf("%f",&n);
	if (c==1)
	printf("%f kms is equal to %f miles",n,ktom(n));
	if (c==2)
	printf("%f inches is equal to %f foot",n,itof(n));
	if (c==3)
	printf("%f cms is equal to %f inches",n,ctoi(n));
	if (c==4)
	printf("%f pounds is equal to %f kgs",n,ptok(n));
	if (c==5)
	printf("%f inches is equal to %f meters",n,itom(n));
}
