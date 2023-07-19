#include <stdio.h>
int main()
{
int x[4]={2,3,5,7};
int i;
int *ptr;
for(i = 0; i < 6; ++i)
{
ptr=&x[i];
printf("i : %d \n",i);
printf("ptr : %d \n",ptr);
printf("*ptr : %d \n",*ptr+i);
printf("x[%d] is %d\n",i,*(ptr+i));
printf("---------------------------\n");
}
return 0;
}
