/* Checking Palindrome */
#include <stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int A[n],x,y;
	while(i<n)
	{
		scanf("\n%d",&A[i]);
		i++;
	}
	int h=n/2;
	for(i=0;i<=h;i++)
	{
		x=A[i];
		y=A[n-1-i];
		if(x!=y)
		{	
			printf("Not Palindrome");
			goto there;
		}
	}
	printf("Palindrome");
	return 0;
	there:
	return 0;
}