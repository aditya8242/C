#include<stdio.h>

int main()
{
	int arr[] = {11, 21, 51, 101, 111};
	
	int *p = NULL;
	int *q = NULL;
	
	p = &(arr[1]);
	q = &(arr[4]);
	
	printf("data fetched by p is %d\n", *p);
	printf("data fetched by q is %d\n", *q);
	
	return 0;
}
