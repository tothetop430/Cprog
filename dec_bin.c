/* Conversion of decimal to binary */
#include <stdio.h>
int main()
{
    int A[64],B[64];
    int num,rem,i=0,j=0,x;
    printf("Enter the decimal number:");
    scanf("%d",&num);
    do
    {
        rem=num%2;
        A[i]=rem;
        num=num/2;
        i++;
    }
    while(num>0);

    for(j=0;j<i;j++)
    {
        x=A[j];
        B[i-1-j]=x;
    }
    for(j=0;j<i;j++)
    {
        printf("%d",B[j]);
    }
    return 0;
}
