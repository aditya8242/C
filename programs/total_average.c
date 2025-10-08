//WAP to add marks of three tests and calculate total and average

#include <stdio.h>

int main()
{
	float a,b,c,total,average;
	
	printf("Enter the marks of three tests ");
	scanf("%f %f %f",&a,&b,&c);
	
	total = (a + b + c);
	average = total/3;
	
	printf("The total marks obtained in three tests are %f\nThe average is %f\n",total,average);
}
