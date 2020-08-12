/* Multiplication Table*/
#include <stdio.h>
void main()
{
	int i,n;
	printf("Enter the number till which you want your multipliaction table:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\nThe multiplication table for %d is \n",i);
		for(int j=1;j<=10;j++)
		{
			int m=j*i;
			printf("%d x %d=%d\n",i,j,m);
		}
	}
}