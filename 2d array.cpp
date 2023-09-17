#include <stdio.h>
int main ()
{
	int n;
	printf("enter no.: ");
	scanf("%d",&n);
	int ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("ar[%d][%d]=",i,j);
			scanf("%d",&ar[i][j]);
		}
	
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
}
