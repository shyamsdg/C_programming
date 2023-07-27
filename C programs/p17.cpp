// Largest and second largest 

#include<stdio.h>

int main()
{
	int largest,sec_largest,temp;
	int array[5],i,j;
	
	printf("Enter five array elements: \n");
	for (i=0; i<5; i++)
	{
		scanf("%d",&array[i]);
	}
	
	largest = array[0];
	sec_largest = array[1];
	
	for ( i = 0; i < 5; i++)
	{
		if (array[i]>largest)
		{
			sec_largest = largest;
			largest = array [i];
		}
		else if (array[i]>sec_largest && (array[i]!=largest))
		{
			sec_largest = array[i];
		}
	}
	
	printf("Second largest: %d",sec_largest);
	
	return 0;
}
