// Q142: Store details of 5 students in an array of structures and print all.

// /*
// Sample Test Cases:
// Input 1:
// Details of 5 students (Name, Roll, Marks)
// Output 1:
// Tabular list of all 5 students with their details

// */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll, and marks for student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Print details in tabular form
    printf("\n%-10s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-----------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-10s %-10d %-10d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
