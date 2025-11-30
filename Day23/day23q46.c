// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *****
// *****
// *****
// *****
// *****

// */
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {       // 5 rows
        for (int j = 0; j < 5; j++) {   // 5 stars in each row
            printf("*");
        }
        printf("\n");                   // Move to next line
    }
    return 0;
}
