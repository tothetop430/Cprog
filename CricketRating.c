/* CRICKET RATING */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[100000],a;
    long int N,i,j,sum,max;
    scanf("%ld",&N);
    if(N==0)
    {
        printf("0");
        return 0;
    }
    for(i=0; i<N; i++)
    {
        scanf("%d",&a);
        A[i] = a;
    }
    max = A[0];
    for(i=0; i<N-1; i++)
    {
        sum = A[i];
        for(j=i+1; j<N; j++)
        {
            sum = sum + A[j];
            if(sum>max)
            {
                max = sum;
            }
        }
    }
    if(max<0)
        printf("0");
    else
        printf("%ld",max);
    return 0;
}
