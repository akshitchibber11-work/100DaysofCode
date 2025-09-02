 //Q1Write program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main() {
    int I, M;

    // Take both numbers in a single line
    printf("Enter two numbers: ");
    scanf("%d %d", &I, &M);

    // Print sum in the required format
    printf("Sum = %d\n", I + M);

    return 0;
}
