/* Matrix Multiplication */
#include <stdio.h>
int main()
{
    int A[20][20],B[20][20],C[20][20];
    int m,n,l,k,i,j,x;
    printf("Enter the number of rows in A: ");
    scanf("%d",&m);
    printf("\nEnter the number of columns in A: ");
    scanf("%d",&n);
    printf("\nEnter the number of rows in B: ");
    scanf("%d",&k);
    printf("\nEnter the number of columns in B: ");
    scanf("%d",&l);

    if(n==k)
    {
        for(i=0;i<m;i++)
        {
            printf("Enter %d row elements in A\n",i+1);
            for(j=0;j<n;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        for(i=0;i<k;i++)
        {
            printf("Enter %d row elements in B\n",i+1);
            for(j=0;j<l;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<l;j++)
            {
                C[i][j]=0;
                for(x=0;x<n;x++)
                {
                    C[i][j]=(C[i][j])+((A[i][x])*(B[x][j]));
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<l;j++)
            {
                printf("The (%d,%d) element of A*B is %d\n",i+1,j+1,C[i][j]);
            }
        }
        return 0;
    }
    else
        printf("No matrix multiplication is possible");
    return 0;
}
