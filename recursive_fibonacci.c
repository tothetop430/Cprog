/* Recursive fibonacci */
#include <stdio.h>
int c=3,n1=0,n2=1,newterm=0;
int main()
{
    int fibo(int n);
    int n;
    scanf("%d",&n);
    if(n==0)
        return 0;
    printf("0 1 ");
    fibo(n);
}

int fibo(int n)
{
    if(c>n)
        return 0;
    else
    {
        newterm=n1+n2;
        printf("%d ",newterm);
        n1=n2;
        n2=newterm;
        c=c+1;
        return fibo(n);
    }
}
