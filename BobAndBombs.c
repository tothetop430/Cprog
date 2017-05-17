/* BOB AND BOMBS */
#include <stdio.h>
#include <stdlib.h>

long int length(char A[])
{
    long int i=0;
    while(A[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    long int length(char A[]);
    char str[100001],chr;
    long int k,countw,len;
    int test,i;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",&str);
        k = 0;
        countw = 0;
        len = length(str);
        while(str[k]!='\0')
        {
            if(str[k]=='B')
            {
                if(str[k+1]=='W' && k+1<len)
                {
                    countw++;
                    str[k+1]='0';
                }
                if(str[k+2]=='W' && k+2<len)
                {
                    countw++;
                    str[k+2]='0';
                }
                if(str[k-1]=='W' && k-1>=0)
                {
                    countw++;
                    str[k-1]='0';
                }
                if(str[k-2]=='W' && k-2>=0)
                {
                    countw++;
                    str[k-2]='0';
                }
            }
            k++;
        }
        printf("%ld\n",countw);
    }
    return 0;
}
