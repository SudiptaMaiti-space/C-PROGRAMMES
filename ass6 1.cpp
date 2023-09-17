#include <stdio.h>
int main()
{
	int n;
	printf("enter the no. of index: \n");
	scanf("%d",&n);
	int ar[n];
	printf("enter the elements: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("ar[%d]=%d\n",i,ar[i]);
	}
	return 0;
}
