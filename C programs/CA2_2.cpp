#include<stdio.h>

int main ()
{
	unsigned int a = 0x76543210z;
	printf( "%x\n", a);
	char *c = (char *)&a;
	printf( "%d\n", &a);
	printf( "%\n", *c);
	printf( "0x%x\n", *c);
	
	return 0;
}
