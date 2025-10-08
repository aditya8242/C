//WAP to calculate profit loss

#include <stdio.h>

int main()
{
	float cp,sp;//profit,loss;
	
	printf("Enter cost price and selling price ");
	scanf("%f %f",&cp,&sp);
	
	if (sp > cp)
	{
		printf("Profit\ncost price: %.2f\nselling price: %.2f\nProfit = %.2f\n",cp,sp,sp - cp);
	}
	else
	{
		printf("Loss\ncost price: %.2f\nselling price: %.2f\nLoss = %.2f\n",cp,sp,cp - sp);
	}
}
