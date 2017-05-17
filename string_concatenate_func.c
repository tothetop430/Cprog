/* Program for designing string concatenation function */
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20],str2[20],str[50],ch,ab;
    int i=0,j=0,k=0;

    printf("Enter the string one: ");
    gets(str1);

    printf("\nEnter the string two: ");
    gets(str2);

    ch=strlen(str1);
    str1[ch]=' ';
    ch++;

    while(j<strlen(str2))
    {
        str1[ch]=str2[j];
        ch++;
        j++;
    }
    str1[ch]='\0';

    printf("The resultant string is %s",str1);

}
