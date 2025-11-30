//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate sum of digits
    while (num != 0) {
        digit = num % 10;    // Extract last digit
        sum += digit;        // Add to sum
        num = num / 10;      // Remove last digit
    }
    
    // Display the sum
    printf("%d\n", sum);
    
    return 0;
}