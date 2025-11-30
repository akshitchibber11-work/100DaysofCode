//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    
    // Input two numbers and operator
    printf("Enter two numbers and operator (+, -, *, /, %%): ");
    scanf("%f %f %c", &num1, &num2, &operator);
    
    // Perform operation using switch-case
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.0f\n", result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.0f\n", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.0f\n", result);
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.0f\n", result);
            }
            else {
                printf("Error: Division by zero!\n");
            }
            break;
            
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%.0f\n", result);
            }
            else {
                printf("Error: Modulo by zero!\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator!\n");
    }
    
    return 0;
}