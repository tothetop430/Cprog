/* Finding Factorial of a number*/
/*#include <stdio.h>
int main()
{
	unsigned int n,f=1,i;
	printf("\nEnter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		goto end;
	}
	
	for(i=1;i<=n;++i)
	{
		f=f*i;
	}
	printf("The factorial of %d is %d",n,f);
	return 0;
	end:
	printf("Negative numbers not accepted!");
	return 0;
}*/
/* Factorial of a number using recurion approach*/
#include<stdio.h>

int fact(int);  // Declaration of function fact

int main()
{
int number;
printf("\nEnter a number to find its factorial : ");
scanf("%d",&number);
printf("Factorial of %d : %d",number,fact(number));
return 0;
}


int fact(int number)
{
if(number==0)
{
return(1);
}
if(number>0)
{
return(number*fact(number-1));
}
}