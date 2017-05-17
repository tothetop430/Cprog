#include <stdio.h>
int main()
{
    char A[1001];
    int i=0,x,y=0;
    scanf("%s",&A);
    while(A[i]!='\0')
    {
        x = (int)A[i]-96;
        y = y + x;
        i++;
    }
    printf("%d",y);
    return 0;
}
