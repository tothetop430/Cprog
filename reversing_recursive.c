/* Reversing the string using recursion */
#include <stdio.h>
#include <string.h>
int i=0;
int main()
{
    char rev(char A[]);
    char A[100];
    scanf("%s",A);
    rev(A);
}

char rev(char A[])
{
    if(A[i]=='\0')
        return 0;
    else
    {
        printf("%c",A[strlen(A)-1-i]);
        i=i+1;
        return rev(A);
    }
}
