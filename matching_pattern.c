/* Matching Substring */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    bool found=false;
    char A[100],B[100],C[100];
    int i,j=0,k,no=-1,x;
    gets(A);
    gets(B);

    for(i=0;i<strlen(A);i++)
    {
        x=i;
        if(A[i]==B[j])
        {
            for(k=0;k<strlen(B);k++)
            {
                C[k]=A[x];
                x=x+1;
            }
            if(strcmp(C,B)==0)
            {
                found=true;
                break;
            }
        }
    }
    if(found)
        printf("%d",i);
    else
        printf("%d",no);
    return 0;
}
