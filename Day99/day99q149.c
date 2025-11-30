// Q149: Use malloc() to allocate structure memory dynamically and print details.

// /*
// Sample Test Cases:
// Input 1:
// Student allocated dynamically with details: Tina 105 88
// Output 1:
// Name: Tina | Roll: 105 | Marks: 88

// */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input first student details
    printf("Enter details of Student 1 (Name Roll Marks):\n");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Input second student details
    printf("Enter details of Student 2 (Name Roll Marks):\n");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Compare all fields
    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
