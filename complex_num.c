/* Complex arithmetic in skillrack */
#include <stdio.h>
#include <complex.h>
double complex add(double complex a,complex b);
double complex sub(double complex a,complex b);
double complex mul(double complex a,complex b);
int main()
{
	int ar,ai,br,bi;          //real and imag part decl.
	double complex a,b;           // complex a and b  decl.
	scanf("\n%d",&ar);         // taking input
	scanf("\n%d",&ai);
	scanf("\n%d",&br);
	scanf("\n%d",&bi);
	
	a=ar+ai*I;
	b=br+bi*I;
	
	double complex x=add(a,b);
	double complex y=sub(a,b);
	double complex z=mul(a,b);
	if((int)cimag(x)==1)
		printf("%.0lf+i\n",creal(x));
	else if((int)cimag(x)==-1)
		printf("%.0lf-i\n",creal(x));
	else
		printf("%.0lf%+.0lfi\n",creal(x),cimag(x));
	if((int)cimag(y)==1)
		printf("%.0lf+i\n",creal(y));
	else if((int)cimag(y)==-1)
		printf("%.0lf-i\n",creal(y));
	else
		printf("%.0lf%+.0lfi\n",creal(y),cimag(y));
	if((int)cimag(z)==1)
		printf("%.0lf+i\n",creal(z));
	else if((int)cimag(z)==-1)
		printf("%.0lf-i\n",creal(z));
	else
		printf("%.0lf%+.0lfi",creal(z),cimag(z));
	return 0;
}
double complex add(double complex a,double complex b)
{
	double complex i=a+b;
	return i;
}
double complex sub(double complex a,double complex b)
{
	double complex i=a-b;
	return i;
}
double complex mul(double complex a,double complex b)
{
	double complex i=a*b;
	return i;
}