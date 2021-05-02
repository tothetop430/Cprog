/*Program Of Tower Of Hanoi Problem*/

#include<stdio.h>


void toh(int, char [], char [], char []);  /*Declaration of function toh */ 


int main(void)
{
int n;
char A[10]="BEG", B[10]="AUX", C[10]="END";       /* BEG = Beginning Position, AUX= Auxiliary Position, END = End Position*/
printf("Enter number of disks : ");                                   /* Example 2,3 etc.*/  
scanf("%d",&n);
toh(n,A,B,C);
return 0;
}

void toh(int n, char BEG[10], char AUX[10], char END[10])            /* Definition of function toh*/
{
if(n>=1)
{
toh(n-1,BEG,END,AUX);
printf("%s to %s \n",BEG,END);
toh(n-1,AUX,BEG,END);
}

}
