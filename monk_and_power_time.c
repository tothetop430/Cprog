/* MONK AND POWER OF TIME */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,A[110],B[110],i,j,count=0,temp;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        scanf("%d",&B[i]);
    i=0;
    while(i<n)
    {
        if(A[i]==B[i])
        {
            i=i+1;
            count++;
        }
        else
        {
            for(j=i;j<n-1;j++)
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
