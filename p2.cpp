#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, a;
	printf("Enter any digit: \n");
	scanf("%d", &n);
	for (i=1; i<=10; i++)
	{
		a = n*i;
		printf("\n %d * %d = %d",n,i,a);
	}
	return 0;
}
