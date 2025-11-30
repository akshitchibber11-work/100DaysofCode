// Q48: Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// 1
// 12
// 123
// 1234
// 12345

// */
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {          // Rows
        for (int j = 1; j <= i; j++) {      // Print numbers from 1 to i
            printf("%d", j);
        }
        printf("\n");                       // Move to next line
    }
    return 0;
}
