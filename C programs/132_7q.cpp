#include <stdio.h>
int main()
{
int x[4]={1,3,5,7};
int i;
int *ptr;
for(i = 0; i < 4; ++i)
{
ptr=&x[i];  // ptr is assigned with address of individual element in
		     //array
printf("x[%d] is %d\n",i,*(ptr+i));
}
return 0;
}

