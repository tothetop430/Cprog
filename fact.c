/* Finding Factorial of a number*/
#include <stdio.h>
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
}