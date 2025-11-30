//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, digits = 0;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store original number
    original = num;
    
    // Count number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }
    
    // Calculate sum of digits raised to power of number of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp = temp / 10;
    }
    
    // Check if sum equals original number
    if (result == original) {
        printf("Armstrong\n");
    }
    else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}
