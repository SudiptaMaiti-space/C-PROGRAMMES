# include<stdio.h>
# include<math.h>
void main()
{
	int n,i,a[30];
	double m,s,b=0.0,c=0.0;
	printf("enter the elements:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=b+a[i];
	}
	m=b/n;
	printf("mean=%lf",m);
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
		c=c+a[i];
	}
	s=(c/n)-(m*m);
	printf("sd= %lf",sqrt(s));
}
