//CA_3_24_35

#include<stdio.h>

int main()
{
	int x = 6;
	int y = 4;
	void *ptr1,*ptr2;
	ptr1 = &x;
	ptr2 = &y;
	x = ptr1 - ptr2;
	printf("%d",x);
		return 0;
}
