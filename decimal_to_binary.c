// Program to convert decimal numbers to binary

#include <stdio.h>

int main()
{
	int num,rem,rev = 0,temp;
	
	printf("Enter a number to convert it into binary ");
	scanf("%d",&num);
	
	while(num)
	{
		rem = num % 2;
		rev = 10 * rev + rem;
		num = num / 2;
	}
	
	rem = 0;
	temp = rev;
	rev = 0;
	
	while(temp)
	{
		rem = temp % 10;
		rev = 10 * rev + rem;
		temp = temp / 10;
	}
	
	printf("Binary equivalent is %d\n",rev);
}
