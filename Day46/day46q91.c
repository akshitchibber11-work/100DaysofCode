// Q91: Remove all vowels from a string.

// /*
// Sample Test Cases:
// Input 1:
// education
// Output 1:
// dctn

// */
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin); // Read input string

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        // Check if vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j++] = ch; // Copy only non-vowel characters
        }

        i++;
    }

    str[j] = '\0'; // End the new string

    printf("%s", str);

    return 0;
}
