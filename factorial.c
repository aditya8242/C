//WAP to find factorial of given number

#include <stdio.h>

int main()
{
	int num,factorial = 1;
	
	printf("Enter a number to find its factorial ");
	scanf("%d",&num);
	
	for (int i = num; i >= 1; i--)
	{
		factorial = factorial * i;
	}
	
	printf("The factorial of %d is %d\n",num,factorial);
}
