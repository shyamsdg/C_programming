// factorial of a number
#include<stdio.h>

unsigned long long fact(int n);

int main()
{
	int num;
	printf("Enter a number to find its factorial:");
	scanf("%d",&num);
	
	unsigned long long result = fact(num);
	printf("The factorial of the given number is: %llu \n",result);
												
	return 0;
}

unsigned long long fact(int n)
{
	if (n == 0 || n == 1) 
	{
	
	} 
	else 
	{
	return n * fact(n - 1);	
	}
}
