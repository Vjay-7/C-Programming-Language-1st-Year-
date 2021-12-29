#include<stdio.h>
#define pi 3.1416 // global varaible to definde the value of pi

/* This program is tasked to compute and display the area and
circumference of a circle, given as input its radius*/

int main()
{ double area, radius, circumference;   //variables declarations
    printf("Enter the radius of circle -->   ");
    scanf("%lf", &radius);
    circumference= pi*2*radius;  // variable computation for perimeter
    area= pi*radius*radius;  // variable computation for area
    printf("The area is %.2lf and the circumference is %.2lf", area, circumference);
    
     return 0;
}
