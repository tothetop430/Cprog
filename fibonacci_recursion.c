/* Fibonacci series using recursion function */
#include <stdio.h>
int c,n1,n2,newterm,n;
int fibo(int a,int b);
int fibo(int a,int b)
{
    if(c>=n)
        return;
    else
    {
        newterm=a+b;
        printf(" %d",newterm);
        a=b;
        b=newterm;
        c=c+1;
        fibo(a,b);
    }
}
int main()
{
    printf("Enter the number of terms you want: ");
    scanf("%d",&n);
    n1=0;
    n2=1;
    printf("%d %d",n1,n2);
    c=2;
    fibo(n1,n2);
    return 0;
}
