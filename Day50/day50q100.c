// Q100: Print all sub-strings of a string.

// /*
// Sample Test Cases:
// Input 1:
// abc
// Output 1:
// a,ab,abc,b,bc,c

// */
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    fgets(str, sizeof(str), stdin); // Read string

    // Find length manually
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Print all substrings
    for (i = 0; i < len; i++) {            // Start index
        for (j = i; j < len; j++) {        // End index
            for (k = i; k <= j; k++) {     // Print substring from i to j
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1))
                printf(",");              // Comma separated
