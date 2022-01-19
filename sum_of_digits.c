//WAP to calculate sum of digits of a number

#include <stdio.h>

int main()
{
	int number,sum = 0,digit;
	
	printf("Enter a five digit number to get sum of its digits ");
	scanf("%d",&number);
	
	printf("Number: %d\n",number);
	
	while(number > 0)
	{
		digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	}
	
	printf("Sum of the digits: %d\n",sum);
}
