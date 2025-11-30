// Q85: Reverse a string.

// /*
// Sample Test Cases:
// Input 1:
// abcd
// Output 1:
// dcba

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

    j = i - 1; // Last valid character index
    i = 0;     // Reset i to start

    // Reverse the string in place
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s", str);

    return 0;
}
