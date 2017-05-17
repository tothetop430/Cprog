/* Finding nCr of a given number with r value given by the user as well */
#include <stdio.h>
int main()
{
    int fact(int k);
    int n,r,ncr;
    printf("Enter the Number n: ");
    scanf("%d",&n);
    printf("Enter the Number r smaller than or equal to n: ");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("The total number of combinations are : %d",ncr);
    return 0;
}

int fact(int k)
{
    int i,f=1;
    for(i=1;i<=k;i++)
    {
        f=f*i;
    }
    return f;
}
