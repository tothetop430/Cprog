/* Recursive function for summation of n interger numbers */
#include <stdio.h>
int sum(int num);
int main()
{
	int n,s;
	printf("Enter n:");
	scanf("%d",&n);
	
	s=sum(n);
	printf("%d",s);
}
int sum(int num)
{
	int i=1,x=0;
	do{
		x=x+i;
		i++;
	}
	while(i<=num);
	return x;
}