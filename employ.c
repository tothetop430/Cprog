/* Employee salary */
#include <stdio.h>
#define GROSS 3.625/100
int main()
{
	int num,rate,hr;
	float pay,t;

	scanf("%d",&num);
	scanf("%d",&rate);
	scanf("%d",&hr);

	if(hr>40)
	{
		t=(40)*rate+(hr-40)*1.5*rate;
	}
	else
		t=hr*rate;

	pay=t-t*GROSS;

	printf("%.2f",pay);
	return 0;
}
