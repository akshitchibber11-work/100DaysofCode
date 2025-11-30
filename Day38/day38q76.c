// Q76: Check if a matrix is symmetric.

// /*
// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 2 1
// Output 1:
// True

// Input 2:
// 2 2
// 1 0
// 2 1
// Output 2:
// False

// */
#include <stdio.h>

int main() {
    int n, m, isSymmetric = 1;

    scanf("%d %d", &n, &m);

    int mat[n][m];

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check symmetry (only if square matrix)
    if (n != m) {
        isSymmetric = 0;  // Not symmetric if not square
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != mat[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric)
                break;
        }
    }

    if (isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
