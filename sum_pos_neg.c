/* Sum of positive and negative integers separately */
#include <stdio.h>
#include <math.h>
int main()
{
    int diff,psum=0,nsum=0,A[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d:",i+1);
        scanf("%d",&A[i]);
        if(A[i]>0)
        {
            psum=psum+A[i];
        }
        else
        {
            nsum=nsum+A[i];
        }
    }
    nsum=fabs(nsum);
    if(psum>nsum)
    {
        printf("\nLarger sum is for positive numbers in magnitude i.e. %d",psum);
    }
    else
    {
        printf("\nLarger sum is for negative numbers in magnitude i.e. %d",nsum);
    }
    diff=fabs(psum-nsum);
    printf("\nThe difference is %d",diff);
    return 0;
}
