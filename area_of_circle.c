//WAP to find area of circle

#include <stdio.h>

int main()
{
	float radius,area;
	
	printf("Enter the radius of circle ");
	scanf("%f",&radius);
	
	area = (radius*radius)*22/7;
	printf("Radius: %.0f\nArea: %.1f\n",radius,area);
}
