/**
 * @file tictactoe.cpp
 * @author Gandla Bhargavi
 * @brief Simple Tic-Tac-Toe game for two players on a 3x3 board.
 * 
 * Players take turns entering row and column (1-3). The board is printed each turn.
 * The program checks for win or draw and announces the result.
 * 
 * @version 0.1
 * @date 2025-08-09
 */

#include <iostream>
using namespace std;

const int SIZE = 3;

/**
 * @brief Prints the current board.
 */
void printBoard(char board[SIZE][SIZE]) {
    cout << "\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << " ";
        for (int j = 0; j < SIZE; ++j) {
            cout << (board[i][j] == ' ' ? '.' : board[i][j]);
            if (j < SIZE - 1) cout << " | ";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "-----------\n";
    }
    cout << "\n";
}

/**
 * @brief Checks whether the current player has won.
 * 
 * @param board The game board.
 * @param playerChar 'X' or 'O'
 * @return true if player wins.
 */
bool isWinner(char board[SIZE][SIZE], char playerChar) {
    // Check rows and columns
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == playerChar && board[i][1] == playerChar && board[i][2] == playerChar)
            return true;
        if (board[0][i] == playerChar && board[1][i] == playerChar && board[2][i] == playerChar)
            return true;
    }
    // Check diagonals
    if (board[0][0] == playerChar && board[1][1] == playerChar && board[2][2] == playerChar)
        return true;
    if (board[0][2] == playerChar && board[1][1] == playerChar && board[2][0] == playerChar)
        return true;

    return false;
}

/**
 * @brief Checks whether the board is full (draw).
 */
bool isBoardFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ')
                return false;
    return true;
}

/**
 * @brief Reads a valid move from the player and updates the board.
 * 
 * @param board The game board.
 * @param playerChar 'X' or 'O'
 */
void playerMove(char board[SIZE][SIZE], char playerChar) {
    int row, col;
    while (true) {
        cout << "Player " << playerChar << " - enter row and column (1-3): ";
        if (!(cin >> row >> col)) {
            // handle non-integer input
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter two numbers between 1 and 3.\n";
            continue;
        }
        if (row < 1 || row > 3 || col < 1 || col > 3) {
            cout << "Out of range. Use values 1 to 3.\n";
            continue;
        }
        --row; --col; // convert to 0-based index
        if (board[row][col] != ' ') {
            cout << "Cell already taken. Choose another.\n";
            continue;
        }
        board[row][col] = playerChar;
        break;
    }
}

/**
 * @brief Main game loop.
 */
int main() {
    char board[SIZE][SIZE];

    // Initialize board with spaces
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            board[i][j] = ' ';

    cout << "Tic-Tac-Toe (3x3) - Player X and Player O\n";
    printBoard(board);

    char currentPlayer = 'X';
    while (true) {
        playerMove(board, currentPlayer);
        printBoard(board);

        if (isWinner(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            break;
        }

        if (isBoardFull(board)) {
            cout << "It's a draw!\n";
            break;
        }

        // switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}