/* Finding Trace of the matrix */
#include <stdio.h>
int main()
{
    int m,n,i,j,A[20][20],x=0;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("\nEnter the number of columns: ");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        printf("Enter %d row elements\n",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                x=x+A[i][j];
            }
        }
    }
    printf("Trace of the matrix A is %d",x);
    return 0;
}
