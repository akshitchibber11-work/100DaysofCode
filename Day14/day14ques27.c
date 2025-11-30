//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0, odd;
    
    // Input the value of n
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        odd = 2 * i - 1;  // Formula to get i-th odd number
        sum += odd;
    }
    
    // Display the sum
    printf("%d\n", sum);
    
    return 0;
}