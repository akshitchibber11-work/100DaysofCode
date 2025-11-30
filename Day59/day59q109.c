// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

// /*
// Sample Test Cases:
// Input 1:
// arr[100, 200, 300, 400] = , k = 2
// Output 1:
// 700

// Input 2:
// arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
// Output 2:
// 39

// Input 3:
// arr[100, 200, 300, 400] = , k = 1
// Output 3:
// 400

// */
#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n || k <= 0) {
        // Invalid case
        return INT_MIN;
    }

    int windowSum = 0;
    int maxSum;

    // Find sum of first window of size k
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Slide the window from k to n-1
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // Add next element, remove first of previous window
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    // Example 1
    int arr1[] = {100, 200, 300, 400};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Max sum (Example 1): %d\n", maxSubarraySum(arr1, n1, k1)); // 700

    // Example 2
    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    printf("Max sum (Example 2): %d\n", maxSubarraySum(arr2, n2, k2)); // 39

    // Example 3
    int arr3[] = {100, 200, 300, 400};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 1;
    printf("Max sum (Example 3): %d\n", maxSubarraySum(arr3, n3, k3)); // 400

    return 0;
}
