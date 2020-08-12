/* Omitting the required word */
#include <stdio.h>
#include <string.h>
int main()
{
    char A[100],B[100],omit[20],word[30],ch;
    int i=0,j=0;

    printf("Enter the sentence: \n");
    gets(A);

    printf("Enter the word to be omitted: ");
    gets(omit);

    for(i=0;i<strlen(A);i++)
    {
        ch=A[i];
        if(ch==' ' || ch=='\0')
        {
            if(strcmp(word,omit)==0)
            {
                B[strlen(B)]=' ';
            }
            else
            {
                strcat(B,word);
                B[strlen(B)]=' ';
            }
            strcpy(word," ");
            j=0;
        }
        else
        {
            word[j]=ch;
            j++;
        }
    }
    B[strlen(B)]='\0';
    for(i=0;i<strlen(B);i++)
    {
        if(i!=strlen(B)-1)
        {
            if(B[i]=='\0')
                B[i]=' ';
            printf("%c",B[i]);
        }
    }

    return 0;
}
