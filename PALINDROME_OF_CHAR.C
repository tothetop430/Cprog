/* Palindrome of characters */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    char A[100],x,y;
    int n,i,h;
    printf("Enter the number of characters: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("\n%c",&A[i]);
    }
    h=n/2;

    for(i=0;i<=h;i++)
    {
        x=A[i];
        y=A[n-1-i];
        if(x==y)
            found=true;
        else
        {
            found=false;
            break;
        }
    }
    if(found)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
