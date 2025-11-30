// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

// /*
// Sample Test Cases:
// Input 1:
// s = "abcabcbb"
// Output 1:
// 3

// Input 2:
// s = "bbbbb"
// Output 2:
// 1

// Input 3:
// s = "pwwkew"
// Output 3:
// 3

// */
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[256];  // store last index of each character (ASCII)
    int i;
    
    // Initialize all last indices to -1 (not seen)
    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;  // start index of current window

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        // If character has appeared and is inside the current window
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;  // move start to avoid repetition
        }

        // Update last index of current character
        lastIndex[ch] = i;

        // Update maximum length
        int windowLen = i - start + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }

    return maxLen;
}

int main() {
    char s1[] = "abcabcbb";
    char s2[] = "bbbbb";
    char s3[] = "pwwkew";

    printf("Output 1: %d\n", lengthOfLongestSubstring(s1)); // Expected: 3
    printf("Output 2: %d\n", lengthOfLongestSubstring(s2)); // Expected: 1
    printf("Output 3: %d\n", lengthOfLongestSubstring(s3)); // Expected: 3

    return 0;
}
