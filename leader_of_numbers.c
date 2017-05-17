/* Finding leader of the number */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    int A[100],n,i;
    int j,x,y,c=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++)
    {
        x=A[i];
        for(j=i+1;j<n;j++)
        {
            y=A[j];
            if(x>=y)
            {
                found=true;
            }
            else
            {
                found=false;
                break;
            }
        }
        if(found)
        {
            printf("%d\n",A[i]);
            c=c+1;
        }
    }
    if(c==0)
        printf("No leaders");
    return 0;
}
