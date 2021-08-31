//WAP to swap two numbers without using third variable

#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Enter two numbers ");
	scanf("%d %d",&a,&b);// 2 8
	
	printf("Before swap: %d %d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("After swap: %d %d\n",a,b);
}
