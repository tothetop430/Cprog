/* Sorting words in alphabetical order */
#include <stdio.h>
#include <string.h>
int main()
{
    char A[50][50],temp[50];
    int i,j,n;
    printf("Enter the number of words you want to enter: ");
    scanf("%d",&n);
    printf("Enter %d words:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",A[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(A[j],A[j+1])>0)
            {
                strcpy(temp,A[j]);
                strcpy(A[j],A[j+1]);
                strcpy(A[j+1],temp);
            }
        }
    }

    printf("The sorted words are as follows: \n");
    for(i=0;i<n;i++)
        printf("%s\n",A[i]);
    return 0;
}
