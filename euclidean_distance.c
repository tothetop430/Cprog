/* Euclidean distance */
#include <stdio.h>
#include <math.h>
int main()
{
    int A[2][50],i;
    int n,m,rx,ry,d,d1;
    scanf("%d",&n);
    scanf("%d",&m);

    rx=n/2;
    ry=m/2;

    for(i=1;i<=rx;i++)
    {
        A[0][i-1]=i;
        A[1][i-1]=(ry/rx)*i;
    }

    d=sqrt(pow(rx,2)+pow(ry,2));
    for(i=0;i<rx;i++)
    {
        d1=sqrt(pow(A[0][i],2)+pow(A[1][i],2));
        if(d1<=d)
        {
            printf("%d\n",A[0][i]);
            printf("%d\n",A[1][i]);
        }
    }
    return 0;
}
