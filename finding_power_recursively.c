/* Finding power of the number x */
#include <stdio.h>
float power(float x,float n)
{
    if(n<1)
        return 1;
    else
        return (x*power(x,n-1));
}
float main()
{
    float power(float x,float n);
    float p,q;
    printf("Enter the value that has to be powered: ");
    scanf("%f",&p);
    printf("Enter the exponent: ");
    scanf("%f",&q);
    printf("The answer is %.2f",power(p,q));
    return 0;
}
