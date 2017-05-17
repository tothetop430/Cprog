/* Finding biggest of the three values and getting the sum of the biggest values using functions */
#include <stdio.h>
int main()
{
    int big(int a,int b,int c);
    int x,y,z,p,q,r,biga,bigb;
    printf("Enter the number in three tests: ");
    scanf("%d %d %d",&x,&y,&z);
    printf("Enter the number in three assignments: ");
    scanf("%d %d %d",&p,&q,&r);
    biga=big(x,y,z);
    bigb=big(p,q,r);
    printf("The total is obtained as %d",biga+bigb);
    return 0;
}

int big(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}
