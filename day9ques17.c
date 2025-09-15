//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>  // This gives us sqrt() function

int main(){
    float a, b, c;
    float discriminant;
    float root1, root2;
    
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c; //discriminant (b² - 4ac)
    
    if (discriminant > 0) {// Two different real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);  // sqrt() calculates square root
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // One repeated real root
        root1 = -b / (2*a);  // No sqrt needed when discriminant = 0
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        // Complex roots (discriminant < 0)
        printf("Roots are complex\n");
    }
    
    return 0;
}