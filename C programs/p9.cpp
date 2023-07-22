// Given number is power of 2 or not

#include<stdio.h>

int main ()
{
	int number, pal;
	
	printf("Enter a number\n");
	scanf("%d",&number);
	
	if ((number != 0) && ((number & (number - 1)) == 0))
	{
		printf("The given number is power of 2\n");
	}
	else
	{
		printf("The given number is not power of 2\n");
	}
	return 0;
}
