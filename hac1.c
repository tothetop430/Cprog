#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool f=false;
    int n,i,j,r,A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",A+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((A[i])!=(A[j]))
            {
                r=(A[i])%(A[j]);
                if(r!=0)
                    f=true;
                else
                {
                    f=false;
                    break;
                }
            }
        }
        if(f)
            printf("%d ",A[i]);
    }
    return 0;
}
