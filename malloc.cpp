#include <stdio.h>
#include <stdlib.h>
int bubbleSort(int n,int ar[])
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter array index:");
	scanf("%d",&n);
	int* ar=(int *)malloc(n*sizeof(int));
	if (ar == NULL) 
	{
        printf("Memory allocation failed.\n");
        return 1;
    }
	printf("array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	bubbleSort(n,ar);
	printf("the sorted array is: ");
	for(int i=0;i<n;i++)
	printf("%d ",ar[i]);
	free(ar);
	return 0;
}
