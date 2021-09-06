//WAP to find average of n numbers

#include <stdio.h>

int main()
{
	float n,num,avg = 0;
	
	printf("Enter the number of elements to find their average ");
	scanf("%f",&n);
	
	printf("Enter %.0f elements ",n);
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%f",&num);
		avg += num;
	}
	
	printf("Total: %.2f\nAverage: %.2f\n",avg,avg/n);
}
