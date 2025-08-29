#include <stdio.h>

int main(){
     int l,b,area,perimeter;
     printf("input length");
     scanf("%d",&l);
     printf("input breadth");
     scanf("%d",&b);
     area=l*b;
     perimeter=2*(l+b);
     printf("Area of rect is\t%d\n",area);
     printf("Perimeter of rect is\t%d",perimeter);
     return 0;
}