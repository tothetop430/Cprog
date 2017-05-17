/* Summation of n terms of odd number*/
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of terms you want to add:");
	scanf("%d",&n);
	
	int sum=n*n;
	printf("The sum of the %d terms is %d",n,sum);
	return 0;
}