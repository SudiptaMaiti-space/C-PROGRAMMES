#include <stdio.h>
#include <string.h>
struct student
{
	int roll;
	char name[100];
	char address[1000];
}s1,s2,s3;
int main()
{
	s1.roll=1;
	s2.roll=2;
	s3.roll=3;
	strcpy(s1.name,"sudipta");
	strcpy(s2.name,"ravi");
	strcpy(s3.name,"marry");
	strcpy(s1.address,"street4");
	strcpy(s2.address,"street100");
	strcpy(s3.address,"street1");
	printf("NAME= %s\nROLL= %d\nADDRESS= %s\n",s1.name,s1.roll,s1.address);
	printf("NAME= %s\nROLL= %d\nADDRESS= %s\n",s2.name,s2.roll,s2.address);
	printf("NAME= %s\nROLL= %d\nADDRESS= %s\n",s3.name,s3.roll,s3.address);
	return 0;
}
