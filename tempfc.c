/* Temperature conversion program*/
#include <stdio.h>
int main()
{
	float f,c,g;
	char n;
	printf("\nEnter f for conversion of temperature form f to c otherwise c:");
	scanf("%c",&n);
	printf("Enter the amount of temperature in units of %c:",n);
	scanf("%f",&g);
	
	if(n=='f')
	{
		c=(5.0f/9.0f)*(g-32.0f);
		printf("The converted temperature from f to c is %.2f C",c);
	}
	else if(n=='c')
	{
		f=(9.0f/5.0f)*g+32.0f;
		printf("The converted temperature from c to f is %.2f F",f);
	}
	else{
		printf("You entered the wrong input cannot recognize in the given field!!\a\a");
	}
	return 0;
} 