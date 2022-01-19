//WAP to check voting eligibility 

#include <stdio.h>

int main()
{
	int age;
	
	printf("Enter your age ");
	scanf("%d",&age);
	
	if (age >= 18)
	{
		printf("\nYou are eligible for voting\n");
	}
	else
	{
		printf("\nYou are not eligible for voting\nYou must be 18 or older\n");
	}
}
