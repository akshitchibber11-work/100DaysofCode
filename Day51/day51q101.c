// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

// /*
// Sample Test Cases:
// Input 1:
// nums = [5,7,7,8,8,10], target = 8
// Output 1:
// 3,4

// Input 2:
//  nums = [5,7,7,8,8,10], target = 6
// Output 2:
// -1,-1

// Input 3:
//  nums = [5,7,7,8,8,10], target = 10
// Output 3:
// 5,5

// */
#include <stdio.h>

int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1, first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1; // keep searching left part
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1, last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1; // keep searching right part
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;

    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("%d,%d", first, last);

    return 0;
}
