/* Details of n students */
#include <stdio.h>
#include <string.h>
int main()
{
    int n,m,i;
    struct student
    {
        int roll;
        char name[20];
        int total;
    }A[50];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d",&A[i].roll,A[i].name,&A[i].total);
    }
    printf("Enter the student's roll number: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(A[i].roll==m)
            break;
    }
    printf("The student's name is %s\n",A[i].name);
    printf("Total obtained: %d",A[i].total);
    return 0;
}
