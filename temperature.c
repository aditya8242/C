//WAP to convert temperature

#include <stdio.h>

int main()
{
	float temperature,centigrade,fahrenheit;
	int choice;
	
	printf("How would you like to convert temperature?\n1.Centigrade to Fahrenheit\n2.Fahrenheit to Centigrade ");
	scanf("%d",&choice);
	
	if (choice == 1)
	{
		printf("Enter temperature in centigrade ");
		scanf("%f",&temperature);
		
		fahrenheit = (temperature * 9 / 5) + 32;
		
		printf("Centigrade: %f\nFahrenheit: %f\n",temperature,fahrenheit);
	}
	else
	{
		printf("Enter temperature in fahrenheit ");
		scanf("%f",&temperature);
		
		centigrade = (temperature - 32) * 5/9;
		
		printf("Fahrenheit: %f\nCentigrade: %f\n",temperature,centigrade);
	}
}
