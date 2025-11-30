// Q69: Find the second largest element in an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 10 20 30 40 50
// Output 1:
// 40

// */
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0], max2 = -2147483648; // Smallest possible integer

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("%d", max2);

    return 0;
}
