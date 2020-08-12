/* Printing month in a formal manner*/
#include <stdio.h>
#include <string.h>
int main()
{
	int day,month,year;
	char month1;
	printf("\nEnter the date as DD MM YYYY:");
	scanf("%d\t%d\t%d",&day,&month,&year);
	
	if(month>=1 && month<=12)
	{
		if(day==1 || day==21 || day==31)
		{
		if(month==1)
			printf("%dst January %d",day,year);
		else if(month==2)
			printf("%dst February %d",day,year);
		else if(month==3)
			printf("%dst March %d",day,year);
		else if(month==4)
			printf("%dst April %d",day,year);
		else if(month==5)
			printf("%dst May %d",day,year);
		else if(month==6)
			printf("%dst June %d",day,year);
		else if(month==7)
			printf("%dst July %d",day,year);
		else if(month==8)
			printf("%dst August %d",day,year);
		else if(month==9)
			printf("%dst September %d",day,year);
		else if(month==10)
			printf("%dst October %d",day,year);
		else if(month==11)
			printf("%dst November %d",day,year);
		else
			printf("%dst December %d",day,year);
		}
		else if(day==2 || day==22)
		{
		if(month==1)
			printf("%dnd January %d",day,year);
		else if(month==2)
			printf("%dnd February %d",day,year);
		else if(month==3)
			printf("%dnd March %d",day,year);
		else if(month==4)
			printf("%dnd April %d",day,year);
		else if(month==5)
			printf("%dnd May %d",day,year);
		else if(month==6)
			printf("%dnd June %d",day,year);
		else if(month==7)
			printf("%dnd July %d",day,year);
		else if(month==8)
			printf("%dnd August %d",day,year);
		else if(month==9)
			printf("%dnd September %d",day,year);
		else if(month==10)
			printf("%dnd October %d",day,year);
		else if(month==11)
			printf("%dnd November %d",day,year);
		else
			printf("%dnd December %d",day,year);
		}
		else if(day==3 || day==23)
		{
		if(month==1)
			printf("%drd January %d",day,year);
		else if(month==2)
			printf("%drd February %d",day,year);
		else if(month==3)
			printf("%drd March %d",day,year);
		else if(month==4)
			printf("%drd April %d",day,year);
		else if(month==5)
			printf("%drd May %d",day,year);
		else if(month==6)
			printf("%drd June %d",day,year);
		else if(month==7)
			printf("%drd July %d",day,year);
		else if(month==8)
			printf("%drd August %d",day,year);
		else if(month==9)
			printf("%drd September %d",day,year);
		else if(month==10)
			printf("%drd October %d",day,year);
		else if(month==11)
			printf("%drd November %d",day,year);
		else
			printf("%drd December %d",day,year);
		}
		else
		{
		if(month==1)
			printf("%dth January %d",day,year);
		else if(month==2)
			printf("%dth February %d",day,year);
		else if(month==3)
			printf("%dth March %d",day,year);
		else if(month==4)
			printf("%dth April %d",day,year);
		else if(month==5)
			printf("%dth May %d",day,year);
		else if(month==6)
			printf("%dth June %d",day,year);
		else if(month==7)
			printf("%dth July %d",day,year);
		else if(month==8)
			printf("%dth August %d",day,year);
		else if(month==9)
			printf("%dth September %d",day,year);
		else if(month==10)
			printf("%dth October %d",day,year);
		else if(month==11)
			printf("%dth November %d",day,year);
		else
			printf("%dth December %d",day,year);
		}
	}
	else
	{
		printf("Enter the correct month");
	}
	return 0;
}