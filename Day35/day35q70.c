// Q70: Rotate an array to the right by k positions.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 3 4 5
// 2
// Output 1:
// 4 5 1 2 3

// */
#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;  // Handle rotations greater than array size

    // Rotate right by k positions
    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1];

        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
