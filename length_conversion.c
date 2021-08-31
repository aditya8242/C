//WAP to enter length in centimeter and convert it into meter and kilometer

#include <stdio.h>

int main()
{
	float centimeter,meter,kilometer;
	
	printf("Enter length in centimeter ");
	scanf("%f",&centimeter);
	
	meter = centimeter / 100;
	kilometer = meter / 1000;
	
	printf("Centimeter: %.2f\nMeter: %.2f\nKilometer: %.2f\n",centimeter,meter,kilometer);
}
