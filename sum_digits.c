/* Sum of the digits of the given number*/
#include <stdio.h>
int main()
{
	int i,rem,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	int num1=num;
	do
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	while(num!=0);
	printf("The sum of the digits of %d is %d",num1,sum);
	return 0;
}