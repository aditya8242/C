//WAP to explore use of ternary operator
//nesting of ternary

#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter three numbers to find greatest number among them ");
	scanf("%d %d %d",&a,&b,&c);
	
	(a > b && a > c) ? printf("%d is greatest\n",a)
					 : (b > a && b > c) ? printf("%d is greatest\n",b)
					 : printf("%d is greatest\n",c)
					 ;
					  
}
