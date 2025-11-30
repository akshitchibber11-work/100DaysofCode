//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
//Q40: Write a program to find the 1's complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], complement[100];
    int i, len;
    
    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    // Get length of binary number
    len = strlen(binary);
    
    // Calculate 1's complement
    for (i = 0; i < len; i++) {
        if (binary[i] == '0') {
            complement[i] = '1';
        }
        else if (binary[i] == '1') {
            complement[i] = '0';
        }
        else {
            printf("Invalid binary number!\n");
            return 1;
        }
    }
    
    // Null terminate the complement string
    complement[len] = '\0';
    
    // Display the 1's complement
    printf("%s\n", complement);
    
    return 0;
}