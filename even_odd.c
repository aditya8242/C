//WAP to check if number is even or odd

#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a number to check if it is odd or even ");
	scanf("%d",&num);
	
	if (num % 2 == 0)
	{
		printf("%d is an even number\n",num);
	}
	else
	{
		printf("%d is an odd number\n",num);
	}
}
