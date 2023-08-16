#include<stdio.h>

int main ()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			int D = *(*(a+i)+j);
			printf(" I  = %d\n", i);
			printf(" j  = %d\n", j);
			printf(" B---->%d\n", D);
			printf(" *(a)---->%d\n", *a);
			printf(" *(a+i)---->%d\n", *(a+i));
			printf(" (*(a+i)+j)---->%d\n", (*(a+i)+j));
			printf("______________________________________\n");
		}
	}
	return 0;
}
