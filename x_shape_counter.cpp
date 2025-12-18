#include <iostream>
#include <vector>

// Program to count non-overlapping "X" shapes in a matrix.
// An "X" shape consists of 5 elements with value 1: the center and its four diagonal neighbors.
// The matrix dimensions and elements are read from standard input.
// We scan from top to bottom, left to right, and mark used cells to avoid overlap.

int main() {
    int m, n;
    std::cout << "Enter the number of rows (m): ";
    std::cin >> m;
    std::cout << "Enter the number of columns (n): ";
    std::cin >> n;

    // Read the matrix
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    std::cout << "Enter the matrix elements row by row:" << std::endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int count = 0;

    // Iterate through possible centers (avoiding borders where diagonals don't exist)
    for(int i = 1; i < m - 1; i++) {
        for(int j = 1; j < n - 1; j++) {
            // Check if center and all four diagonals are 1
            if(matrix[i][j] == 1 &&
               matrix[i-1][j-1] == 1 &&
               matrix[i-1][j+1] == 1 &&
               matrix[i+1][j-1] == 1 &&
               matrix[i+1][j+1] == 1) {
                // Found an X, increment count
                count++;
                // Mark all five positions as used (set to 0) to prevent overlap
                matrix[i][j] = 0;
                matrix[i-1][j-1] = 0;
                matrix[i-1][j+1] = 0;
                matrix[i+1][j-1] = 0;
                matrix[i+1][j+1] = 0;
            }
        }
    }

    // Output the count
    std::cout << "Number of non-overlapping X shapes: " << count << std::endl;

    return 0;
}