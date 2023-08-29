#include<stdio.h>

int main()
{
//	int i = 10;
//	void *p = &i;
//	printf("%f\n", *(float *)p);

	int a = 320;
	char * p;
	p = (char *)&a;
	printf("%d",*p);
	
	return 0;
}
