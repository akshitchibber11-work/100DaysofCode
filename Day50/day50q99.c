// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

// /*
// Sample Test Cases:
// Input 1:
// 15/04/2025
// Output 1:
// 15-Apr-2025

// */
#include <stdio.h>

int main() {
    char date[15];
    int day, month, year;
    char *months[] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };

    scanf("%s", date); // Format: dd/mm/yyyy

    // Extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Print in new format
    printf("%02d-%s-%d", day, months[month - 1], year);

    return 0;
}
