// Program to find the range of set of numbers.

#include <stdio.h>

int main()
{
	int range,num,min,max;
	
	printf("Enter the limit ");
	scanf("%d",&range);
	
	printf("Enter %d numbers\n",range);
	scanf("%d",&num);
	
	min = max = num;
	
	while(range - 1)
	{
		scanf("%d",&num);
		
		if(num > max)
		{
			max = num;
		}
		else
		{
			min = num;
		}
		range--;
	}
	
	printf("Smallest number: %d\nBiggest number: %d\n",min,max);
	printf("Range: %d\n",max - min);
}
