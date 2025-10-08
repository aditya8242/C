//WAP to print all even numbers from 1 to 10 using all loops

#include <stdio.h>

int main()
{
	int i=1,j=1,k=1;
	
	printf("Using while loop\n");
	
	while(i <= 10)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
		
		i++;
	}
	
	printf("\nUsing for loop\n");
	
	for(j; j <= 10; j++)
	{
		if(j % 2 == 0)
		{
			printf("%d ",j);
		}
	}
	
	printf("\nUsing do-while loop\n");
	
	do
	{
		if(k % 2 == 0)
		{
			printf("%d ",k);
		}
		
		k++;
	} while (k <= 10);
	
	printf("\n");
}
