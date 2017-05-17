/* Conversion of binary to decimal*/
#include <stdio.h>
#include <math.h>
void main()
{
	unsigned long int bin,i=0,dec=0,rem=0;
	printf("Enter the binary number:");
	scanf("%ld",&bin);
	long bin1=bin;

	while(bin!=0)
	{
		rem=bin%10;
		dec=dec+rem*pow(2,i);
		bin=bin/10;
		i=i+1;
	}
	printf("The decimal number to binary %ld is %ld",bin1,dec);
}
