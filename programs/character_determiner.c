//WAP to determine what type of character is entered

#include <stdio.h>

int main()
{
	char input;
	
	printf("Enter a character to determine its type ");
	scanf("%c",&input);
	
	if (input >= 65 && input <= 90)
	{
		printf("%c is a Capital letter\n",input);
	}
	else if (input >= 97 && input <= 122)
	{
		printf("%c is a small case letter\n",input);
	}
	else if (input >= 48 && input <= 57)
	{
		printf("%c is a digit\n",input);
	}
	else
	{
		printf("%c is a special symbol\n",input);
	}
}
