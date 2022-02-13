#include<stdio.h>


int main()
 { float r, cir, d, area;
printf("Enter radius of circle:");
 scanf( "%f", &r);
 area= 3.14*r;
 d= r*2;
 cir=2*3.14*r;
 printf("%f is the diameter \n", d);
 printf("%f is the circumference \n", cir);
 printf("%f is the area", area);
return 0;


}