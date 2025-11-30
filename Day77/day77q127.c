// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

// /*
// Sample Test Cases:
// Input 1:
// Input File (input.txt): Hello World\nC programming
// Output 1:
// Output File (output.txt): HELLO WORLD\nC PROGRAMMING

// */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file in read mode
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file in write mode
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(inFile);
        return 1;
    }

    // Read from input and write uppercase to output
    while ((ch = fgetc(inFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion successful! Check output.txt\n");

    return 0;
}
