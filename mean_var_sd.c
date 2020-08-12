/* Calculating the mean variance and standard deviation */
#include <stdio.h>
#include <math.h>
int main()
{
    float A[2][100],x,y,mean,var,sd,s,s1;
    int n,i=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d value:",i+1);
        scanf("%f",&A[0][i]);
        x=A[0][i];
        A[1][i]=x*x;
        y=A[1][i];
        s=s+x;
        s1=s1+y;
    }
    mean=s/(float)n;
    s1=s1/(float)n;
    var=s1-mean*mean;
    sd=sqrt(var);
    printf("\n%.3f",mean);
    printf("\n%.3f",var);
    printf("\n%.3f",sd);
    return 0;
}
