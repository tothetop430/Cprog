/* Making a square or rectangle */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i,j,num,l,b;
    char x;
    printf("\nEnter rectangle(r) or square(s): ");
    scanf("%c",&x);

    if(tolower(x)=='r')
    {
        scanf("%d",&l);
        scanf("%d",&b);

        for(i=0;i<l;i++)
        {
            printf("* ");
        }
        for(i=0;i<b;i++)
        {
            printf("\n");
            for(j=0;j<l;j++)
            {
                if(j==0)
                    printf("* ");
                else if(j==l-1)
                    printf("*");
                else
                    printf("  ");
            }
        }
        printf("\n");
        for(i=0;i<l;i++)
            printf("* ");
        return 0;
    }
}
