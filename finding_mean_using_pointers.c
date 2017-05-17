/* Finding Arithmetic mean using pointers */
#include <stdio.h>
int main()
{
    int A[20],n,i,j;
    printf("Enter the value for the numbers of values to be get averaged: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(A+i));
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+*(A+i);
    }
    j=sum/n;
    printf("Average is %d",j);
    return 0;
}
