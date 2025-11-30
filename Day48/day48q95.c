// Q95: Check if one string is a rotation of another.

// /*
// Sample Test Cases:
// Input 1:
// abcde
// deabc
// Output 1:
// Rotation

// Input 2:
// abc
// acb
// Output 2:
// Not rotation

// */
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths differ, not rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // Create concatenated string
    strcpy(concat, str1);
    strcat(concat, str1);

    // Check if str2 exists inside concat
    if (strstr(concat, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
