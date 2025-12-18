#include <iostream>

// Program to calculate the difference between the sum of elements in odd columns
// and the sum of elements in even rows for a matrix entered from the keyboard.
// Odd columns: columns with 0-based index j where j % 2 == 0 (1st, 3rd, etc. if 1-based).
// Even rows: rows with 0-based index i where i % 2 == 0 (1st, 3rd, etc. if 1-based).
// The matrix can be rectangular. Uses dynamic arrays instead of vectors.

int main() {
    int m, n;
    std::cout << "Enter the number of rows (m): ";
    std::cin >> m;
    std::cout << "Enter the number of columns (n): ";
    std::cin >> n;

    // Allocate dynamic 2D array
    int** matrix = new int*[m];
    for(int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    // Read the matrix
    std::cout << "Enter the matrix elements row by row:" << std::endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    long long sum_odd_columns = 0;
    long long sum_even_rows = 0;

    // Calculate sums
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(j % 2 == 0) {  // Odd column (0-based: j=0,2,4,... which are 1st,3rd,5th 1-based)
                sum_odd_columns += matrix[i][j];
            }
            if(i % 2 == 0) {  // Even row (0-based: i=0,2,4,... which are 1st,3rd,5th 1-based)
                sum_even_rows += matrix[i][j];
            }
        }
    }

    long long difference = sum_odd_columns - sum_even_rows;

    // Output the result
    std::cout << "Sum of elements in odd columns: " << sum_odd_columns << std::endl;
    std::cout << "Sum of elements in even rows: " << sum_even_rows << std::endl;
    std::cout << "Difference (odd columns - even rows): " << difference << std::endl;

    // Deallocate memory
    for(int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}