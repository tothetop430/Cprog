/* Matrix either symmetric or not */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    int A[50][50],n,i,j,B[50][50],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            B[j][i]=A[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]==B[i][j])
                found=true;
            else
            {
                found=false;
                break;
            }
        }
        if(!found)
        {
            c=c+1;
            break;
        }
    }
    if(c==0)
        printf("Symmetric");
    else
        printf("Not symmetric");
    return 0;
}
