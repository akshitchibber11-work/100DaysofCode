// Q65: Search in a sorted array using binary search.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 3 5 7 9
// 7
// Output 1:
// Found at index 3

// Input 2:
// 5
// 1 3 5 7 9
// 6
// Output 2:
// -1

// */
#include <stdio.h>

int main() {
    int n, key, low, high, mid, index = -1;

    scanf("%d", &n);
    int arr[n];

    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key); // Element to search

    low = 0;
    high = n - 1;

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            index = mid;  // Found
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;  // Search right half
        }
        else {
            high = mid - 1; // Search left half
        }
    }

    if (index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
