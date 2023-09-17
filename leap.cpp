#include <stdio.h>
int leap(int n)
{
	if((n%4==0)&&((n%400==0)||(n%100!=0)))
	return 1;
	else
	return 0;
}
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (leap(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

