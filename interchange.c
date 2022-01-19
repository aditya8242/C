//WAP to interchange digits

#include <stdio.h>

int main()
{
	int a,b,temp;
	
	printf("Enter two numbers ");
	scanf("%d %d",&a,&b);
	
	printf("Before interchange\n%d %d\n",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("After interchange\n%d %d\n",a,b);
}
