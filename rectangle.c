//WAP to find area and perimeter of rectangle

#include <stdio.h>

int main()
{
	int l,b,area,perimeter;
	
	printf("Enter length and breadth of rectangle ");
	scanf("%d %d",&l,&b);
	
	area = l * b;
	perimeter = 2*(l+b);
	
	printf("Area: %d\nPerimeter: %d\n",area,perimeter);
}
