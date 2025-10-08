/*
Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
*/

#include <stdio.h>

int main()
{
	int positive = 0, negative = 0, zero = 0, limit, num;
	
	printf("How many numbers do you want to enter ");
	scanf("%d",&limit);
	printf("Enter %d numbers\n",limit);
	
	while (limit)
	{
		scanf("%d", &num);
		
		if(num == 0)
		{
			zero++;
		}
		else if(num < 0)
		{
			negative++;
		}
		else
		{
			positive++;
		}
		
		limit--;
	}
	
	printf("Positive numbers: %d\nNegative numbers: %d\nZero: %d\n",positive,negative,zero);
}
