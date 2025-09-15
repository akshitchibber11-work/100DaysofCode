//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main(){
    int total, h, m, sec, th, tm, ts;
    printf("Enter time in seconds: ");
    scanf("%d", &total);
    th = total / 3600; 
    tm = total / 60;
    h = th;                    // Hours = total hours
    m = tm % 60;              // Minutes = leftover minutes after removing hours
    sec = total % 60;         // Seconds = leftover seconds after removing minutes
    printf("%d:%d:%d\n", h, m, sec);
    
    return 0;

}
