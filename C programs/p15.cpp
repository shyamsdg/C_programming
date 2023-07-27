// bubble sorting in descending order

#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j;
	n = 8;
	int array[n] = {2,3,56,21,54,5,1,65};
	int temp;
	
	for(i = 0 ; i < n ; i++)
	{
		printf("Given array is %d\n", array[i]);
	}
	
	for ( i = 0; i < n ; i++ )
	{
		for ( j = i+1; j < n; j++)
		{
			if (array[j]>array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	for(i = 0 ; i < n ; i++)
	{
		printf("Sorted array is %d\n",array[i]);
	}
	
	return 0;
}
