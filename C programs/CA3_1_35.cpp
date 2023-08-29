#include<stdio.h>
union test{
	int a;
	float b;
};

int main()
{
	union test t1;
	t1.a = 10;
	printf("\n %f",t1.b);
	return 0;
}
