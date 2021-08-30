//WAP to find remainder using modulo operator

#include <stdio.h>

int main()
{
	int divisor,dividend;
	
	printf("Enter dividend and divisor ");
	scanf("%d %d",&dividend,&divisor);
	
	printf("Dividend: %d\nDivisor: %d\nRemainder: %d\n",dividend,divisor,dividend % divisor);
}
