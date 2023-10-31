# Tic-Tac-Toe in C++ with OOP (Two Players)
This repository contains a simple **Tic-Tac-Toe** game implemented in **C++** using object-oriented programming **(OOP)** principles. 
The game is played by two human players against each other.

# How to play:
The game is played on a **3x3** grid. To take a turn, simply type the coordinates of the square where you want to place your mark **(X or O)**. For example, to place your mark in the top-left corner of the grid, you would type 1,1. 

The first player to get three of their marks in a row, column, or diagonal wins the game.
-|

## OOP design:

The game is designed using **OOP** principles.

**The main classes involved are:**
### printInstructions:
Tic Tac Toe is a two-player game, Each player takes turns to place their symbol on the 3 x 3 game board, (**x axis & y axis**) start from 1 ,The first player to get three of their symbols in a row **horizontally**, **vertically**, or **diagonally** is the winner, If all nine spaces are filled and no player has three in a row, then the game is a draw.

### playGame:
The function playGame() is used to play a game of **Tic-Tac-Toe**. 

**It does this by following these steps:**

1.It asks the first player to choose whether they want to play as X or O.

2.It then enters a main game loop, which continues until the game is over.

3.In each iteration of the game loop, the following steps are performed:
      
     1-The current board state is printed to the console.
     2-The current player is asked to make a move.
     3-The player's move is validated to ensure that it is valid.
     4-The player's move is applied to the board state.
     5-The board state is checked to see if there is a winner.
     6-If there is a winner, the game loop is exited and the winner is declared.
     7-If there is no winner, the game loop continues to the next iteration.

4.If the game loop exits without a winner, the game is declared a draw.

### checkWin:

The function checkWin() is used to check if the game of Tic-Tac-Toe has been won. It does this by checking for horizontal, vertical, and diagonal wins.

**Horizontal wins**

To check for horizontal wins, the function iterates over each row of the game board.If the three squares in a row all contain the same symbol (X or O) and are not empty, then the function returns true, indicating that there is a winner.

EX:

                                              X | X | X

                                              - | - | -
  
                                              O | O | -

**Vertical wins**

To check for vertical wins, the function iterates over each column of the game board. If the three squares in a column all contain the same symbol (X or O) and are not empty, then the function returns true, indicating that there is a winner.

EX:

                                             O | X | X

                                             O | - | -

                                             O | - | X

**Diagonal wins**

To check for diagonal wins, the function checks the two diagonals of the game board. If the three squares in a diagonal all contain the same symbol (X or O) and are not empty, then the function returns true, indicating that there is a winner.

EX:

                                            X | X | O

                                            - | O | -

                                            O | - | X

If the function does not find a winner, it returns false, indicating that the game is not over.

**Overall**, the checkWin() function is a well-written function that accurately checks for horizontal, vertical, and diagonal wins in the game of Tic-Tac-Toe.

### checkGameOver:
The function checkGameOver() is used to check if the game of Tic-Tac-Toe is over. 

It does this by iterating over the game board and checking if all of the squares are filled. If any of the squares are empty, then the game is not over and the function returns false. 

**Otherwise**, all of the squares are filled and the game is over, so the function returns true.

Here is a more detailed explanation of how the function works:

     1.The function iterates over the game board using two nested for loops. The outer loop iterates over the rows of the game board, and the inner loop iterates over the columns of the 
     game board.
     2.For each square in the game board, the function checks if the square is empty. If the square is empty, the function returns false, indicating that the game is not over.
     3.If the function iterates over the entire game board and does not find any empty squares, then the function returns true, indicating that the game is over.

Here is an example of how the checkGameOver() function could be used to check if the following game board is over:

                                             X | O | X

                                             O | X | O

                                             X | O | X

The function would iterate over the game board and check each square. It would find that all of the squares are filled, so the function would return true, indicating that the game is over.

Here is another example of how the checkGameOver() function could be used to check if the following game board is over:

                                              X | - | X

                                              O | - | -

                                              X | - | -

The function would iterate over the game board and check each square. It would find that the square in the middle row, middle column is empty, so the function would return false, indicating that the game is not over.

**Overall**,checkGameOver() function is a well-written function that accurately checks if the game of Tic-Tac-Toe is over.

### printBoard:
The function printBoard() is used to print the game board to the console. It does this by iterating over the game board and printing each square to the console.

### update:
The function update() is used to reset the game board and player turn for the next game of Tic-Tac-Toe.

EX:

The following example shows how the update() function would reset the following game board and player turn:

                                        X | O | X

                                        - | X | -

                                        - | - | -

  
                                        -   -   -

                                        -   -   -

                                        -   -   -

**Player turn: 1**

## To contribute:
If you would like to contribute to this project, please fork the repository and create a pull request. Please be sure to follow the coding style guide and test your changes before submitting them. 
-|
