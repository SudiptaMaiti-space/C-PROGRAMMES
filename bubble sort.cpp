#include <stdio.h>
int main()
{
	int n,temp;
	printf("enter index: ");
	scanf("%d",&n);
	int ar[n];
	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int a=0;a<n-1;a++)
	{
		for(int b=0;b<n-1-a;b++)
		{
			if(ar[b]>ar[b+1])
			{
				temp=ar[b];
				ar[b]=ar[b+1];
				ar[b+1]=temp;
			}
		}
	}
	printf("the sorted array is: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
