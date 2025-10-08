#include<stdio.h>

struct Demo
{
	int i;
	float f;
	char ch;
	int j;
};

int main()
{
	printf("size of structure is %d\n", sizeof(struct Demo));
	
	return 0;
}
