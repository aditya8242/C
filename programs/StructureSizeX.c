#include<stdio.h>

struct Demo
{
	int i;
	float f;
	char ch1;
	char ch2;
	int j;
};

int main()
{
	printf("size of structure is %d\n", sizeof(struct Demo));
	
	return 0;
}
