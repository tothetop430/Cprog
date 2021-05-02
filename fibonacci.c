/* Printing the fibonacci series using recursive method*/

#include<stdio.h>

int fibonacci(int);    /* Declaration of Function Fibonacci */

int main(void)
{
int n,i;
printf("Enter the number till you want to print fibonacci series : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",fibonacci(i));

}
return 0;
}


int fibonacci(int n)
{
if(n>0)
{
return(fib(n-1)+fib(n-2));
}
}