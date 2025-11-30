// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

// /*
// Sample Test Cases:
// Input 1:
// arr[] = [-8, 2, 3, -6, 10], k = 2
// Output 1:
// -8 0 -6 -6

// Input 2:
// arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
// Output 2:
// -1 -1 -7 -15 -15 0

// Input 3:
// arr[] = [12, 1, 3, 5], k = 3
// Output 3:
// 0 0

// */
#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) {
    int queue[n];     // stores indices of negative numbers
    int front = 0;    // front of queue
    int rear = -1;    // rear of queue

    for (int i = 0; i < n; i++) {
        // If current element is negative, add its index to queue
        if (arr[i] < 0) {
            queue[++rear] = i;
        }

        // Remove elements from queue which are out of this window
        while (front <= rear && queue[front] <= i - k) {
            front++;
        }

        // Once we have at least k elements processed, start outputting
        if (i >= k - 1) {
            if (front <= rear) {
                // First negative in current window
                printf("%d ", arr[queue[front]]);
            } else {
                // No negative number in current window
                printf("0 ");
            }
        }
    }
    printf("\n");
}

int main() {
    // Sample Input 1
    int arr1[] = {-8, 2, 3, -6, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1:\n");
    firstNegativeInWindow(arr1, n1, k1);  // Expected: -8 0 -6 -6

    // Sample Input 2
    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2:\n");
    firstNegativeInWindow(arr2, n2, k2);  // Expected: -1 -1 -7 -15 -15 0

    // Sample Input 3
    int arr3[] = {12, 1, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    printf("Output 3:\n");
    firstNegativeInWindow(arr3, n3, k3);  // Expected: 0 0

    return 0;
}
