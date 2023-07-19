#include<stdio.h>

void main()
{
	int r = 0;
	int area,circ;
	int pi  = 3.142;
	
	printf("Enter the radius of circle: \n"); 
	scanf("%d", &r);
	area = pi*r*r;
	circ = 2*pi*r;
	
	printf("The area and circumference of the circle is %d and %d \n", area, circ);
}
