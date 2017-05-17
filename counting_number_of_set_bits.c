/* COUNTING THE NUMBER OF SET BITS */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,t,i,A[1000];
    scanf("%d",&t);      //counting number of test cases
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        A[i]=count_set(n);
    }
    for(i=0;i<t;i++)
        printf("%d\n",A[i]);
    return 0;
}

int count_set(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
