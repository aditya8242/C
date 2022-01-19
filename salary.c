//WAP to find gross salary

#include <stdio.h>

int main()
{
	float bs,gs,hra,da;
	
	printf("Enter your basic salary to find your gross salary ");
	scanf("%f",&bs);
	
	if(bs < 5000)
	{
		da = 40 % 100;
		hra = 20 % 100;
	}
	else
	{
		da = 10 % 100;
		hra = 500;
	}
	
	gs = bs + da + hra;
	
	printf("Basic salary: %.2f\nGross salary: %.2f\n",bs,gs);
}
