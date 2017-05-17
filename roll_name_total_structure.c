/* Using Structures */
#include <stdio.h>
#include <string.h>
int main()
{
    struct student
    {
        int roll;
        char name[20];
        int total;
    }x;
    printf("Enter the details as roll number,name and total marks obtained: ");
    scanf("%d %s %d",&x.roll,x.name,&x.total);
    printf("The details entered by you are as follows: \n");
    printf("Roll number: %d\n",x.roll);
    printf("Student's name: %s\n",x.name);
    printf("Total marks obtained: %d",x.total);
    return 0;
}
