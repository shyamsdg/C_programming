//How to set/unset 17 and 18 bit of a given number?

#include <stdio.h>

int main()
{
	unsigned int number;
	unsigned int set,unset; 
	
	printf("Enter a number: \n");
	scanf("%d",&number);
	
	unsigned int mask = 1;
	
	mask = (mask<<17)|(mask<<18);
	
	set = number | mask;
	printf(" Set value is : %d ",set);
	
	unset = number & ~mask;
	printf(" Unset value is : %d ",unset);
	
}
