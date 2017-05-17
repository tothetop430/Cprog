/*Uppercase letter to Lower case*/
#include <stdio.h>
void main()
{
	char upper,lower;
	printf("Enter the upper case character:");
	scanf("%c",&upper);
	if(upper>=65 && upper<91)
	{
		lower=upper+32;
		printf("The lower case for %c is %c",upper,lower);
	}
	else{
		printf("Please enter the correct upper case letter!!\a\a");
	}	
}