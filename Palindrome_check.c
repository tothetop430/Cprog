/* Palindrome check */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    char A[100];
    int i=0;
    scanf("%s",A);
    for(i=0;i<(strlen(A))/2;i++)
    {
        if(A[i]==A[strlen(A)-1-i])
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
        printf("Not palindrome");
    return 0;
}
