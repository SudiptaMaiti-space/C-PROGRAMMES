#include <stdio.h>
main()
{
	int n,a=0,b=1,c;
	printf("enter the term\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
