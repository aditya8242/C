// filename 'X' suggests new version of project

#include<stdio.h>

int main()
{
	int i = 10;
	int j = -10;
	int k = +10;
	
	signed int a = 10;
	signed int b = -10;
	signed int c = +10;
	
	unsigned int x = 10;
	unsigned int y = +10;
	unsigned int z = -10; // programmer's responsibility to store positive value
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	
	return 0;
}
