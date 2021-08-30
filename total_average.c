//WAP to add marks of three tests and calculate total anb average

#include <stdio.h>

int main()
{
	float a,b,c,total,average;
	
	printf("Enter the marks of three tests ");
	scanf("%f %f %f",&a,&b,&c);
	
	total = a + b + c;
	average = a+b+c/3;
	
	printf("The total marks obtained in three tests are %.0f\nThe average is %.1f\n",total,average);
}
