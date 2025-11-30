//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;       // Extract last digit
        reverse = reverse * 10 + remainder;  // Append to reverse
        num = num / 10;             // Remove last digit
    }
    
    // Display the reversed number
    printf("%d\n", reverse);
    
    return 0;
}