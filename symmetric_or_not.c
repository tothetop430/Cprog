/* Finding Transpose of a given matrix of order m x n */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    int i,j,k,x,m,n;
    int A[20][20],B[20][20];
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("\nEnter number of columns: ");
    scanf("%d",&n);

    if(m==n){
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
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]==B[i][j])
            {
                found=true;
            }
            else
            {
                found==false;
                goto there;
            }
        }
    }
    if(found)
        printf("Symmetric Matrix");
    return 0;
    there:
        return 0;
    }
    else
    {
        printf("Entered Matrix is not SQUARE MATRIX!\a");
        return 0;
    }
}
