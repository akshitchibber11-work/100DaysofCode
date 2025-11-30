// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above 300 units at ₹12/unit

#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    
    // Input units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    // Calculate bill based on slabs
    if (units <= 100) {
        // First 100 units: ₹5/unit
        bill = units * 5;
    }
    else if (units <= 200) {
        // First 100 units: ₹5/unit = ₹500
        // Remaining units (101-200): ₹7/unit
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        // First 100 units: ₹5/unit = ₹500
        // Next 100 units: ₹7/unit = ₹700
        // Remaining units (201-300): ₹10/unit
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        // First 100 units: ₹5/unit = ₹500
        // Next 100 units: ₹7/unit = ₹700
        // Next 100 units: ₹10/unit = ₹1000
        // Remaining units (above 300): ₹12/unit
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }
    
    // Display the bill
    printf("Bill: ₹%.0f\n", bill);
    
    return 0;
}