/* Finding Transpose of a given matrix of order m x n */
#include <stdio.h>
int main()
{
/* Main function */
    int i,j,k,x,m,n;	     //Declaring variables
    int A[20][20],B[20][20];	//Matrix A (given) B(transpose of A, to be computed)

// Getting rows and column (m, n)
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("\nEnter number of columns: ");
    scanf("%d",&n);

// Reading values for the given matrix
    for(i=0;i<m;i++)
    {
        printf("\nEnter %d row elements\n",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

// Getting transpose of matrix A
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            B[i][j]=A[j][i];	// Going by logic of transpose, here B(i,j) = A(j,i), so B(1, 0) = A(0, 1)
        }
    }

// Printing the final result of transpose matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nThe (%d,%d) element of A' is: %d",i+1,j+1,B[i][j]);
        }
    }
    return 0;
}
