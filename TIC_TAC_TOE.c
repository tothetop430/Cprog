/* Tic Tac Toe problem */
#include <stdio.h>
int main()
{
    int i,j,x;
    int player=0;
    int winner=0;
    int choice=0;
    int row=0;
    int column=0;
    int A[3][3]={
                    {'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}
                };
    for(i=0;i<9 && winner==0;i++)
    {
        printf("%c | %c | %c\n",A[0][0],A[0][1],A[0][2]);
        printf("--+--+--\n");
        printf("%c | %c | %c\n",A[1][0],A[1][1],A[1][2]);
        printf("--+--+--\n");
        printf("%c | %c | %c\n",A[2][0],A[2][1],A[2][2]);
        player=i%2+1;
        do
        {
            printf("\nPlayer %d,its your chance please select your position to input %c: ",player,(player==1)?'O':'X');
            scanf("%d",&choice);
            x=choice;
            row=--choice/3;
            column=choice%3;
        }
        while(x<0 || x>9 || A[row][column]>'9');

        A[row][column]=(player==1)?'O':'X';

        if((A[0][0]==A[1][1] && A[0][0]==A[2][2]) || (A[0][2]==A[1][1] && A[0][2]==A[2][0]))
        {
            winner=player;
        }
        else
        {
            for(j=0;j<3;j++)
            {
                if((A[j][0]==A[j][1] && A[j][0]==A[j][2]) || (A[0][j]==A[1][j] && A[0][j]==A[2][j]))
                {
                    winner=player;
                }
            }
        }
    }
    printf("\n%c | %c | %c\n",A[0][0],A[0][1],A[0][2]);
    printf("--+--+--\n");
    printf("%c | %c | %c\n",A[1][0],A[1][1],A[1][2]);
    printf("--+--+--\n");
    printf("%c | %c | %c\n",A[2][0],A[2][1],A[2][2]);

    if(winner==0)
        printf("\nWhat a bad luck no one won...");
    else
        printf("Congratulations To Player %d for winning the GAME!!",player);
    return 0;
}
