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
    struct Employee e[3], emp;
    int i;

    // Take input for 3 employees
    printf("Enter details of 3 employees (Name ID Salary):\n");
    for (i = 0; i < 3; i++) {
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }

    // Open binary file for writing
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write all employee records to file
    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nEmployee details stored in binary file successfully!\n");

    // Open binary file for reading
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nReading data from binary file:\n");

    // Read and display records one by one
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(fp);

    return 0;
}
