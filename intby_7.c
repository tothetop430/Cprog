/* First 50 positive integers divisible by seven*/
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int rem=i%7;
		if(rem!=0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}