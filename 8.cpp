#include <stdio.h>
main()
{
	int n,a=0,b=1,c=0,d=0;
	printf("enter the term: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		d=a+b;
		for(int j=c+1;j<d;j++)
		{
			if(j<=n)
			printf("%d ",j);
			else
			break;
		}
	}
}
