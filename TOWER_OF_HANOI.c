/* TOWER OF HANOI */
#include <stdio.h>
int main()
{
    void tower(int n,char beg,char aux,char end);
    int n;
    printf("Enter the number of discs : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}

void tower(int n,char beg,char aux,char end)
{
    if(n>=1)
    {
        tower(n-1,beg,end,aux);
        printf("%c to %c\n",beg,end);
        tower(n-1,aux,beg,end);
    }
}
