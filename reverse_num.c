/* Reversing the digits*/
#include <stdio.h>
void main()
{
	unsigned int num=0,revnum=0,rem=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	do
	{
		rem=num%10;
		revnum=revnum*10+rem;
		num=num/10;
	}
	while(num!=0);
	printf("Reversed number is %d",revnum);
}