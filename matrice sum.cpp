#include <stdio.h>
int main()
{
  int ar[3][3];
  int ar1[3][3]={{2,9,7},{6,5,4},{5,9,8}};
  int ar2[3][3]={{5,11,10},{9,8,7},{2,0,2}};
  for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		ar[i][j]=ar1[i][j]+ar2[i][j];
  		printf("%d ",ar[i][j]);
	}
	printf("\n");
  }
  return 0;
}
