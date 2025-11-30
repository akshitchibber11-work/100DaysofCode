// Q83: Count vowels and consonants in a string.

// /*
// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// Vowels=2, Consonants=3

// */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    fgets(str, sizeof(str), stdin); // Read input string

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = tolower(str[i]); // Convert to lowercase for comparison

        if (ch >= 'a' && ch <= 'z') { // Check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
