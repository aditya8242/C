/*
If  a  number  is  input  through  the  keyboard,  write  a  program  to  print  a  new  number  by  adding  one  to  each  of  its  digits. 

Note: Number will not carry after 9
Example:999 Number 
		After adding one: 101010
*/

#include <stdio.h>

int main()
{
	int num,add = 0,digit,temp;
	
	printf("Enter a number to add one to its digits ");
	scanf("%d",&num);
	
	printf("Before adding one to each digit: %d\n",num);
	
	while(num)
	{
		digit = num % 10;
		add = add * 10 + digit;
		num = num / 10;
	}
	
	printf("Number after adding one to each: ");
	while(add)
	{
		digit = add % 10;
		digit++;
		printf("%d",digit);
		add /= 10;
	}
	
	printf("\n");
}
