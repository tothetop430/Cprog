/* SPEED */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int A[100000],n,count=1,j,car;
    int t,i;
    //printf("Enter the number of test cases: ");
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        count=1;
        //printf("Enter the number of cars: ");
        scanf("%ld",&n);
        for(j=0;j<n;j++)
            scanf("%ld",&A[j]);
        car=A[0];
        for(j=1;j<n;j++)
        {
            if(car>A[j])
            {
                count++;
                car=A[j];
            }
        }
        printf("%ld\n",count);
    }
    return 0;
}
