// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

// /*
// Sample Test Cases:
// Input 1:
// GUEST
// Output 1:
// Welcome Guest!

// */
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum Role role;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid role!\n");
        return 0;
    }

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
