#include <stdio.h>
int length(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return(i);
}
int main()
{
	char atr[100];
	printf("Enter a string:");
	gets(atr);
	printf("length is: %d",length(atr));
	return 0;
}
