//WAP to print all the armstrong numbers between 1 to 500

#include <stdio.h>

int main()
{
	int num, digit, sum = 0, temp;
	
	printf("Enter a number to check if it is prime or not ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num > 0)
	{
		digit = num % 10;
		sum = sum + (digit*digit*digit);
		num /= 10;
	}
	
	if(sum == temp)
	{
		printf("%d is an armstrong number\n",temp);
	}
	else
	{
		printf("%d is not an armstrong number\n",temp);
	}
}
