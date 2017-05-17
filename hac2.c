#include <stdio.h>
int main()
{
    long A,B,N,t=0,i=0;
    scanf("%d %d %d",&A,&B,&N);
    while(t<N)
    {
        i=i+1;
        t=t+A;
        if(t>=N)
            break;
        t=t-B;
    }
    printf("%ld",i);
    return 0;
}
