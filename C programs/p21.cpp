#include<stdio.h>
#include<string.h>

int main()
{
	char c[] = {'M'};
	
	const char* j=&c;
	
	*c = 'A';
	
	printf("%c", *c);
	return 0;
}
