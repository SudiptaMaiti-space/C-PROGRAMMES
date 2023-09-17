#include<stdio.h>
int prime(int n)
{
	if(n<2)
	return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	printf("enterno.");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	printf("prime no. %d ",prime(i));
	/*for(int i=0;i<=n;i++)
	{
		if(prime(n))
		printf("prime no.");
		
	}*/
}
