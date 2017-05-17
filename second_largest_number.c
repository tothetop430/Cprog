/* finding  Second largest number */
#include <stdio.h>
int main()
{
    int A[100],n,i,j,temp;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("The second largest number is %d",A[n-2]);
    return 0;
}
