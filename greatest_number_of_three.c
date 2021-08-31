//WAP to find the greatest number of three numbers

#include <stdio.h>

int main()
{
	int num1,num2,num3;
	
	printf("Enter three numbers to find the greatest of them ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if (num1 > num2 && num1 > num3)
	{
		printf("%d is greater than %d and %d\n",num1,num2,num3);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("%d is greater than %d and %d\n",num2,num1,num3);
	}
	else
	{
		printf("%d is greater than %d and %d\n",num3,num1,num2);
	}
}
