//WAP to print natural number from 1 to 10 using all types of loops

#include <stdio.h>

int main()
{
	int i,j,k;
	
	i = 1;
	j = 1;
	k = 1;
	
	printf("Using while loop\n");
	
	while(i <= 10)
	{
		printf("%d ",i);
		i++;
	}
	
	printf("\nUsing for loop\n");
	
	for(j; j <= 10; j++)
	{
		printf("%d ",j);
	}
	
	printf("\nUsing do-while loop\n");
	
	do
	{
		printf("%d ",k);
		k++;
	} while (k <= 10);
	
	printf("\n");
}
