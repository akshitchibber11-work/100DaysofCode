//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Numbers less than 2 are not prime
    if (num < 2) {
        isPrime = 0;
    }
    else {
        // Check for factors from 2 to num-1
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    // Display result
    if (isPrime) {
        printf("Prime\n");
    }
    else {
        printf("Not prime\n");
    }
    
    return 0;
}