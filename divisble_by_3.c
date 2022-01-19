//WAP to print all number divisble by 3 from 10 to 100

#include <stdio.h>

int main()
{
	int i = 10,j = 10,k = 10;
	
	printf("Using while loop\n");
	while(i <= 300)
	{
		if(i % 3 == 0)
		{
			printf("%d\n",i);
		}
		
		i++;
	}
	
	printf("Using for loop\n");
	for (j; j <= 300; j++)
	{
		if(j % 3 == 0)
		{
			printf("%d\n",j);
		}
	}
	
	printf("Using do-while loop\n");
	do
	{
		if(k % 3 == 0)
		{
			printf("%d\n",k);
		}
		
		k++;
	} while (k <= 300);
}
