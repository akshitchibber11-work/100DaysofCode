// Q94: Find the longest word in a sentence.

// /*
// Sample Test Cases:
// Input 1:
// I love programming
// Output 1:
// programming

// */
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[200];
    int i = 0, len = 0, maxLen = 0, start = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            len++; // Count characters in the current word
        } else {
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1; // Next word starts after space
        }
        i++;
    }

    printf("%s", longest);
    return 0;
}
