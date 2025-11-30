//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int num, binary[32], i = 0, j;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle special case for 0
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    
    // Convert to binary by storing remainders
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder (0 or 1)
        num = num / 2;         // Divide by 2
        i++;
    }
    
    // Print binary in reverse order
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}