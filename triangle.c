//WAP to find area and perimeter of triangle

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,area,s;
	
	printf("Enter three sides of triangle ");
	scanf("%d %d %d",&a,&b,&c);
	
	// formula  s = (a + b + c)/2 semi perimeter
	s = (a + b + c)/2;
	
	// area √[s(s-a)(s-b)(s-c)]
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Semi Perimeter: %d\nArea: %d\n",s,area);
}
