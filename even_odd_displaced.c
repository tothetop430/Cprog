/* Extracting Even and odd numbers from the input numbers */
#include <stdio.h>
int main()
{
    int n,i,A[100],B[100],C[100];
    int j=0,k=0,x;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        x=A[i];
        if(x%2==0)
        {
            B[j]=x;
            j=j+1;
        }
        else
        {
            C[k]=x;
            k=k+1;
        }
    }
    printf("\nThe elements entered: ");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\nEven numbers from above elements: ");
    for(i=0;i<j;i++)
        printf("%d ",B[i]);
    printf("\nOdd numbers from above elements: ");
    for(i=0;i<k;i++)
        printf("%d ",C[i]);
    return 0;
}
