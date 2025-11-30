// Q66: Insert an element in a sorted array at the appropriate position.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 4 5 6
// 3
// Output 1:
// 1 2 3 4 5 6

// */
#include <stdio.h>

int main() {
    int n, x, pos = 0;

    scanf("%d", &n);
    int arr[n + 1]; // One extra space for insertion

    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x); // Element to insert

    // Find correct position
    while (pos < n && arr[pos] < x) {
        pos++;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = x;
    n++; // Array size increases

    // Print updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
