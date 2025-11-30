// Q88: Replace spaces with hyphens in a string.

// /*
// Sample Test Cases:
// Input 1:
// hello world
// Output 1:
// hello-world

// */
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin); // Read string (including spaces)

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("%s", str);

    return 0;
}
