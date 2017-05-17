/* Recursive calling of the function to find nCr */
#include <stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int fact(int n);
    int n,r,ncr;
    printf("Enter the total possible outcomes: ");
    scanf("%d",&n);
    printf("Enter the number of outcomes you wants to be selected: ");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("The required factorial is : %d",ncr);
    return 0;
}
