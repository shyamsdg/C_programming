// Number of bits set in a number

#include<stdio.h>

int CountBits(int num,int temp);

int main()
{
	int num, count, temp;
	
	printf("Enter a positive number\n");
	scanf("%d",&num);
	
	count = CountBits(num,temp);
	
	printf("Number of bits set are %d",count);
}

int CountBits(int num,int temp)
{
	
	
	if (num ==0 )
		return 0;
	else
		temp = (num&1)+CountBits(num>>1,temp);
		return temp;
}
