// Q61: Search for an element in an array using linear search.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 3 4 5
// 3
// Output 1:
// Found at index 2

// Input 2:
// 4
// 10 20 30 40
// 25
// Output 2:
// -1

// */
#include <stdio.h>

int main() {
    int n, key, index = -1;

    scanf("%d", &n);        // Number of elements
    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);      // Element to search

    // Linear search
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;      // Store index
            break;          // Stop searching
        }
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
