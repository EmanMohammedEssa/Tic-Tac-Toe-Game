#include<iostream>
using namespace std;
class TicTacToe{
private:
    char board[4][4];
    int playTurn=1;
    bool win=false;
    bool gameOver=false;
    int row,column;
public:
    TicTacToe();
    TicTacToe(char board[4][4]);
    void playGame();
    void printBoard(char board[4][4]);
    bool checkWin(char board[4][4]);
    bool checkGameOver(char board[4][4]);
    void printInstructions();
};

