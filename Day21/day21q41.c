// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, divisor = 1;

    scanf("%d", &num);
    temp = num;
    last = num % 10;          // Extract last digit

    while(temp >= 10) {       // Extract first digit
        temp /= 10;
        digits++;
    }
    first = temp;

    // Compute divisor = 10^(digits)
    for(int i = 0; i < digits; i++)
        divisor *= 10;

    // Swap logic:
    num = num % divisor;           // Remove first digit
    num = num / 10;                // Remove last digit
    num = (last * divisor) + (num * 10) + first;

    printf("%d", num);
    return 0;
}
