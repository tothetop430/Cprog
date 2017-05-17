/* Summation of numbers with help of Array*/
int main()
{
    int A[100];
    int i=0,x,num,s=0;
    printf("Only maximum of 100 input are required");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the %d value:",i+1);
        scanf("%d",&A[i]);
    }
    for(i=0;i<num;i++)
    {
        x=A[i];
        s=s+x;
    }
    printf("The sum of numbers is %d",s);
    return 0;
}
