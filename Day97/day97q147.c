// Q147: Store employee data in a binary file using fwrite() and read using fread().

// /*
// Sample Test Cases:
// Input 1:
// Employee details entered and stored in file.
// Output 1:
// Displays employee data read from file.

// */
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp, employees[3];
    int i;

    // Input employee details
    printf("Enter details of 3 employees (Name ID Salary):\n");
    for (i = 0; i < 3; i++) {
        scanf("%s %d %f", employees[i].name, &employees[i].id, &employees[i].salary);
    }

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nEmployee details stored successfully in employee.dat\n");

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("\nReading data from binary file:\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(fp);

    return 0;
}
