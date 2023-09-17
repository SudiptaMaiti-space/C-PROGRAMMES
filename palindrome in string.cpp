#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int l,f=0;
	printf("enter a string:");
	gets(str);
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i]==str[l-1-i])
		{
			f++;
		}
	}
	if(f>(l/2))
	printf("palindrome");
	else
	printf("not");
	return 0;
}
