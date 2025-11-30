// Q144: Write a function that accepts a structure as parameter and prints its members.

// /*
// Sample Test Cases:
// Input 1:
// Student: Neha 104 92
// Output 1:
// Name: Neha | Roll: 104 | Marks: 92

// */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts a structure and prints its details
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Input student details
    printf("Enter name, roll, and marks of student:\n");
    scanf("%s %d %d", st.name, &st.roll, &st.marks);

    // Function call with structure passed as argument
    printStudent(st);

    return 0;
}
