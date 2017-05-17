/* SHERLOCK AND XOR */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long int n,A[100000],i,j,B[20],p,q,count=0;
    int t,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%ld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%ld",&A[j]);
        }
        for(p=0;p<n-1;p++)
        {
            for(q=p+1;q<n;q++)
            {
                r=p^q;
                if(r%2==1)
                    count++;
            }
        }
        B[i]=count;
    }
    for(i=0;i<t;i++)
        printf("%ld\n",B[i]);
    return 0;
}
