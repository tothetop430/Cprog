/* Printing the fibonacci series till n numbers*/
#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int n1=0;
	int n2=1;
	printf("%d %d",n1,n2);
	do
	{
		int new=n1+n2;
		n1=n2;
		n2=new;
		if(n2>num)
			break;
		printf(" %d",n2);
	}
	while(n2<num);
	return 0;
}