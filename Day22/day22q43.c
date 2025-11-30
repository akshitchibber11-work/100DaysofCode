// Q43: Write a program to check if a number is a strong number.

// /*
// Sample Test Cases:
// Input 1:
// 145
// Output 1:
// Strong number

// Input 2:
// 123
// Output 2:
// Not strong number

// */
#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        // Calculate factorial of digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
