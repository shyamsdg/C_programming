#include<stdio.h>

int main()
{
	int a = 320;
	char *ptr;
	ptr = (char*)&a;
	printf("%d\n",&a);
	int* ptr1 = &a;
	printf("%d\n",*ptr1);
	return 0;
}
