/* Length of the string */
#include <stdio.h>
#include <stdbool.h>
char *length(char *a[200]);
void main()
{
	char A[200],x,l;
	int i=0;
	
	for(i=0;i<200;i++)
	{
		A[i]='o';
	}
	bool terminate=false;
	bool a=!(terminate);
	while(a)
	{
		scanf("%c",&A[i]);
		printf("You want another character (y 0r n):");
		scanf("%c",&x);
		if(x=='n')
			a=terminate;
		i++;
	}
	
	l=length(A[200]);
	printf("%c",l);
}
char *length(char *a[200])
{
	int j=0,c=0;
	char y;
	for(j=0;j<200;j++)
	{
		y=a[j];
		if(y=='o')
			break;
		c=c+1;
	}
	return c;
}