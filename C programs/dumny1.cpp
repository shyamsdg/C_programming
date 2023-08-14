#include <stdio.h>

int main()
{
//    char a = 'a';
    int a = 2;
	int b =2;
	int c = 2; 
	int x,y,z;
	x = ++a * ++a;
	y = b++ * b++;
	z = c + ++c * c++;
    
    printf("%d %d %d \n",x,y,z);

    return 0;
}
