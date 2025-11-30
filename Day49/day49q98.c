// Q98: Print initials of a name with the surname displayed in full.

// /*
// Sample Test Cases:
// Input 1:
// John David Doe
// Output 1:
// J.D. Doe

// */
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0, len;

    fgets(name, sizeof(name), stdin); // Read full name
    len = strlen(name);

    // Remove newline if present
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    // Print initials for first and middle names
    if (name[0] != ' ')
        printf("%c.", name[0]);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            // Check if next space exists to identify if it's not surname
            int j = i + 1;
            int spaceFound = 0;

            while (name[j] != '\0') {
                if (name[j] == ' ') {
                    spaceFound = 1;
                    break;
                }
                j++;
            }

            if (spaceFound)
                printf("%c.", name[i + 1]); // Initial of middle names
            else {
                printf(" %s", &name[i + 1]); // Surname in full
                break;
            }
        }
        i++;
    }

    return 0;
}
