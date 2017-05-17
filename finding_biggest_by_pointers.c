/* Finding biggest of two numbers using pointers */
#include <stdio.h>
int main()
{
    int a,b,*pa,*pb;
    printf("Enter the value for a: ");
    scanf("%d",&a);
    pa=&a;
    printf("Enter the value for b: ");
    scanf("%d",&b);
    pb=&b;
    if(*pa>*pb)
        printf("The greater number is %d",*pa);
    else
        printf("The greater number is %d",*pb);
    return 0;
}
