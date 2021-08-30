//WAP to demonstrate working of assignment operators

#include <stdio.h>

int main()
{
	int a,b;
	
	a = 10;
	b = 5;
	
	
	printf("%d\n",a += b);//a = a + b
	
	printf("%d\n",a -= b);//a = a - b
	
	printf("%d\n",a *= b);//a = a * b

	printf("%d\n",a /= b);//a = a / b
	
	printf("%d\n",a %= b);//a = a % b
}
