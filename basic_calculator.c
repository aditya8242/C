//basic calculator

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char choice;
	
	float num1,num2;
	
	printf("What would you like to do?\n1.'+'\n2.'-'\n3.'*'\n4.'/'\n5.Exit\n");
	scanf("%c",&choice);
		
	switch(choice)
	{
		case '+':
		printf("Enter two numbers ");
		scanf("%f %f",&num1,&num2);
		printf("%.0f + %.0f = %.2f\n",num1,num2,num1+num2);
		break;
		case '-':
		printf("Enter two numbers ");
		scanf("%f %f",&num1,&num2);
		printf("%.0f - %.0f = %.2f\n",num1,num2,num1-num2);
		break;
		case '*':
		printf("Enter two numbers ");
		scanf("%f %f",&num1,&num2);
		printf("%.0f * %.0f = %.2f\n",num1,num2,num1*num2);
		break;
		case '/':
		printf("Enter two numbers ");
		scanf("%f %f",&num1,&num2);
		printf("%.0f / %.0f = %f\n",num1,num2,num1/num2);
		break;
		default:
		printf("\nExited!\n");
		exit(1);
	}
}
