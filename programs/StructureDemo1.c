#include<stdio.h>

struct Demo
{
	int i;
	float f;
	int j;
};

int main()
{
	struct Demo obj;
	
	printf("size of demo is %d\n", sizeof(struct Demo)); // 12
	printf("size of obj is %d\n", sizeof(obj));
	return 0;
}
