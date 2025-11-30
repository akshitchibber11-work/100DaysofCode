//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store original number
    original = num;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;       // Extract last digit
        reverse = reverse * 10 + remainder;  // Build reversed number
        num = num / 10;             // Remove last digit
    }
    
    // Check if original and reversed are same
    if (original == reverse) {
        printf("Palindrome\n");
    }
    else {
        printf("Not palindrome\n");
    }
    
    return 0;
}