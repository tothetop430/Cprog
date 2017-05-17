/* NICE ARCHES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
    int capacity,top;
    char* array;
}stc;

stc* create(int n)
{
    stc* temp;
    temp=malloc(sizeof(stc));
    temp->capacity = n;
    temp->top = -1;
    temp->array = malloc(sizeof(char)*n);
    return temp;
}

int isEmpty(stc* s)
{
    if(s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(stc* s)
{
    if(s->top == s->capacity-1)
        return 1;
    else
        return 0;
}

void push(stc* s,char n)
{
    if(!isFull(s))
    {
        s->top++;
        s->array[s->top]=n;
    }
}

char pop(stc* s)
{
    
    char temp;
    temp=s->array[s->top];
    s->top--;
    return temp;
}

void emptyStack(stc* s)
{
    while(!isEmpty(s))
    {
        pop(s);
    }
}

int main()
{
    stc *stack;
    char word[100000];
    int n,count=0,j=0,i;
    int Arches(stc* s,char A[]);
    void push(stc* ,char );
    stack = create(100000);

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",word);
        j=Arches(stack,word);
        if(j==1)
            count++;
        emptyStack(stack);
    }

    printf("%d",count);
    return 0;
}

int Arches(stc* s,char A[])
{
    int i;
    push(s,A[0]);
    for(i=1;i<strlen(A);i++)
    {
        if(A[i]==s->array[s->top])
            pop(s);
        else
            push(s,A[i]);
    }
    if(isEmpty(s))
        return 1;
    else
        return 2;
}
