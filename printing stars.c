/* Printing stars */
#include <stdio.h>
int main()
{
    int i,j,n;

    printf("\nEnter the number of lines you want: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
    }

    return 0;
}
