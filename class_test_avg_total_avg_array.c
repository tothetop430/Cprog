/* Class test average and average of all the tests */
#include <stdio.h>
int main()
{
    int A[4][30],i,j,k=0,x=0,y=0,z=0;
    float avg1,avg2,avg3,avg4,avg;
    for(i=0;i<4;i++)
    {
        printf("Enter %d test score of students:\n",i+1);
        for(j=0;j<30;j++)
        {
            printf("Enter score made by %d student: ",j+1);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<30;i++)
    {
        x=x+A[0][i];
    }
    for(i=0;i<30;i++)
    {
        y=y+A[1][i];
    }
    for(i=0;i<30;i++)
    {
        z=z+A[2][i];
    }
    for(i=0;i<30;i++)
    {
        k=k+A[3][i];
    }
    avg1=x/30.0f;
    avg2=y/30.0f;
    avg3=z/30.0f;
    avg4=k/30.0f;
    avg=(avg1+avg2+avg3+avg4)/4.0f;

    printf("Average of 1st test is %.3f",avg1);
    printf("\nAverage of 2nd test is %.3f",avg2);
    printf("\nAverage of 3rd test is %.3f",avg3);
    printf("\nAverage of 4th test is %.3f",avg4);
    printf("\n\nAverage of all the tests is %.3f",avg);
    return 0;
}
