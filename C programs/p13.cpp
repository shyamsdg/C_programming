// Armstrong number
#include<stdio.h>
#include<math.h>

int main()
{
	int num=0;
	int i = 0,arm,originalnum;
	
	printf("Enter the number: \n");
	scanf("%d",&num);
	
	originalnum = num;
	
	while(num!=0)
	{
		num = num/10;
		i++;
	}
	
	int numdigits = i;
	num = originalnum;
	arm = 0;
	
	while(num!=0)
	{
		int temp = num%10;
		int myeq = (temp^numdigits);
		int inbuilt = pow(temp,numdigits);
		
		printf("%d and %d\n",myeq,inbuilt);
		
		arm = arm + pow(temp,numdigits);
		num = num/10;
	}

	printf("originalnum: %d",originalnum);
	printf("arm: %d",arm);
	
	if (originalnum == arm)
	{
		printf("The given number is armstrong\n");
	}
	else
	{
		printf("The given number is not armstrong\n");
	}
		
	return 0;
	
}
