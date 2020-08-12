/* Checking of the prime number*/
#include <stdio.h>
int main()
{
	int num,rem=1,num1;
	printf("Enter the number:");
	scanf("%d",&num);
	num1=num;
	
	for(int i=2;i<=(num/2);i++)
	{
		rem=num%i;
		if(rem==0)
		{	printf("The number %d is not a prime number",num1);
			break;
		}
	}
	if(rem!=0)
		printf("The number %d is a prime number",num1);
	return 0;
}