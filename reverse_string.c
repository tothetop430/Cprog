/* Reversing a string using function call */
#include <stdio.h>
#include <string.h>
int main()
{
    char swap(char a[]);
    char A[50];
    printf("Enter the word to be reversed: \n");
    gets(A);
    swap(A);
    return 0;
}

char swap(char a[])
{
    char temp;
    int i,j;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(a)-i-1;j++)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("%s",a);
}
