// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

// /*
// Sample Test Cases:
// Input 1:
// nums1 = [1,3,3,4]
// Output 1:
// 3

// Input 2:
// nums1 = [1,2,2]
// Output 2:
// 2

// Input 3:
// nums1 = [0,4,1,1,5]
// Output 3:
// 1

// */
#include <stdio.h>

int findRepeated(int arr[], int n) {
    int xorVal = 0;

    for (int i = 0; i < n; i++) {
        xorVal ^= arr[i]; // XOR array elements
        xorVal ^= i;      // XOR indices
    }

    return xorVal;
}

int main() {
    int nums1[] = {1, 3, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", findRepeated(nums1, n1)); // Expected: 3

    int nums2[] = {1, 2, 2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", findRepeated(nums2, n2)); // Expected: 2

    int nums3[] = {0, 4, 1, 1, 5};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", findRepeated(nums3, n3)); // Expected: 1

    return 0;
}
