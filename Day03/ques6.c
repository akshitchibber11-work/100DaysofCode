//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main(){
     int a,b,c;
     printf("input numbers to be swapped");
     scanf("%d",&a);
     scanf("%d",&b);
     c=a;//c is empty here or 0
     a=b;//c gets value of a, then a swaps with b
     b=c;// b swaps with c so it swaps both inputed variables
     printf("After swap:%d,%d",a,b);
     return 0;
}
