/* Finding Sum of diagonal elements */
#include <stdio.h>
int main()
{
    int n,i,j,A[50][50],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            if(i==j)
                sum=sum+A[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
