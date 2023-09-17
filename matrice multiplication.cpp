#include<stdio.h>
int main()
{
	int ar[3][3],sum;
	int ar1[3][3]={{2,9,7},{6,5,4},{5,9,8}};
	int ar2[3][3]={{5,11,10},{9,8,7},{2,0,2}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=0;
			for(int k=0;k<3;k++)
			sum+=ar1[i][k]*ar2[k][j];
			ar[i][j]=sum;
		}
	}
	printf("multiplication result is : \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
