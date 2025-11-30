// Q96: Reverse each word in a sentence without changing the word order.

// /*
// Sample Test Cases:
// Input 1:
// I love coding
// Output 1:
// I evol gnidoc

// */
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, end = 0;

    fgets(str, sizeof(str), stdin); // Read sentence

    while (str[i] != '\0' && str[i] != '\n') {

        // Find end of the current word
        if (str[i] == ' ') {

            end = i - 1;

            // Reverse characters of this word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // Next word starts after space
        }

        i++;
    }

    // Reverse the last word (because it ends before '\0', not a space)
    end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s", str);

    return 0;
}
