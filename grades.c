//WAP to find grades using percentage

#include <stdio.h>

int main()
{
	float percentage;
	
	printf("Enter your percentage to calculate your grades ");
	scanf("%f",&percentage);
	
	if (percentage >= 60)
	{
		printf("First division\n");
	}
	else if (percentage >= 50 && percentage < 60)
	{
		printf("Second division\n");
	}
	else if (percentage >= 40 && percentage < 50)
	{
		printf("Third division\n");
	}
	else
	{
		printf("Fail\nBetter luck next time\n");
	}
}
