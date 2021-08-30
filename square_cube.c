//WAP to find square and cube of number

#include <stdio.h>
#include <math.h>

int main()
{
	float num;
	
	printf("Enter a number ");
	scanf("%f",&num);
	
	//using pow() function
	printf("%.0f (using pow() function)\n%.0f (using asterisk)\n",pow(num, 2),num*num);
}
