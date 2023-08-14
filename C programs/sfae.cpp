/* Compile code with optimization option */
#include <stdio.h>
const volatile unsigned int local = 10;

int main(void)
{
	
	int *ptr = (int*) &local;

	printf("Initial value of local : %d \n", local);

	*ptr = 100;

	printf("Modified value of local: %d \n", local);

	return 0;
}

