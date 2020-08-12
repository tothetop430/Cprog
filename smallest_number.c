/* Smallest number in the entered array */
#include <stdio.h>
int main()
{
    int A[100],n,i,j,small;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    small=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]<small)
            small=A[i];
    }
    j=0;
    while(small!=A[j])
    {
        j=j+1;
    }
    printf("The smallest number is %d at position %d",small,j+1);
    return 0;
}
