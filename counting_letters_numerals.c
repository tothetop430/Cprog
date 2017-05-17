/* Counting the letters and the numerals */
#include <stdio.h>
#include <ctype.h>
int main()
{
    char A[20];
    scanf("%19s",A);
    int i=0;
    int count=0,count1=0;
    while(A[i]!='\0')
    {
        if(isalpha(A[i]))
            count++;
        else if(isdigit(A[i]))
            count1++;
        i++;
    }

    printf("%d characters are found",count);
    printf("\n%d digits are found",count1);
    return 0;
}
