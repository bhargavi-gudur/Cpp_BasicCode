/**
 * @file sudoku_4x4.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program solves a 4x4 Sudoku puzzle (2x2 boxes).
 *   Numbers used are 1 to 4 with no repetition in row,
 *   column, and each 2x2 box.
 * @date 09-04-2026
 */

#include <iostream>
using namespace std;

#define N 4

/**
 * @brief Check if number is safe to place
 */
bool isSafe(int grid[N][N], int row, int col, int num) {

    // Check row & column
    for(int i = 0; i < N; i++) {
        if(grid[row][i] == num || grid[i][col] == num)
            return false;
    }

    // Check 2x2 box
    int startRow = row - row % 2;
    int startCol = col - col % 2;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(grid[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

/**
 * @brief Solve Sudoku using backtracking
 */
bool solveSudoku(int grid[N][N]) {

    for(int row = 0; row < N; row++) {
        for(int col = 0; col < N; col++) {

            if(grid[row][col] == 0) {

                for(int num = 1; num <= 4; num++) {

                    if(isSafe(grid, row, col, num)) {

                        grid[row][col] = num;

                        if(solveSudoku(grid))
                            return true;

                        grid[row][col] = 0; // backtrack
                    }
                }
                return false;
            }
        }
    }
    return true;
}

/**
 * @brief Print Sudoku grid
 */
void printGrid(int grid[N][N]) {
    cout << "\nSolved Sudoku:\n";
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * @brief Main function
 */
int main() {

    cout << "4x4 Sudoku Solver\n";
    cout << "Date: 09-04-2026\n";

    int grid[N][N] = {
        {1, 0, 0, 4},
        {0, 0, 1, 0},
        {0, 1, 0, 0},
        {2, 0, 0, 3}
    };

    if(solveSudoku(grid))
        printGrid(grid);
    else
        cout << "No solution exists!\n";

    return 0;
}