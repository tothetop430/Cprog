/* Finding the position of the number inputed in a given array */
#include <stdio.h>
int main()
{
    int A[100],n,i,j,a;
    printf("Enter the number of elements to be entered: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the number you for u want its position: ");
    scanf("%d",&a);

    for(i=0;i<n;i++)
    {
        if(A[i]==a)
        {
            printf("The position of the required number is %d",++i);
            goto there;
        }
    }
    printf("No such number is in ur list");
    return 0;
    there:
        return 0;
}
