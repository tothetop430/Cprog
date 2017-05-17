/* Finding roots of a quadratic equation*/
#include <stdio.h>
#include <math.h>
int main()
{
	double root1,root2,a,b,c;
	printf("\nEnter the coefficients of the equation:");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("\nYou entered the equation as %.0lf*x^2+%.0lf*x+%.0lf",a,b,c);
	
	double d=b*b-4.0*a*c;
	
	if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("\nThe roots are real and unequal as \n%.2lf and %.2lf",root1,root2);
	}
	else if(d==0)
	{
		root1=(-b+sqrt(d))/(2*a);
		printf("\nThe roots are real and equal as \n%.2lf and %.2lf",root1,root1);
	}
	else
	{
		printf("\nNo real roots exist!");
	}
	return 0;
}