// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *****
//  ****
//   ***
//    **
//     *


// Input 2:

// Output 2:
// Note: Spaces indicate indentation.

// */
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {          // 5 rows
        
        // Print spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }

        // Print stars
        for (int j = 5; j > i; j--) {
            printf("*");
        }

        printf("\n");                      // Next line
    }

    return 0;
}
