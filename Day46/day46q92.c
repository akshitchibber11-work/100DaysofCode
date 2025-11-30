// Q92: Find the first repeating lowercase alphabet in a string.

// /*
// Sample Test Cases:
// Input 1:
// stress
// Output 1:
// s

// */
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    int i = 0;

    fgets(str, sizeof(str), stdin); // Read input string

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') { // Only lowercase letters
            int index = str[i] - 'a';
            freq[index]++;

            if (freq[index] == 2) { // Found first repeating character
                printf("%c", str[i]);
                return 0;
            }
        }
        i++;
    }

    // If no repeating character found
    printf("No repeating character");

    return 0;
}
