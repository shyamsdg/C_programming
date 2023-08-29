// CA3_26_35

#include<stdio.h>

int main ()
{
	int SIZE = 5;
	int const expr = 1|2|3;
	double value[SIZE] = { 2.0, 4.0, 6.0, 8.0, 10.0};
//	expr = 1|2|3;
	printf("%f %d", value[expr],expr);
	return 0;
}
