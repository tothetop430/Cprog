/* Seconds to minute, hours and day*/
#include <stdio.h>
int main()
{
	long int sec,min,hr,day;
	
	printf("\nEnter the seconds:");
	scanf("%ld",&sec);
	
	min=sec/60;
	hr=min/60;
	day=hr/24;
	
	printf("\nTotal minutes taken: %ld",min);
	printf("\nTotal hours taken: %ld",hr);
	printf("\nTotal days taken: %ld",day);
	return 0;
}