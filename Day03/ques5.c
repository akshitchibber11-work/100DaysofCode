//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main(){
     int C,far;//variable declaration
     printf("Input temp in Celcius");
     scanf("%d",&C);
     far=C*(9/5)+32;// line scanf and far variable are both initializations
     printf("Temp in Farenheit= %d\t",far);

     return 0;
}
