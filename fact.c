/* Factorial of a number using recursive approach*/
#include<stdio.h>

int fact(int);  // Declaration of function fact

int main(void)
{
int number;
printf("\nEnter a number to find its factorial : ");
scanf("%d",&number);
printf("Factorial of %d : %d",number,fact(number));
return 0;
}


int fact(int number)   //Definition of function fact 
{
if(number==0)
{
return(1);
}
if(number>0)
{
return(number*fact(number-1));
}
}