/*Conversion of a number to its english word*/
#include <stdio.h>
int main()
{
	int num,rem,sum=0,rem1;
	printf("Enter the number:");
	scanf("%d",&num);
	
	do{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	while(num!=0);
	
	do
	{
		rem1=sum%10;
		
		if(rem1==1)
			printf(" One ");
		else if(rem1==2)
			printf(" Two ");
		else if(rem1==3)
			printf(" Three ");
		else if(rem1==4)
			printf(" Four ");
		else if(rem1==5)
			printf(" Five ");
		else if(rem1==6)
			printf(" Six ");
		else if(rem1==7)
			printf(" Seven ");
		else if(rem1==8)
			printf(" Eight ");
		else if(rem1==9)
			printf(" Nine ");
		else
			printf(" Zero ");
		
		sum=sum/10;
	}
	while(sum!=0);
	return 0;
}