/* RECURSION - SIDDHARTH */
#include <stdio.h>
int main()
{
    void g(float x[],int n,int t);
    int n,t,i=0;
    float a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%f",a+i);
    scanf("%d",&t);
    g(a,n,t);
    return 0;
}
void g(float x[],int n,int t)
{
    if((n-1)!=t)
        printf("%.0f\n",x[t]*x[n-1]);
    if(n>1)
        g(x,n-1,t);
}
