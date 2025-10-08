//Write  a  program  to  find  the  absolute  value  of  a  number  entered through the keyboard.

#include <stdio.h>
#include <math.h>

int main()
{
	double num;
	
	printf("Enter a number ");
	scanf("%lf",&num);
	
	printf("Number: %lf\nAbsolute Value: %lf\n",num,fabs(num));
}
