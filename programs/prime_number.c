//WAP to find whether a number is prime or not

#include <stdio.h>

int main()
{
	int num, i = 2;
	
	printf("Enter a number to check whether its prime or not ");
	scanf("%d",&num);
	
	if (num == 0)
	{
		printf("0 is not prime nor composite\n ");
	}
	
	if (num == 1)
	{
		printf("1 is not prime nor composite\n ");
	}
	
	while(i < num)
	{
		if (num % i == 0)
		{
			printf("%d is not a prime number\n",num);
			break;
		}
		
		i++;
	}
	
	if(num == i)
	{
		printf("%d is a prime number\n",num);
	}
}
