//WAP to reverse the digits of a five digit number

#include <stdio.h>

int main()
{
	int num,rev = 0,digit;
	
	printf("Enter a five digit number to get it reversed ");
	scanf("%d",&num);
	
	printf("Before reverse: %d\n",num);
	
	for(int i = 1; i <= 5; i++)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	
	printf("Reverse Number: %d\n",rev);
}
