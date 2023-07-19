#include <stdio.h>

int main()
{
	printf("Let's perform Matrix multiplication and addition\n");
	int row1,col1,row2,col2;
	int Matrix1[row1][col1],Matrix2[row2][col2],sum[row1][col1],product[row1][col2];
	
	printf("Enter the rows of Matrix 1: \n");
	scanf("%d",&row1);
	
	printf("Enter the columns of Matrix 1: \n");
	scanf("%d",&col1);
	
	printf("Enter the rows of Matrix 2: \n");
	scanf("%d",&row2);
	
	printf("Enter the columns of Matrix 2: \n");
	scanf("%d",&col2);
	
	// Condition to check if the matrix Multiplication is possible or not
	if (row1!=col2 && row2!=col1)
	{
		printf("matrix multiplication is not possible, please enter valid number of rows and columns\n");
	}
	
	printf("Enter the elements of the Matrix 1: \n");
	for ( int i = 0 ; i < row1 ; i++ )
	{
		for ( int j = 0 ; j < col1 ; j++ )
		{
			printf("Enter element at position (%d, %d): ", i, j);
			scanf("%d", &Matrix1[i][j]);
		}	
	}
	
	printf("Enter the elements of the Matrix 2: \n");
	for ( int i = 0 ; i < row2 ; i++ )
	{
		for ( int j = 0 ; j < col2 ; j++)
		{
			printf("Enter element at position (%d, %d): ", i, j);
			scanf("%d",&Matrix2[i][j]);
		}
	}
	
	// Performing Addition
	for ( int i = 0 ; i < row1 ; i++ )
	{
		for ( int j = 0 ; j < col1 ; j++)
		{
			sum[i][j] = Matrix1[i][j]+Matrix2[i][j];
		}
	}
	
	// Performing Multiplication
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0; j<col2; j++)
		{
			product[i][j] = 0 ;
			for(int k=0;k<col1;k++)
			{
				product[i][j] += Matrix1[i][k]*Matrix2[k][j];
			}
		 } 
	}
	
	// Print the Addition and Multiplication
	printf("Addition of the matrix is : \n");
	for ( int i = 0 ; i < row1 ; i++ )
	{
		for ( int j = 0 ; j < col1 ; j++)
		{
			printf("The sum of the elements are: %d \n", sum[i][j]);
			
		}
	}
	
	printf("Multiplication of the matrix is :");
	for ( int i = 0 ; i < row1 ; i++ )
	{
		for ( int j = 0 ; j < col2 ; j++)
		{
			printf("The Multiplication of the elements are: %d \n", product[i][j]);
			
		}
	} 
	return 0;
}
