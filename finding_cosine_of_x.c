/* finding cosine of x */
#include <stdio.h>
int main()
{
    float cosine(float x);
    float a,b=0;
    printf("Enter the value of x(in degrees) up to which you require cosine series: ");
    scanf("%f",&a);
    printf("\n---------------------------------------");
    printf("\n        x               cos(x)");
    printf("\n---------------------------------------");
    while(b<=a)
    {
        printf("\n    %6.2f            %6.2f",b,cosine(b));
        b=b+10;
    }
    printf("\n---------------------------------------");
    return 0;
}

float cosine(float x)
{
    float sum=0,term=1;
    int i,k=0;
    x=x*3.14/180.0f;
    for(i=0;i<=15;i++)
    {
        sum=sum+term;
        term=term*x*x*(-1)/((k+1)*(k+2));
        k=k+2;
    }
    return sum;
}
