//WAP to calculate sum of digits of a five digit number

#include <stdio.h>

int main()
{
	int number,sum = 0,digit;
	
	printf("Enter a five digit number to get sum of its digits ");
	scanf("%d",&number);
	
	printf("Number: %d\n",number);
	
	for(int i = 1; i <= 5; i++)
	{
		digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	}
	
	printf("Sum of the digits: %d\n",sum);
}
