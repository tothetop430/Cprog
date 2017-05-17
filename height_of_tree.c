/* Finding the height of the tree*/
#include <stdio.h>
int main()
{
	int h1=0;             //height of the short man//
	int h2=0;           //height of the tall man//
	int d1=0;           //distance b/w h1 and h2//
	int d2=0;          //distance b/w h2 and tree//
	int t=0;        	//height of the tree to be calculated//
	int i1=0;
	int i2=0;
	
	printf("\nEnter the heigth of the short man :");
	scanf("%d",&h1);
	printf("\n               ...and in inches :");
	scanf("%d",&i1);
	printf("\nEnter the heigth of the tall man :");
	scanf("%d",&h2);
	printf("\n                     ...and in inches :");
	scanf("%d",&i2);
	
	int x=h1*12+i1;
	int y=h2*12+i2;
	
	printf("\nEnter the distance between short and tall man :");
	scanf("%d",&d1);
	printf("\nEnter the distance between tall man and the tree :");
	scanf("%d",&d2);
	
	int a=d1*12;
	int b=d2*12;
	
	t=(y-x)*(a+b)/a;
	t=(t+x);
	printf("%d\n",t);
	
	int t2=t/12;
	int t3=t%12;
	
	printf("The height of the tree is %d feet and %d inches",t2,t3);
	
	return 0;
}