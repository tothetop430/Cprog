/* Finding gcd of three integers by using a function for finding gcd of two numbers */
#include <stdio.h>
int gcd(int x,int y)
{
    int dr,nr,r;
    if(x>=y)
    {
        nr=x;
        dr=y;
    }
    else
    {
        nr=y;
        dr=x;
    }
    r=nr%dr;
    while(r!=0)
    {
        nr=dr;
        dr=r;
        r=nr%dr;
    }
    return dr;
}
int main()
{
    int gcd(int x,int y);
    int a,b,c;
    int g1,g2,g3;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    g1=gcd(a,b);
    g2=gcd(a,c);
    g3=gcd(b,c);
    if(g1==g2 && g1==g3)
        printf("The required gcd is %d",g1);
    else
        printf("The required gcd is %d",gcd(g1,g3));
    return 0;
}
