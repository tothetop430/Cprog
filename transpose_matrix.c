/* Finding Transpose of a given matrix of order m x n */
#include <stdio.h>
int main()
{
    int i,j,k,x,m,n;
    int A[20][20],B[20][20];
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("\nEnter number of columns: ");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        printf("\nEnter %d row elements\n",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nThe (%d,%d) element of A' is: %d",i+1,j+1,B[i][j]);
        }
    }
    return 0;
}
