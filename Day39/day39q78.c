// Q78: Find the sum of main diagonal elements for a square matrix.

// /*
// Sample Test Cases:
// Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 15

// */
#include <stdio.h>

int main() {
    int n, m, sum = 0;

    scanf("%d %d", &n, &m);

    int mat[n][m];

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Only valid if matrix is square
    if (n == m) {
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];  // Main diagonal element
        }
    }

    printf("%d", sum);

    return 0;
}
