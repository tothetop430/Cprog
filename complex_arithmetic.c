/* Operations on a complex number*/
#include <stdio.h>
#include <complex.h>
int main()
{
	double complex ax=2.0+3.0*I;
	double complex bx=3.0+6.0*I;
	
	printf("\nInitial values are ax and ay as %.2f%+.2fi and %.2f%+.2fi\n",creal(ax),cimag(ax),creal(bx),cimag(bx));
	
	double complex add=ax+bx;
	double complex sub=ax-bx;
	double complex mul=ax*bx;
	double complex div=ax/bx;
	
	printf("The addition of two nummbers is %.2f%+.2fi\n",creal(add),cimag(add));
	printf("The subtraction of two numbers is %.2f%+.2fi",creal(sub),cimag(sub));
	printf("\nThe multiplication of two numbers is %.2f%+.2fi",creal(mul),cimag(mul));
	printf("\nThe division of two numbers is %.2f%+.2fi",creal(div),cimag(div));
}