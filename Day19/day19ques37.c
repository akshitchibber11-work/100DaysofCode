//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Find the maximum of two numbers
    max = (num1 > num2) ? num1 : num2;
    
    // Find LCM by checking multiples of the larger number
    lcm = max;
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm += max;
    }
    
    // Display the LCM
    printf("%d\n", lcm);
    
    return 0;
}