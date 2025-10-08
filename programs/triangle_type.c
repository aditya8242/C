//Program to check type of triangle

#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the three angles of triangle ");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a == b && b == c && a == c)
	{
		printf("The given triangle is an equilateral triangle\n");
	}
	else if ((a == b) || (b == c) || (a == c))
	{
		printf("The given triangle is an isosceles triangle\n");
	}
	else
	{
		printf("The given triangle is a scalene triangle\n");
	}
}
