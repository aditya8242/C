//WAP to find simple interest

#include <stdio.h>

int main()
{
	float p,n,r,si;
	
	printf("Enter Principal(P),Number of years(N) and Rate of Interest(R) ");
	scanf("%f %f %f",&p,&n,&r);
	
	si = p*n*r/100;
	
	printf("Principal(P): %.2f\nNumber of years(N): %.0f\nRate of Interest(R): %.2f\nSimple Interest: %.2f\n",p,n,r,si);
}
