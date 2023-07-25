//Binary to DEcimanl 

#include<stdio.h>

int main()
{
	int bin[32], deci,i,j;
	
	printf("Enter the positive decimal integer: \n");
	scanf("%d",&deci);
	
	if (deci == 0)
	{
		printf("The input number is %d",deci);
		return 0;
	}
	
	i = 0;
	
	while(deci>0)
	{
		bin[i] = deci%2;
		deci = deci/2;
//		i++;
		i = i +1;
	}
	
//	printf("i: %d\n",i);

	printf("The Binary equivalent is: ");
	for ( j = i-1; j >= 0 ; j--)
	{
		printf("%d",bin[j]);
	}
	printf("\n");
	
	return 0;
}


