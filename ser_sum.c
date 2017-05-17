/* Finding sum of a series 1+(1+2)+(1+2+3)+...+(1+2+3+...n)*/
#include <stdio.h>
int main()
{
	int n,sum=0,t;
	
	printf("Enter the number upto which you want to find the sum:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		t=0;
		for(int j=1;j<=i;j++)
		{
			t=t+j;
		}
		sum=sum+t;
	}
	printf("\nThe sum of the series is %d",sum);
	return 0;
}