//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main(){
     int a,b,sum,diff,prod,quot;
     printf("Input two numbers");
     scanf("%d",&a);// here we will take input
     scanf("%d",&b);
     sum=a+b;
     diff=a-b;
     prod=a*b;
     quot=a/b;

     printf("sum=%d\n",sum);
     printf("diff=%d\n",diff);
     printf("prod=%d\n",prod);
     printf("quot=%d\n",quot);
     return 0;
}


