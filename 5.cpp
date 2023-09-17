#include <stdio.h>
int main()
{
	int n;
	printf("Enter the numbrer you want multiplication table of :\n");
	scanf("%d",&n);
	printf("Table of %d :\n",n);
	for(int i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,i*n);
	}
	return 0;
	
}
