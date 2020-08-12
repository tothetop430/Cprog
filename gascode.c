/* Emission level checking */
#include <stdio.h>
int main()
{
	int code;
	unsigned long odometer=0;
	float g_mile;
	
	scanf("\n%d",&code);
	scanf("\n%f",&g_mile);
	scanf("\n%ld",&odometer);
	
	if(code==1 && g_mile>3.40 && odometer<=50000)
		printf("Emission exceed permitted level of 3.4 g/mile");
	else if(code==1 && g_mile>1.0 && odometer>50000 && odometer<=100000)
		printf("Emission exceed permitted level of 1.0 g/mile");
	else if(code==1 && g_mile<=3.40 && odometer<=50000)
		printf("Emission do not exceed permitted level of 3.4 g/mile");
	else if(code==1 && g_mile<=1.0 && odometer>50000 && odometer<=100000)
		printf("Emission do not exceed permitted level of 1.0 g/mile");
	
	if(code==2 && g_mile>0.31 && odometer<=50000)
		printf("Emission exceed permitted level of 0.31 g/mile");
	else if(code==2 && g_mile>0.39 && odometer>50000 && odometer<=100000)
		printf("Emission exceed permitted level of 0.39 g/mile");
	else if(code==2 && g_mile<=0.31 && odometer<=50000)
		printf("Emission do not exceed permitted level of 0.31 g/mile");
	else if(code==2 && g_mile<=0.39 && odometer>50000 && odometer<=100000)
		printf("Emission do not exceed permitted level of 0.39 g/mile");
	
	if(code==3 && g_mile>0.40 && odometer<=50000)
		printf("Emission exceed permitted level of 0.4 g/mile");
	else if(code==3 && g_mile>1.0 && odometer>50000 && odometer<=100000)
		printf("Emission exceed permitted level of 1.0 g/mile");
	else if(code==3 && g_mile<=0.40 && odometer<=50000)
		printf("Emission do not exceed permitted level of 0.4 g/mile");
	else if(code==3 && g_mile<=1.0 && odometer>50000 && odometer<=100000)
		printf("Emission do not exceed permitted level of 1.0 g/mile");
	
	if(code==4 && g_mile>0.25 && odometer<=50000)
		printf("Emission exceed permitted level of 0.25 g/mile");
	else if(code==4 && g_mile>0.31 && odometer>50000 && odometer<=100000)
		printf("Emission exceed permitted level of 0.31 g/mile");
	else if(code==4 && g_mile<=0.25 && odometer<=50000)
		printf("Emission do not exceed permitted level of 0.25 g/mile");
	else if(code==4 && g_mile<=0.31 && odometer>50000 && odometer<=100000)
		printf("Emission do not exceed permitted level of 0.31 g/mile");
	
	return 0;
}