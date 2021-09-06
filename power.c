//WAP to print value of a number to power of other number

#include <stdio.h>

int main()
{
	int base,exponent,pow = 1;
	
	printf("Enter base and exponent ");
	scanf("%d %d",&base,&exponent);
	
	for(exponent; exponent >= 1; exponent--)
	{
		pow *= base;
	}
	
	printf("Power: %d\n",pow);
}
