/* Simple Calculator*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a,b;
	char n;
	
	there:
	printf("\nEnter the arithmetic operation on two numbers:");
	scanf("%lf%c%lf",&a,&n,&b);
	if(n=='n')
	{
		goto here;
	}
	else{
	switch(n)
	{
		case '+':
		printf("\nThe added answer is %.2lf",a+b);
		break;
		case '-':
		printf("\nThe subtracted answer is %.2lf",a-b);
		break;
		case '*':
		printf("\nThe multiplied answer is %.2lf",a*b);
		break;
		case '/':
		printf("\nThe division result is %.2lf and remainder is %.2lf",a/b,a-b*(a/b));
		break;
		default:
		printf("\nOops! you entered the wrong arithmetic operator\a");
		break;
	}
	
	goto there;
	}
	here:
	return 0;
}