#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fun( char *p)
{
	p = (char *) malloc(6);
 	strcpy(p,"code");
}

int main()
{
	char * p = "abcd";
	
	fun(p);
	
	printf(" %s",p);
	
	return 0;
}
