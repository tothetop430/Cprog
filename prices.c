/* Calculating Prices*/
#include <stdio.h>
int main()
{
	int quantity;
	float price;
	printf("\nEnter the quantity you want:");
	scanf("%d",&quantity);
	
	price=5.0f*quantity;
	if(quantity>50)
	{
		price=price-0.15f*price;
	}
	else if(quantity>30)
	{
		price=price-0.1f*price;
	}
	printf("The discounted price is %.2f",price);
	return 0;
}