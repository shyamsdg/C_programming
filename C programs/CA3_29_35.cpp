//CA3_29_35

#include<stdio.h>
int main()
{
	unsigned int num = 0xf0000000;
	num = num >> 1;
	printf("%x\n",num);
	return 0;
}
