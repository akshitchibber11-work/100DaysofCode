// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

// /*
// Sample Test Cases:
// Input 1:
// nums1 = [0,3,2,4]
// Output 1:
// 1

// Input 2:
// nums1 = [1,2,3]
// Output 2:
// 0

// Input 3:
// nums1 = [0,4,3,1,5]
// Output 3:
// 2

// */
#include <stdio.h>

int findMissing(int nums[], int n) {
    int expectedSum = n * (n + 1) / 2; // Sum from 0 to n
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    // Sample Input 1
    int nums1[] = {0, 3, 2, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", findMissing(nums1, n1)); // Expected: 1

    // Sample Input 2
    int nums2[] = {1, 2, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", findMissing(nums2, n2)); // Expected: 0

    // Sample Input 3
    int nums3[] = {0, 4, 3, 1, 5};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", findMissing(nums3, n3)); // Expected: 2

    return 0;
}
