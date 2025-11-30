//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOddDigit = 0;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate product of odd digits
    while (num != 0) {
        digit = num % 10;    // Extract last digit
        
        if (digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            hasOddDigit = 1;
        }
        
        num = num / 10;      // Remove last digit
    }
    
    // If no odd digits found, product remains 1
    if (!hasOddDigit) {
        product = 1;
    }
    
    // Display the product
    printf("%d\n", product);
    
    return 0;
}