// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

// 
/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int late_days, fine = 0;
    
    // Input number of late days
    printf("Enter number of late days: ");
    scanf("%d", &late_days);
    
    // Calculate fine based on late days
    if (late_days > 30) {
        printf("Membership Cancelled\n");
    }
    else if (late_days > 10) {
        // First 5 days: ₹2/day = ₹10
        // Next 5 days: ₹4/day = ₹20
        // Remaining days (11-30): ₹6/day
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
        printf("Fine ₹%d\n", fine);
    }
    else if (late_days > 5) {
        // First 5 days: ₹2/day = ₹10
        // Remaining days (6-10): ₹4/day
        fine = (5 * 2) + ((late_days - 5) * 4);
        printf("Fine ₹%d\n", fine);
    }
    else if (late_days > 0) {
        // First 5 days: ₹2/day
        fine = late_days * 2;
        printf("Fine ₹%d\n", fine);
    }
    else {
        // No late days
        printf("No Fine\n");
    }
    
    return 0;
}