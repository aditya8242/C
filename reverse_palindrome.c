//WAP to reverse the digits of a number and check if its palindrome or not

#include <stdio.h>

int main()
{
	int num,rev = 0,digit,temp;
	
	printf("Enter a five digit number to get it reversed ");
	scanf("%d",&num);
	
	temp = num;
	
	printf("Before reverse: %d\n",num);
	
	while(num > 0)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	
	printf("Reverse Number: %d\n",rev);
	
	if (temp == rev)
	{
		printf("The number %d is a palindrome number\n",temp);
	}
	else
	{
	printf("The number %d is not a palindrome number\n",temp);
	}
}
