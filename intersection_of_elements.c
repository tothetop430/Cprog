/* intersecting elements that is common elements */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    int A[20],B[15],i,j,k,l;
    int x=0,C[15];
    printf("Enter elements for A:\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter elements for B:\n");
    for(i=0;i<15;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<15;i++)
    {
        k=B[i];
        for(j=0;j<20;j++)
        {
            l=A[j];
            if(k==l)
            {
                found=true;
                break;
            }
            else
            {
                found=false;
            }
        }
        if(found)
        {
            C[x]=k;
            x=x+1;
        }
    }
    printf("The common elements are:\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",C[i]);
    }
    return 0;
}
