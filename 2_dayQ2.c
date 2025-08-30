//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main(){
     int r,area,circumference;
     printf("Input radius:");
     scanf("%d",&r);
     area=r*3.14*r;
     circumference=2*3.14*r;
     printf("Area of Circle is\t%d",area);
     printf("\nCircumference of circle is\t %d",circumference);
     return 0;
}