/* LUCKY NUMBERS */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    unsigned long long int A[100000],n,j;
    long int t,i,sum=0;
    int x;
    printf("Enter the number of tests cases: ");
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&A[i]);
    }
    for(i=0;i<t;i++)
    {
        sum=0;
        n=A[i];
        for(j=2;j<=n;j++)
        {
            x=num_of_set_bits(j);
            if(x==2)
            {
                sum=sum+j;
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}

int num_of_set_bits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
