//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Handle special cases
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (n == 0 || n == 1) {
        printf("1\n");
    }
    else {
        // Calculate factorial
        for (i = 2; i <= n; i++) {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }
    
    return 0;
}