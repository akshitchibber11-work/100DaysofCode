// Q81: Count characters in a string without using built-in length functions.

// /*
// Sample Test Cases:
// Input 1:
// Hello
// Output 1:
// 5

// Input 2:
 
// Output 2:
// 1

// */
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters until newline or null terminator
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d", count);

    return 0;
}
