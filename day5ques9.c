//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main(){
     int si,p,t,n;//simple interest
     float r,ci;//compound interest
     printf("Input Principle amount:\n");
     scanf("%d",&p);
     printf("Input Rate:\n");
     scanf("%f",&r);
     printf("Input Time:\n");
     scanf("%d",&t);
     si=(p*r*t)/100;
     printf("Simple Interest will be %d\n",si);
     //simple interest done
     printf("Input no of times rate is compounded per year\n");
     scanf("%d",&n);
     ci=p*pow(1+(r/(n*100)),n*t);//why? because pow function is used as pow(a,b)
     printf("Compound Interest will be %.2f\n",ci);//doing %.2f will display only 2 decimals
     return 0;
}