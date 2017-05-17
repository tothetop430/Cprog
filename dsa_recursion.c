/* Recursion */
#include <stdio.h>
int c=0,j=0;
int main()
{
    void g1(float x[],int n,int t);
    void g(float x[],int n,int t);
    float A[50];
    int n,t,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%f",A+i);
    }
    scanf("%d",&t);
    if(t==0)
        g1(A,n,t);
    else
        g(A,n,t);
    return 0;
}

void g1(float x[],int n,int t)
{
    if(j>=n)
        return;
    else
    {
        if(j!=t)
        {
            printf("%.0f\n",x[t]*x[n-j]);
        }
        j=j+1;
        return g1(x,n,t);
    }
}

void g(float x[],int n,int t)
{
    if(c>=n)
        return;
    else
    {
        if(c!=t)
            printf("%.0f\n",x[t]*x[n-1-j]);
        c=c+1;
        return g(x,n,t);
    }
}
