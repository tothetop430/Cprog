/* THE MAGIC */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    void num_of_days(int n);
    long int t,n,A[100000],i;
    printf("Enter the number of trials : ");
    scanf("%ld",&t);

    for(i=0;i<t;i++)
    {
        scanf("%ld",&A[i]);
    }
    for(i=0;i<t;i++)
    {
        num_of_days(A[i]);
    }
    return 0;
}

void num_of_days(int n)
{
    int d=0;
    int s=0;
    while(s!=n)
    {
        d=d+1;
        s=s+1;
        if(s==n)
            break;
        if(2*s<=n)
            s=2*s;
    }
    printf("%d\n",d);
}
