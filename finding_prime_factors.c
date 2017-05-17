/* Finding prime factors */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found=true;
    int a,i,j,r,r1;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Prime Factors are as follows: \n");
    for(i=2;i<=a/2;i++)
    {
        r=a%i;
        if(r==0)
        {
            for(j=2;j<=i/2;j++)
            {
                r1=i%j;
                if(r1==0)
                {
                    found=false;
                    break;
                }
                else
                    found=true;
            }
            if(found)
                printf("%d ",i);
        }
    }
    return 0;
}
