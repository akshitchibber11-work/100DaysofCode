//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Find HCF by checking all numbers from 1 to smaller number
    int smaller = (num1 < num2) ? num1 : num2;
    
    for (i = 1; i <= smaller; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    // Display the HCF
    printf("%d\n", hcf);
    
    return 0;
}