#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int input;
	float num1,num2;
	while(1)
	{
		printf("What would you like to do?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Square Root\n7.Exit\n");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
			printf("Enter two numbers ");
			scanf("%f %f",&num1,&num2);
			printf("%.0f + %.0f = %.2f\n",num1,num2,num1+num2);
			break;
			case 2:
			printf("Enter two numbers ");
			scanf("%f %f",&num1,&num2);
			printf("%.0f - %.0f = %.2f\n",num1,num2,num1-num2);
			break;
			case 3:
			printf("Enter two numbers ");
			scanf("%f %f",&num1,&num2);
			printf("%.0f * %.0f = %.2f\n",num1,num2,num1*num2);
			break;
			case 4:
			printf("Enter two numbers ");
			scanf("%f %f",&num1,&num2);
			printf("%.0f / %.0f = %f\n",num1,num2,num1/num2);
			break;
			case 5:
			printf("Enter base and exponent ");
			scanf("%f %f",&num1,&num2);
			printf("Base: %.0f\nExponent: %.0f\nAnswer: %.0f\n",num1,num2,pow(num1,num2));
			break;
			case 6:
			printf("Enter a number ");
			scanf("%f",&num1);
			printf("Square root of %f is %f\n",num1,sqrt(num1));
			break;
			case 7:
			printf("Exited\n");
			exit(1);
			default:
			printf("Invalid Input!\n");
			exit(1);
		}
	}
}
