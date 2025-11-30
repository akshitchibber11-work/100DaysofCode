// Q82: Print each character of a string on a new line.

// /*
// Sample Test Cases:
// Input 1:
// Hi
// Output 1:
// H
// i

// */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin); // Read string including spaces

    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]); // Print each character on a new line
        i++;
    }

    return 0;
}
