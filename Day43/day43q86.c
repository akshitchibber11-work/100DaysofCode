// Q86: Check if a string is a palindrome.

// /*
// Sample Test Cases:
// Input 1:
// madam
// Output 1:
// Palindrome

// Input 2:
// hello
// Output 2:
// Not palindrome

// */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;

    fgets(str, sizeof(str), stdin); // Read string

    // Find length manually
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    j = i - 1; // Last valid index
    i = 0;     // Reset i to start

    // Check palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome");
    return 0;
}
