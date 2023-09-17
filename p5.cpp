#include <stdio.h>
int main()
{
	for(int i=1; i<=6;i++)
	{
		for(int j=i; j<6; j++)
		{
			printf(" ");
		}
		for(int k=1; k<=i; k++)
		{
			printf("*");
		}
	printf("\n");
	}
}
