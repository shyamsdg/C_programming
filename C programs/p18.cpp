// Take 3*3 matrix and print in matrix format

#include<stdio.h>

int main()
{
	int mat[3][3];
	int i,j;
	
	printf("Enter the matrix elements:\n");
	for (i =0 ; i < 3 ; i++)
	{ 
		for ( j = 0 ; j < 3 ; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("The matrix format is:\n"); 
	
	for (i =0 ; i < 3 ; i++)
	{ 
		printf("\n");
		for ( j = 0 ; j < 3 ; j++)
		{
			printf("%d\t",mat[i][j]);
		}
	}
}
