 //Q1Write program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main(){
     int I;
     int M;
     printf("Input First Number");
     scanf("%d",&I);
     printf("Input Second Number");
     scanf("%d",&M);
     printf("sum of number %d and %d is%d",I,M,I+M);
     return 0;
}