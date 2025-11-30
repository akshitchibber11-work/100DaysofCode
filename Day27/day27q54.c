// Q54: Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// Pattern with layers of stars as shown.

// */
#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half
    for (i = 1; i <= 7; i += 2) {          // Stars: 1,3,5,7
        space = (7 - i) / 2;              // Calculate spaces

        for (j = 1; j <= space; j++)      // Print spaces
            printf(" ");

        for (j = 1; j <= i; j++)          // Print stars
            printf("*");

        printf("\n");
    }

    // Lower half
    for (i = 5; i >= 1; i -= 2) {         // Stars: 5,3,1
        space = (7 - i) / 2;

        for (j = 1; j <= space; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
