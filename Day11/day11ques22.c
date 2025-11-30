//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cost_price, selling_price, difference, percentage;
    
    // Input cost price and selling price
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost_price, &selling_price);
    
    // Calculate difference
    difference = selling_price - cost_price;
    
    // Determine profit, loss, or no profit/loss
    if (difference > 0) {
        // Profit case
        percentage = (difference / cost_price) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
    else if (difference < 0) {
        // Loss case
        percentage = (-difference / cost_price) * 100;
        printf("Loss %.0f%%\n", percentage);
    }
    else {
        // No profit, no loss
        printf("No Profit No Loss\n");
    }
    
    return 0;
}