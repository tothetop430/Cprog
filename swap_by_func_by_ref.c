/* Swapping by function call by reference */
#include <stdio.h>
int main()
{
    int a,b;
    void swap(int *pa,int *pb);
    printf("Enter the value for a: ");
    scanf("%d",&a);
    printf("Enter the value for b: ");
    scanf("%d",&b);
    printf("The values are a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("The values are a=%d and b=%d",a,b);
    return 0;
}

void swap(int *pa,int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
