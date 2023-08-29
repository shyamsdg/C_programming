#include<stdio.h>

int main()
{
	int a = 5;
	
	if (a == 5)
	{
		a = ~a + 5 <<1;
		a = ~5;
		printf("%d",a);
		
	}
	else
	{
		
		a = ~a;
		printf("%d",a);
	}
	return 0;
}
