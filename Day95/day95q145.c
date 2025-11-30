// Q145: Return a structure containing top student's details from a function.

// /*
// Sample Test Cases:
// Input 1:
// 3 students: Riya 101 89, Karan 102 96, Meena 103 92
// Output 1:
// Top Student: Karan | Roll: 102 | Marks: 96

// */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to return the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int i, topperIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    return s[topperIndex]; // Return entire structure
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input students' details
    for (i = 0; i < n; i++) {
        printf("Enter name, roll, and marks for student %d:\n", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Get the top student
    struct Student topper = getTopStudent(students, n);

    // Print topper details
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
