/* ROY'S LIFE CYCLE */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int test,i,k,j,count=0,maxx = 0, max = 0, max1 = 0, count1 = 0;
    char txt[366][1441];
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",txt[i]);
    }
    for(i=0; i<test; i++)
    {
        count = 0;
        for(j=0; j<1440; j++)
        {
            if(txt[i][j]=='C')
            {
                count++;
                count1++;
                if(max<count)
                    max = count;
                if(max1<count1)
                    max1 = count1;
            }
            else
            {
                count = 0;
                count1 = 0;
            }
        }
        if(maxx<max)
            maxx = max;
    }


    printf("%d %d",maxx,max1);
    return 0;
}
