//WAP to find the smallest of 2 numbers

#include <stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter to numbers to find the smallest ");
	scanf("%d %d",&num1,&num2);
	
	if (num1 > num2)
	{
		printf("%d is smaller than %d\n",num2,num1);
	}
	else
	{
		printf("%d is smaller than %d\n",num1,num2);
	}
}
