/* Summing the integers*/
#include <stdio.h>
int main()
{
	long count=0L;
	int i,j;
	
	printf("Enter the number upto which you want to sum from 1:");
	scanf("%ld",&count);
	
	for(i=1;i<=count;i++)
	{
		long sum=1L;
		j=1;
		printf("\n1");
		
		while(j<i)
		{
			sum+=++j;
			printf("+%d",j);
		}
		printf("=%ld\n",sum);
	}
	return 0;
}