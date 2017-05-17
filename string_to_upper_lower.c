#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,n;
    char A[100],B[100];
    scanf("%s",A);
    n=strlen(A);
    for(i=0;i<n;i++)
    {
        if(isupper(A[i]))
            B[i]=tolower(A[i]);
        else if(islower(A[i]))
            B[i]=toupper(A[i]);
    }
    B[i]='\0';
    printf("%s",B);
    return 0;
}
