// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

// /*
// Sample Test Cases:
// Input 1:
// arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output 1:
// 11

// Input 2:
// arr[] = [-2, -4]
// Output 2:
// -2

// Input 3:
// arr[] = [5, 4, 1, 7, 8]
// Output 3:
// 25

// */
#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;  // Stores the maximum sum found so far
    int currentSum = 0;    // Stores the current running sum

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        // Update maxSum if currentSum is greater
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        // If currentSum becomes negative, reset to 0
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: %d\n", maxSubarraySum(arr1, n1));  // Expected: 11

    int arr2[] = {-2, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: %d\n", maxSubarraySum(arr2, n2));  // Expected: -2

    int arr3[] = {5, 4, 1, 7, 8};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: %d\n", maxSubarraySum(arr3, n3));  // Expected: 25

    return 0;
}
