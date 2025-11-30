// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

// /*
// Sample Test Cases:
// Input 1:
// nums1 = [2,7,11,15] nums2 = [4,8,10]
// Output 1:
// 2 4 7 8 10 11 15

// Input 2:
// nums1 = [1,2,7] nums2 = [9,10,17]
// Output 2:
// 1 2 7 9 10 17

// Input 3:
// nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
// Output 3:
// -10 -3 -2 -1 7 7

// */
#include <stdio.h>

void mergeArrays(int nums1[], int m, int nums2[], int n) {
    int i = 0, j = 0;

    // Merge step (similar to merge in merge sort)
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            printf("%d ", nums1[i]);
            i++;
        } else {
            printf("%d ", nums2[j]);
            j++;
        }
    }

    // If elements remain in nums1
    while (i < m) {
        printf("%d ", nums1[i]);
        i++;
    }

    // If elements remain in nums2
    while (j < n) {
        printf("%d ", nums2[j]);
        j++;
    }

    printf("\n");
}

int main() {
    // Sample Input 1
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {4, 8, 10};
    mergeArrays(nums1, 4, nums2, 3);  // Expected Output: 2 4 7 8 10 11 15

    // Sample Input 2
    int a[] = {1, 2, 7};
    int b[] = {9, 10, 17};
    mergeArrays(a, 3, b, 3);  // Expected Output: 1 2 7 9 10 17

    // Sample Input 3
    int c[] = {-10, -2, 7};
    int d[] = {-3, -1, 7};
    mergeArrays(c, 3, d, 3);  // Expected Output: -10 -3 -2 -1 7 7

    return 0;
}
