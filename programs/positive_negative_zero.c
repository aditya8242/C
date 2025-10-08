//WAP to check entered number is positive, negative or zero

#include <stdio.h>

int main()
{
	float num;
	
	printf("Enter a number ");
	scanf("%f",&num);
	
	if (num == 0)
	{
		printf("The number is zero\n");
	}
	else if (num < 0)
	{
		printf("The number %.2f is a negative number\n",num);
	}
	else
	{
		printf("The number %.2f is positive number\n",num);
	}
}
