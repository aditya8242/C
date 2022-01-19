// Program to print all prime numbers between 1 to 300

#include <stdio.h>

int main()
{
	int num,i,factors;
	
	printf("\tPrime numbers from 1 to 300\n\n");
	
	for(num = 1; num <= 300; num++)
	{
		if(num == 1)
		{
			printf("1 is not prime nor composite number\n\n");
			continue;
		}
		
		factors = 0;
		
		for(i = 1; i <= num; i++)
		{
			if(num % i == 0)
			{
				factors++;
			}
		}
		
		if(factors == 2)
		{
			printf("%d\n",num);
		}
	}
}
