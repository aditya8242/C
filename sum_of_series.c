/*
Write a program to add first seven terms of the following
series using a for loop:
1/1!,2/2!,3/3!,...,7/7!
*/

#include <stdio.h>

int main()
{
	int num, i, n;
	float sum = 0.0, fact;
	
	printf("Enter the first the and last term of series ");
	scanf("%d %d",&num,&n);
	
	while(num <= n)
	{
		fact = 1;
		
		for(i = num; i > 0; i--)
		{
			fact = fact * i;
		}
		
		sum = sum + (num / fact);
		
		num++;
	}
	
	printf("Sum of series: %f\n",sum);
}
