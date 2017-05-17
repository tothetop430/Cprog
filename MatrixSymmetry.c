/* MATRIX SYMMETRY */

#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,t,n,k,h,v;
    char A[50][50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        h=v=0;
        for(j=0;j<n;j++)
        {
            scanf("%s",&A[j]);
        }
        for(j=0;j<(n/2);j++)
        {
            if(strcmp(A[j],A[n-1-j])==0)
                h = 1;
            else
            {
                h = 0;
                break;
            }
        }
        for(k=0;k<(n/2);k++)
        {
            for(j=0;j<n;j++)
            {
                if((A[j][k])==(A[j][n-1-k]))
                    v = 1;
                else
                {
                    v = 0;
                    break;
                }
            }
            if(v==0)
                break;
        }
        if(v==1 && h==1)
            printf("BOTH\n");
        else if(v==1)
            printf("VERTICAL\n");
        else if(h==1)
            printf("HORIZONTAL\n");
        else
            printf("NO\n");
    }
    return 0;
}
