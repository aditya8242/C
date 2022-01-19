/*Write a program to receive values of latitude (L1, L2) and longitude*/
/*(G1, G2), in degrees, of two places on the earth and output the*/
/*distance (D) between them in nautical miles. The formula for*/
/*distance in nautical miles is:*/
/*D = 3963 cos -1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float L1,L2,G1,G2,D;
	float const pi = 3.141592;
	
	
	printf("Enter the values of latitude(L1, L2) ");
	scanf("%f %f",&L1,&L2);
	printf("Enter the values of longitude(G1, G2) ");
	scanf("%f %f",&G1,&G2);
	
	L1 = L1 * (pi / 180);
	L2 = L2 * (pi / 180);
	G1 = G1 * (pi / 180);
	G2 = G2 * (pi / 180);
	
	D = 3963 * acos( sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G1 - G2));
	
	printf("%f\n",D);
}
