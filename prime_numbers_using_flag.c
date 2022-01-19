// Program to generate prime numbers from 1 to 300 using flag

#include <stdio.h>

int main()
{
	int num,i,prime;
	
	printf("Prime numbers from 1 to 300\n\n");
	
	for(num = 1; num <= 300; num++)
	{
		if(num == 1)
		{
			printf("1 is not prime nor composite number\n\n");
			continue;
		}
		
		prime = 1; //Assuming that the number is prime. Also prime is flag which can use for true or false
		
		for(i = 2; i < num; i++)
		{
			if(num % i == 0)
			{
				prime = 0;
				break;
			}
		}
		
		if(prime)
		{
			printf("%d\n",num);
		}
	}
}
