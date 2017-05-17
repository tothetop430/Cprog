/* Finding the maximum value in each row of the given matrix */
#include <stdio.h>
int main()
{
    int A[50][50],n,i,j,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        max=A[i][0];
        for(j=1;j<n;j++)
        {
            if(A[i][j]>max)
                max=A[i][j];
        }
        printf("%d\n",max);
    }
    return 0;
}
