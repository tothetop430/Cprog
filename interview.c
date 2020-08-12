/*Interview accepting conditions*/
#include <stdio.h>
int main()
{
	int age,college,subject;
	
	printf("Enter the subject code (1 for chemistry and 2 for economics):");
	scanf("%d",&subject);
	printf("\nEnter the college code (10 for harvard and 11 for yale or 3 for others):");
	scanf("%d",&college);
	printf("\nEnter your present age:");
	scanf("%d",&age);
	
	if(age>25 && subject==1 && (college==3 || college==1))
	{
		printf("\nYou'r eligible for interview");
	}
	else if(college==11 && subject==1)
	{
		printf("\nYou'r eligible for interview");
	}
	else if(college==10 && subject==2 && age<=28)
	{
		printf("\nYou'r eligible for interview");
	}
	else if(college==11 && age>25 && !(subject==1))
	{
		printf("\nYou'r eligible for interview");
	}
	else
	{
		printf("You are not eligible for interview!!\a\a");
	}
	
	return 0;
}