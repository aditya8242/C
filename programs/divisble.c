//WAP to check if number is divisble by another number

#include <stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter two numbers ");
	scanf("%d %d",&num1,&num2);
	
	if (num1 % num2 == 0)
	{
		printf("%d is divisble by %d\n",num1,num2);
	}
	else if (num2 % num1 == 0)
	{
		printf("%d is divisble by %d\n",num2,num1);
	}
	else
	{
		printf("The numbers are not divisble by each other\n");
	}
}
