// Program to generate multiplication table of any number

#include <stdio.h>

int main()
{
	int num,i,n;
	
	printf("Enter a number to generate its multiplication table ");
	scanf("%d",&num);
	
	printf("Upto what value would like to generate table ? ");
	scanf("%d",&n);
	
	printf("\n\tMultiplication table of %d\n\tUpto %d\n\n",num,n);
	
	for(i = 1; i <= n; i++)
	{
		printf("\t%d * %d = %d\n",num,i,num*i);
	}
}
