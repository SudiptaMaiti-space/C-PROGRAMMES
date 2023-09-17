#include <stdio.h>
int main()
{
	int n,num;
	printf("enter the no. of index: ");
	scanf("%d",&n);
	int ar[n];
	printf("enter the elements: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("enter the no. to search: ");
	scanf("%d",&num);
	for(int i=0;i<n;i++)
	{
		if(num==ar[i])
		{
			printf("the no. %d is found at %d position",num,i);
			break;
		}
		else if(i==n)
		{
		printf("the no. %d is not found",num);
		}
	}
	
	return 0;
}
