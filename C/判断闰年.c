#include<stdio.h>
int main()
{
	int year = 0;
	printf("Please input numbers");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("this year is runnian");
			
	else
		printf("this year is runnian");
		
	return 0;
}