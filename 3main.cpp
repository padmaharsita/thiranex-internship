#include<iostream>
using namespace std;
char board[3][3] =
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};
char player = 'X';
void showBoard()
{
    cout<<"\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void play()
{
    int position;

    cout<<"\nPlayer "<<player<<" Enter Position: ";
    cin>>position;
    int row = (position-1)/3;
    int col = (position-1)%3;
    if(board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = player;

        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }
    else
    {
        cout<<"Position Already Taken\n";
    }
}

char checkWin()
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return board[i][0];

        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return board[0][i];
    }

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return board[0][0];

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return board[0][2];

    return ' ';
}

int main()
{
    int moves = 0;
    char winner = ' ';

    while(moves < 9 && winner == ' ')
    {
        showBoard();
        play();

        winner = checkWin();
        moves++;
    }

    showBoard();

    if(winner == 'X' || winner == 'O')
        cout<<"\nPlayer "<<winner<<" Wins!";
    else
        cout<<"\nMatch Draw";

    return 0;
}