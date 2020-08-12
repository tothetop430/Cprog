/* Speed of the sound in air */
#include <stdio.h>
#include <math.h>
void main()
{
	float t,a,s;
	scanf("%f",&t);
	
	s=sqrt((5.0f*t+297.0f)/247.0f);
	a=1086*s;
	
	printf("%.2f",a);
}