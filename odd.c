//WAP to print all even numbers from 1 to 10 using all loops

#include <stdio.h>

int main()
{
	int num=1,i=1,j=1;
	
	printf("Using while loop\n");
	while(num <= 10)
	{
		if (num % 2 != 0)
		{
			printf("%d ",num);
		}
		
		num++;
	}
	
	printf("\nUsing for loop\n");
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ",i);
		}
	}
	
	printf("\nUsing do-while loop\n");
	do
	{
		if(j % 2 != 0)
		{
			printf("%d ",j);
		}
		j++;
	} while (j <= 10);
	
	printf("\n");
}
