/* MONK LOVE FOR FOOD */
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    long int top,capacity;
    long int *array;
}S;

S* create(long int n)
{
    S* stc;
    stc=malloc(sizeof(S));
    stc->top=-1;
    stc->capacity=n;
    stc->array=malloc(sizeof(long int)*n);
    return stc;
}

int isempty(S* stc)
{
    if(stc->top==-1)
        return -1;
    else
        return 0;
}
int isfull(S* stc)
{
    if(stc->top+1==stc->capacity)
        return 1;
    else
        return 0;
}

void push(S* stc,long int n)
{
    if(!isfull(stc))
    {
        stc->top++;
        stc->array[stc->top]=n;
    }
    else
        printf("Stack is Full");
}
long int pop(S* stc)
{
    long int i;
    if(!isempty(stc))
    {
        i=stc->array[stc->top];
        stc->top--;
        return i;
    }
}

int main()
{
    long int q,c,i,A[100000],k=0;
    int j;
    S* stc;
    void push(S* stc,long int n);
    //printf("Enter the number of queries: ");
    scanf("%ld",&q);
    stc=create(q);
    for(i=0;i<q;i++)
    {
        //printf("Enter the query: ");
        scanf("%d",&j);
        if(j==1)
        {
            if(isempty(stc))
                printf("No Food\n");
            else
            {
                printf("%ld\n",pop(stc));
            }
        }
        if(j==2)
        {
            scanf("%ld",&c);
            push(stc,c);
        }
    }
    return 0;
}
