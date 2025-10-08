#include<stdio.h>

int main()
{
	int arr[] = {11, 21, 51, 101, 111};
	
	int *p = NULL;
	int *q = NULL;
	
	p = &(arr[1]);
	q = &(arr[4]);
	
	// p + q; // not allowed
	p = p + 3; // allowed
	
	printf("Data pointed by p is %d\n", *p);
	
	return 0;
}
