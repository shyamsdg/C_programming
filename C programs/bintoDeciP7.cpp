// binary to decimal

#include<stdio.h>

int main()
{
	long long binumber;
	int deci = 0;
	int base = 0;
	
	printf("Enter binary number: \n");
	scanf("%lld",&binumber);
	
	long long number = binumber;
	
	while(binumber>0)
	{
		number = binumber % 10;
		deci = deci + ((number)*(2^base));
		printf("%d",base);
		binumber = binumber/10;
		base++;
	}
	
	printf("The decimal conversion of binary %lld is %d",binumber,deci);
	return 0;
}
