//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>

int main(){
    char word;
    printf("enter any character\n");
    scanf("%c",&word);
     if (word=='a'||word=='e'||word=='i'||word=='o'||word=='u'||
    word=='A'||word=='E'||word=='I'||word=='O'||word=='U'){
    printf("This is a vowel");
}
else{
    printf("This is a consonant");
}
     return 0;
}