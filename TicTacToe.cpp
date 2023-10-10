#include<iostream>
using namespace std;
#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
    // Initialize the board
    for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++)
        {
            board[i][j] = '-';
        }
    }
}
// This method is used to print the instructions
void TicTacToe::printInstructions()
{
    cout<<"Tic Tac Toe is a two-player game, Each player takes turns to place their symbol on the 3 x 3 game board,(x axis & y axis)start from 1 ,The first player to get three of their symbols in a row horizontally, vertically, or diagonally is the winner, If all nine spaces are filled and no player has three in a row, then the game is a draw.\n";
}
// This method is used to play the game
void TicTacToe::playGame()
{
    cout<<"Choose character X or O\n";
    char ch;cin>>ch;
    // Main game loop
   while(!gameOver)
   {
       win=false;
       // Print the board
       printBoard(board);
       // Ask the current player to make a move
       cout << "Player " << playTurn << " ,make your move:\n";
       cout << "Enter the row\n";
       cin >> row;
       cout << "Enter the column\n";
       cin >> column;
       // Check if the chosen row and column are valid
       if (row >= 1 && row <= 3 && column >= 1 && column <= 3 && board[row][column] == '-')
       {
           // Update the board
           if (playTurn == 1)
               board[row][column] =ch;
           else
           {
               if(ch=='X')
                  board[row][column] = 'O';
               else
                   board[row][column] = 'X';
           }
           // Check if the game is won
           win = checkWin(board);
           // Check the result of the game
           if(win)
           {
               cout<<"player "<<playTurn<<" wins!\n";
               cout<<"Final board format : \n";
               // Print the board one last time
               printBoard(board);
               //Initialize the board with'-'for the next game.
               for(int i = 1; i < 4; i++)
               {
                   for (int j = 1; j < 4; j++)
                   {
                       this->board[i][j] = '-';
                   }
               }
               //Make playTurn =1 for the next game.
               playTurn=1;
               break;
           }
           // Check if the game is over
           gameOver = checkGameOver(board);
           // Switch player turns
           if (playTurn == 1)
               playTurn = 2;
           else
               playTurn = 1;
       }
       else
           cout <<"Invalid move!\n";
   }
    if(win==false)
    {
        cout<<"It's a draw!\n";
        //Make gameOver=false for the next game.
        gameOver=false;
        //Initialize the board with'-'for the next game.
        for(int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                this->board[i][j] = '-';
            }
        }
        //Make playTurn =1 for the next game.
        playTurn=1;
    }
}
// This method is used to print the board
void TicTacToe::printBoard(char board[4][4])
{
    for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++)
        {
           cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}
// This method is used to check if the game is over
bool TicTacToe::checkGameOver(char board[4][4])
{
    for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++)
        {
            if(board[i][j] == '-')
            {
                return false;
            }
        }
    }
    return true;
}
// This method is used to check if the game is won
bool TicTacToe::checkWin(char board[4][4])
{
    // Check for horizontal wins
    for(int i = 1; i < 4; i++)
    {
        if(board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][1] != '-')
        {
            return true;
        }
    }
    // Check for vertical wins
    for(int i = 1; i < 4; i++)
    {
        if(board[1][i]==board[2][i] && board[2][i]==board[3][i] && board[1][i] != '-')
        {
            return true;
        }
    }
    // Check for diagonal wins
    if(board[1][1]==board[2][2] && board[2][2]==board[3][3] && board[1][1] != '-')
    {
        return true;
    }
    if(board[1][3]==board[2][2] && board[2][2]==board[3][1] && board[1][3] != '-')
    {
        return true;
    }
    return false;
}

