// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// */
#include <stdio.h>

int main() {
    int i, j;

    // Upper part (1 to 9 stars, step by 2)
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part (7 to 1 stars, step by -2)
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
