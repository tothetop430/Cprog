/* Replacing '->' with '.' */
// AUTHOR SIDDHARTH
#include <stdio.h>
#include <string.h>
int main()
{
    char A[2000][70];
    char B[20]="return 0;";
    int i,j,k;

    //Tacking input until return command is executed

    for(i=0;i<2000;i++)
    {
        j=0;
        scanf("%c",&A[i][j]);
        if((A[i][j])=='\n')
            break;
        for(j=1;j<70;j++)
        {
            scanf("%c",&A[i][j]);
            if(A[i][j]=='\n')
            {
                A[i][j]='\0';
                break;
            }
        }
    }
    int x=i;

    //Now replacing '->' with '.' other than in comment

    for(i=0;i<x;i++)
    {
        j=0;
        while((A[i][j])!='\0')
        {
            if((A[i][j])=='/' && (A[i][j+1])=='/')
            {
                for(k=j;k<strlen(A[i]);k++)
                    printf("%c",A[i][k]);
                break;
            }
            else if((A[i][j])=='-' && (A[i][j+1])=='>')
            {
                A[i][j]='.';
                for(k=j+1;k<strlen(A[i]);k++)
                {
                    A[i][k]=A[i][k+1];
                }
            }
            printf("%c",A[i][j]);
            j=j+1;
        }
        printf("\n");
    }
    return 0;
}
