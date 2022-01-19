//WAP to explore use of ternary operator

#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Enter two numbers to find the greater one ");
	scanf("%d %d",&a,&b);
	
	(a > b) ? printf("%d is greater than %d\n",a,b)
			: printf("%d is greater than %d\n",b,a);
}
