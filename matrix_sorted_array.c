/* Making matrix sorted array */
#include <stdio.h>
int main()
{
    int A[20][20],B[20],C[20],n,i,j,k,temp;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("\n%d",&A[i][j]);
        }
    }


    //Sorting Rows

    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            B[k]=A[i][k];
        }
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-1-j;k++)
            {
                if(B[k]>B[k+1])
                {
                    temp=B[k];
                    B[k]=B[k+1];
                    B[k+1]=temp;
                }
            }
        }
        for(k=0;k<n;k++)
        {
            A[i][k]=B[k];
        }
    }



    //Sorting columns

    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            C[k]=A[k][j];
        }
        for(i=0;i<n-1;i++)
        {
            for(k=0;k<n-1-i;k++)
            {
                if(C[k]>C[k+1])
                {
                    temp=C[k];
                    C[k]=C[k+1];
                    C[k+1]=temp;
                }
            }
        }
        for(k=0;k<n;k++)
        {
            A[k][j]=C[k];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
    }
    return 0;

}
