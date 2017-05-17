/* MONK AND WELCOME PROBLEM */

#include <stdio.h>
int main()
{
    long int N,i;
    scanf("%ld",&N);
    long int A[N],B[N],C[N];
    for(i=0;i<N;i++)
    {
        scanf("%ld",&A[i]);
    }
    for(i=0;i<N;i++)
    {
        scanf("%ld",&B[i]);
        C[i]=A[i]+B[i];
    }
    for(i=0;i<N;i++)
    {
        printf("%ld ",C[i]);
    }
    return 0;
}
