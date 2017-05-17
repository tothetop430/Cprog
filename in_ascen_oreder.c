/* Arranging in ascending order */
#include <stdio.h>
int main()
{
    int A[100],n,i,j,temp;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter %d value: ",i+1);
        scanf("%d",&A[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("\nAscending order\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
