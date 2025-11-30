// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

// /*
// Sample Test Cases:
// Input 1:
// arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
// Output 1:
// 3 3 4 5 5 5 6

// Input 2:
// arr[5, 1, 3, 4, 2] = , k = 1
// Output 2:
// 5 1 3 4 2

// */
#include <stdio.h>

// Deque will store indexes of useful elements in current window
// Elements are stored in decreasing order of values in arr[]
void maxSlidingWindow(int arr[], int n, int k) {
    int deque[n]; // to store indices
    int front = 0, rear = -1;

    // Process first k elements
    for (int i = 0; i < k; i++) {
        while (front <= rear && arr[deque[rear]] <= arr[i])
            rear--;
        deque[++rear] = i;
    }

    // Process rest of the array
    for (int i = k; i < n; i++) {
        // Print maximum for previous window
        printf("%d ", arr[deque[front]]);

        // Remove elements that are out of the current window
        while (front <= rear && deque[front] <= i - k)
            front++;

        // Maintain decreasing order for current window
        while (front <= rear && arr[deque[rear]] <= arr[i])
            rear--;

        deque[++rear] = i;
    }

    // Print maximum of last window
    printf("%d\n", arr[deque[front]]);
}

int main() {
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    printf("Output 1:\n");
    maxSlidingWindow(arr1, n1, k1); // Expected: 3 3 4 5 5 5 6

    int arr2[] = {5, 1, 3, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 1;
    printf("Output 2:\n");
    maxSlidingWindow(arr2, n2, k2); // Expected: 5 1 3 4 2

    return 0;
}
