/* SAMU AND CARD GAME */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int test,K,ti,k;
    unsigned long int n,m,a,b,count =0,x,y,x1,y1;
    scanf("%d",&test);
    for(ti=0;ti<test;ti++)
    {
        count=0;
        x=y=1;
        scanf("%lu %lu",&n,&m);
        scanf("%d",&K);
        for(k=0;k<K;k++)
        {
            scanf("%lu %lu",&a,&b);
            while(true)
            {
                x1 = x;
                y1 = y;
                x1 = x1 + a;
                y1 = y1 + b;
                if(1<=x1 && x1<=n && 1<=y1 && y1<=m)
                {
                    x = x1;
                    y = y1;
                    count++;
                }
                else
                    break;
            }
        }
        printf("%lu\n", count);
    }
    return 0;
}
