#include <stdio.h>
#include <math.h>

int main()
{
	float const pi = 3.14159;
	float degree, radian;
	
	printf("Enter an angle in degree ");
	scanf("%f",&degree);
	
	radian = degree * (pi / 180);
	
	printf("Sin %f = %f\n",degree,sin(radian));
	printf("Cos %f = %f\n",degree,cos(radian));
	printf("Tan %f = %f\n",degree,tan(radian));
	printf("Cosec %f = %f\n",degree,1/sin(radian));
	printf("Sec %f = %f\n",degree,1/cos(radian));
	printf("Cot %f = %f\n",degree,1/tan(radian));
}
