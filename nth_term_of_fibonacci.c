/* Finding nth term of fibonacci series */
#include <stdio.h>
int main()
{
    long fibon(int n);
    int n;
    scanf("%d",&n);
    printf("The %d term is : %ld",n,fibon(n));
    return 0;
}

long fibon(int n)
{
    if(n==2 || n==1)
        return 1;
    else
        return (fibon(n-1)+fibon(n-2));
}
