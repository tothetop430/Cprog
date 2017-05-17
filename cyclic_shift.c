/* Cyclic shift of right */
#include <stdio.h>

int main()
{
    int A[50],temp;
    int i,m,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%i",A+i);
    }
    scanf("%d",&m);
    for(i=0;i<n-m;i++)
    {
        for(j=0;j<n-1;j++)
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",A[i]);
    return 0;
}
