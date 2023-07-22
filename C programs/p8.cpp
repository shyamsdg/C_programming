// Palindrome program

#include<stdio.h>

int main()
{
	int number, Reversenum, remainder, originalnum;
	Reversenum = 0;
	
	printf("Enter a number\n");
	scanf("%d",&number);
	originalnum = number;
	
	while(number!=0)
	{
		remainder = number%10;
		Reversenum = Reversenum*10 + remainder;
		number = number/10;
	}
	
	if (Reversenum == originalnum)
	{
		printf("The given number is Palindrome\n");
	}
	else
	{
		printf("The given number is not Palindrome\n");
	}
	
	return 0;
}
