// binary to decimal

#include<stdio.h>

int main()
{
	int bin,deci,remainder, base;
	
	printf("Enter the binary number: \n");
	scanf("%d",&bin);
	
	base = 1; 
	
	while(bin>0)
	{
		remainder = bin%2;
		deci = deci+(remainder*base);
		bin = bin / 10;
		base = base*2;
	}
	
	printf("The decimal equivalent is %d",deci);
	
	return 0;
}
