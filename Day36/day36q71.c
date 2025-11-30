// Q71: Read and print a matrix.

// /*
// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 3 4
// Output 1:
// 1 2
// 3 4

// */
#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols); // Read matrix size

    int mat[rows][cols];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Print matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
