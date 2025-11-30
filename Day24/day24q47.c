// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *
// **
// ***
// ****
// *****

// */
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {        // Rows
        for (int j = 1; j <= i; j++) {    // Print stars equal to row number
            printf("*");
        }
        printf("\n");                     // Next line
    }
    return 0;
}
