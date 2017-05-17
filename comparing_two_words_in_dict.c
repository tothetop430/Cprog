/* Comparing two words in dictionary */
#include <stdio.h>
#include <string.h>
int main()
{
    char A[30],B[30];

    printf("Enter the first word having characters less than 29: ");
    scanf("%29s",A);
    printf("\nEnter the second word having characters less than 29: ");
    scanf("%29s",B);

    if(strcmp(A,B)==0)
        printf("\nThese words belong to the same category in the dictionary");
    else
    {
        printf("%s lies before %s in the dictionary",(strcmp(A,B)>0)?B:A,(strcmp(A,B)>0)?A:B);
    }
    return 0;
}
