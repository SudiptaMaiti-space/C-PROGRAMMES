#include <stdio.h>
int main()
{
	int n,p,e;
	printf("enter the no. of index: ");
	scanf("%d",&n);
	int ar[n];
	printf("enter the elements: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("before changing:\n");
	for(int i=0;i<n;i++)
	{
		printf("ar[%d]=%d\n",i,ar[i]);
	}
	printf("enter the positon to change: ");
	scanf("%d",&p);
	printf("enter changed element: ");
	scanf("%d",&e);
	printf("after changing:\n");
	for (int i=0;i<n;i++)
	{
		if(i==p-1)
		printf("ar[%d]=%d\n",i,e);
		else
		printf("ar[%d]=%d\n",i,ar[i]);
	}
	return 0;
}
