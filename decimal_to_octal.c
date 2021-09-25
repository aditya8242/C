// Program for converting decimal number to its octal equivalent

#include <stdio.h>

int main()
{
	int num,rem,rev = 0,temp;
	
	printf("Enter a number to find its octal equivalent ");
	scanf("%d",&num);
	
	while(num)
	{
		rem = num % 8;
		rev = 10 * rev + rem;
		num = num / 8;
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
	
	printf("Octal equivalent is %d\n",rev);
}
