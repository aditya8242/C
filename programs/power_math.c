//Finding power of a number using pow() function of math library

#include <stdio.h>
#include <math.h>

int main()
{
	float base,exponent;
	
	printf("Enter base and exponent ");
	scanf("%f %f",&base,&exponent);
	
	printf("Base: %.0f\nExponent: %.0f\nPower: %.0f\n",base,exponent,pow(base, exponent));
}
