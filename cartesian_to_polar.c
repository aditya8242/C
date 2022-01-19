/*
Write  a  program  to  receive  Cartesian  co-ordinates  (x,y)  of  a  point and convert them into polar co-ordinates (r,theta(θ)).

Hint:  r = sqrt ( x2+ y2) and tan-1( y / x )
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float x,y,r,theta;
	
	printf("Enter the Cartesian co-ordinates(x, y) ");
	scanf("%f %f",&x,&y);
	
	r = sqrt(x*x + y*y);
	theta = atan(y/x);
	
	printf("Cartesian co-ordinates: %.0f %.0f\nPolar co-ordinates: %f %f\n",x,y,r,theta);
}
